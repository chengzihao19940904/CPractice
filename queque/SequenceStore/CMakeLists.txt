cmake_minimum_required(VERSION 3.9)
project(SequenceStore C)

set(CMAKE_C_STANDARD 99)

add_executable(SequenceStore main.c SqList.c SqList.h)