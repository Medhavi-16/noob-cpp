cmake_minimum_required(VERSION 3.22)
project(cpp_app)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(src/headers)
include_directories(src/impl)
include_directories(src/testingAllInOne)

add_executable(cpp_app
#        src/headers/Person.h
#        src/headers/stdafx.h
#        src/headers/Student.h
        src/impl/Person.cpp
        src/impl/Student.cpp
        src/main.cpp)
