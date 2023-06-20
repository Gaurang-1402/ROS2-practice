from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    number_publisher_node = Node(
        package='c_py_pkg',
        executable='number_publisher.py',
        name='my_number_publisher',
        remappings=[
            ('number', 'my_number')
        ],
        parameters=[
            {'number_to_publish': 4},
            {'publish_frequency': 5.0}
        ]
    )

    number_counter = Node(
        package='c_py_pkg',
        executable='number_counter.py',
        name='my_number_counter',
        remappings=[
            ('number', 'my_number'),
            ('number_count', 'my_number_count')
        ],
    )

    ld.add_action(number_publisher_node)
    ld.add_action(number_counter)

    return ld