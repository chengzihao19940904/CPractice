cmake_minimum_required(VERSION 3.9)
project(LinkList2 C)

set(CMAKE_C_STANDARD 99)

add_executable(LinkList2 main.c LinkList.c LinkList.h Circle.c Circle.h)