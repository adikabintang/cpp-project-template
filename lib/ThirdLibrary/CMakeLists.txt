cmake_minimum_required(VERSION 2.8.9)

include_directories(${PROJECT_SOURCE_DIR}/lib/ThirdLibrary/src)
add_library(ThirdLibrary src/ThirdLibrary.cpp)
