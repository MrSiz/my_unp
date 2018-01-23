cmake_minimum_required(VERSION 3.5)

include_directories(../key)

link_directories(../lib)
link_libraries(func)

set(SRC_LIST daytimetcpsrv2.c)
add_executable(out_daytimetcpsrv2 ${SRC_LIST})

set(SRC_LIST1 daytimetcpsrv3.c)
add_executable(out_daytimetcpsrv3 ${SRC_LIST1})
