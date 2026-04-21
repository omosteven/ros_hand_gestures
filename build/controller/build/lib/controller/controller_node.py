
import rclpy
from rclpy.node import Node

from interfaces.msg import FingerState
from interfaces.srv import SetFinger

class Controller(Node):
    def __init__(self):
        super().__init__('controller_node')

        # I set PARAMETERS
        self.declare_parameter('publish_rate', 2.0)
        self.publish_rate = self.get_parameter('publish_rate').value

        # set internal state to all low (fingers closed)
        self.finger_state = {
            'thumb': False,
            'index': False,
            'middle': False,
            'ring': False,
            'little': False
        }

        self.publisher_ = self.create_publisher(
            FingerState,
            '/hand/finger_states',
            10
        )

        self.service = self.create_service(
            SetFinger,
            '/set_finger',
            self.set_finger_callback
        )

        self.timer = self.create_timer(
            1.0/ self.publish_rate,
            self.publish_finger_state
        )

        self.get_logger().info('Hand Controller Node Started')

    def publish_finger_state(self):
        msg = FingerState()

        msg.thumb = self.finger_state['thumb']
        msg.index = self.finger_state['index']
        msg.middle = self.finger_state['middle']
        msg.ring = self.finger_state['ring']
        msg.little = self.finger_state['little']

        self.publisher_.publish(msg)

    def set_finger_callback(self, request, response):
        finger = request.finger_name.lower()

        if finger not in self.finger_state:
            self.get_logger().error(f'Invalid finger: {finger}')
            response.success = False
            return response
        
        self.finger_state[finger] = request.state
        state_str = "HIGH (OPEN)" if request.state else "LOW (CLOSED)"
        self.get_logger().info(f'{finger.upper()} set to {state_str}')

        response.success = True
        return response
    
def main(args=None):
    rclpy.init(args=args)

    node = Controller()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()