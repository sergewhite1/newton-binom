cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME newton-binom-project)

project(${PROJECT_NAME})

#set(CMAKE_VERBOSE_MAKEFILE TRUE)

add_subdirectory(src)

enable_testing()

add_subdirectory(test)
