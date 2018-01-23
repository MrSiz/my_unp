project(Lib1)
cmake_minimum_required(VERSION 3.5)

#add other option 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

include_directories(../key)
#set(LIB_LISTS sock_ntop.c error.c wrapunix.c str_echo.c writen.c wrapsock.c)
file(GLOB SRC_FILES "*.c")
set(LIB_LISTS ${SRC_FILES})
add_library(func SHARED  ${LIB_LISTS})
