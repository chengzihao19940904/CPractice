cmake_minimum_required(VERSION 3.9)
project(CircleList C)

set(CMAKE_C_STANDARD 99)

add_executable(CircleList main.c Circle.c Circle.h)