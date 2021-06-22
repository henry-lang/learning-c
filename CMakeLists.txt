cmake_minimum_required(VERSION 3.19)
project(c_testing C)

set(CMAKE_C_STANDARD 99)

add_executable(c_testing src/main.c src/old/person.c src/old/person.h src/util/list.c src/util/list.h)