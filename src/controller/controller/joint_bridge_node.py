import rclpy
from rclpy.node import Node

from sensor_msgs.msg import JointState
from interfaces.msg import FingerState


class JointBridge(Node):

    def __init__(self):
        super().__init__('joint_bridge_node')

  
        self.subscription = self.create_subscription(
            FingerState,
            '/hand/finger_states',
            self.callback,
            10
        )

        self.publisher = self.create_publisher(
            JointState,
            '/joint_states',
            10
        )


        self.joint_names = [
            'thumb_joint',
            'index_joint',
            'middle_joint',
            'ring_joint',
            'little_joint'
        ]

        self.current_positions = [0.0] * 5
        self.target_positions = [0.0] * 5

    
        self.transition_timer = self.create_timer(0.05, self.update_joints)  # 20 Hz
        self.init_timer = self.create_timer(1.0, self.publish_initial_state_once)
        self.initial_published = False

        self.get_logger().info('Joint Bridge Node Started')


    def callback(self, msg):
        self.get_logger().info("Received finger state!")

        self.target_positions = [
            self.map_state(msg.thumb),
            self.map_state(msg.index),
            self.map_state(msg.middle),
            self.map_state(msg.ring),
            self.map_state(msg.little),
        ]


    def update_joints(self):
        alpha = 0.2  # smoothing factor

        for i in range(5):
            self.current_positions[i] += alpha * (
                self.target_positions[i] - self.current_positions[i]
            )

        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = self.joint_names
        msg.position = self.current_positions

        self.publisher.publish(msg)


    def publish_initial_state_once(self):
        if self.initial_published:
            return

        self.get_logger().info("Publishing initial joint state")

        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = self.joint_names
        msg.position = [0.0] * 5

        self.publisher.publish(msg)

        self.initial_published = True


    def map_state(self, state):
        return 0.0 if state else 1.57


def main(args=None):
    rclpy.init(args=args)

    node = JointBridge()
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()