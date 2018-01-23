cmake_minimum_required(VERSION 3.5.1)

include_directories(../key)
#include_directories(../tcpcliserv)
link_directories(../lib)
link_libraries(func)

set(SRC_LIST udpserv01.c)
add_executable(out_udpser01 ${SRC_LIST})

set(SRC_LIST1 udpcli01.c)
add_executable(out_udpcli01 ${SRC_LIST1})

set(SRC_LIST2 udpcli02.c dgcliaddr.c)
add_executable(out_udpcli02 ${SRC_LIST2})

set(SRC_LIST4 udpcli03.c ../bcast/dgclibcast1.c)
add_executable(out_udpcli03 ${SRC_LIST4})

set(SRC_LIST3 udpservselect01.c ../tcpcliserv/sigchldwait.c)
add_executable(out_udpservselect01 ${SRC_LIST3})


