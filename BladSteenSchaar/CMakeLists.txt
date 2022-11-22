cmake_minimum_required(VERSION 3.5)

project(BladSteenSchaar LANGUAGES C)

add_executable(BladSteenSchaar main.c)

install(TARGETS BladSteenSchaar
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
