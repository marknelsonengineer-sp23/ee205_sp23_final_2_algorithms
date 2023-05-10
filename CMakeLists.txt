
cmake_minimum_required(VERSION 3.26)

project(ee205_sp23_final_2_algorithms
      VERSION 1.0
      DESCRIPTION "EE 205 - Spr 2023 - Final Exam 2 - Algorithms"
      LANGUAGES CXX)

message(STATUS "CMAKE_SOURCE_DIR = [${CMAKE_SOURCE_DIR}]")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -march=native -mtune=native")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

add_executable(main main.cpp)
