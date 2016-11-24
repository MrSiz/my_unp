#ifndef MY_UNP
#define MY_UNP

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <readline/history.h>
#include <sys/socket.h>
#include <unistd.h>
#include <signal.h>
#include <arpa/inet.h>

typedef sockaddr SA;
const int SERV_PORT = 9877;
const int MAXLINE = 100000;
const int LISTENQ = 20;


#endif
