cmake_minimum_required(VERSION 3.8)
project(c_py_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)

# directory where the python node scripts are located in the form of a py package
ament_python_install_package(scripts)

# add every python node here
install(PROGRAMS
  scripts/publisher.py
  scripts/subscriber.py
  scripts/robot_news_station.py
  scripts/smartphone.py
  scripts/number_publisher.py
  scripts/number_counter.py
  scripts/add_two_ints_server.py
  scripts/add_two_ints_client_no_oop.py
  scripts/add_two_ints_client_oop.py
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
