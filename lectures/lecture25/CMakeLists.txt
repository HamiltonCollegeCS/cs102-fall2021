cmake_minimum_required(VERSION 3.16)
project(lecture25)

set(CMAKE_CXX_STANDARD 14)

add_executable(warmup warmup.cpp SinglyLinkedList.cpp)
add_executable(animals animals.cpp)
add_executable(airplanes airplanes.cpp)
