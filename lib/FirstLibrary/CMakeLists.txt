cmake_minimum_required(VERSION 2.8.9)

include_directories(${PROJECT_SOURCE_DIR}/lib/FirstLibrary/src)
add_library(FirstLibrary src/FirstLibrary.cpp)
