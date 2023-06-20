from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    for i in range(5):
        news_station_node = Node(
            package='c_py_pkg',
            executable='robot_news_station.py',
            name='my_robot_news_station' + str(i + 1),
            parameters=[
                {'robot_news_station_name': "Newsbot_"+str(i + 1)},
            ]
        )

        ld.add_action(news_station_node)

    
    smartphone_node = Node(
        package='c_py_pkg',
        executable='smartphone.py',
        name='my_smartphone',
    )

    ld.add_action(smartphone_node)

    return ld