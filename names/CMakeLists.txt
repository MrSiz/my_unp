cmake_minimum_required(VERSION 3.5)

include_directories(../key)
link_directories(../lib)
link_libraries(func)

set(SRC_LIST hostent.c)
add_executable(out_hostent ${SRC_LIST})

set(SRC_LIST1 daytimetcpcli1.c)
add_executable(out_daytimetcpcli1 ${SRC_LIST1})

set(SRC_LIST2 daytimetcpsrv1.c)
add_executable(out_daytimetcpsrv1 ${SRC_LIST2})

set(SRC_LIST3 my_daytimetcpcli2.c)
add_executable(out_my_daytimetcpcli2 ${SRC_LIST3})

set(SRC_LIST4 daytimetcpsrv2.c)
add_executable(out_daytimetcpsrv2 ${SRC_LIST4})

set(SRC_LIST5 daytimeudpcli1.c)
add_executable(out_daytimeudpcli1 ${SRC_LIST5})

set(SRC_LIST6 daytimeudpsrv2.c)
add_executable(out_daytimeudpsrv2 ${SRC_LIST6})


