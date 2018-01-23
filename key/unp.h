#ifndef __unp_h
#define __unp_h

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <time.h>
#include <netinet/in.h>
#include <errno.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <netdb.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/un.h>
#include <poll.h>
#include <error.h>
#include <sys/ioctl.h>
//#include "config.h"

#define MAXLINE 4096
#define MAXSOCKADDR 128
#define BUFFSIZE 8192


#define LISTENQ 1024
#define SERV_PORT 9877
#define SERV_PORT_STR "9877"
#define  SA struct sockaddr

typedef void Sigfunc(int);


#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)

#define CPU_VENDOR_OS "x86_64-unknown-linux-gnu"

/* Define to 1 if <netdb.h> defines struct addrinfo */
#define HAVE_ADDRINFO_STRUCT 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define to 1 if the /dev/streams/xtiso/tcp device exists */
/* #undef HAVE_DEV_STREAMS_XTISO_TCP */

/* Define to 1 if the /dev/tcp device exists */
/* #undef HAVE_DEV_TCP */

/* Define to 1 if the /dev/xti/tcp device exists */
/* #undef HAVE_DEV_XTI_TCP */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* define if getaddrinfo prototype is in <netdb.h> */
#define HAVE_GETADDRINFO_PROTO 1

/* Define to 1 if you have the `gethostbyname2' function. */
#define HAVE_GETHOSTBYNAME2 1

/* Define to 1 if you have the `gethostbyname_r' function. */
#define HAVE_GETHOSTBYNAME_R 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* define if gethostname prototype is in <unistd.h> */
#define HAVE_GETHOSTNAME_PROTO 1

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* define if getnameinfo prototype is in <netdb.h> */
#define HAVE_GETNAMEINFO_PROTO 1

/* define if getrusage prototype is in <sys/resource.h> */
#define HAVE_GETRUSAGE_PROTO 1

/* Define to 1 if you have the `hstrerror' function. */
#define HAVE_HSTRERROR 1

/* define if hstrerror prototype is in <netdb.h> */
#define HAVE_HSTRERROR_PROTO 1

/* Define to 1 if <net/if.h> defines struct if_nameindex */
#define HAVE_IF_NAMEINDEX_STRUCT 1

/* Define to 1 if you have the `if_nametoindex' function. */
#define HAVE_IF_NAMETOINDEX 1

/* define if if_nametoindex prototype is in <net/if.h> */
#define HAVE_IF_NAMETOINDEX_PROTO 1

/* Define to 1 if you have the `inet6_rth_init' function. */
#define HAVE_INET6_RTH_INIT 1

/* Define to 1 if you have the `inet_aton' function. */
#define HAVE_INET_ATON 1

/* define if inet_aton prototype is in <arpa/inet.h> */
#define HAVE_INET_ATON_PROTO 1

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* define if inet_pton prototype is in <arpa/inet.h> */
#define HAVE_INET_PTON_PROTO 1

/* Define to 1 if you have the `kevent' function. */
/* #undef HAVE_KEVENT */

/* Define to 1 if you have the `kqueue' function. */
/* #undef HAVE_KQUEUE */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `pthreads' library (-lpthreads). */
/* #undef HAVE_LIBPTHREADS */

/* Define to 1 if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* Define to 1 if you have the `xti' library (-lxti). */
/* #undef HAVE_LIBXTI */

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* define if struct msghdr contains the msg_control member */
#define HAVE_MSGHDR_MSG_CONTROL 1

/* Define to 1 if you have the <netconfig.h> header file. */
/* #undef HAVE_NETCONFIG_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netdir.h> header file. */
/* #undef HAVE_NETDIR_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <net/if_dl.h> header file. */
/* #undef HAVE_NET_IF_DL_H */

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the `pselect' function. */
#define HAVE_PSELECT 1

/* define if pselect prototype is in <sys/stat.h> */
#define HAVE_PSELECT_PROTO 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* define if snprintf prototype is in <stdio.h> */
#define HAVE_SNPRINTF_PROTO 1

/* Define to 1 if <net/if_dl.h> defines struct sockaddr_dl */
/* #undef HAVE_SOCKADDR_DL_STRUCT */

/* define if socket address structures have length fields */
/* #undef HAVE_SOCKADDR_SA_LEN */

/* Define to 1 if you have the `sockatmark' function. */
#define HAVE_SOCKATMARK 1

/* define if sockatmark prototype is in <sys/socket.h> */
#define HAVE_SOCKATMARK_PROTO 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <stropts.h> header file. */
#define HAVE_STROPTS_H 1

/* Define to 1 if `ifr_mtu' is member of `struct ifreq'. */
#define HAVE_STRUCT_IFREQ_IFR_MTU 1

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if <time.h> or <sys/time.h> defines struct timespec */
#define HAVE_TIMESPEC_STRUCT 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <xti.h> header file. */
/* #undef HAVE_XTI_H */

/* Define to 1 if you have the <xti_inet.h> header file. */
/* #undef HAVE_XTI_INET_H */

/* Define to 1 if the system supports IPv4 */
#define IPV4 1

/* Define to 1 if the system supports IPv6 */
#define IPV6 1

/* Define to 1 if the system supports IPv4 */
#define IPv4 1

/* Define to 1 if the system supports IPv6 */
#define IPv6 1

/* Define to 1 if the system supports IP Multicast */
#define MCAST 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* the size of the sa_family field in a socket address structure */
/* #undef SA_FAMILY_T */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if the system supports UNIX domain sockets */
#define UNIXDOMAIN 1


//define path
#define	UNIXSTR_PATH	"/tmp/unix.str"
#define	UNIXDG_PATH		"/tmp/unix.dg"

/*function*/

void err_dump(const char *, ...);
void err_msg(const char *, ...);
void err_quit(const char *, ...);
void err_ret(const char *, ...);
void err_sys(const char *, ...);




//package function
//start

//io

ssize_t Readline(int fd, void *ptr, size_t maxlen);
ssize_t Read(int fd, void *ptr, size_t nbytes);
void Write(int , void *, size_t);
ssize_t writen(int fd, const void *vptr, size_t n);
void Writen(int, void *, size_t);
void Close(int);
void Send(int fd, const void *ptr, size_t nbytes, int flags);
void Sendto(int fd, const void *ptr, size_t nbytes, int flags, const struct sockaddr *sa, socklen_t salen);
void Sendmsg(int fd, const struct msghdr *msg, int flags);
ssize_t Recv(int fd, void *ptr, size_t nbytes, int flags);
ssize_t Recvfrom(int fd, void *ptr, size_t nbytes, int flags, struct sockaddr *sa, socklen_t *salenptr);
ssize_t Recvmsg(int fd, struct msghdr *msg, int flags);


//file_io
void Fclose(FILE *fp);
FILE *Fdopen(int fd, const char *type);
char *Fgets(char *ptr, int n, FILE *stream);
FILE *Fopen(const char *filename, const char *mode);
void Fputs(const char *ptr, FILE *stream);
FILE *Fdopen(int fd, const char *type);
//raw_unix_func
pid_t Fork(void);
pid_t Wait(int *iptr);
pid_t Waitpid(pid_t pid, int *iptr, int options);
int Fcntl(int fd, int cmd, int arg);
void *Calloc(size_t n, size_t size);

void Gettimeofday(struct timeval *tv, void *foo);

//network
int Socket(int, int, int);
void Bind(int, const struct sockaddr *, socklen_t);
void Listen(int, int);
int Accept(int, struct sockaddr *, socklen_t*);
void Connect(int , const struct sockaddr *, socklen_t);
const char *Inet_ntop(int family, const void *addrptr, char *strptr, size_t len);
void Inet_pton(int family, const char *strptr, void *addrptr);
int Select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds,
       struct timeval *timeout);
void Shutdown(int fd, int how);
int Tcp_connect(const char *host, const char *serv);
int Tcp_listen(const char *host, const char *serv, socklen_t *addrlenp);
int Udp_client(const char *host, const char *serv, SA **saptr, socklen_t *lenp);
int Udp_connect(const char *host, const char *serv);
int Udp_server(const char *host, const char *serv, socklen_t *addrlenp);
void Socketpair(int family, int type, int protocol, int *fd);


//signal
Sigfunc* Signal(int, Sigfunc *);
void sig_chld(int signo);


//echo
void str_echo(int );
void  str_cli(FILE *fp, int sockfd);

void dg_echo(int, SA*, socklen_t);
void dg_cli(FILE *fp, int sockfd, const SA *pservaddr, socklen_t servlen);

//mem
void *Malloc(size_t size);


//sock
char *Sock_ntop(const struct sockaddr *sa, socklen_t salen);
void Setsockopt(int fd, int level, int optname, const void *optval, socklen_t optlen);
void Getsockopt(int fd, int level, int optname, void *optval, socklen_t *optlenptr);
void Getpeername(int fd, struct sockaddr *sa, socklen_t *salenptr);
void Getsockname(int fd, struct sockaddr *sa, socklen_t *salenptr);
int Sockatmark(int fd);


//inetd
int Daemon_init(const char *pname, int facility);
void Daemon_inetd(const char *pname, int facility);

//adio
int Readable_timeo(int fd, int sec);
int Connect_timeo(int sockfd, const SA *saptr, socklen_t salen, int nsec);



ssize_t Write_fd(int fd, void *ptr, size_t nbytes, int sendfd);
ssize_t Read_fd(int fd, void *ptr, size_t nbytes, int *recvfd);
char *Sock_ntop_host(const struct sockaddr *sa, socklen_t salen);
//end

struct unp_in_pktinfo{
    struct in_addr ipi_addr;
    int ipi_ifindex;
};

#endif
