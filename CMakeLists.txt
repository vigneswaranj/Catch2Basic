cmake_minimum_required(VERSION 2.8.9)
project(catch_t1 LANGUAGES CXX)
#Bring the headers, such as Student.h into the project
include_directories(./)

#Can manually add the sources using the set command as follows:
#set(SOURCES test_main.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "./*.cpp")

add_executable(test1 ${SOURCES})