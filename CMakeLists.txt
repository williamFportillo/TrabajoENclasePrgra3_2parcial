cmake_minimum_required(VERSION 3.8)
project(TrabajoEnclase)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp String.h Object.h Integer.h Char.h String.cpp Integer.cpp Char.cpp)
add_executable(TrabajoEnclase ${SOURCE_FILES})