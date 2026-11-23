cmake_minimum_required(VERSION 3.10)

project(guess-number)

add_executable(guess-number main.cpp)

install(TARGETS guess-number RUNTIME DESTINATION bin)
