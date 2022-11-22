cmake_minimum_required(VERSION 3.5)

project(Cirkool LANGUAGES C)

add_executable(Cirkool main.c)

install(TARGETS Cirkool
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
