cmake_minimum_required(VERSION 3.22)

project(DisplayImage)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(DisplayImage src/main.cc)

target_link_libraries(DisplayImage ${OpenCV_LIBS})