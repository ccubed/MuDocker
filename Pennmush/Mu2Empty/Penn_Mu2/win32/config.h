/* PennMUSH config.h. Autogenerated by ./configure */

#ifndef __CONFIG_H
#define __CONFIG_H

/* Headers */

#undef HAVE_ARPA_INET_H

#undef HAVE_LIBINTL_H

#undef HAVE_NETDB_H

#undef HAVE_NETINET_IN_H

#undef HAVE_NETINET_TCP_H

#undef HAVE_SYS_SOCKET_H

#define HAVE_SYS_STAT_H 1

#undef HAVE_SYS_TIME_H

#undef TIME_WITH_SYS_TIME

#define HAVE_SYS_TYPES_H

#undef HAVE_UNISTD_H

#undef HAVE_SYS_WAIT_H

#undef HAVE_SYS_UN_H

#undef HAVE_SYS_RESOURCE_H

#undef HAVE_SYS_EVENT_H

#undef HAVE_SYS_EVENT_H

#undef HAVE_SYS_UIO_H

#undef HAVE_POLL_H

#undef HAVE_SYS_SELECT_H

#undef HAVE_SYS_INOTIFY_H

#undef HAVE_ZLIB_H

#undef HAVE_BYTESWAP_H

#undef HAVE_LIBZ

/* C99ish headers. The first two are really really nice to have. */

#undef HAVE_STDINT_H

#undef HAVE_INTTYPES_H

#undef HAVE_STDBOOL_H

#undef HAVE_FENV_H

#undef HAVE_SYS_PARAM_H

#undef HAVE_SYS_UCRED_H

/* Libraries */

#undef HAVE_MYSQL

#undef HAVE_POSTGRESQL

#undef HAVE_SQLITE3

/* You MUST have the OpenSSL library installed. See
   win32/README_OPENSSL.txt */
#define HAVE_SSL 1

/* You MUST have the PCRE library installed. See
   win32/README_PCRE.txt */
#define HAVE_PCRE
#define HAVE_PCRE_H

#undef HAVE_EVENT2_EVENT_H

#undef HAVE_EVENT2_DNS_H

#undef HAVE_LIBEVENT_CORE

/* Types */

#undef HAVE__BOOL

#define socklen_t unsigned long

#define int8_t __int8

#define uint8_t unsigned __int8

#define int16_t __int16

#define uint16_t unsigned __int16

#define int32_t  __int32

#define uint32_t unsigned __int32

#define int64_t __int64

#define uint64_t unsigned __int64

#define intmax_t __int64
#define uintmax_t unsigned __int64

#define pid_t unsigned long

/* Taken from autoconf manual */
#if HAVE_STDBOOL_H
# include <stdbool.h>
#else
# if ! HAVE__BOOL
#  ifdef __cplusplus
typedef bool _Bool;
#  else
#   define _Bool signed char
#  endif
# endif
# define bool _Bool
# define false 0
# define true 1
# define __bool_true_false_are_defined 1
#endif

typedef void* Malloc_t;
typedef void Free_t;

/* Functions */
#undef HAS_BINDTEXTDOMAIN

#undef HAVE_CBRT

#undef HAS_CRYPT

#undef HAS_FPSETMASK

#undef HAS_FPSETROUND

#define HAS_GAI_STRERROR

#define HAS_GETADDRINFO

#undef HAS_GETDATE

#undef HAS_GETHOSTBYNAME2

#define HAS_GETNAMEINFO

#undef HAS_GETPAGESIZE

#undef HAS_GETRLIMIT

#undef HAS_GETRUSAGE

#undef HAS_GETTEXT

#define HAS_INET_PTON

#undef HAS_ITIMER

#define HAS_SETLOCALE

#undef HAVE_FORK

#undef HAVE_SETPGRP

#undef SETPGRP_VOID

#undef HAVE_GETUID

#undef HAVE_GETEUID

#undef HAVE_SETEUID

#undef HAVE_GETPRIORITY

#undef HAVE_SETPRIORITY

#undef HAVE_SIGACTION

#undef HAVE_SIGPROCMASK

#undef HAVE_SNPRINTF

#undef HAS_SOCKETPAIR

#undef HAVE_STRCASECMP

/* Various Windows (And maybe others?) string functions  start with _str */

#define HAVE__STRICMP

#define HAVE__STRNICMP

#define HAVE__STRICOLL

#define HAVE__STRNCOLL

#define HAVE__STRNICOLL

#define HAVE__SNPRINTF

#define HAVE__VSNPRINTF

#define HAVE__VSNPRINTF_S

#define HAVE_STRDUP

#define HAVE_STRCOLL

#define HAS_STRXFRM

#undef HAS_SYSCONF

#undef HAS_TEXTDOMAIN

#define HAS_VSNPRINTF

#undef HAS_WAITPID

#undef HAVE_WAIT3

#undef HAVE_WAIT

#define UNION_WAIT

/* Variables and defines */

#define HAVE_H_ERRNO

#undef HAVE_SIGCHLD

#undef HAVE_SIGCLD

/* Files */

#undef HAS_DEV_URANDOM

/* Misc. */

#undef HAVE_SOCKADDR_IN6

#undef FORCE_IPV4

#define DONT_TRANSLATE

#undef HAVE_UPTIME

#undef UPTIME

#undef HAVE_SENDMAIL

#undef SENDMAIL

#define HAVE_SAFE_TOUPPER

#define UINT32_MAX 0xffffffffU

/* Optional language features */
#define restrict
#undef inline
#ifndef _SSIZE_T_DEFINED
#ifdef  _WIN64
typedef __int64 ssize_t;
#else
typedef int ssize_t;
#endif
#define _SSIZE_T_DEFINED
#endif

#ifdef _MSC_VER
#define WIN32_CDECL __cdecl
#else
#define WIN32_CDECL
#endif

#undef HAVE___ATTRIBUTE__

#ifndef HAVE___ATTRIBUTE__
#define __attribute__(x)
#endif

#undef GCC_MALLOC_CALL

/* TODO: Change in source */
#define RESTRICT

#endif /* __CONFIG_H */