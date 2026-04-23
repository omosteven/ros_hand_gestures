from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command
import os


from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    pkg_path = get_package_share_directory('description')
    urdf_file = os.path.join(pkg_path, 'urdf', 'hand.urdf')

    return LaunchDescription([
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{
                'robot_description': Command(['cat ', urdf_file])
            }]
        ),

        #    Node(
        #     package='joint_state_publisher',
        #     executable='joint_state_publisher'
        # ),

        # Node(
        #     package='joint_state_publisher_gui',
        #     executable='joint_state_publisher_gui'
        # ),

        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2'
        ),
    ])