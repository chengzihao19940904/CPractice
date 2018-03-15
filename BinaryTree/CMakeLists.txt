cmake_minimum_required(VERSION 3.9)
project(BinaryTree C)

set(CMAKE_C_STANDARD 99)

add_executable(BinaryTree main.c tree.c tree.h ErrorCode.h)