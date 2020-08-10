cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME powitest)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} main.cpp $<TARGET_OBJECTS:func_lib>)
target_link_libraries(${PROJECT_NAME} stdc++)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra)
endif()

foreach(i RANGE 1 3)
  add_test(${PROJECT_NAME}_${i} ${PROJECT_NAME} ${i})
endforeach()


