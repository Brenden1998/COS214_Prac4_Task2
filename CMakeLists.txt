cmake_minimum_required(VERSION 3.26)
project(Task_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Task_2 main.cpp
        ORM.cpp
        ORM.h
        NewDatabase.cpp
        NewDatabase.h
        DatabaseAdapter.cpp
        DatabaseAdapter.h)
