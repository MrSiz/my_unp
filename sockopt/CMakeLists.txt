cmake_minimum_required(VERSION 3.5)


include_directories(../key)
link_directories(../lib)
link_libraries(func)

set(CMAKE_BUILD_TYPE DEBUG)
set(CMAKE_C_FLAGS_DEBUG "$ENV{CFLAGS} -g")


set(SRC_LIST checkopts.c)
add_executable(out_checkopts ${SRC_LIST})
