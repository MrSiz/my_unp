cmake_minimum_required(VERSION 3.5)


#aux_source_directory(../lib)
include_directories(../key)
link_directories(../lib)
#target_link_libraries(libfunc.a)
link_libraries(func)

set(SRC_LIST tcpserv01.c sigchldwait.c str_echo08.c)
add_executable(out_tcpserv ${SRC_LIST})
#target_link_libraries(../lib/func)

set(SRC_LIST1 tcpcli01.c)
add_executable(out_tcpcli01 ${SRC_LIST1})

set(SRC_LIST2 tcpserv04.c sigchldwaitpid.c)
add_executable(out_tcpserv04 ${SRC_LIST2})

set(SRC_LIST3 tcpcli04.c)
add_executable(out_tcpcli04 ${SRC_LIST3})
