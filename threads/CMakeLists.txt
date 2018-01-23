cmake_minimum_required(VERSION 3.5)

include_directories(../key)

link_directories(../lib)
link_libraries(func pthread)

#find_package(Threads)

#target_link_libraries(main ${CMAKE_THREAD_LIBS_INIT})

#set(CMAKE_CXX_FLAGS "{CMAKE_CXX_FLAGS} -pthread")

SET(SRC_LIST tcpserv01.c)
add_executable(out_tcpserv01 ${SRC_LIST})
target_link_libraries(out_tcpserv01 pthread)

SET(SRC_LIST1 example01.c)
add_executable(out_example01 ${SRC_LIST1})

