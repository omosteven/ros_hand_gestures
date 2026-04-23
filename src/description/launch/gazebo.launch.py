from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():

    pkg_path = get_package_share_directory('description')

    urdf_file = os.path.join(pkg_path, 'urdf', 'hand.urdf')  # ⚠️ adjust name if needed

    return LaunchDescription([

        # 🧠 Robot State Publisher (FIXED)
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{
                'robot_description': Command(['cat ', urdf_file]),
                'use_sim_time': True
            }],
            output='screen'
        ),

        # 🌍 Gazebo server
        Node(
            package='gazebo_ros',
            executable='gzserver',
            output='screen'
        ),

        # 🖥️ Gazebo client (GUI)
        Node(
            package='gazebo_ros',
            executable='gzclient',
            output='screen'
        ),
    ])