cmake_minimum_required(VERSION 3.5.1)

include_directories(../key)

set(CMAKE_C_STANDARD 11)

set(SRC_LIST  daytimetcpcli.c ../key/err_msg_show.c)
set(SRC_LIST1  daytimetcpsrv.c ../key/err_msg_show.c ../key/pack_func_imp.c)
set(SRC_LIST2 byteorder.c)
set(SRC_LIST3 daytimetcpsrv1.c ../key/err_msg_show.c ../key/pack_func_imp.c)

add_executable(hello ${SRC_LIST})
add_executable(serv ${SRC_LIST1})
add_executable(out_byteorder ${SRC_LIST2})
add_executable(out_daytimetcpsrv1 ${SRC_LIST3})
