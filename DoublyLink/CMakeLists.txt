cmake_minimum_required(VERSION 3.9)
project(DoublyLink C)

set(CMAKE_C_STANDARD 99)

add_executable(DoublyLink main.c DLink.c DLink.h)