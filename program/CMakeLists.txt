cmake_minimum_required(VERSION 3.22)
project(program)

set(CMAKE_CXX_STANDARD 14)

add_executable(program main.cpp Book.cpp Book.h Item.cpp Item.h File.cpp File.h Component.cpp Component.h System.cpp System.h)
