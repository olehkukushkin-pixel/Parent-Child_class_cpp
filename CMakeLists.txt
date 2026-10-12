cmake_minimum_required(VERSION 4.3)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        Parent.cpp
        Parent.h
        Child.cpp
        Child.h
        Person.cpp
        Person.h
        utils.cpp
        utils.h
)
