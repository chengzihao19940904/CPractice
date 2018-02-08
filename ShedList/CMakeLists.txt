cmake_minimum_required(VERSION 3.9)
project(ShedList C)

set(CMAKE_C_STANDARD 99)

add_executable(ShedList main.c SqStack.c SqStack.h)