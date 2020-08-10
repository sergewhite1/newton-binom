cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME newton-binom-exe)

project(${PROJECT_NAME})

add_library(comb_lib OBJECT 
  comb.cpp
  comb.h
)

add_executable(${PROJECT_NAME} main.cpp $<TARGET_OBJECTS:comb_lib>)
target_link_libraries(${PROJECT_NAME} stdc++)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra)
endif()
