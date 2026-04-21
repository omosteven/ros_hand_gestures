import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

import sys
import termios
import tty

from interfaces.action import Gesture


class KeyboardControl(Node):

    def __init__(self):
        super().__init__('keyboard_control_node')

        # Action client
        self._client = ActionClient(
            self,
            Gesture,
            '/gesture'
        )

        self.get_logger().info("Keyboard Control Node Started")

        # Key mapping
        self.key_map = {
            'p': 'PEACE',
            'h': 'HI_FIVE',
            'f': 'FUCK_YOU',
            't': 'THUMB_UP',
            'y': 'POINTING'
        }

    # READ SINGLE KEY PRESS
    def get_key(self):
        fd = sys.stdin.fileno()
        old_settings = termios.tcgetattr(fd)

        try:
            tty.setraw(fd)
            key = sys.stdin.read(1)
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

        return key

    # SEND ACTION
    def send_goal(self, gesture_name):

        self.get_logger().info(f"Sending gesture: {gesture_name}")

        goal_msg = Gesture.Goal()
        goal_msg.gesture_name = gesture_name

        self._client.wait_for_server()

        self._send_future = self._client.send_goal_async(goal_msg)
        self._send_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.result_callback)

    def result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Gesture completed: success={result.success}')

    # MAIN LOOP
    def run(self):
        print("\n🎮 Keyboard Control Ready")
        print("Press keys:")
        print("p=PEACE | h=HI_FIVE | f=FUCK_YOU | t=THUMB_UP | y=POINTING")
        print("Press CTRL+C to exit\n")

        while rclpy.ok():
            key = self.get_key()

            if key in self.key_map:
                gesture = self.key_map[key]
                self.send_goal(gesture)

            elif key == '\x03':  # CTRL+C
                break


def main(args=None):
    rclpy.init(args=args)

    node = KeyboardControl()

    try:
        node.run()
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()