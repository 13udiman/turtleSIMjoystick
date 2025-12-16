cmake_minimum_required(VERSION 3.8)
project(pkg1)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

#find_path(LIBUSBP_INCLUDE_DIR
# NAMES libusbp.hpp
# PATHS /usr/local/include/libusbp-1
# PATH_SUFFIXES "include" "libusbp" "libusbp-1"
#)
#find_library(LIBUSBP_LIBRARY
# NAMES usbp-1
# PATHS /usr/local/lib
#)
#message(STATUS "LIBUSBP_INCLUDE_DIR: ${LIBUSBP_INCLUDE_DIR}")
#message(STATUS "LIBUSBP_LIBRARY: ${LIBUSBP_LIBRARY}")*/
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(global_messages REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBUSBP REQUIRED IMPORTED_TARGET libusbp-1)


ament_export_include_directories(include)

#include_directories(
# include
# ${LIBUSBP_INCLUDE_DIR}
#)

add_executable(node src/node.cpp)

ament_target_dependencies(node
  rclcpp
  sensor_msgs
  geometry_msgs
  std_msgs
  global_messages
)

# ✅ libusbp = system library

target_link_libraries(node
  PkgConfig::LIBUSBP
)

install(TARGETS
  node
  DESTINATION lib/${PROJECT_NAME}
)


ament_export_include_directories(include)

ament_package()
