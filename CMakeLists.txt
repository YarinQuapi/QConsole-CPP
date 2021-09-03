cmake_minimum_required(VERSION 3.20)
project(QConsole_C__)

set(CMAKE_CXX_STANDARD 23)

add_executable(QConsole_C__ main.cpp CommandHandler.cpp CommandHandler.h main.h)
