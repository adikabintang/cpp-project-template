# https://stackoverflow.com/questions/8304190/cmake-with-include-and-source-paths-basic-setup
cmake_minimum_required(VERSION 2.8.9)

SET(CMAKE_CXX_COMPILER "/usr/bin/g++")
project (MyApplication)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-g")

#add_definitions(-DDEBUGGING_MY_APPLICATION)

#for FirstLibrary
include_directories ("${PROJECT_SOURCE_DIR}/lib/FirstLibrary/src")
add_subdirectory(lib/FirstLibrary)

#for SecondLibrary
include_directories ("${PROJECT_SOURCE_DIR}/lib/SecondLibrary/src")
add_subdirectory(lib/SecondLibrary)

#for ThirdLibrary
include_directories ("${PROJECT_SOURCE_DIR}/lib/ThirdLibrary/src")
add_subdirectory(lib/ThirdLibrary)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(MyApplication src/main.cpp)
target_link_libraries(MyApplication FirstLibrary SecondLibrary ThirdLibrary)