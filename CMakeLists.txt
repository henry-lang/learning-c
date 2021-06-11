cmake_minimum_required(VERSION 3.19)
project(c_testing C)

set(CMAKE_C_STANDARD 99)

add_executable(c_testing src/main.c src/person.c src/person.h src/int_list.c src/int_list.h)