cmake_minimum_required(VERSION 3.5)

include_directories(../key)

link_directories(../lib)
link_libraries(func pthread)

set(SRC_LIST ./ping.h  main.c send_v4.c ../libfree/in_cksum.c ./sig_alarm.c ./proc_v4.c ./readloop.c )
add_executable(out_main ${SRC_LIST})
