cmake_minimum_required(VERSION 3.5)

project(ArrayProject LANGUAGES C)

add_executable(ArrayProject main.c)

install(TARGETS ArrayProject
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
