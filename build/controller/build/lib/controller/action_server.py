import time

import rclpy
from rclpy.node import Node
from rclpy.action import  ActionServer

from interfaces.action import Gesture
from interfaces.srv import SetFinger

class GestureActionServer(Node):
    def __init__(self):
        super().__init__('action_server')

        # Action Server
        self._action_server = ActionServer(
            self,
            Gesture,
            '/gesture',
            self.execute_callback
        )

        # Service Client
        self.client = self.create_client(SetFinger, '/set_finger')

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for /set_finger service...')

        self.get_logger().info("Gesture Action Server Started")

    def get_gesture_map(self, name):
        name = name.upper()

        gestures = {
            "THUMB_UP":     {"thumb": True,  "index": False, "middle": False, "ring": False, "little": False},
            "FUCK_YOU":     {"thumb": False, "index": False, "middle": True,  "ring": False, "little": False},
            "HI_FIVE":      {"thumb": True,  "index": True,  "middle": True,  "ring": True,  "little": True},
            "POINTING":     {"thumb": False, "index": True,  "middle": False, "ring": False, "little": False},
            "PEACE":        {"thumb": False, "index": True,  "middle": True,  "ring": False, "little": False},
        }

        return gestures.get(name, None)
    
    def execute_callback(self, goal_handle):
        gesture_name = goal_handle.request.gesture_name
        self.get_logger().info(f'Executing gestures: {gesture_name}')

        gesture = self.get_gesture_map(gesture_name)

        if gesture is None:
            goal_handle.abort()
            result = Gesture.Result()
            result.success = False
            return result
        
        feedback_msg = Gesture.Feedback()

        # excute the finger by finger for a live animation
        step = 1
        for finger, state in gesture.items():

            # send service request
            req = SetFinger.Request()
            req.finger_name = finger
            req.state = state

            future = self.client.call_async(req)
            # while rclpy.ok() and not future.done():
            #     time.sleep(0.01) 
            rclpy.spin_until_future_complete(self, future)

            # get feedback
            feedback_msg.current_state = f'Step {step}: {finger} -> {"HIGH" if state else "LOW"}'
            goal_handle.publish_feedback(feedback_msg)

            self.get_logger().info(feedback_msg.current_state)
            step += 1
            time.sleep(0.5) # to make the  animation smooth

        goal_handle.succeed()

        result = Gesture.Result()
        result.success = True
        return result

def main(args=None):
    rclpy.init(args=args)

    node = GestureActionServer()
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()