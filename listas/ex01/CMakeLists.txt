cmake_minimum_required(VERSION 3.28)
project(listas)

set(CMAKE_CXX_STANDARD 26)

add_executable(listas main.cpp
        Lista.h
        Lista.cpp)
