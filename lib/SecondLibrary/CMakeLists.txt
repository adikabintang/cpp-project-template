cmake_minimum_required(VERSION 2.8.9)

include_directories(${PROJECT_SOURCE_DIR}/lib/SecondLibrary/src)
add_library(SecondLibrary src/SecondLibrary.cpp)
