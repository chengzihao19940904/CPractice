cmake_minimum_required(VERSION 3.8)
project(SequenceChain)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c Link.c Link.h)
add_executable(SequenceChain ${SOURCE_FILES})