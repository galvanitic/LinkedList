cmake_minimum_required(VERSION 3.17)
project(Lab3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab3
        stuff1.txt
        stuff2.txt
        stuff3.txt Node.cpp Node.h LinkedList.cpp LinkedList.h LinkedListInterface.h main.cpp)
