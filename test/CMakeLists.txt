cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME combtest)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} combtest.cpp $<TARGET_OBJECTS:comb_lib>)
target_link_libraries(${PROJECT_NAME} stdc++)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra)
endif()

foreach(i RANGE 1 5)
  add_test(${PROJECT_NAME}_${i} ${PROJECT_NAME} ${i})
endforeach()
