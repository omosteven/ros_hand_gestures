import sys
if sys.prefix == '/Applications/Xcode.app/Contents/Developer/Library/Frameworks/Python3.framework/Versions/3.9':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/Users/StevenOmole/Documents/ros_projects/ros_hand_gesture/install/controller'
