cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(Homework)

include(cmake/function.cmake)

add_subdirectory(PointsLib)
add_subdirectory(list)
add_subdirectory(queue)
add_subdirectory(stack)
add_subdirectory(main)

option(BTEST "build test?" ON)

if(BTEST)
    add_subdirectory(gtest)
    add_subdirectory(test)
endif()
