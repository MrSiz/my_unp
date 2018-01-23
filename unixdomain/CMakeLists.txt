cmake_minimum_required(VERSION 3.5)

include_directories(../key)

link_directories(../lib)
link_libraries(func)

set(SRC_LIST unixbind.c)
add_executable(out_unixbind ${SRC_LIST})

set(SRC_LIST1 mycat.c myopen.c)
add_executable(out_mycat ${SRC_LIST1})
