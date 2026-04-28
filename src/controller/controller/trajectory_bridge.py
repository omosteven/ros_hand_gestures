import rclpy
from rclpy.node import Node

from interfaces.msg import FingerState
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint


class TrajectoryBridge(Node):

    def __init__(self):
        super().__init__('trajectory_bridge_node')

        # Subscribe to finger states
        self.subscription = self.create_subscription(
            FingerState,
            '/hand/finger_states',
            self.callback,
            10
        )

        # Publish trajectory commands
        self.publisher = self.create_publisher(
            JointTrajectory,
            '/hand_controller/joint_trajectory',
            10
        )

        self.joint_names = [
            'thumb_joint',
            'index_joint',
            'middle_joint',
            'ring_joint',
            'little_joint'
        ]

        self.get_logger().info('Trajectory Bridge Node Started')

    def callback(self, msg):
        self.get_logger().info("Sending trajectory to Gazebo")

        traj = JointTrajectory()
        traj.joint_names = self.joint_names

        point = JointTrajectoryPoint()

        # Map HIGH/LOW → angles
        point.positions = [
            self.map_state(msg.thumb),
            self.map_state(msg.index),
            self.map_state(msg.middle),
            self.map_state(msg.ring),
            self.map_state(msg.little),
        ]

        # duration for smooth motion
        point.time_from_start.sec = 1

        traj.points.append(point)

        self.publisher.publish(traj)

    def map_state(self, state):
        return 0.0 if state else 1.57


def main(args=None):
    rclpy.init(args=args)

    node = TrajectoryBridge()
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()