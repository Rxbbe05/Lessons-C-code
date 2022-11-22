cmake_minimum_required(VERSION 3.5)

project(untitled5 LANGUAGES C)

add_executable(untitled5 main.c)

install(TARGETS untitled5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
