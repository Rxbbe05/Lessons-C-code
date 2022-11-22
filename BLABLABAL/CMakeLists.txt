cmake_minimum_required(VERSION 3.5)

project(BLABLABAL LANGUAGES C)

add_executable(BLABLABAL main.c)

install(TARGETS BLABLABAL
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
