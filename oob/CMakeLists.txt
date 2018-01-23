cmake_minimum_required(VERSION 3.5)

include_directories(../key)

link_directories(../lib)
link_libraries(func)

SET(SRC_LIST tcpsend01.c)
add_executable(out_tcpsend01 ${SRC_LIST})

SET(SRC_LIST1 tcprecv01.c)
add_executable(out_tcprecv01 ${SRC_LIST1})

SET(SRC_LIST2 tcpsend04.c)
add_executable(out_tcpsend04 ${SRC_LIST2})

SET(SRC_LIST3 tcprecv04.c)
add_executable(out_tcprecv04 ${SRC_LIST3})
