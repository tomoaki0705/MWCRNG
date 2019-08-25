# minimum requirement
cmake_minimum_required(VERSION 3.6)

SET(TARGET_NAME mwcRng)
SET(CMAKE_CXX_STANDARD 11)

# solution
project(${TARGET_NAME})

add_executable(${TARGET_NAME} main.cpp)
