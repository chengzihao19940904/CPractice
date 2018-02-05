cmake_minimum_required(VERSION 3.9)
project(LinkList C)

set(CMAKE_C_STANDARD 99)

add_executable(LinkList main.c LinkList.h LinkList.c)