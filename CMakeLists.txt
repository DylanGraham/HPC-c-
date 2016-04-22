cmake_minimum_required(VERSION 3.5)
project(HPC_c__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m32 -std=c++11 -pedantic -Wall -Wextra")

set(SOURCE_FILES main.cpp)
add_executable(HPC_c__ ${SOURCE_FILES})