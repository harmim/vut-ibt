// tag-#anon#ST[ARR16{U64}$U64$'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous$1;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$2;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-params
// file src/ptsematest/ptsematest.c line 56
struct params;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sched_attr
// file src/include/rt-sched.h line 59
struct sched_attr;

// tag-sched_param
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 72
struct sched_param;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 400
extern signed int __xstat(signed int, const char *, struct stat *);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_privs
// file src/include/rt-utils.h line 10
signed int check_privs(void);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// debug
// file src/lib/error.c line 49
void debug(char *fmt, ...);
// display_help
// file src/ptsematest/ptsematest.c line 163
static void display_help(void);
// err_doit
// file src/lib/error.c line 90
void err_doit(signed int err, const char *fmt, void **ap);
// err_exit
// file src/lib/error.c line 10
void err_exit(signed int err, char *fmt, ...);
// err_msg
// file src/lib/error.c line 20
void err_msg(char *fmt, ...);
// err_msg_n
// file src/lib/error.c line 30
void err_msg_n(signed int err, char *fmt, ...);
// err_quit
// file src/lib/error.c line 40
void err_quit(char *fmt, ...);
// event_disable
// file src/lib/rt-utils.c line 243
signed int event_disable(char *event);
// event_disable_all
// file src/lib/rt-utils.c line 230
signed int event_disable_all(void);
// event_enable
// file src/lib/rt-utils.c line 235
signed int event_enable(char *event);
// event_enable_all
// file src/lib/rt-utils.c line 225
signed int event_enable_all(void);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fatal
// file src/lib/error.c line 79
void fatal(char *fmt, ...);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// get_cpu
// file src/include/rt-get_cpu.h line 12
static inline signed int get_cpu(void);
// get_debugfileprefix
// file src/include/rt-utils.h line 11
char * get_debugfileprefix(void);
// get_tracers
// file src/lib/rt-utils.c line 121
signed int get_tracers(char ***list);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gettid
// file src/lib/rt-utils.c line 320
signed int gettid(void);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// info
// file src/lib/error.c line 59
void info(char *fmt, ...);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mlockall
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 111
extern signed int mlockall(signed int);
// mount_debugfs
// file src/lib/rt-utils.c line 86
signed int mount_debugfs(char *path);
// nanosleep
// file /usr/include/time.h line 334
extern signed int nanosleep(struct timespec *, struct timespec *);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// policy_to_string
// file src/lib/rt-utils.c line 282
const char * policy_to_string(signed int policy);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_options
// file src/ptsematest/ptsematest.c line 198
static void process_options(signed int argc, char **argv);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_kill
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 35
extern signed int pthread_kill(unsigned long int, signed int);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous$0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous$2 *, struct anonymous$2 *);
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// sched_getattr
// file src/lib/rt-sched.c line 37
signed int sched_getattr(signed int pid, struct sched_attr *attr, unsigned int size, unsigned int flags);
// sched_getparam
// file /usr/include/sched.h line 55
extern signed int sched_getparam(signed int, struct sched_param *);
// sched_getscheduler
// file /usr/include/sched.h line 62
extern signed int sched_getscheduler(signed int);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous$1 *);
// sched_setattr
// file src/lib/rt-sched.c line 30
signed int sched_setattr(signed int pid, struct sched_attr *attr, unsigned int flags);
// sched_setscheduler
// file /usr/include/sched.h line 58
extern signed int sched_setscheduler(signed int, signed int, struct sched_param *);
// semathread
// file src/ptsematest/ptsematest.c line 77
void * semathread(void *param);
// setevent
// file src/lib/rt-utils.c line 204
signed int setevent(char *event, char *val);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$2 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$2 *);
// sighand
// file src/ptsematest/ptsematest.c line 293
static void sighand(signed int sig);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// string_to_policy
// file src/lib/rt-utils.c line 302
unsigned int string_to_policy(const char *str);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// valid_tracer
// file src/lib/rt-utils.c line 186
signed int valid_tracer(char *tracername);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// warn
// file src/include/error.h line 15
void warn(char *fmt, ...);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous$1
{
  // __bits
  unsigned long int __bits[16l];
};

struct anonymous$2
{
  // __val
  unsigned long int __val[16l];
};

union anonymous$0
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

struct __pthread_internal_list
{
  // __prev
  struct __pthread_internal_list *__prev;
  // __next
  struct __pthread_internal_list *__next;
};

struct __pthread_mutex_s
{
  // __lock
  signed int __lock;
  // __count
  unsigned int __count;
  // __owner
  signed int __owner;
  // __nusers
  unsigned int __nusers;
  // __kind
  signed int __kind;
  // __spins
  signed short int __spins;
  // __elision
  signed short int __elision;
  // __list
  struct __pthread_internal_list __list;
};

union anonymous
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct _IO_FILE
{
  // _flags
  signed int _flags;
  // _IO_read_ptr
  char *_IO_read_ptr;
  // _IO_read_end
  char *_IO_read_end;
  // _IO_read_base
  char *_IO_read_base;
  // _IO_write_base
  char *_IO_write_base;
  // _IO_write_ptr
  char *_IO_write_ptr;
  // _IO_write_end
  char *_IO_write_end;
  // _IO_buf_base
  char *_IO_buf_base;
  // _IO_buf_end
  char *_IO_buf_end;
  // _IO_save_base
  char *_IO_save_base;
  // _IO_backup_base
  char *_IO_backup_base;
  // _IO_save_end
  char *_IO_save_end;
  // _markers
  struct _IO_marker *_markers;
  // _chain
  struct _IO_FILE *_chain;
  // _fileno
  signed int _fileno;
  // _flags2
  signed int _flags2;
  // _old_offset
  signed long int _old_offset;
  // _cur_column
  unsigned short int _cur_column;
  // _vtable_offset
  signed char _vtable_offset;
  // _shortbuf
  char _shortbuf[1l];
  // _lock
  void *_lock;
  // _offset
  signed long int _offset;
  // __pad1
  void *__pad1;
  // __pad2
  void *__pad2;
  // __pad3
  void *__pad3;
  // __pad4
  void *__pad4;
  // __pad5
  unsigned long int __pad5;
  // _mode
  signed int _mode;
  // _unused2
  char _unused2[(signed long int)(sizeof(signed int) * 5) /*20l*/ ];
};

struct _IO_marker
{
  // _next
  struct _IO_marker *_next;
  // _sbuf
  struct _IO_FILE *_sbuf;
  // _pos
  signed int _pos;
};

struct option
{
  // name
  const char *name;
  // has_arg
  signed int has_arg;
  // flag
  signed int *flag;
  // val
  signed int val;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct params
{
  // num
  signed int num;
  // cpu
  signed int cpu;
  // priority
  signed int priority;
  // affinity
  signed int affinity;
  // sender
  signed int sender;
  // samples
  signed int samples;
  // max_cycles
  signed int max_cycles;
  // tracelimit
  signed int tracelimit;
  // tid
  signed int tid;
  // shutdown
  signed int shutdown;
  // stopped
  signed int stopped;
  // delay
  struct timespec delay;
  // mindiff
  unsigned int mindiff;
  // maxdiff
  unsigned int maxdiff;
  // sumdiff
  double sumdiff;
  // unblocked
  struct timeval unblocked;
  // received
  struct timeval received;
  // diff
  struct timeval diff;
  // threadid
  unsigned long int threadid;
  // neighbor
  struct params *neighbor;
  // error
  char error[512l];
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct sched_attr
{
  // size
  unsigned int size;
  // sched_policy
  unsigned int sched_policy;
  // sched_flags
  unsigned long int sched_flags;
  // sched_nice
  signed int sched_nice;
  // sched_priority
  unsigned int sched_priority;
  // sched_runtime
  unsigned long int sched_runtime;
  // sched_deadline
  unsigned long int sched_deadline;
  // sched_period
  unsigned long int sched_period;
};

struct sched_param
{
  // __sched_priority
  signed int __sched_priority;
};

struct stat
{
  // st_dev
  unsigned long int st_dev;
  // st_ino
  unsigned long int st_ino;
  // st_nlink
  unsigned long int st_nlink;
  // st_mode
  unsigned int st_mode;
  // st_uid
  unsigned int st_uid;
  // st_gid
  unsigned int st_gid;
  // __pad0
  signed int __pad0;
  // st_rdev
  unsigned long int st_rdev;
  // st_size
  signed long int st_size;
  // st_blksize
  signed long int st_blksize;
  // st_blocks
  signed long int st_blocks;
  // st_atim
  struct timespec st_atim;
  // st_mtim
  struct timespec st_mtim;
  // st_ctim
  struct timespec st_ctim;
  // __glibc_reserved
  signed long int __glibc_reserved[3l];
};

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};


// affinity
// file src/ptsematest/ptsematest.c line 188
static signed int affinity;
// debugfileprefix
// file src/lib/rt-utils.c line 25
static char debugfileprefix[256l];
// distance
// file src/ptsematest/ptsematest.c line 194
static signed int distance = 500;
// interval
// file src/ptsematest/ptsematest.c line 193
static signed int interval = 1000;
// max_cycles
// file src/ptsematest/ptsematest.c line 192
static signed int max_cycles;
// num_threads
// file src/ptsematest/ptsematest.c line 191
static signed int num_threads = 1;
// num_tracers
// file src/lib/rt-utils.c line 114
static signed int num_tracers;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// priority
// file src/ptsematest/ptsematest.c line 190
static signed int priority;
// sameprio
// file src/ptsematest/ptsematest.c line 196
static signed int sameprio;
// setaffinity
// file src/ptsematest/ptsematest.c line 187
static signed int setaffinity = 0;
// shutdown
// file src/ptsematest/ptsematest.c line 291
static volatile signed int shutdown;
// smp
// file src/ptsematest/ptsematest.c line 195
static signed int smp;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// syncmutex
// file src/ptsematest/ptsematest.c line 54
static union anonymous *syncmutex;
// testmutex
// file src/ptsematest/ptsematest.c line 53
static union anonymous *testmutex;
// tracelimit
// file src/ptsematest/ptsematest.c line 189
static signed int tracelimit;
// tracer_buffer
// file src/lib/rt-utils.c line 113
static char *tracer_buffer;
// tracer_list
// file src/lib/rt-utils.c line 112
static char **tracer_list;

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1;
}

// check_privs
// file src/include/rt-utils.h line 10
signed int check_privs(void)
{
  signed int policy;
  policy=sched_getscheduler(0);
  struct sched_param param;
  struct sched_param old_param;
  if(policy == 1 || policy == 2)
    return 0;

  else
  {
    signed int return_value_sched_getparam$1;
    return_value_sched_getparam$1=sched_getparam(0, &old_param);
    if(!(return_value_sched_getparam$1 == 0))
    {
      fprintf(stderr, "unable to get scheduler parameters\n");
      return 1;
    }

    else
    {
      param = old_param;
      param.__sched_priority = 1;
      signed int return_value_sched_setscheduler$2;
      return_value_sched_setscheduler$2=sched_setscheduler(0, 1, &param);
      if(!(return_value_sched_setscheduler$2 == 0))
      {
        fprintf(stderr, "Unable to change scheduling policy!\n");
        fprintf(stderr, "Probably missing capabilities, either run as root or increase RLIMIT_RTPRIO limits.\n");
        return 1;
      }

      else
      {
        signed int return_value_sched_setscheduler$3;
        return_value_sched_setscheduler$3=sched_setscheduler(0, policy, &old_param);
        return return_value_sched_setscheduler$3;
      }
    }
  }
}

// debug
// file src/lib/error.c line 49
void debug(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("DEBUG: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
}

// display_help
// file src/ptsematest/ptsematest.c line 163
static void display_help(void)
{
  printf("ptsematest V %1.2f\n", 0.96);
  puts("Usage: ptsematest <options>");
  puts("Function: test POSIX threads mutex latency");
  puts("Options:\n-a [NUM] --affinity        run thread #N on processor #N, if possible\n                           with NUM pin all threads to the processor NUM\n-b USEC  --breaktrace=USEC send break trace command when latency > USEC\n-d DIST  --distance=DIST   distance of thread intervals in us default=500\n-i INTV  --interval=INTV   base interval of thread in us default=1000\n-l LOOPS --loops=LOOPS     number of loops: default=0(endless)\n-p PRIO  --prio=PRIO       priority\n-S       --smp             SMP testing: options -a -t and same priority\n                           of all threads\n-t       --threads         one thread per available processor\n-t [NUM] --threads=NUM     number of threads:\n                           without NUM, threads = max_cpus\n                           without -t default = 1\n");
  exit(1);
}

// err_doit
// file src/lib/error.c line 90
void err_doit(signed int err, const char *fmt, void **ap)
{
  vfprintf(stderr, fmt, ap);
  char *return_value_strerror$1;
  if(!(err == 0))
  {
    return_value_strerror$1=strerror(err);
    fprintf(stderr, ": %s\n", return_value_strerror$1);
  }

  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// err_exit
// file src/lib/error.c line 10
void err_exit(signed int err, char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(err, fmt, ap);
  ap = ((void **)NULL);
  exit(err);
}

// err_msg
// file src/lib/error.c line 20
void err_msg(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// err_msg_n
// file src/lib/error.c line 30
void err_msg_n(signed int err, char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(err, fmt, ap);
  ap = ((void **)NULL);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// err_quit
// file src/lib/error.c line 40
void err_quit(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// event_disable
// file src/lib/rt-utils.c line 243
signed int event_disable(char *event)
{
  char path[256l];
  sprintf(path, "events/%s/enable", event);
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent(path, "0");
  return return_value_setevent$1;
}

// event_disable_all
// file src/lib/rt-utils.c line 230
signed int event_disable_all(void)
{
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent("events/enable", "0");
  return return_value_setevent$1;
}

// event_enable
// file src/lib/rt-utils.c line 235
signed int event_enable(char *event)
{
  char path[256l];
  sprintf(path, "events/%s/enable", event);
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent(path, "1");
  return return_value_setevent$1;
}

// event_enable_all
// file src/lib/rt-utils.c line 225
signed int event_enable_all(void)
{
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent("events/enable", "1");
  return return_value_setevent$1;
}

// fatal
// file src/lib/error.c line 79
void fatal(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("FATAL: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// get_cpu
// file src/include/rt-get_cpu.h line 12
static inline signed int get_cpu(void)
{
  signed int c;
  signed int s;
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)309, &c, (void *)0, (void *)0);
  s = (signed int)return_value_syscall$1;
  return s == -1 ? s : c;
}

// get_debugfileprefix
// file src/include/rt-utils.h line 11
char * get_debugfileprefix(void)
{
  char type[100l];
  struct _IO_FILE *fp;
  signed int size;
  signed int found = 0;
  struct stat s;
  signed int return_value_stat$1;
  signed int return_value_stat$2;
  signed int return_value_fscanf$3;
  signed int tmp_statement_expression$4;
  signed int tmp_statement_expression$8;
  signed int tmp_statement_expression$6;
  unsigned long int return_value_strlen$10;
  if((signed int)debugfileprefix[0l] == 0)
  {
    return_value_stat$1=stat("/sys/kernel/debug/tracing", &s);
    if(return_value_stat$1 == 0)
    {
      if(!((61440u & s.st_mode) == 16384u))
        goto __CPROVER_DUMP_L1;

      strcpy(debugfileprefix, "/sys/kernel/debug/tracing/");
    }

    else
    {

    __CPROVER_DUMP_L1:
      ;
      return_value_stat$2=stat("/debug/tracing", &s);
      if(return_value_stat$2 == 0)
      {
        if(!((61440u & s.st_mode) == 16384u))
          goto __CPROVER_DUMP_L2;

        strcpy(debugfileprefix, "/debug/tracing/");
      }

      else
      {

      __CPROVER_DUMP_L2:
        ;
        fp=fopen("/proc/mounts", "r");
        if(!(fp == ((struct _IO_FILE *)NULL)))
        {
          do
          {
            return_value_fscanf$3=fscanf(fp, "%*s %256s %99s %*s %*d %*d\n", (const void *)debugfileprefix, (const void *)type);
            if(!(return_value_fscanf$3 == 2))
              break;

            unsigned long int get_debugfileprefix$$1$$3$$1$$__s1_len;
            unsigned long int get_debugfileprefix$$1$$3$$1$$__s2_len;
            signed int return_value___builtin_strcmp$5;
            return_value___builtin_strcmp$5=__builtin_strcmp(type, "debugfs");
            tmp_statement_expression$4 = return_value___builtin_strcmp$5;
            if(tmp_statement_expression$4 == 0)
            {
              found = 1;
              break;
            }

            unsigned long int get_debugfileprefix$$1$$3$$3$$__s1_len;
            unsigned long int get_debugfileprefix$$1$$3$$3$$__s2_len;
            signed int return_value___builtin_strcmp$9;
            return_value___builtin_strcmp$9=__builtin_strcmp(debugfileprefix, "/sys/kernel/debug");
            tmp_statement_expression$8 = return_value___builtin_strcmp$9;
            if(tmp_statement_expression$8 == 0)
            {
              unsigned long int __s1_len;
              unsigned long int __s2_len;
              signed int return_value___builtin_strcmp$7;
              return_value___builtin_strcmp$7=__builtin_strcmp(type, "systemd");
              tmp_statement_expression$6 = return_value___builtin_strcmp$7;
              if(tmp_statement_expression$6 == 0)
              {
                found = 1;
                break;
              }

            }

          }
          while((_Bool)1);
          fclose(fp);
          if(found == 0)
            debugfileprefix[(signed long int)0] = (char)0;

          else
          {
            return_value_strlen$10=strlen(debugfileprefix);
            size = (signed int)(sizeof(char [256l]) /*256ul*/  - return_value_strlen$10);
            __builtin_strncat(debugfileprefix, "/tracing/", (unsigned long int)size);
          }
        }

      }
    }
  }


out:
  ;
  return debugfileprefix;
}

// get_tracers
// file src/lib/rt-utils.c line 121
signed int get_tracers(char ***list)
{
  signed int ret;
  struct _IO_FILE *fp;
  char buffer[1024l];
  char *prefix;
  prefix=get_debugfileprefix();
  char *tmpbuf = (char *)(void *)0;
  char *ptr;
  signed int tmpsz = 0;
  unsigned long int return_value_fread$2;
  signed int tmp_post$5;
  if(!(tracer_list == ((char **)NULL)))
  {
    *list = tracer_list;
    return num_tracers;
  }

  else
  {
    sprintf(buffer, "%savailable_tracers", prefix);
    fp=fopen(buffer, "r");
    if(fp == ((struct _IO_FILE *)NULL))
      fatal("Can't open %s for reading\n", (const void *)buffer);

    void *return_value_malloc$1;
    return_value_malloc$1=malloc((unsigned long int)1024);
    tmpbuf = (char *)return_value_malloc$1;
    ptr = tmpbuf;
    if(ptr == ((char *)NULL))
      fatal("error allocating initial space for tracer list\n");

    do
    {
      return_value_fread$2=fread((void *)buffer, sizeof(char) /*1ul*/ , (unsigned long int)1024, fp);
      ret = (signed int)return_value_fread$2;
      if(ret == 0)
        break;

      if(!(tmpbuf + (signed long int)tmpsz >= ptr + (signed long int)ret + 1l))
      {
        void *return_value_realloc$3;
        return_value_realloc$3=realloc((void *)tmpbuf, (unsigned long int)(tmpsz + 1024));
        tmpbuf = (char *)return_value_realloc$3;
        if(tmpbuf == ((char *)NULL))
          fatal("error allocating space for list of valid tracers\n");

        tmpsz = tmpsz + 1024;
      }

      __builtin_strncpy(ptr, buffer, (unsigned long int)ret);
      ptr = ptr + (signed long int)ret;
    }
    while((_Bool)1);
    fclose(fp);
    if(tmpsz == 0)
      fatal("error reading available tracers\n");

    tracer_buffer = tmpbuf;
    void *return_value_malloc$4;
    return_value_malloc$4=malloc(sizeof(char *) /*8ul*/ );
    tracer_list = (char **)return_value_malloc$4;
    if(tracer_list == ((char **)NULL))
      fatal("error allocatinging tracer list buffer\n");

    ptr=strtok(tmpbuf, " \t\n\r");
    do
    {
      tmp_post$5 = num_tracers;
      num_tracers = num_tracers + 1;
      tracer_list[(signed long int)tmp_post$5] = ptr;
      void *return_value_realloc$6;
      return_value_realloc$6=realloc((void *)tracer_list, sizeof(char *) /*8ul*/  * (unsigned long int)(num_tracers + 1));
      tracer_list = (char **)return_value_realloc$6;
      tracer_list[(signed long int)num_tracers] = (char *)(void *)0;
      ptr=strtok((char *)(void *)0, " \t\n\r");
    }
    while(!(ptr == ((char *)NULL)));
    *list = tracer_list;
    return num_tracers;
  }
}

// gettid
// file src/lib/rt-utils.c line 320
signed int gettid(void)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)186);
  return (signed int)return_value_syscall$1;
}

// info
// file src/lib/error.c line 59
void info(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("INFO: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
}

// main
// file src/ptsematest/ptsematest.c line 298
signed int main(signed int argc, char **argv)
{
  signed int i;
  signed int max_cpus;
  signed long int return_value_sysconf$1;
  return_value_sysconf$1=sysconf(83);
  max_cpus = (signed int)return_value_sysconf$1;
  signed int oldsamples = 1;
  struct params *receiver = (struct params *)(void *)0;
  struct params *sender = (struct params *)(void *)0;
  struct anonymous$2 sigset;
  struct timespec maindelay;
  process_options(argc, argv);
  signed int return_value_check_privs$2;
  return_value_check_privs$2=check_privs();
  void *return_value_calloc$6;
  void *return_value_calloc$7;
  if(!(return_value_check_privs$2 == 0))
    return 1;

  else
  {
    signed int return_value_mlockall$3;
    return_value_mlockall$3=mlockall(1 | 2);
    if(return_value_mlockall$3 == -1)
    {
      perror("mlockall");
      return 1;
    }

    else
    {
      signal(2, sighand);
      signal(15, sighand);
      void *return_value_calloc$4;
      return_value_calloc$4=calloc((unsigned long int)num_threads, sizeof(struct params) /*656ul*/ );
      receiver = (struct params *)return_value_calloc$4;
      void *return_value_calloc$5;
      return_value_calloc$5=calloc((unsigned long int)num_threads, sizeof(struct params) /*656ul*/ );
      sender = (struct params *)return_value_calloc$5;
      if(!(receiver == ((struct params *)NULL)) && !(sender == ((struct params *)NULL)))
      {
        return_value_calloc$6=calloc((unsigned long int)num_threads, sizeof(union anonymous) /*40ul*/ );
        testmutex = (union anonymous *)return_value_calloc$6;
        return_value_calloc$7=calloc((unsigned long int)num_threads, sizeof(union anonymous) /*40ul*/ );
        syncmutex = (union anonymous *)return_value_calloc$7;
        if(!(syncmutex == ((union anonymous *)NULL)) && !(testmutex == ((union anonymous *)NULL)))
        {
          i = 0;
          for( ; !(i >= num_threads); i = i + 1)
          {
            (receiver + (signed long int)i)->mindiff = (unsigned int)0x7fffffff * 2U + 1U;
            (receiver + (signed long int)i)->maxdiff = (unsigned int)0;
            (receiver + (signed long int)i)->sumdiff = 0.0;
            pthread_mutex_init(&testmutex[(signed long int)i], (const union anonymous$0 *)(void *)0);
            pthread_mutex_init(&syncmutex[(signed long int)i], (const union anonymous$0 *)(void *)0);
            pthread_mutex_lock(&testmutex[(signed long int)i]);
            (receiver + (signed long int)i)->num = i;
            (receiver + (signed long int)i)->cpu = i;
            switch(setaffinity)
            {
              case 0:
              {
                (receiver + (signed long int)i)->cpu = -1;
                break;
              }
              case 1:
              {
                (receiver + (signed long int)i)->cpu = affinity;
                break;
              }
              case 2:
                (receiver + (signed long int)i)->cpu = i % max_cpus;
            }
            (receiver + (signed long int)i)->priority = priority;
            (receiver + (signed long int)i)->tracelimit = tracelimit;
            if(sameprio == 0 && priority >= 2)
              priority = priority - 1;

            (receiver + (signed long int)i)->delay.tv_sec = (signed long int)(interval / 1000000);
            (receiver + (signed long int)i)->delay.tv_nsec = (signed long int)((interval % 1000000) * 1000);
            interval = interval + distance;
            (receiver + (signed long int)i)->max_cycles = max_cycles;
            (receiver + (signed long int)i)->sender = 0;
            (receiver + (signed long int)i)->neighbor = &sender[(signed long int)i];
            pthread_create(&(receiver + (signed long int)i)->threadid, (const union pthread_attr_t *)(void *)0, semathread, (void *)&receiver[(signed long int)i]);
            memcpy((void *)&sender[(signed long int)i], (const void *)&receiver[(signed long int)i], sizeof(struct params) /*656ul*/ );
            (sender + (signed long int)i)->sender = 1;
            (sender + (signed long int)i)->neighbor = &receiver[(signed long int)i];
            pthread_create(&(sender + (signed long int)i)->threadid, (const union pthread_attr_t *)(void *)0, semathread, (void *)&sender[(signed long int)i]);
          }
          maindelay.tv_sec = (signed long int)0;
          maindelay.tv_nsec = (signed long int)50000000;
          while(shutdown == 0)
          {
            signed int printed;
            signed int errorlines = 0;
            i = 0;
            for( ; !(i >= num_threads); i = i + 1)
              shutdown = shutdown | (receiver + (signed long int)i)->shutdown | (sender + (signed long int)i)->shutdown;
            if(!(shutdown == 0) || !(oldsamples >= receiver->samples))
            {
              i = 0;
              for( ; !(i >= num_threads); i = i + 1)
                printf("#%1d: ID%d, P%d, CPU%d, I%ld; #%1d: ID%d, P%d, CPU%d, Cycles %d\n", i * 2, (receiver + (signed long int)i)->tid, (receiver + (signed long int)i)->priority, (receiver + (signed long int)i)->cpu, (receiver + (signed long int)i)->delay.tv_nsec / (signed long int)1000, i * 2 + 1, (sender + (signed long int)i)->tid, (sender + (signed long int)i)->priority, (sender + (signed long int)i)->cpu, (sender + (signed long int)i)->samples);
              i = 0;
              for( ; !(i >= num_threads); i = i + 1)
              {
                printf("#%d -> #%d, Min %4d, Cur %4d, Avg %4d, Max %4d\n", i * 2 + 1, i * 2, (receiver + (signed long int)i)->mindiff, (signed int)(receiver + (signed long int)i)->diff.tv_usec, (signed int)((receiver + (signed long int)i)->sumdiff / (double)(receiver + (signed long int)i)->samples + 0.5), (receiver + (signed long int)i)->maxdiff);
                if(!((signed int)(receiver + (signed long int)i)->error[0l] == 0))
                {
                  printf("%s", (const void *)(receiver + (signed long int)i)->error);
                  errorlines = errorlines + 1;
                  (receiver + (signed long int)i)->error[(signed long int)0] = (char)0;
                }

                if(!((signed int)(sender + (signed long int)i)->error[0l] == 0))
                {
                  printf("%s", (const void *)(sender + (signed long int)i)->error);
                  errorlines = errorlines + 1;
                  (receiver + (signed long int)i)->error[(signed long int)0] = (char)0;
                }

              }
              printed = 1;
            }

            else
              printed = 0;
            sigemptyset(&sigset);
            sigaddset(&sigset, 15);
            sigaddset(&sigset, 2);
            pthread_sigmask(2, &sigset, (struct anonymous$2 *)(void *)0);
            nanosleep(&maindelay, (struct timespec *)(void *)0);
            sigemptyset(&sigset);
            pthread_sigmask(2, &sigset, (struct anonymous$2 *)(void *)0);
            if(shutdown == 0 && !(printed == 0))
              printf("\033[%dA", num_threads * 2 + errorlines);

          }
          i = 0;
          for( ; !(i >= num_threads); i = i + 1)
          {
            (receiver + (signed long int)i)->shutdown = 1;
            (sender + (signed long int)i)->shutdown = 1;
            pthread_mutex_unlock(&testmutex[(signed long int)i]);
            pthread_mutex_unlock(&syncmutex[(signed long int)i]);
          }
          nanosleep(&(receiver + (signed long int)0)->delay, (struct timespec *)(void *)0);
          i = 0;
          for( ; !(i >= num_threads); i = i + 1)
          {
            if((receiver + (signed long int)i)->stopped == 0)
              pthread_kill((receiver + (signed long int)i)->threadid, 15);

            if((sender + (signed long int)i)->stopped == 0)
              pthread_kill((sender + (signed long int)i)->threadid, 15);

          }
          i = 0;
          for( ; !(i >= num_threads); i = i + 1)
          {
            pthread_mutex_destroy(&testmutex[(signed long int)i]);
            pthread_mutex_destroy(&syncmutex[(signed long int)i]);
          }
        }

      }


    nomem:
      ;
      return 0;
    }
  }
}

// mount_debugfs
// file src/lib/rt-utils.c line 86
signed int mount_debugfs(char *path)
{
  char *mountpoint = path;
  char cmd[256l];
  char *prefix;
  signed int ret;
  prefix=get_debugfileprefix();
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(prefix);
  if(!(return_value_strlen$1 == 0ul))
  {
    info("debugfs mountpoint: %s\n", prefix);
    return 0;
  }

  else
  {
    if(mountpoint == ((char *)NULL))
      mountpoint = "/sys/kernel/debug";

    sprintf(cmd, "mount -t debugfs debugfs %s", mountpoint);
    ret=system(cmd);
    if(!(ret == 0))
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      char *return_value_strerror$3;
      return_value_strerror$3=strerror(*return_value___errno_location$2);
      fprintf(stderr, "Error mounting debugfs at %s: %s\n", mountpoint, return_value_strerror$3);
      return -1;
    }

    return 0;
  }
}

// policy_to_string
// file src/lib/rt-utils.c line 282
const char * policy_to_string(signed int policy)
{
  switch(policy)
  {
    case 0:
      return "SCHED_OTHER";
    case 1:
      return "SCHED_FIFO";
    case 2:
      return "SCHED_RR";
    case 3:
      return "SCHED_BATCH";
    case 5:
      return "SCHED_IDLE";
    case 6:
      return "SCHED_DEADLINE";
    default:
      return "unknown";
  }
}

// process_options
// file src/ptsematest/ptsematest.c line 198
static void process_options(signed int argc, char **argv)
{
  signed int error = 0;
  signed int max_cpus;
  signed long int return_value_sysconf$1;
  return_value_sysconf$1=sysconf(83);
  max_cpus = (signed int)return_value_sysconf$1;
  _Bool tmp_if_expr$3;
  signed int return_value_atoi$2;
  _Bool tmp_if_expr$5;
  signed int return_value_atoi$4;
  do
  {
    signed int option_index = 0;
    signed int c;
    static struct option long_options[10l] = { { .name="affinity", .has_arg=2, .flag=(signed int *)(void *)0, .val=97 },
    { .name="breaktrace", .has_arg=1, .flag=(signed int *)(void *)0, .val=98 },
    { .name="distance", .has_arg=1, .flag=(signed int *)(void *)0, .val=100 },
    { .name="interval", .has_arg=1, .flag=(signed int *)(void *)0, .val=105 },
    { .name="loops", .has_arg=1, .flag=(signed int *)(void *)0, .val=108 },
    { .name="priority", .has_arg=1, .flag=(signed int *)(void *)0, .val=112 },
    { .name="smp", .has_arg=0, .flag=(signed int *)(void *)0, .val=83 },
    { .name="threads", .has_arg=2, .flag=(signed int *)(void *)0, .val=116 },
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=63 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
    c=getopt_long(argc, argv, "a::b:d:i:l:p:St::", long_options, &option_index);
    if(c == -1)
      break;

    switch(c)
    {
      case 97:
      {
        if(!(smp == 0))
        {
          warn("-a ignored due to --smp\n");
          break;
        }

        if(!(optarg == ((char *)NULL)))
        {
          affinity=atoi(optarg);
          setaffinity = 1;
        }

        else
        {
          if(!(optind >= argc))
          {
            return_value_atoi$2=atoi(argv[(signed long int)optind]);
            tmp_if_expr$3 = return_value_atoi$2 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$3 = (_Bool)0;
          if(tmp_if_expr$3)
          {
            affinity=atoi(argv[(signed long int)optind]);
            setaffinity = 1;
          }

          else
            setaffinity = 2;
        }
        break;
      }
      case 98:
      {
        tracelimit=atoi(optarg);
        break;
      }
      case 100:
      {
        distance=atoi(optarg);
        break;
      }
      case 105:
      {
        interval=atoi(optarg);
        break;
      }
      case 108:
      {
        max_cycles=atoi(optarg);
        break;
      }
      case 112:
      {
        priority=atoi(optarg);
        break;
      }
      case 83:
      {
        smp = 1;
        num_threads = max_cpus;
        setaffinity = 2;
        break;
      }
      case 116:
      {
        if(!(smp == 0))
        {
          warn("-t ignored due to --smp\n");
          break;
        }

        if(!(optarg == ((char *)NULL)))
          num_threads=atoi(optarg);

        else
        {
          if(!(optind >= argc))
          {
            return_value_atoi$4=atoi(argv[(signed long int)optind]);
            tmp_if_expr$5 = return_value_atoi$4 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$5 = (_Bool)0;
          if(tmp_if_expr$5)
            num_threads=atoi(argv[(signed long int)optind]);

          else
            num_threads = max_cpus;
        }
        break;
      }
      case 63:
        error = 1;
    }
  }
  while((_Bool)1);
  if(setaffinity == 1)
  {
    if(!(affinity >= 0))
      error = 1;

    if(affinity >= max_cpus)
    {
      fprintf(stderr, "ERROR: CPU #%d not found, only %d CPUs available\n", affinity, max_cpus);
      error = 1;
    }

  }

  if(num_threads >= 256 || !(num_threads >= 0))
    error = 1;

  if(priority >= 100 || !(priority >= 0))
    error = 1;

  if(!(num_threads >= 1))
    error = 1;

  if(!(priority == 0) && !(smp == 0))
    sameprio = 1;

  if(!(error == 0))
    display_help();

}

// sched_getattr
// file src/lib/rt-sched.c line 37
signed int sched_getattr(signed int pid, struct sched_attr *attr, unsigned int size, unsigned int flags)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)315, pid, attr, size, flags);
  return (signed int)return_value_syscall$1;
}

// sched_setattr
// file src/lib/rt-sched.c line 30
signed int sched_setattr(signed int pid, struct sched_attr *attr, unsigned int flags)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)314, pid, attr, flags);
  return (signed int)return_value_syscall$1;
}

// semathread
// file src/ptsematest/ptsematest.c line 77
void * semathread(void *param)
{
  signed int mustgetcpu = 0;
  signed int first = 1;
  struct params *par = (struct params *)param;
  struct anonymous$1 mask;
  signed int policy = 1;
  struct sched_param schedp;
  memset((void *)&schedp, 0, sizeof(struct sched_param) /*4ul*/ );
  schedp.__sched_priority = par->priority;
  sched_setscheduler(0, policy, &schedp);
  if(!(par->cpu == -1))
  {
    do
      __builtin_memset((void *)&mask, 0, sizeof(struct anonymous$1) /*128ul*/ );
    while((_Bool)0);
    unsigned long int __cpu = (unsigned long int)par->cpu;
    if(!(__cpu / 8ul >= sizeof(struct anonymous$1) /*128ul*/ ))
      ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

    else
      (unsigned long int)0;
    signed int return_value_sched_setaffinity$1;
    return_value_sched_setaffinity$1=sched_setaffinity(0, sizeof(struct anonymous$1) /*128ul*/ , &mask);
    if(return_value_sched_setaffinity$1 == -1)
      fprintf(stderr, "WARNING: Could not set CPU affinity to CPU #%d\n", par->cpu);

  }

  else
    mustgetcpu = 1;
  signed long int return_value_syscall$2;
  return_value_syscall$2=syscall((signed long int)186);
  par->tid = (signed int)return_value_syscall$2;
  while(par->shutdown == 0)
    if(!(par->sender == 0))
    {
      pthread_mutex_lock(&syncmutex[(signed long int)par->num]);
      gettimeofday(&par->unblocked, (struct timezone *)(void *)0);
      pthread_mutex_unlock(&testmutex[(signed long int)par->num]);
      par->samples = par->samples + 1;
      if(!(par->max_cycles == 0))
      {
        if(par->samples >= par->max_cycles)
          par->shutdown = 1;

      }

      if(!(mustgetcpu == 0))
        par->cpu=get_cpu();

    }

    else
    {
      if(first == 0)
      {
        pthread_mutex_lock(&syncmutex[(signed long int)par->num]);
        first = 1;
      }

      pthread_mutex_lock(&testmutex[(signed long int)par->num]);
      gettimeofday(&par->received, (struct timezone *)(void *)0);
      par->samples = par->samples + 1;
      do
      {
        (&par->diff)->tv_sec = (&par->received)->tv_sec - (&par->neighbor->unblocked)->tv_sec;
        (&par->diff)->tv_usec = (&par->received)->tv_usec - (&par->neighbor->unblocked)->tv_usec;
        if(!(par->diff.tv_usec >= 0l))
        {
          (&par->diff)->tv_sec = (&par->diff)->tv_sec - 1l;
          (&par->diff)->tv_usec = (&par->diff)->tv_usec + (signed long int)1000000;
        }

      }
      while((_Bool)0);
      if(!(par->diff.tv_usec >= (signed long int)par->mindiff))
        par->mindiff = (unsigned int)par->diff.tv_usec;

      if(!((signed long int)par->maxdiff >= par->diff.tv_usec))
        par->maxdiff = (unsigned int)par->diff.tv_usec;

      par->sumdiff = par->sumdiff + (double)par->diff.tv_usec;
      if(!(par->tracelimit == 0))
      {
        if(!((unsigned int)par->tracelimit >= par->maxdiff))
        {
          char tracing_enabled_file[256l];
          char *return_value_get_debugfileprefix$3;
          return_value_get_debugfileprefix$3=get_debugfileprefix();
          strcpy(tracing_enabled_file, return_value_get_debugfileprefix$3);
          strcat(tracing_enabled_file, "tracing_enabled");
          signed int tracing_enabled;
          tracing_enabled=open(tracing_enabled_file, 01);
          if(tracing_enabled >= 0)
          {
            write(tracing_enabled, (const void *)"0", (unsigned long int)1);
            close(tracing_enabled);
          }

          else
            snprintf(par->error, sizeof(char [512l]) /*512ul*/ , "Could not access %s\n", (const void *)tracing_enabled_file);
          par->shutdown = 1;
          par->neighbor->shutdown = 1;
        }

      }

      if(!(par->max_cycles == 0))
      {
        if(par->samples >= par->max_cycles)
          par->shutdown = 1;

      }

      if(!(mustgetcpu == 0))
        par->cpu=get_cpu();

      nanosleep(&par->delay, (struct timespec *)(void *)0);
      pthread_mutex_unlock(&syncmutex[(signed long int)par->num]);
    }
  par->stopped = 1;
  return (void *)0;
}

// setevent
// file src/lib/rt-utils.c line 204
signed int setevent(char *event, char *val)
{
  char *prefix;
  prefix=get_debugfileprefix();
  char buffer[256l];
  signed int fd;
  signed int ret;
  sprintf(buffer, "%s%s", prefix, event);
  fd=open(buffer, 01);
  if(!(fd >= 0))
  {
    warn("unable to open %s\n", (const void *)buffer);
    return -1;
  }

  else
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(val);
    signed long int return_value_write$2;
    return_value_write$2=write(fd, (const void *)val, return_value_strlen$1);
    ret = (signed int)return_value_write$2;
    if(!(ret >= 0))
    {
      warn("unable to write %s to %s\n", val, (const void *)buffer);
      close(fd);
      return -1;
    }

    else
    {
      close(fd);
      return 0;
    }
  }
}

// sighand
// file src/ptsematest/ptsematest.c line 293
static void sighand(signed int sig)
{
  shutdown = 1;
}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat$1;
  return_value___xstat$1=__xstat(1, __path, __statbuf);
  return return_value___xstat$1;
}

// string_to_policy
// file src/lib/rt-utils.c line 302
unsigned int string_to_policy(const char *str)
{
  signed int tmp_statement_expression$11;
  unsigned long int string_to_policy$$1$$1$$__s1_len;
  unsigned long int string_to_policy$$1$$1$$__s2_len;
  signed int return_value___builtin_strcmp$12;
  return_value___builtin_strcmp$12=__builtin_strcmp(str, "other");
  tmp_statement_expression$11 = return_value___builtin_strcmp$12;
  signed int tmp_statement_expression$9;
  signed int tmp_statement_expression$7;
  signed int tmp_statement_expression$5;
  signed int tmp_statement_expression$3;
  signed int tmp_statement_expression$1;
  if(tmp_statement_expression$11 == 0)
    return (unsigned int)0;

  else
  {
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp$10;
    return_value___builtin_strcmp$10=__builtin_strcmp(str, "fifo");
    tmp_statement_expression$9 = return_value___builtin_strcmp$10;
    if(tmp_statement_expression$9 == 0)
      return (unsigned int)1;

    else
    {
      unsigned long int string_to_policy$$1$$3$$__s1_len;
      unsigned long int string_to_policy$$1$$3$$__s2_len;
      signed int return_value___builtin_strcmp$8;
      return_value___builtin_strcmp$8=__builtin_strcmp(str, "rr");
      tmp_statement_expression$7 = return_value___builtin_strcmp$8;
      if(tmp_statement_expression$7 == 0)
        return (unsigned int)2;

      else
      {
        unsigned long int string_to_policy$$1$$4$$__s1_len;
        unsigned long int string_to_policy$$1$$4$$__s2_len;
        signed int return_value___builtin_strcmp$6;
        return_value___builtin_strcmp$6=__builtin_strcmp(str, "batch");
        tmp_statement_expression$5 = return_value___builtin_strcmp$6;
        if(tmp_statement_expression$5 == 0)
          return (unsigned int)3;

        else
        {
          unsigned long int string_to_policy$$1$$5$$__s1_len;
          unsigned long int string_to_policy$$1$$5$$__s2_len;
          signed int return_value___builtin_strcmp$4;
          return_value___builtin_strcmp$4=__builtin_strcmp(str, "idle");
          tmp_statement_expression$3 = return_value___builtin_strcmp$4;
          if(tmp_statement_expression$3 == 0)
            return (unsigned int)5;

          else
          {
            unsigned long int string_to_policy$$1$$6$$__s1_len;
            unsigned long int string_to_policy$$1$$6$$__s2_len;
            signed int return_value___builtin_strcmp$2;
            return_value___builtin_strcmp$2=__builtin_strcmp(str, "deadline");
            tmp_statement_expression$1 = return_value___builtin_strcmp$2;
            if(tmp_statement_expression$1 == 0)
              return (unsigned int)6;

          }
        }
      }
    }
  }
  return (unsigned int)0;
}

// valid_tracer
// file src/lib/rt-utils.c line 186
signed int valid_tracer(char *tracername)
{
  char **list;
  signed int ntracers;
  signed int i;
  ntracers=get_tracers(&list);
  unsigned long int return_value_strlen$1;
  signed int return_value_strncmp$2;
  if(tracername == ((char *)NULL) || ntracers == 0)
    return 0;

  else
  {
    i = 0;
    for( ; !(i >= ntracers); i = i + 1)
    {
      return_value_strlen$1=strlen(list[(signed long int)i]);
      return_value_strncmp$2=strncmp(list[(signed long int)i], tracername, return_value_strlen$1);
      if(return_value_strncmp$2 == 0)
        return 1;

    }
    return 0;
  }
}

// warn
// file src/include/error.h line 15
void warn(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("WARN: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
}
