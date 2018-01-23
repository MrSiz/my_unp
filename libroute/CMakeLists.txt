cmake_minimum_required(VERSION 3.5)

include_directories(../route ../key)
file(GLOB SRC_FILES "*.c")
set(LIB_LISTS ${SRC_FILES})
add_library(route SHARED  ${LIB_LISTS})
