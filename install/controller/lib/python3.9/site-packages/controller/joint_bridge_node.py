import rclpy
from rclpy.node import Node

from sensor_msgs.msg  import JointState
from interfaces.msg import FingerState
from builtin_interfaces.msg import Time

class JointBridge(Node):

    def __init__(self):
        super().__init__('joint_bridge_node')

        #sub  to finger states
        self.subscription = self.create_subscription(
            FingerState,
            '/hand/finger_states',
            self.callback,
            10
        )

        #publish joint state
        self.publisher = self.create_publisher(
            JointState,
            '/joint_states',
            10
        )

        #joint names matching URDF
        self.joint_names = [
            'thumb_joint',
            'index_joint',
            'middle_joint',
            'ring_joint',
            'little_joint'
        ]

        self.get_logger().info('Joint Bridge Node Started')

        self.timer = self.create_timer(1.0, self.publish_initial_state_once)
        self.initial_published = False

    def callback(self, msg):
        self.get_logger().info("Received finger state!")
        joint_msg = JointState()

        joint_msg.header.stamp = self.get_clock().now().to_msg()

        joint_msg.name = self.joint_names

        #convert high/low to angle
        joint_msg.position = [
            self.map_state(msg.thumb),
            self.map_state(msg.index),
            self.map_state(msg.middle),
            self.map_state(msg.ring),
            self.map_state(msg.little),
        ]

        self.publisher.publish(joint_msg)

    #mappping function
    def map_state(self, state):
        if state:
            return 0.0
        else:
            return 1.57
        
    def publish_initial_state_once(self):
        if self.initial_published:
            return
        self.get_logger().info("Publishing Initial Joint State")
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = self.joint_names
        msg.position = [0.0] * 5
        self.publisher.publish(msg)
        self.initial_published = True

def main(args=None):
    rclpy.init(args=args)

    node = JointBridge()
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()