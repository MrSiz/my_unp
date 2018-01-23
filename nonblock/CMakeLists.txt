cmake_minimum_required(VERSION 3.5)

include_directories(../key)

link_directories(../lib)
link_libraries(func)

SET(SRC_LIST web.c home_page.c start_connect.c write_get_cmd.c)
add_executable(out_web ${SRC_LIST})
