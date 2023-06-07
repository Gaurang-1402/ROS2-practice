# ROS-learnings
🏫Experiments with ROS2 and Gazebo

Important: Deactivate anaconda

```
conda deactivate
```

The following links helped me in this repo
https://www.udemy.com/course/ros2-robotics-developer-course-using-ros2-in-python/?kw=ros2&src=sac
https://www.youtube.com/watch?v=RoRq4XpDEtQ

Run on Ubuntu
```
gedit ~/.bashrc
```

And add

```
# ROS HUMBLE INITIALIZE
source /opt/ros/humble/setup.bash
source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash
source ~/Desktop/ROS-learnings/ros2_ws/install/setup.bash
```
At the end

For each of the python files in /scripts, run

```
chmod +ux [file_name].py
```
for each of the nodes before colcon build

Your CMakeLists.txt should have this

```
# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)

# directory where the python node scripts are located in the form of a py package
ament_python_install_package(scripts)

# add every python node here
install(PROGRAMS
  scripts/publisher.py
  scripts/subscriber.py
  DESTINATION lib/${PROJECT_NAME}
)

```

And package.xml should have this

```

  <buildtool_depend>ament_cmake</buildtool_depend>
  <buildtool_depend>ament_cmake_python</buildtool_depend>

  <depend>python3</depend>
    <depend>rclpy</depend>
```
