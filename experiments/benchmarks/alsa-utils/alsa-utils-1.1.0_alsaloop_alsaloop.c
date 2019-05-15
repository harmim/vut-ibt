// tag-#anon#ST[*{F32}$F32$'data_in'||*{F32}$F32$'data_out'||S64'input_frames'||S64'output_frames'||S64'input_frames_used'||S64'output_frames_gen'||S32'end_of_input'||U32'$pad0'||F64'src_ratio'|]
// file /usr/include/samplerate.h line 42
struct anonymous;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$1;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$0;

// tag-SRC_STATE_tag
// file /usr/include/samplerate.h line 39
struct SRC_STATE_tag;

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

// tag-_slave_type
// file alsaloop.h line 56
enum _slave_type { SLAVE_TYPE_AUTO=0, SLAVE_TYPE_ON=1, SLAVE_TYPE_OFF=2, SLAVE_TYPE_LAST=2 };

// tag-_snd_ctl
// file /usr/include/alsa/control.h line 214
struct _snd_ctl;

// tag-_snd_ctl_elem_id
// file /usr/include/alsa/control.h line 57
struct _snd_ctl_elem_id;

// tag-_snd_ctl_elem_iface
// file /usr/include/alsa/control.h line 91
enum _snd_ctl_elem_iface { SND_CTL_ELEM_IFACE_CARD=0, SND_CTL_ELEM_IFACE_HWDEP=1, SND_CTL_ELEM_IFACE_MIXER=2, SND_CTL_ELEM_IFACE_PCM=3, SND_CTL_ELEM_IFACE_RAWMIDI=4, SND_CTL_ELEM_IFACE_TIMER=5, SND_CTL_ELEM_IFACE_SEQUENCER=6, SND_CTL_ELEM_IFACE_LAST=6 };

// tag-_snd_ctl_elem_info
// file /usr/include/alsa/control.h line 63
struct _snd_ctl_elem_info;

// tag-_snd_ctl_elem_type
// file /usr/include/alsa/control.h line 72
enum _snd_ctl_elem_type { SND_CTL_ELEM_TYPE_NONE=0, SND_CTL_ELEM_TYPE_BOOLEAN=1, SND_CTL_ELEM_TYPE_INTEGER=2, SND_CTL_ELEM_TYPE_ENUMERATED=3, SND_CTL_ELEM_TYPE_BYTES=4, SND_CTL_ELEM_TYPE_IEC958=5, SND_CTL_ELEM_TYPE_INTEGER64=6, SND_CTL_ELEM_TYPE_LAST=6 };

// tag-_snd_ctl_elem_value
// file /usr/include/alsa/control.h line 66
struct _snd_ctl_elem_value;

// tag-_snd_ctl_event
// file /usr/include/alsa/control.h line 69
struct _snd_ctl_event;

// tag-_snd_ctl_event_type
// file /usr/include/alsa/control.h line 110
enum _snd_ctl_event_type { SND_CTL_EVENT_ELEM=0, SND_CTL_EVENT_LAST=0 };

// tag-_snd_output
// file /usr/include/alsa/output.h line 54
struct _snd_output;

// tag-_snd_pcm
// file /usr/include/alsa/pcm.h line 374
struct _snd_pcm;

// tag-_snd_pcm_access
// file /usr/include/alsa/pcm.h line 108
enum _snd_pcm_access { SND_PCM_ACCESS_MMAP_INTERLEAVED=0, SND_PCM_ACCESS_MMAP_NONINTERLEAVED=1, SND_PCM_ACCESS_MMAP_COMPLEX=2, SND_PCM_ACCESS_RW_INTERLEAVED=3, SND_PCM_ACCESS_RW_NONINTERLEAVED=4, SND_PCM_ACCESS_LAST=4 };

// tag-_snd_pcm_format
// file /usr/include/alsa/pcm.h line 123
enum _snd_pcm_format { SND_PCM_FORMAT_UNKNOWN=-1, SND_PCM_FORMAT_S8=0, SND_PCM_FORMAT_U8=1, SND_PCM_FORMAT_S16_LE=2, SND_PCM_FORMAT_S16_BE=3, SND_PCM_FORMAT_U16_LE=4, SND_PCM_FORMAT_U16_BE=5, SND_PCM_FORMAT_S24_LE=6, SND_PCM_FORMAT_S24_BE=7, SND_PCM_FORMAT_U24_LE=8, SND_PCM_FORMAT_U24_BE=9, SND_PCM_FORMAT_S32_LE=10, SND_PCM_FORMAT_S32_BE=11, SND_PCM_FORMAT_U32_LE=12, SND_PCM_FORMAT_U32_BE=13, SND_PCM_FORMAT_FLOAT_LE=14, SND_PCM_FORMAT_FLOAT_BE=15, SND_PCM_FORMAT_FLOAT64_LE=16, SND_PCM_FORMAT_FLOAT64_BE=17, SND_PCM_FORMAT_IEC958_SUBFRAME_LE=18, SND_PCM_FORMAT_IEC958_SUBFRAME_BE=19, SND_PCM_FORMAT_MU_LAW=20, SND_PCM_FORMAT_A_LAW=21, SND_PCM_FORMAT_IMA_ADPCM=22, SND_PCM_FORMAT_MPEG=23, SND_PCM_FORMAT_GSM=24, SND_PCM_FORMAT_SPECIAL=31, SND_PCM_FORMAT_S24_3LE=32, SND_PCM_FORMAT_S24_3BE=33, SND_PCM_FORMAT_U24_3LE=34, SND_PCM_FORMAT_U24_3BE=35, SND_PCM_FORMAT_S20_3LE=36, SND_PCM_FORMAT_S20_3BE=37, SND_PCM_FORMAT_U20_3LE=38, SND_PCM_FORMAT_U20_3BE=39, SND_PCM_FORMAT_S18_3LE=40, SND_PCM_FORMAT_S18_3BE=41, SND_PCM_FORMAT_U18_3LE=42, SND_PCM_FORMAT_U18_3BE=43, SND_PCM_FORMAT_G723_24=44, SND_PCM_FORMAT_G723_24_1B=45, SND_PCM_FORMAT_G723_40=46, SND_PCM_FORMAT_G723_40_1B=47, SND_PCM_FORMAT_DSD_U8=48, SND_PCM_FORMAT_DSD_U16_LE=49, SND_PCM_FORMAT_DSD_U32_LE=50, SND_PCM_FORMAT_DSD_U16_BE=51, SND_PCM_FORMAT_DSD_U32_BE=52, SND_PCM_FORMAT_LAST=52, SND_PCM_FORMAT_S16=2, SND_PCM_FORMAT_U16=4, SND_PCM_FORMAT_S24=6, SND_PCM_FORMAT_U24=8, SND_PCM_FORMAT_S32=10, SND_PCM_FORMAT_U32=12, SND_PCM_FORMAT_FLOAT=14, SND_PCM_FORMAT_FLOAT64=16, SND_PCM_FORMAT_IEC958_SUBFRAME=18 };

// tag-_snd_pcm_hw_params
// file /usr/include/alsa/pcm.h line 62
struct _snd_pcm_hw_params;

// tag-_snd_pcm_info
// file /usr/include/alsa/pcm.h line 46
struct _snd_pcm_info;

// tag-_snd_pcm_state
// file /usr/include/alsa/pcm.h line 273
enum _snd_pcm_state { SND_PCM_STATE_OPEN=0, SND_PCM_STATE_SETUP=1, SND_PCM_STATE_PREPARED=2, SND_PCM_STATE_RUNNING=3, SND_PCM_STATE_XRUN=4, SND_PCM_STATE_DRAINING=5, SND_PCM_STATE_PAUSED=6, SND_PCM_STATE_SUSPENDED=7, SND_PCM_STATE_DISCONNECTED=8, SND_PCM_STATE_LAST=8 };

// tag-_snd_pcm_stream
// file /usr/include/alsa/pcm.h line 99
enum _snd_pcm_stream { SND_PCM_STREAM_PLAYBACK=0, SND_PCM_STREAM_CAPTURE=1, SND_PCM_STREAM_LAST=1 };

// tag-_snd_pcm_sw_params
// file /usr/include/alsa/pcm.h line 65
struct _snd_pcm_sw_params;

// tag-_sync_type
// file alsaloop.h line 45
enum _sync_type { SYNC_TYPE_NONE=0, SYNC_TYPE_SIMPLE=1, SYNC_TYPE_CAPTRATESHIFT=2, SYNC_TYPE_PLAYRATESHIFT=3, SYNC_TYPE_SAMPLERATE=4, SYNC_TYPE_AUTO=5, SYNC_TYPE_LAST=5 };

// tag-loopback
// file alsaloop.h line 85
struct loopback;

// tag-loopback_control
// file alsaloop.h line 63
struct loopback_control;

// tag-loopback_handle
// file alsaloop.h line 84
struct loopback_handle;

// tag-loopback_mixer
// file alsaloop.h line 69
struct loopback_mixer;

// tag-loopback_ossmixer
// file alsaloop.h line 76
struct loopback_ossmixer;

// tag-loopback_thread
// file alsaloop.c line 37
struct loopback_thread;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sched_param
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 72
struct sched_param;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// add_loop
// file alsaloop.c line 229
static void add_loop(struct loopback *loop);
// add_mixers
// file alsaloop.c line 260
static signed int add_mixers(struct loopback *loop, char **mixers, signed int mixers_count);
// add_oss_mixers
// file alsaloop.c line 298
static signed int add_oss_mixers(struct loopback *loop, char **mixers, signed int mixers_count);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// buf_add
// file pcmjob.c line 595
static void buf_add(struct loopback *loop, unsigned long int count);
// buf_add_src
// file pcmjob.c line 505
static void buf_add_src(struct loopback *loop);
// buf_avail
// file pcmjob.c line 450
static inline unsigned long int buf_avail(struct loopback_handle *lhandle);
// buf_remove
// file pcmjob.c line 455
static void buf_remove(struct loopback *loop, unsigned long int count);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closeit
// file pcmjob.c line 1245
static signed int closeit(struct loopback_handle *lhandle);
// closelog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 175
extern void closelog(void);
// control_done
// file alsaloop.h line 217
signed int control_done(struct loopback *loop);
// control_event
// file alsaloop.h line 218
signed int control_event(struct loopback_handle *lhandle, struct _snd_ctl_event *ev);
// control_event1
// file control.c line 364
static signed int control_event1(struct loopback *loop, struct loopback_mixer *mix, struct _snd_ctl_event *ev, signed int capture);
// control_id_match
// file alsaloop.h line 215
signed int control_id_match(struct _snd_ctl_elem_id *id1, struct _snd_ctl_elem_id *id2);
// control_init
// file alsaloop.h line 216
signed int control_init(struct loopback *loop);
// control_init1
// file control.c line 160
static signed int control_init1(struct loopback_handle *lhandle, struct loopback_control *ctl);
// control_init2
// file control.c line 240
static signed int control_init2(struct loopback *loop, struct loopback_mixer *mix);
// control_parse_id
// file alsaloop.h line 214
signed int control_parse_id(const char *str, struct _snd_ctl_elem_id *id);
// copy_value
// file control.c line 184
static signed int copy_value(struct loopback_control *dst, struct loopback_control *src);
// create_loopback
// file alsaloop.c line 109
static signed int create_loopback(struct loopback **_handle, struct loopback_handle *play, struct loopback_handle *capt, struct _snd_output *output);
// create_loopback_handle
// file alsaloop.c line 74
static signed int create_loopback_handle(struct loopback_handle **_handle, const char *device, const char *ctldev, const char *id);
// ctl_event_check
// file pcmjob.c line 1686
static signed int ctl_event_check(struct _snd_ctl_elem_value *val, struct _snd_ctl_event *ev);
// daemon
// file /usr/include/unistd.h line 937
extern signed int daemon(signed int, signed int);
// enable_syslog
// file alsaloop.c line 338
static void enable_syslog(void);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fix_format
// file pcmjob.c line 1385
static void fix_format(struct loopback *loop, signed int force);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// frames_to_time
// file pcmjob.c line 97
static inline unsigned long long int frames_to_time(unsigned int rate, unsigned long int frames);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeit
// file pcmjob.c line 1238
static signed int freeit(struct loopback_handle *lhandle);
// freeloop
// file pcmjob.c line 1335
static void freeloop(struct loopback *loop);
// get_active
// file pcmjob.c line 1075
static signed int get_active(struct loopback_handle *lhandle);
// get_channels
// file pcmjob.c line 1117
static signed int get_channels(struct loopback_handle *lhandle);
// get_format
// file pcmjob.c line 1089
static signed int get_format(struct loopback_handle *lhandle);
// get_queued_capture_samples
// file pcmjob.c line 1674
static signed long int get_queued_capture_samples(struct loopback *loop);
// get_queued_playback_samples
// file pcmjob.c line 1659
static signed long int get_queued_playback_samples(struct loopback *loop);
// get_rate
// file pcmjob.c line 1103
static signed int get_rate(struct loopback_handle *lhandle);
// get_whole_latency
// file pcmjob.c line 91
static inline unsigned long int get_whole_latency(struct loopback *loop);
// getcurtimestamp
// file pcmjob.c line 368
static signed int getcurtimestamp(struct timeval *ts);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// handle_ctl_events
// file pcmjob.c line 1700
static signed int handle_ctl_events(struct loopback_handle *lhandle, unsigned short int events);
// help
// file alsaloop.c line 161
void help(void);
// id_str
// file control.c line 29
static char * id_str(struct _snd_ctl_elem_id *id);
// init_handle
// file pcmjob.c line 1262
static signed int init_handle(struct loopback_handle *lhandle, signed int alloc);
// init_mixer_control
// file alsaloop.c line 240
static signed int init_mixer_control(struct loopback_control *control, char *id);
// lhandle_start
// file pcmjob.c line 1377
static void lhandle_start(struct loopback_handle *lhandle);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// my_exit
// file alsaloop.c line 61
static void my_exit(struct loopback_thread *thread, signed int exitcode);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openctl
// file pcmjob.c line 1154
static signed int openctl(struct loopback_handle *lhandle, signed int device, signed int subdevice);
// openctl_elem
// file pcmjob.c line 1131
static void openctl_elem(struct loopback_handle *lhandle, signed int device, signed int subdevice, const char *name, struct _snd_ctl_elem_value **elem);
// openit
// file pcmjob.c line 1193
static signed int openit(struct loopback_handle *lhandle);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// oss_set
// file control.c line 212
static signed int oss_set(struct loopback *loop, struct loopback_ossmixer *ossmix, signed int enable);
// parse_config
// file alsaloop.c line 348
static signed int parse_config(signed int argc, char **argv, struct _snd_output *output, signed int cmdline);
// parse_config_file
// file alsaloop.c line 638
static signed int parse_config_file(const char *file, struct _snd_output *output);
// pcm_open_init_mutex
// file pcmjob.c line 68
static void pcm_open_init_mutex(void);
// pcm_open_lock
// file pcmjob.c line 78
static inline void pcm_open_lock(void);
// pcm_open_unlock
// file pcmjob.c line 85
static inline void pcm_open_unlock(void);
// pcmjob_done
// file alsaloop.h line 207
signed int pcmjob_done(struct loopback *loop);
// pcmjob_init
// file alsaloop.h line 206
signed int pcmjob_init(struct loopback *loop);
// pcmjob_pollfds_handle
// file alsaloop.h line 211
signed int pcmjob_pollfds_handle(struct loopback *loop, struct pollfd *fds);
// pcmjob_pollfds_init
// file alsaloop.h line 210
signed int pcmjob_pollfds_init(struct loopback *loop, struct pollfd *fds);
// pcmjob_start
// file alsaloop.h line 208
signed int pcmjob_start(struct loopback *loop);
// pcmjob_state
// file alsaloop.h line 212
void pcmjob_state(struct loopback *loop);
// pcmjob_stop
// file pcmjob.c line 1608
signed int pcmjob_stop(struct loopback *loop);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_equal
// file /usr/include/pthread.h line 280
extern signed int pthread_equal(unsigned long int, unsigned long int);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_kill
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 35
extern signed int pthread_kill(unsigned long int, signed int);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$0 *, const union anonymous$1 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$0 *);
// pthread_mutexattr_destroy
// file /usr/include/pthread.h line 812
extern signed int pthread_mutexattr_destroy(union anonymous$1 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous$1 *);
// pthread_mutexattr_settype
// file /usr/include/pthread.h line 835
extern signed int pthread_mutexattr_settype(union anonymous$1 *, signed int);
// pthread_once
// file /usr/include/pthread.h line 496
extern signed int pthread_once(signed int *, void (*)(void));
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// readit
// file pcmjob.c line 638
static signed int readit(struct loopback_handle *lhandle);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// remove_samples
// file pcmjob.c line 761
static signed long int remove_samples(struct loopback *loop, signed int capture_preferred, signed long int count);
// sched_get_priority_max
// file /usr/include/sched.h line 68
extern signed int sched_get_priority_max(signed int);
// sched_getparam
// file /usr/include/sched.h line 55
extern signed int sched_getparam(signed int, struct sched_param *);
// sched_setscheduler
// file /usr/include/sched.h line 58
extern signed int sched_setscheduler(signed int, signed int, struct sched_param *);
// send_to_all
// file alsaloop.c line 794
static void send_to_all(signed int sig);
// set_loop_time
// file alsaloop.c line 137
static void set_loop_time(struct loopback *loop, unsigned long int loop_time);
// set_notify
// file pcmjob.c line 1000
static signed int set_notify(struct loopback_handle *lhandle, signed int enable);
// set_rate_shift
// file pcmjob.c line 1020
static signed int set_rate_shift(struct loopback_handle *lhandle, double pitch);
// setparams
// file pcmjob.c line 285
static signed int setparams(struct loopback *loop, unsigned long int bufsize);
// setparams_bufsize
// file pcmjob.c line 162
static signed int setparams_bufsize(struct loopback_handle *lhandle, struct _snd_pcm_hw_params *params, struct _snd_pcm_hw_params *tparams, unsigned long int bufsize);
// setparams_set
// file pcmjob.c line 223
static signed int setparams_set(struct loopback_handle *lhandle, struct _snd_pcm_hw_params *params, struct _snd_pcm_sw_params *swparams, unsigned long int bufsize);
// setparams_stream
// file pcmjob.c line 109
static signed int setparams_stream(struct loopback_handle *lhandle, struct _snd_pcm_hw_params *params);
// setscheduler
// file alsaloop.c line 143
static void setscheduler(void);
// show_handle
// file pcmjob.c line 1944
static void show_handle(struct loopback_handle *lhandle, const char *id);
// showlatency
// file pcmjob.c line 346
static void showlatency(struct _snd_output *out, unsigned long int latency, unsigned int rate, char *prefix);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// signal_handler
// file alsaloop.c line 806
static void signal_handler(signed int sig);
// signal_handler_ignore
// file alsaloop.c line 830
static void signal_handler_ignore(signed int sig);
// signal_handler_state
// file alsaloop.c line 812
static void signal_handler_state(signed int sig);
// snd_ctl_close
// file /usr/include/alsa/control.h line 235
signed int snd_ctl_close(struct _snd_ctl *);
// snd_ctl_elem_add_boolean
// file /usr/include/alsa/control.h line 428
signed int snd_ctl_elem_add_boolean(struct _snd_ctl *, const struct _snd_ctl_elem_id *, unsigned int);
// snd_ctl_elem_add_integer
// file /usr/include/alsa/control.h line 426
signed int snd_ctl_elem_add_integer(struct _snd_ctl *, const struct _snd_ctl_elem_id *, unsigned int, signed long int, signed long int, signed long int);
// snd_ctl_elem_id_get_device
// file /usr/include/alsa/control.h line 315
unsigned int snd_ctl_elem_id_get_device(const struct _snd_ctl_elem_id *);
// snd_ctl_elem_id_get_index
// file /usr/include/alsa/control.h line 318
unsigned int snd_ctl_elem_id_get_index(const struct _snd_ctl_elem_id *);
// snd_ctl_elem_id_get_interface
// file /usr/include/alsa/control.h line 314
enum _snd_ctl_elem_iface snd_ctl_elem_id_get_interface(const struct _snd_ctl_elem_id *);
// snd_ctl_elem_id_get_name
// file /usr/include/alsa/control.h line 317
const char * snd_ctl_elem_id_get_name(const struct _snd_ctl_elem_id *);
// snd_ctl_elem_id_get_numid
// file /usr/include/alsa/control.h line 313
unsigned int snd_ctl_elem_id_get_numid(const struct _snd_ctl_elem_id *);
// snd_ctl_elem_id_get_subdevice
// file /usr/include/alsa/control.h line 316
unsigned int snd_ctl_elem_id_get_subdevice(const struct _snd_ctl_elem_id *);
// snd_ctl_elem_id_malloc
// file /usr/include/alsa/control.h line 309
signed int snd_ctl_elem_id_malloc(struct _snd_ctl_elem_id **);
// snd_ctl_elem_id_set_device
// file /usr/include/alsa/control.h line 321
void snd_ctl_elem_id_set_device(struct _snd_ctl_elem_id *, unsigned int);
// snd_ctl_elem_id_set_index
// file /usr/include/alsa/control.h line 324
void snd_ctl_elem_id_set_index(struct _snd_ctl_elem_id *, unsigned int);
// snd_ctl_elem_id_set_interface
// file /usr/include/alsa/control.h line 320
void snd_ctl_elem_id_set_interface(struct _snd_ctl_elem_id *, enum _snd_ctl_elem_iface);
// snd_ctl_elem_id_set_name
// file /usr/include/alsa/control.h line 323
void snd_ctl_elem_id_set_name(struct _snd_ctl_elem_id *, const char *);
// snd_ctl_elem_id_set_numid
// file /usr/include/alsa/control.h line 319
void snd_ctl_elem_id_set_numid(struct _snd_ctl_elem_id *, unsigned int);
// snd_ctl_elem_id_set_subdevice
// file /usr/include/alsa/control.h line 322
void snd_ctl_elem_id_set_subdevice(struct _snd_ctl_elem_id *, unsigned int);
// snd_ctl_elem_id_sizeof
// file /usr/include/alsa/control.h line 303
unsigned long int snd_ctl_elem_id_sizeof(void);
// snd_ctl_elem_iface_name
// file /usr/include/alsa/control.h line 281
const char * snd_ctl_elem_iface_name(enum _snd_ctl_elem_iface);
// snd_ctl_elem_info
// file /usr/include/alsa/control.h line 247
signed int snd_ctl_elem_info(struct _snd_ctl *, struct _snd_ctl_elem_info *);
// snd_ctl_elem_info_copy
// file /usr/include/alsa/control.h line 386
void snd_ctl_elem_info_copy(struct _snd_ctl_elem_info *, const struct _snd_ctl_elem_info *);
// snd_ctl_elem_info_get_count
// file /usr/include/alsa/control.h line 399
unsigned int snd_ctl_elem_info_get_count(const struct _snd_ctl_elem_info *);
// snd_ctl_elem_info_get_max
// file /usr/include/alsa/control.h line 401
signed long int snd_ctl_elem_info_get_max(const struct _snd_ctl_elem_info *);
// snd_ctl_elem_info_get_min
// file /usr/include/alsa/control.h line 400
signed long int snd_ctl_elem_info_get_min(const struct _snd_ctl_elem_info *);
// snd_ctl_elem_info_get_step
// file /usr/include/alsa/control.h line 402
signed long int snd_ctl_elem_info_get_step(const struct _snd_ctl_elem_info *);
// snd_ctl_elem_info_get_type
// file /usr/include/alsa/control.h line 387
enum _snd_ctl_elem_type snd_ctl_elem_info_get_type(const struct _snd_ctl_elem_info *);
// snd_ctl_elem_info_is_tlv_writable
// file /usr/include/alsa/control.h line 394
signed int snd_ctl_elem_info_is_tlv_writable(const struct _snd_ctl_elem_info *);
// snd_ctl_elem_info_malloc
// file /usr/include/alsa/control.h line 383
signed int snd_ctl_elem_info_malloc(struct _snd_ctl_elem_info **);
// snd_ctl_elem_info_set_id
// file /usr/include/alsa/control.h line 418
void snd_ctl_elem_info_set_id(struct _snd_ctl_elem_info *, const struct _snd_ctl_elem_id *);
// snd_ctl_elem_read
// file /usr/include/alsa/control.h line 248
signed int snd_ctl_elem_read(struct _snd_ctl *, struct _snd_ctl_elem_value *);
// snd_ctl_elem_remove
// file /usr/include/alsa/control.h line 431
signed int snd_ctl_elem_remove(struct _snd_ctl *, struct _snd_ctl_elem_id *);
// snd_ctl_elem_tlv_read
// file /usr/include/alsa/control.h line 252
signed int snd_ctl_elem_tlv_read(struct _snd_ctl *, const struct _snd_ctl_elem_id *, unsigned int *, unsigned int);
// snd_ctl_elem_tlv_write
// file /usr/include/alsa/control.h line 254
signed int snd_ctl_elem_tlv_write(struct _snd_ctl *, const struct _snd_ctl_elem_id *, const unsigned int *);
// snd_ctl_elem_type_name
// file /usr/include/alsa/control.h line 280
const char * snd_ctl_elem_type_name(enum _snd_ctl_elem_type);
// snd_ctl_elem_unlock
// file /usr/include/alsa/control.h line 251
signed int snd_ctl_elem_unlock(struct _snd_ctl *, struct _snd_ctl_elem_id *);
// snd_ctl_elem_value_clear
// file /usr/include/alsa/control.h line 441
void snd_ctl_elem_value_clear(struct _snd_ctl_elem_value *);
// snd_ctl_elem_value_free
// file /usr/include/alsa/control.h line 440
void snd_ctl_elem_value_free(struct _snd_ctl_elem_value *);
// snd_ctl_elem_value_get_boolean
// file /usr/include/alsa/control.h line 458
signed int snd_ctl_elem_value_get_boolean(const struct _snd_ctl_elem_value *, unsigned int);
// snd_ctl_elem_value_get_id
// file /usr/include/alsa/control.h line 444
void snd_ctl_elem_value_get_id(const struct _snd_ctl_elem_value *, struct _snd_ctl_elem_id *);
// snd_ctl_elem_value_get_integer
// file /usr/include/alsa/control.h line 459
signed long int snd_ctl_elem_value_get_integer(const struct _snd_ctl_elem_value *, unsigned int);
// snd_ctl_elem_value_malloc
// file /usr/include/alsa/control.h line 439
signed int snd_ctl_elem_value_malloc(struct _snd_ctl_elem_value **);
// snd_ctl_elem_value_set_boolean
// file /usr/include/alsa/control.h line 463
void snd_ctl_elem_value_set_boolean(struct _snd_ctl_elem_value *, unsigned int, signed long int);
// snd_ctl_elem_value_set_device
// file /usr/include/alsa/control.h line 454
void snd_ctl_elem_value_set_device(struct _snd_ctl_elem_value *, unsigned int);
// snd_ctl_elem_value_set_id
// file /usr/include/alsa/control.h line 451
void snd_ctl_elem_value_set_id(struct _snd_ctl_elem_value *, const struct _snd_ctl_elem_id *);
// snd_ctl_elem_value_set_integer
// file /usr/include/alsa/control.h line 464
void snd_ctl_elem_value_set_integer(struct _snd_ctl_elem_value *, unsigned int, signed long int);
// snd_ctl_elem_value_set_interface
// file /usr/include/alsa/control.h line 453
void snd_ctl_elem_value_set_interface(struct _snd_ctl_elem_value *, enum _snd_ctl_elem_iface);
// snd_ctl_elem_value_set_name
// file /usr/include/alsa/control.h line 456
void snd_ctl_elem_value_set_name(struct _snd_ctl_elem_value *, const char *);
// snd_ctl_elem_value_set_subdevice
// file /usr/include/alsa/control.h line 455
void snd_ctl_elem_value_set_subdevice(struct _snd_ctl_elem_value *, unsigned int);
// snd_ctl_elem_write
// file /usr/include/alsa/control.h line 249
signed int snd_ctl_elem_write(struct _snd_ctl *, struct _snd_ctl_elem_value *);
// snd_ctl_event_elem_get_id
// file /usr/include/alsa/control.h line 286
void snd_ctl_event_elem_get_id(const struct _snd_ctl_event *, struct _snd_ctl_elem_id *);
// snd_ctl_event_elem_get_mask
// file /usr/include/alsa/control.h line 284
unsigned int snd_ctl_event_elem_get_mask(const struct _snd_ctl_event *);
// snd_ctl_event_elem_get_name
// file /usr/include/alsa/control.h line 290
const char * snd_ctl_event_elem_get_name(const struct _snd_ctl_event *);
// snd_ctl_event_get_type
// file /usr/include/alsa/control.h line 354
enum _snd_ctl_event_type snd_ctl_event_get_type(const struct _snd_ctl_event *);
// snd_ctl_event_sizeof
// file /usr/include/alsa/control.h line 344
unsigned long int snd_ctl_event_sizeof(void);
// snd_ctl_open
// file /usr/include/alsa/control.h line 232
signed int snd_ctl_open(struct _snd_ctl **, const char *, signed int);
// snd_ctl_poll_descriptors
// file /usr/include/alsa/control.h line 242
signed int snd_ctl_poll_descriptors(struct _snd_ctl *, struct pollfd *, unsigned int);
// snd_ctl_poll_descriptors_count
// file /usr/include/alsa/control.h line 241
signed int snd_ctl_poll_descriptors_count(struct _snd_ctl *);
// snd_ctl_poll_descriptors_revents
// file /usr/include/alsa/control.h line 243
signed int snd_ctl_poll_descriptors_revents(struct _snd_ctl *, struct pollfd *, unsigned int, unsigned short int *);
// snd_ctl_read
// file /usr/include/alsa/control.h line 275
signed int snd_ctl_read(struct _snd_ctl *, struct _snd_ctl_event *);
// snd_ctl_subscribe_events
// file /usr/include/alsa/control.h line 244
signed int snd_ctl_subscribe_events(struct _snd_ctl *, signed int);
// snd_output_printf
// file /usr/include/alsa/output.h line 69
signed int snd_output_printf(struct _snd_output *, const char *, ...);
// snd_output_stdio_attach
// file /usr/include/alsa/output.h line 65
signed int snd_output_stdio_attach(struct _snd_output **, struct _IO_FILE *, signed int);
// snd_pcm_access_name
// file /usr/include/alsa/pcm.h line 1044
const char * snd_pcm_access_name(const enum _snd_pcm_access);
// snd_pcm_avail_update
// file /usr/include/alsa/pcm.h line 510
signed long int snd_pcm_avail_update(struct _snd_pcm *);
// snd_pcm_close
// file /usr/include/alsa/pcm.h line 479
signed int snd_pcm_close(struct _snd_pcm *);
// snd_pcm_delay
// file /usr/include/alsa/pcm.h line 506
signed int snd_pcm_delay(struct _snd_pcm *, signed long int *);
// snd_pcm_drop
// file /usr/include/alsa/pcm.h line 501
signed int snd_pcm_drop(struct _snd_pcm *);
// snd_pcm_dump
// file /usr/include/alsa/pcm.h line 1062
signed int snd_pcm_dump(struct _snd_pcm *, struct _snd_output *);
// snd_pcm_format_name
// file /usr/include/alsa/pcm.h line 1045
const char * snd_pcm_format_name(const enum _snd_pcm_format);
// snd_pcm_format_physical_width
// file /usr/include/alsa/pcm.h line 1108
signed int snd_pcm_format_physical_width(enum _snd_pcm_format);
// snd_pcm_format_set_silence
// file /usr/include/alsa/pcm.h line 1115
signed int snd_pcm_format_set_silence(enum _snd_pcm_format, void *, unsigned int);
// snd_pcm_format_value
// file /usr/include/alsa/pcm.h line 1049
enum _snd_pcm_format snd_pcm_format_value(const char *);
// snd_pcm_format_width
// file /usr/include/alsa/pcm.h line 1107
signed int snd_pcm_format_width(enum _snd_pcm_format);
// snd_pcm_hw_free
// file /usr/include/alsa/pcm.h line 494
signed int snd_pcm_hw_free(struct _snd_pcm *);
// snd_pcm_hw_params
// file /usr/include/alsa/pcm.h line 493
signed int snd_pcm_hw_params(struct _snd_pcm *, struct _snd_pcm_hw_params *);
// snd_pcm_hw_params_any
// file /usr/include/alsa/pcm.h line 677
signed int snd_pcm_hw_params_any(struct _snd_pcm *, struct _snd_pcm_hw_params *);
// snd_pcm_hw_params_copy
// file /usr/include/alsa/pcm.h line 733
void snd_pcm_hw_params_copy(struct _snd_pcm_hw_params *, const struct _snd_pcm_hw_params *);
// snd_pcm_hw_params_get_buffer_size
// file /usr/include/alsa/pcm.h line 841
signed int snd_pcm_hw_params_get_buffer_size(const struct _snd_pcm_hw_params *, unsigned long int *);
// snd_pcm_hw_params_get_period_size
// file /usr/include/alsa/pcm.h line 803
signed int snd_pcm_hw_params_get_period_size(const struct _snd_pcm_hw_params *, unsigned long int *, signed int *);
// snd_pcm_hw_params_get_rate
// file /usr/include/alsa/pcm.h line 773
signed int snd_pcm_hw_params_get_rate(const struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// snd_pcm_hw_params_set_access
// file /usr/include/alsa/pcm.h line 739
signed int snd_pcm_hw_params_set_access(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_access);
// snd_pcm_hw_params_set_buffer_size_near
// file /usr/include/alsa/pcm.h line 849
signed int snd_pcm_hw_params_set_buffer_size_near(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *);
// snd_pcm_hw_params_set_channels
// file /usr/include/alsa/pcm.h line 765
signed int snd_pcm_hw_params_set_channels(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int);
// snd_pcm_hw_params_set_format
// file /usr/include/alsa/pcm.h line 747
signed int snd_pcm_hw_params_set_format(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_format);
// snd_pcm_hw_params_set_period_size_near
// file /usr/include/alsa/pcm.h line 811
signed int snd_pcm_hw_params_set_period_size_near(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *, signed int *);
// snd_pcm_hw_params_set_rate_near
// file /usr/include/alsa/pcm.h line 781
signed int snd_pcm_hw_params_set_rate_near(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// snd_pcm_hw_params_set_rate_resample
// file /usr/include/alsa/pcm.h line 784
signed int snd_pcm_hw_params_set_rate_resample(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int);
// snd_pcm_hw_params_sizeof
// file /usr/include/alsa/pcm.h line 725
unsigned long int snd_pcm_hw_params_sizeof(void);
// snd_pcm_info
// file /usr/include/alsa/pcm.h line 491
signed int snd_pcm_info(struct _snd_pcm *, struct _snd_pcm_info *);
// snd_pcm_info_free
// file /usr/include/alsa/pcm.h line 650
void snd_pcm_info_free(struct _snd_pcm_info *);
// snd_pcm_info_get_card
// file /usr/include/alsa/pcm.h line 655
signed int snd_pcm_info_get_card(const struct _snd_pcm_info *);
// snd_pcm_info_get_device
// file /usr/include/alsa/pcm.h line 652
unsigned int snd_pcm_info_get_device(const struct _snd_pcm_info *);
// snd_pcm_info_get_subdevice
// file /usr/include/alsa/pcm.h line 653
unsigned int snd_pcm_info_get_subdevice(const struct _snd_pcm_info *);
// snd_pcm_info_malloc
// file /usr/include/alsa/pcm.h line 649
signed int snd_pcm_info_malloc(struct _snd_pcm_info **);
// snd_pcm_open
// file /usr/include/alsa/pcm.h line 470
signed int snd_pcm_open(struct _snd_pcm **, const char *, enum _snd_pcm_stream, signed int);
// snd_pcm_poll_descriptors
// file /usr/include/alsa/pcm.h line 484
signed int snd_pcm_poll_descriptors(struct _snd_pcm *, struct pollfd *, unsigned int);
// snd_pcm_poll_descriptors_count
// file /usr/include/alsa/pcm.h line 483
signed int snd_pcm_poll_descriptors_count(struct _snd_pcm *);
// snd_pcm_poll_descriptors_revents
// file /usr/include/alsa/pcm.h line 485
signed int snd_pcm_poll_descriptors_revents(struct _snd_pcm *, struct pollfd *, unsigned int, unsigned short int *);
// snd_pcm_prepare
// file /usr/include/alsa/pcm.h line 497
signed int snd_pcm_prepare(struct _snd_pcm *);
// snd_pcm_readi
// file /usr/include/alsa/pcm.h line 517
signed long int snd_pcm_readi(struct _snd_pcm *, void *, unsigned long int);
// snd_pcm_resume
// file /usr/include/alsa/pcm.h line 507
signed int snd_pcm_resume(struct _snd_pcm *);
// snd_pcm_start
// file /usr/include/alsa/pcm.h line 500
signed int snd_pcm_start(struct _snd_pcm *);
// snd_pcm_state
// file /usr/include/alsa/pcm.h line 504
enum _snd_pcm_state snd_pcm_state(struct _snd_pcm *);
// snd_pcm_sw_params
// file /usr/include/alsa/pcm.h line 496
signed int snd_pcm_sw_params(struct _snd_pcm *, struct _snd_pcm_sw_params *);
// snd_pcm_sw_params_current
// file /usr/include/alsa/pcm.h line 495
signed int snd_pcm_sw_params_current(struct _snd_pcm *, struct _snd_pcm_sw_params *);
// snd_pcm_sw_params_get_avail_min
// file /usr/include/alsa/pcm.h line 884
signed int snd_pcm_sw_params_get_avail_min(const struct _snd_pcm_sw_params *, unsigned long int *);
// snd_pcm_sw_params_set_avail_min
// file /usr/include/alsa/pcm.h line 883
signed int snd_pcm_sw_params_set_avail_min(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// snd_pcm_sw_params_set_start_threshold
// file /usr/include/alsa/pcm.h line 887
signed int snd_pcm_sw_params_set_start_threshold(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// snd_pcm_sw_params_sizeof
// file /usr/include/alsa/pcm.h line 866
unsigned long int snd_pcm_sw_params_sizeof(void);
// snd_pcm_writei
// file /usr/include/alsa/pcm.h line 516
signed long int snd_pcm_writei(struct _snd_pcm *, const void *, unsigned long int);
// snd_strerror
// file /usr/include/alsa/error.h line 45
const char * snd_strerror(signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// src_delete
// file /usr/include/samplerate.h line 94
struct SRC_STATE_tag * src_delete(struct SRC_STATE_tag *);
// src_float_to_int_array
// file /usr/include/samplerate.h line 189
void src_float_to_int_array(const float *, signed int *, signed int);
// src_float_to_short_array
// file /usr/include/samplerate.h line 186
void src_float_to_short_array(const float *, signed short int *, signed int);
// src_int_to_float_array
// file /usr/include/samplerate.h line 188
void src_int_to_float_array(const signed int *, float *, signed int);
// src_new
// file /usr/include/samplerate.h line 76
struct SRC_STATE_tag * src_new(signed int, signed int, signed int *);
// src_process
// file /usr/include/samplerate.h line 101
signed int src_process(struct SRC_STATE_tag *, struct anonymous *);
// src_short_to_float_array
// file /usr/include/samplerate.h line 185
void src_short_to_float_array(const signed short int *, float *, signed int);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// suspend
// file pcmjob.c line 627
static signed int suspend(struct loopback_handle *lhandle);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// thread_job
// file alsaloop.c line 784
static void thread_job(struct loopback_thread *thread);
// thread_job1
// file alsaloop.c line 708
static void thread_job1(void *_data);
// time_to_frames
// file pcmjob.c line 103
static inline unsigned long int time_to_frames(unsigned int rate, unsigned long long int time);
// timediff
// file alsaloop.c line 215
static signed long int timediff(struct timeval t1, struct timeval t2);
// timediff$link1
// file pcmjob.c line 354
static signed long int timediff$link1(struct timeval t1$link1, struct timeval t2$link1);
// update_pitch
// file pcmjob.c line 1035
void update_pitch(struct loopback *loop);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writeit
// file pcmjob.c line 701
static signed int writeit(struct loopback_handle *lhandle);
// xrun
// file pcmjob.c line 607
static signed int xrun(struct loopback_handle *lhandle);
// xrun_profile
// file pcmjob.c line 394
static inline void xrun_profile(struct loopback *loop);
// xrun_profile0
// file pcmjob.c line 377
static void xrun_profile0(struct loopback *loop);
// xrun_stats
// file pcmjob.c line 444
static inline void xrun_stats(struct loopback *loop);
// xrun_stats0
// file pcmjob.c line 400
static void xrun_stats0(struct loopback *loop);
// xrun_sync
// file pcmjob.c line 791
static signed int xrun_sync(struct loopback *loop);

struct anonymous
{
  // data_in
  float *data_in;
  // data_out
  float *data_out;
  // input_frames
  signed long int input_frames;
  // output_frames
  signed long int output_frames;
  // input_frames_used
  signed long int input_frames_used;
  // output_frames_gen
  signed long int output_frames_gen;
  // end_of_input
  signed int end_of_input;
  // src_ratio
  double src_ratio;
};

union anonymous$1
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

union anonymous$0
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

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct loopback
{
  // id
  char *id;
  // capt
  struct loopback_handle *capt;
  // play
  struct loopback_handle *play;
  // latency
  unsigned long int latency;
  // latency_req
  unsigned int latency_req;
  // latency_reqtime
  unsigned int latency_reqtime;
  // loop_time
  unsigned long int loop_time;
  // loop_limit
  unsigned long long int loop_limit;
  // output
  struct _snd_output *output;
  // state
  struct _snd_output *state;
  // pollfd_count
  signed int pollfd_count;
  // active_pollfd_count
  signed int active_pollfd_count;
  // linked
  unsigned int linked : 1;
  // reinit
  unsigned int reinit : 1;
  // running
  unsigned int running : 1;
  // stop_pending
  unsigned int stop_pending : 1;
  // stop_count
  unsigned long int stop_count;
  // sync
  enum _sync_type sync;
  // slave
  enum _slave_type slave;
  // thread
  signed int thread;
  // wake
  unsigned int wake;
  // pitch
  double pitch;
  // pitch_delta
  double pitch_delta;
  // pitch_diff
  signed long int pitch_diff;
  // pitch_diff_min
  signed long int pitch_diff_min;
  // pitch_diff_max
  signed long int pitch_diff_max;
  // total_queued_count
  unsigned int total_queued_count;
  // tstamp_start
  struct timeval tstamp_start;
  // tstamp_end
  struct timeval tstamp_end;
  // xrun
  unsigned int xrun : 1;
  // xrun_last_update
  struct timeval xrun_last_update;
  // xrun_last_wake0
  struct timeval xrun_last_wake0;
  // xrun_last_wake
  struct timeval xrun_last_wake;
  // xrun_last_check0
  struct timeval xrun_last_check0;
  // xrun_last_check
  struct timeval xrun_last_check;
  // xrun_last_pdelay
  signed long int xrun_last_pdelay;
  // xrun_last_cdelay
  signed long int xrun_last_cdelay;
  // xrun_buf_pcount
  unsigned long int xrun_buf_pcount;
  // xrun_buf_ccount
  unsigned long int xrun_buf_ccount;
  // xrun_out_frames
  unsigned int xrun_out_frames;
  // xrun_max_proctime
  signed long int xrun_max_proctime;
  // xrun_max_missing
  double xrun_max_missing;
  // controls
  struct loopback_mixer *controls;
  // oss_controls
  struct loopback_ossmixer *oss_controls;
  // use_samplerate
  unsigned int use_samplerate : 1;
  // src_enable
  unsigned int src_enable : 1;
  // src_converter_type
  signed int src_converter_type;
  // src_state
  struct SRC_STATE_tag *src_state;
  // src_data
  struct anonymous src_data;
  // src_out_frames
  unsigned int src_out_frames;
};

struct loopback_control
{
  // id
  struct _snd_ctl_elem_id *id;
  // info
  struct _snd_ctl_elem_info *info;
  // value
  struct _snd_ctl_elem_value *value;
};

struct loopback_handle
{
  // loopback
  struct loopback *loopback;
  // device
  char *device;
  // ctldev
  char *ctldev;
  // id
  char *id;
  // card_number
  signed int card_number;
  // handle
  struct _snd_pcm *handle;
  // access
  enum _snd_pcm_access access;
  // format
  enum _snd_pcm_format format;
  // rate
  unsigned int rate;
  // rate_req
  unsigned int rate_req;
  // channels
  unsigned int channels;
  // buffer_size
  unsigned int buffer_size;
  // period_size
  unsigned int period_size;
  // avail_min
  unsigned long int avail_min;
  // buffer_size_req
  unsigned int buffer_size_req;
  // period_size_req
  unsigned int period_size_req;
  // frame_size
  unsigned int frame_size;
  // resample
  unsigned int resample : 1;
  // nblock
  unsigned int nblock : 1;
  // xrun_pending
  unsigned int xrun_pending : 1;
  // pollfd_count
  unsigned int pollfd_count;
  // buf
  char *buf;
  // buf_pos
  unsigned long int buf_pos;
  // buf_count
  unsigned long int buf_count;
  // buf_size
  unsigned long int buf_size;
  // buf_over
  unsigned long int buf_over;
  // max
  unsigned long int max;
  // counter
  unsigned long long int counter;
  // sync_point
  unsigned long int sync_point;
  // last_delay
  signed long int last_delay;
  // pitch
  double pitch;
  // total_queued
  unsigned long int total_queued;
  // ctl
  struct _snd_ctl *ctl;
  // ctl_pollfd_count
  unsigned int ctl_pollfd_count;
  // ctl_notify
  struct _snd_ctl_elem_value *ctl_notify;
  // ctl_rate_shift
  struct _snd_ctl_elem_value *ctl_rate_shift;
  // ctl_active
  struct _snd_ctl_elem_value *ctl_active;
  // ctl_format
  struct _snd_ctl_elem_value *ctl_format;
  // ctl_rate
  struct _snd_ctl_elem_value *ctl_rate;
  // ctl_channels
  struct _snd_ctl_elem_value *ctl_channels;
};

struct loopback_mixer
{
  // skip
  unsigned int skip : 1;
  // src
  struct loopback_control src;
  // dst
  struct loopback_control dst;
  // next
  struct loopback_mixer *next;
};

struct loopback_ossmixer
{
  // skip
  unsigned int skip : 1;
  // alsa_id
  const char *alsa_id;
  // alsa_index
  signed int alsa_index;
  // oss_id
  const char *oss_id;
  // next
  struct loopback_ossmixer *next;
};

struct loopback_thread
{
  // threaded
  signed int threaded;
  // thread
  unsigned long int thread;
  // exitcode
  signed int exitcode;
  // loopbacks
  struct loopback **loopbacks;
  // loopbacks_count
  signed int loopbacks_count;
  // output
  struct _snd_output *output;
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

struct pollfd
{
  // fd
  signed int fd;
  // events
  signed short int events;
  // revents
  signed short int revents;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct sched_param
{
  // __sched_priority
  signed int __sched_priority;
};

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};


// arg_default_wake
// file alsaloop.c line 59
signed int arg_default_wake = 0;
// arg_default_xrun
// file alsaloop.c line 58
signed int arg_default_xrun = 0;
// daemonize
// file alsaloop.c line 49
signed int daemonize = 0;
// loopbacks
// file alsaloop.c line 51
struct loopback **loopbacks = (struct loopback **)(void *)0;
// loopbacks_count
// file alsaloop.c line 52
signed int loopbacks_count = 0;
// main_job
// file alsaloop.c line 57
unsigned long int main_job;
// my_argc
// file alsaloop.c line 54
signed int my_argc = 0;
// my_argv
// file alsaloop.c line 53
char **my_argv = (char **)(void *)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// opterr
// file /usr/include/getopt.h line 76
extern signed int opterr;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// optopt
// file /usr/include/getopt.h line 80
extern signed int optopt;
// pcm_open_mutex
// file pcmjob.c line 66
static union anonymous$0 pcm_open_mutex;
// pcm_open_mutex_once
// file pcmjob.c line 65
static signed int pcm_open_mutex_once = 0;
// quit
// file alsaloop.c line 46
signed int quit = 0;
// src_types
// file pcmjob.c line 56
static const char *src_types[5l] = { "SRC_SINC_BEST_QUALITY", "SRC_SINC_MEDIUM_QUALITY", "SRC_SINC_FASTEST", "SRC_ZERO_ORDER_HOLD", "SRC_LINEAR" };
// state_mutex
// file pcmjob.c line 1942
static union anonymous$0 state_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// sync_types
// file pcmjob.c line 44
static const char *sync_types[6l] = { "NONE", "SIMPLE", "CAPTRATESHIFT", "PLAYRATESHIFT", "SAMPLERATE", "AUTO" };
// threads
// file alsaloop.c line 55
struct loopback_thread *threads;
// threads_count
// file alsaloop.c line 56
signed int threads_count = 0;
// use_syslog
// file alsaloop.c line 50
signed int use_syslog = 0;
// verbose
// file alsaloop.c line 47
signed int verbose = 0;
// workarounds
// file alsaloop.c line 48
signed int workarounds = 0;

// add_loop
// file alsaloop.c line 229
static void add_loop(struct loopback *loop)
{
  void *return_value_realloc$1;
  return_value_realloc$1=realloc((void *)loopbacks, (unsigned long int)(loopbacks_count + 1) * sizeof(struct loopback *) /*8ul*/ );
  loopbacks = (struct loopback **)return_value_realloc$1;
  if(loopbacks == ((struct loopback **)NULL))
  {
    do
      if(!(use_syslog == 0))
        syslog(2, "No enough memory\n");

      else
        fprintf(stderr, "No enough memory\n");
    while((_Bool)0);
    exit(1);
  }

  signed int tmp_post$2 = loopbacks_count;
  loopbacks_count = loopbacks_count + 1;
  loopbacks[(signed long int)tmp_post$2] = loop;
}

// add_mixers
// file alsaloop.c line 260
static signed int add_mixers(struct loopback *loop, char **mixers, signed int mixers_count)
{
  struct loopback_mixer *mixer;
  struct loopback_mixer *last = (struct loopback_mixer *)(void *)0;
  char *str1;
  signed int err;
  char *tmp_if_expr$2;
  char *tmp_if_expr$3;
  char *tmp_if_expr$4;
  while(mixers_count >= 1)
  {
    void *return_value_calloc$1;
    return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct loopback_mixer) /*64ul*/ );
    mixer = (struct loopback_mixer *)return_value_calloc$1;
    if(mixer == ((struct loopback_mixer *)NULL))
      return -12;

    if(!(last == ((struct loopback_mixer *)NULL)))
      last->next = mixer;

    else
      loop->controls = mixer;
    last = mixer;
    str1=strchr(*mixers, 64);
    if(!(str1 == ((char *)NULL)))
      *str1 = (char)0;

    err=init_mixer_control(&mixer->src, *mixers);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Wrong mixer control ID syntax '%s'\n", *mixers);

        else
          fprintf(stderr, "Wrong mixer control ID syntax '%s'\n", *mixers);
      while((_Bool)0);
      return -22;
    }

    if(!(str1 == ((char *)NULL)))
      tmp_if_expr$2 = str1 + (signed long int)1;

    else
      tmp_if_expr$2 = *mixers;
    err=init_mixer_control(&mixer->dst, tmp_if_expr$2);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          if(!(str1 == ((char *)NULL)))
            tmp_if_expr$3 = str1 + (signed long int)1;

          else
            tmp_if_expr$3 = *mixers;
          syslog(2, "Wrong mixer control ID syntax '%s'\n", tmp_if_expr$3);
        }

        else
        {
          if(!(str1 == ((char *)NULL)))
            tmp_if_expr$4 = str1 + (signed long int)1;

          else
            tmp_if_expr$4 = *mixers;
          fprintf(stderr, "Wrong mixer control ID syntax '%s'\n", tmp_if_expr$4);
        }
      while((_Bool)0);
      return -22;
    }

    if(!(str1 == ((char *)NULL)))
      *str1 = (char)64;

    mixers = mixers + 1l;
    mixers_count = mixers_count - 1;
  }
  return 0;
}

// add_oss_mixers
// file alsaloop.c line 298
static signed int add_oss_mixers(struct loopback *loop, char **mixers, signed int mixers_count)
{
  struct loopback_ossmixer *mixer;
  struct loopback_ossmixer *last = (struct loopback_ossmixer *)(void *)0;
  char *str1;
  char *str2;
  char *tmp_if_expr$2;
  char *tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  while(mixers_count >= 1)
  {
    void *return_value_calloc$1;
    return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct loopback_ossmixer) /*40ul*/ );
    mixer = (struct loopback_ossmixer *)return_value_calloc$1;
    if(mixer == ((struct loopback_ossmixer *)NULL))
      return -12;

    if(!(last == ((struct loopback_ossmixer *)NULL)))
      last->next = mixer;

    else
      loop->oss_controls = mixer;
    last = mixer;
    str1=strchr(*mixers, 44);
    if(!(str1 == ((char *)NULL)))
      *str1 = (char)0;

    if(!(str1 == ((char *)NULL)))
      tmp_if_expr$2 = str1 + (signed long int)1;

    else
      tmp_if_expr$2 = *mixers;
    str2=strchr(tmp_if_expr$2, 64);
    if(!(str2 == ((char *)NULL)))
      *str2 = (char)0;

    mixer->alsa_id=strdup(*mixers);
    if(!(str1 == ((char *)NULL)))
      mixer->alsa_index=atoi(str1);

    if(!(str2 == ((char *)NULL)))
      tmp_if_expr$3 = str2 + (signed long int)1;

    else
      tmp_if_expr$3 = *mixers;
    mixer->oss_id=strdup(tmp_if_expr$3);
    if(mixer->alsa_id == ((const char *)NULL))
      tmp_if_expr$4 = (_Bool)1;

    else
      tmp_if_expr$4 = mixer->oss_id == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$4)
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Not enough memory");

        else
          fprintf(stderr, "Not enough memory");
      while((_Bool)0);
      return -12;
    }

    if(!(str1 == ((char *)NULL)))
      *str1 = (char)44;

    if(!(str2 == ((char *)NULL)))
      *str2 = (char)44;

    mixers = mixers + 1l;
    mixers_count = mixers_count - 1;
  }
  return 0;
}

// buf_add
// file pcmjob.c line 595
static void buf_add(struct loopback *loop, unsigned long int count)
{
  if(count >= 1ul)
  {
    if(loop->play->buf == loop->capt->buf)
      loop->play->buf_count = loop->play->buf_count + count;

    else
      buf_add_src(loop);
  }

}

// buf_add_src
// file pcmjob.c line 505
static void buf_add_src(struct loopback *loop)
{
  struct loopback_handle *capt = loop->capt;
  struct loopback_handle *play = loop->play;
  float *old_data_out;
  unsigned long int count;
  unsigned long int pos;
  unsigned long int count1;
  unsigned long int pos1;
  count = capt->buf_count;
  pos = (unsigned long int)0;
  pos1 = capt->buf_pos - count;
  if(!(capt->buf_size >= pos1))
    pos1 = pos1 + capt->buf_size;

  for( ; count >= 1ul; pos1 = pos1 % capt->buf_size)
  {
    count1 = count;
    if(!(capt->buf_size >= count1 + pos1))
      count1 = capt->buf_size - pos1;

    if((signed int)capt->format == SND_PCM_FORMAT_S32)
      src_int_to_float_array((signed int *)(capt->buf + (signed long int)(pos1 * (unsigned long int)capt->frame_size)), loop->src_data.data_in + (signed long int)(pos * (unsigned long int)capt->channels), (signed int)(count1 * (unsigned long int)capt->channels));

    else
      src_short_to_float_array((signed short int *)(capt->buf + (signed long int)(pos1 * (unsigned long int)capt->frame_size)), loop->src_data.data_in + (signed long int)(pos * (unsigned long int)capt->channels), (signed int)(count1 * (unsigned long int)capt->channels));
    count = count - count1;
    pos = pos + count1;
    pos1 = pos1 + count1;
  }
  loop->src_data.input_frames = (signed long int)pos;
  loop->src_data.output_frames = (signed long int)(play->buf_size - (unsigned long int)loop->src_out_frames);
  loop->src_data.end_of_input = 0;
  old_data_out = loop->src_data.data_out;
  loop->src_data.data_out = old_data_out + (signed long int)loop->src_out_frames;
  src_process(loop->src_state, &loop->src_data);
  loop->src_data.data_out = old_data_out;
  capt->buf_count = capt->buf_count - (unsigned long int)loop->src_data.input_frames_used;
  count = (unsigned long int)(loop->src_data.output_frames_gen + (signed long int)loop->src_out_frames);
  pos = (unsigned long int)0;
  pos1 = (play->buf_pos + play->buf_count) % play->buf_size;
  while(count >= 1ul)
  {
    count1 = count;
    if(!(play->buf_size >= count1 + pos1))
      count1 = play->buf_size - pos1;

    unsigned long int return_value_buf_avail$1;
    return_value_buf_avail$1=buf_avail(play);
    if(!(return_value_buf_avail$1 >= count1))
      count1=buf_avail(play);

    if(count1 == 0ul)
      break;

    if((signed int)capt->format == SND_PCM_FORMAT_S32)
      src_float_to_int_array(loop->src_data.data_out + (signed long int)(pos * (unsigned long int)play->channels), (signed int *)(play->buf + (signed long int)(pos1 * (unsigned long int)play->frame_size)), (signed int)(count1 * (unsigned long int)play->channels));

    else
      src_float_to_short_array(loop->src_data.data_out + (signed long int)(pos * (unsigned long int)play->channels), (signed short int *)(play->buf + (signed long int)(pos1 * (unsigned long int)play->frame_size)), (signed int)(count1 * (unsigned long int)play->channels));
    play->buf_count = play->buf_count + count1;
    count = count - count1;
    pos = pos + count1;
    pos1 = pos1 + count1;
    pos1 = pos1 % play->buf_size;
  }
  loop->src_out_frames = (unsigned int)((unsigned long int)(loop->src_data.output_frames_gen + (signed long int)loop->src_out_frames) - pos);
  if(loop->src_out_frames >= 1u)
    memmove((void *)loop->src_data.data_out, (const void *)(loop->src_data.data_out + (signed long int)(pos * (unsigned long int)play->channels)), (unsigned long int)(loop->src_out_frames * play->channels) * sizeof(float) /*4ul*/ );

}

// buf_avail
// file pcmjob.c line 450
static inline unsigned long int buf_avail(struct loopback_handle *lhandle)
{
  return lhandle->buf_size - lhandle->buf_count;
}

// buf_remove
// file pcmjob.c line 455
static void buf_remove(struct loopback *loop, unsigned long int count)
{
  if(count >= 1ul)
  {
    if(loop->play->buf == loop->capt->buf)
    {
      if(!(count >= loop->capt->buf_count))
        loop->capt->buf_count = loop->capt->buf_count - count;

      else
        loop->capt->buf_count = (unsigned long int)0;
    }

  }

}

// closeit
// file pcmjob.c line 1245
static signed int closeit(struct loopback_handle *lhandle)
{
  signed int err = 0;
  set_rate_shift(lhandle, (double)1);
  if(!(lhandle->ctl_rate_shift == ((struct _snd_ctl_elem_value *)NULL)))
    snd_ctl_elem_value_free(lhandle->ctl_rate_shift);

  lhandle->ctl_rate_shift = (struct _snd_ctl_elem_value *)(void *)0;
  if(!(lhandle->ctl == ((struct _snd_ctl *)NULL)))
    err=snd_ctl_close(lhandle->ctl);

  lhandle->ctl = (struct _snd_ctl *)(void *)0;
  if(!(lhandle->handle == ((struct _snd_pcm *)NULL)))
    err=snd_pcm_close(lhandle->handle);

  lhandle->handle = (struct _snd_pcm *)(void *)0;
  return err;
}

// control_done
// file alsaloop.h line 217
signed int control_done(struct loopback *loop)
{
  struct loopback_mixer *mix;
  struct loopback_ossmixer *ossmix;
  signed int err;
  char *return_value_id_str$1;
  const char *return_value_snd_strerror$2;
  char *return_value_id_str$3;
  const char *return_value_snd_strerror$4;
  if(loop->capt->ctl == ((struct _snd_ctl *)NULL))
    return 0;

  else
  {
    ossmix = loop->oss_controls;
    for( ; !(ossmix == ((struct loopback_ossmixer *)NULL)); ossmix = ossmix->next)
    {
      err=oss_set(loop, ossmix, 0);
      if(!(err >= 0))
        do
          if(!(use_syslog == 0))
            syslog(4, "%s: Unable to remove OSS control '%s'\n", loop->id, ossmix->oss_id);

          else
            fprintf(stderr, "%s: Unable to remove OSS control '%s'\n", loop->id, ossmix->oss_id);
        while((_Bool)0);

    }
    mix = loop->controls;
    for( ; !(mix == ((struct loopback_mixer *)NULL)); mix = mix->next)
      if(mix->skip == 0u)
      {
        err=snd_ctl_elem_remove(loop->capt->ctl, mix->dst.id);
        if(!(err >= 0))
          do
            if(!(use_syslog == 0))
            {
              return_value_id_str$1=id_str(mix->dst.id);
              return_value_snd_strerror$2=snd_strerror(err);
              syslog(4, "%s: Unable to remove control '%s': %s\n", loop->id, return_value_id_str$1, return_value_snd_strerror$2);
            }

            else
            {
              return_value_id_str$3=id_str(mix->dst.id);
              return_value_snd_strerror$4=snd_strerror(err);
              fprintf(stderr, "%s: Unable to remove control '%s': %s\n", loop->id, return_value_id_str$3, return_value_snd_strerror$4);
            }
          while((_Bool)0);

      }

    return 0;
  }
}

// control_event
// file alsaloop.h line 218
signed int control_event(struct loopback_handle *lhandle, struct _snd_ctl_event *ev)
{
  struct _snd_ctl_elem_id *id2;
  struct loopback_mixer *mix;
  signed int capt = (signed int)(lhandle == lhandle->loopback->capt);
  signed int err;
  do
  {
    unsigned long int return_value_snd_ctl_elem_id_sizeof$1;
    return_value_snd_ctl_elem_id_sizeof$1=snd_ctl_elem_id_sizeof();
    void *return_value___builtin_alloca$2;
    return_value___builtin_alloca$2=__builtin_alloca(return_value_snd_ctl_elem_id_sizeof$1);
    *(&id2) = (struct _snd_ctl_elem_id *)return_value___builtin_alloca$2;
    unsigned long int return_value_snd_ctl_elem_id_sizeof$3;
    return_value_snd_ctl_elem_id_sizeof$3=snd_ctl_elem_id_sizeof();
    memset((void *)*(&id2), 0, return_value_snd_ctl_elem_id_sizeof$3);
  }
  while((_Bool)0);
  snd_ctl_event_elem_get_id(ev, id2);
  mix = lhandle->loopback->controls;
  struct _snd_ctl_elem_id *tmp_if_expr$4;
  for( ; !(mix == ((struct loopback_mixer *)NULL)); mix = mix->next)
    if(mix->skip == 0u)
    {
      if(!(capt == 0))
        tmp_if_expr$4 = mix->dst.id;

      else
        tmp_if_expr$4 = mix->src.id;
      signed int return_value_control_id_match$5;
      return_value_control_id_match$5=control_id_match(id2, tmp_if_expr$4);
      if(!(return_value_control_id_match$5 == 0))
      {
        err=control_event1(lhandle->loopback, mix, ev, capt);
        if(!(err >= 0))
          return err;

      }

    }

  return 0;
}

// control_event1
// file control.c line 364
static signed int control_event1(struct loopback *loop, struct loopback_mixer *mix, struct _snd_ctl_event *ev, signed int capture)
{
  unsigned int mask;
  mask=snd_ctl_event_elem_get_mask(ev);
  signed int err;
  char *return_value_id_str$1;
  const char *return_value_snd_strerror$2;
  char *return_value_id_str$3;
  const char *return_value_snd_strerror$4;
  char *return_value_id_str$5;
  const char *return_value_snd_strerror$6;
  char *return_value_id_str$7;
  const char *return_value_snd_strerror$8;
  char *return_value_id_str$9;
  const char *return_value_snd_strerror$10;
  char *return_value_id_str$11;
  const char *return_value_snd_strerror$12;
  char *return_value_id_str$13;
  const char *return_value_snd_strerror$14;
  char *return_value_id_str$15;
  const char *return_value_snd_strerror$16;
  if(mask == 4294967295u)
    return 0;

  else
    if((1u & mask) == 0u)
      return 0;

    else
    {
      if(capture == 0)
      {
        snd_ctl_elem_value_set_id(mix->src.value, mix->src.id);
        err=snd_ctl_elem_read(loop->play->ctl, mix->src.value);
        if(!(err >= 0))
        {
          do
            if(!(use_syslog == 0))
            {
              return_value_id_str$1=id_str(mix->src.id);
              return_value_snd_strerror$2=snd_strerror(err);
              syslog(2, "Unable to read control value (event1) '%s': %s\n", return_value_id_str$1, return_value_snd_strerror$2);
            }

            else
            {
              return_value_id_str$3=id_str(mix->src.id);
              return_value_snd_strerror$4=snd_strerror(err);
              fprintf(stderr, "Unable to read control value (event1) '%s': %s\n", return_value_id_str$3, return_value_snd_strerror$4);
            }
          while((_Bool)0);
          return err;
        }

        copy_value(&mix->dst, &mix->src);
        err=snd_ctl_elem_write(loop->capt->ctl, mix->dst.value);
        if(!(err >= 0))
        {
          do
            if(!(use_syslog == 0))
            {
              return_value_id_str$5=id_str(mix->dst.id);
              return_value_snd_strerror$6=snd_strerror(err);
              syslog(2, "Unable to write control value (event1) '%s': %s\n", return_value_id_str$5, return_value_snd_strerror$6);
            }

            else
            {
              return_value_id_str$7=id_str(mix->dst.id);
              return_value_snd_strerror$8=snd_strerror(err);
              fprintf(stderr, "Unable to write control value (event1) '%s': %s\n", return_value_id_str$7, return_value_snd_strerror$8);
            }
          while((_Bool)0);
          return err;
        }

      }

      else
      {
        err=snd_ctl_elem_read(loop->capt->ctl, mix->dst.value);
        if(!(err >= 0))
        {
          do
            if(!(use_syslog == 0))
            {
              return_value_id_str$9=id_str(mix->dst.id);
              return_value_snd_strerror$10=snd_strerror(err);
              syslog(2, "Unable to read control value (event2) '%s': %s\n", return_value_id_str$9, return_value_snd_strerror$10);
            }

            else
            {
              return_value_id_str$11=id_str(mix->dst.id);
              return_value_snd_strerror$12=snd_strerror(err);
              fprintf(stderr, "Unable to read control value (event2) '%s': %s\n", return_value_id_str$11, return_value_snd_strerror$12);
            }
          while((_Bool)0);
          return err;
        }

        copy_value(&mix->src, &mix->dst);
        err=snd_ctl_elem_write(loop->play->ctl, mix->src.value);
        if(!(err >= 0))
        {
          do
            if(!(use_syslog == 0))
            {
              return_value_id_str$13=id_str(mix->src.id);
              return_value_snd_strerror$14=snd_strerror(err);
              syslog(2, "Unable to write control value (event2) '%s': %s\n", return_value_id_str$13, return_value_snd_strerror$14);
            }

            else
            {
              return_value_id_str$15=id_str(mix->src.id);
              return_value_snd_strerror$16=snd_strerror(err);
              fprintf(stderr, "Unable to write control value (event2) '%s': %s\n", return_value_id_str$15, return_value_snd_strerror$16);
            }
          while((_Bool)0);
          return err;
        }

      }
      return 0;
    }
}

// control_id_match
// file alsaloop.h line 215
signed int control_id_match(struct _snd_ctl_elem_id *id1, struct _snd_ctl_elem_id *id2)
{
  enum _snd_ctl_elem_iface return_value_snd_ctl_elem_id_get_interface$1;
  return_value_snd_ctl_elem_id_get_interface$1=snd_ctl_elem_id_get_interface(id1);
  enum _snd_ctl_elem_iface return_value_snd_ctl_elem_id_get_interface$2;
  return_value_snd_ctl_elem_id_get_interface$2=snd_ctl_elem_id_get_interface(id2);
  if(!(return_value_snd_ctl_elem_id_get_interface$1 == return_value_snd_ctl_elem_id_get_interface$2))
    return 0;

  else
  {
    unsigned int return_value_snd_ctl_elem_id_get_device$3;
    return_value_snd_ctl_elem_id_get_device$3=snd_ctl_elem_id_get_device(id1);
    unsigned int return_value_snd_ctl_elem_id_get_device$4;
    return_value_snd_ctl_elem_id_get_device$4=snd_ctl_elem_id_get_device(id2);
    if(!(return_value_snd_ctl_elem_id_get_device$3 == return_value_snd_ctl_elem_id_get_device$4))
      return 0;

    else
    {
      unsigned int return_value_snd_ctl_elem_id_get_subdevice$5;
      return_value_snd_ctl_elem_id_get_subdevice$5=snd_ctl_elem_id_get_subdevice(id1);
      unsigned int return_value_snd_ctl_elem_id_get_subdevice$6;
      return_value_snd_ctl_elem_id_get_subdevice$6=snd_ctl_elem_id_get_subdevice(id2);
      if(!(return_value_snd_ctl_elem_id_get_subdevice$5 == return_value_snd_ctl_elem_id_get_subdevice$6))
        return 0;

      else
      {
        const char *return_value_snd_ctl_elem_id_get_name$7;
        return_value_snd_ctl_elem_id_get_name$7=snd_ctl_elem_id_get_name(id1);
        const char *return_value_snd_ctl_elem_id_get_name$8;
        return_value_snd_ctl_elem_id_get_name$8=snd_ctl_elem_id_get_name(id2);
        signed int return_value_strcmp$9;
        return_value_strcmp$9=strcmp(return_value_snd_ctl_elem_id_get_name$7, return_value_snd_ctl_elem_id_get_name$8);
        if(!(return_value_strcmp$9 == 0))
          return 0;

        else
        {
          unsigned int return_value_snd_ctl_elem_id_get_index$10;
          return_value_snd_ctl_elem_id_get_index$10=snd_ctl_elem_id_get_index(id1);
          unsigned int return_value_snd_ctl_elem_id_get_index$11;
          return_value_snd_ctl_elem_id_get_index$11=snd_ctl_elem_id_get_index(id2);
          if(!(return_value_snd_ctl_elem_id_get_index$10 == return_value_snd_ctl_elem_id_get_index$11))
            return 0;

          else
            return 1;
        }
      }
    }
  }
}

// control_init
// file alsaloop.h line 216
signed int control_init(struct loopback *loop)
{
  struct loopback_mixer *mix;
  struct loopback_ossmixer *ossmix;
  signed int err;
  ossmix = loop->oss_controls;
  for( ; !(ossmix == ((struct loopback_ossmixer *)NULL)); ossmix = ossmix->next)
    oss_set(loop, ossmix, 0);
  mix = loop->controls;
  char *return_value_id_str$1;
  char *return_value_id_str$2;
  for( ; !(mix == ((struct loopback_mixer *)NULL)); mix = mix->next)
  {
    err=control_init1(loop->play, &mix->src);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_id_str$1=id_str(mix->src.id);
          syslog(4, "%s: Disabling playback control '%s'\n", loop->id, return_value_id_str$1);
        }

        else
        {
          return_value_id_str$2=id_str(mix->src.id);
          fprintf(stderr, "%s: Disabling playback control '%s'\n", loop->id, return_value_id_str$2);
        }
      while((_Bool)0);
      mix->skip = (unsigned int)1;
    }

    else
    {
      err=control_init2(loop, mix);
      if(!(err >= 0))
        return err;

    }
  }
  ossmix = loop->oss_controls;
  for( ; !(ossmix == ((struct loopback_ossmixer *)NULL)); ossmix = ossmix->next)
  {
    err=oss_set(loop, ossmix, 1);
    if(!(err >= 0))
    {
      ossmix->skip = (unsigned int)1;
      do
        if(!(use_syslog == 0))
          syslog(4, "%s: Disabling OSS mixer ID '%s'\n", loop->id, ossmix->oss_id);

        else
          fprintf(stderr, "%s: Disabling OSS mixer ID '%s'\n", loop->id, ossmix->oss_id);
      while((_Bool)0);
    }

  }
  return 0;
}

// control_init1
// file control.c line 160
static signed int control_init1(struct loopback_handle *lhandle, struct loopback_control *ctl)
{
  signed int err;
  snd_ctl_elem_info_set_id(ctl->info, ctl->id);
  snd_ctl_elem_value_set_id(ctl->value, ctl->id);
  char *return_value_id_str$1;
  char *return_value_id_str$2;
  char *return_value_id_str$3;
  const char *return_value_snd_strerror$4;
  char *return_value_id_str$5;
  const char *return_value_snd_strerror$6;
  char *return_value_id_str$7;
  const char *return_value_snd_strerror$8;
  char *return_value_id_str$9;
  const char *return_value_snd_strerror$10;
  if(lhandle->ctl == ((struct _snd_ctl *)NULL))
  {
    do
      if(!(use_syslog == 0))
      {
        return_value_id_str$1=id_str(ctl->id);
        syslog(4, "Unable to read control info for '%s'\n", return_value_id_str$1);
      }

      else
      {
        return_value_id_str$2=id_str(ctl->id);
        fprintf(stderr, "Unable to read control info for '%s'\n", return_value_id_str$2);
      }
    while((_Bool)0);
    return -5;
  }

  else
  {
    err=snd_ctl_elem_info(lhandle->ctl, ctl->info);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_id_str$3=id_str(ctl->id);
          return_value_snd_strerror$4=snd_strerror(err);
          syslog(4, "Unable to read control info '%s': %s\n", return_value_id_str$3, return_value_snd_strerror$4);
        }

        else
        {
          return_value_id_str$5=id_str(ctl->id);
          return_value_snd_strerror$6=snd_strerror(err);
          fprintf(stderr, "Unable to read control info '%s': %s\n", return_value_id_str$5, return_value_snd_strerror$6);
        }
      while((_Bool)0);
      return err;
    }

    else
    {
      err=snd_ctl_elem_read(lhandle->ctl, ctl->value);
      if(!(err >= 0))
      {
        do
          if(!(use_syslog == 0))
          {
            return_value_id_str$7=id_str(ctl->id);
            return_value_snd_strerror$8=snd_strerror(err);
            syslog(4, "Unable to read control value (init1) '%s': %s\n", return_value_id_str$7, return_value_snd_strerror$8);
          }

          else
          {
            return_value_id_str$9=id_str(ctl->id);
            return_value_snd_strerror$10=snd_strerror(err);
            fprintf(stderr, "Unable to read control value (init1) '%s': %s\n", return_value_id_str$9, return_value_snd_strerror$10);
          }
        while((_Bool)0);
        return err;
      }

      else
        return 0;
    }
  }
}

// control_init2
// file control.c line 240
static signed int control_init2(struct loopback *loop, struct loopback_mixer *mix)
{
  enum _snd_ctl_elem_type type;
  unsigned int count;
  signed int err;
  snd_ctl_elem_info_copy(mix->dst.info, mix->src.info);
  snd_ctl_elem_info_set_id(mix->dst.info, mix->dst.id);
  snd_ctl_elem_value_clear(mix->dst.value);
  snd_ctl_elem_value_set_id(mix->dst.value, mix->dst.id);
  type=snd_ctl_elem_info_get_type(mix->dst.info);
  count=snd_ctl_elem_info_get_count(mix->dst.info);
  snd_ctl_elem_remove(loop->capt->ctl, mix->dst.id);
  signed long int return_value_snd_ctl_elem_info_get_min$1;
  signed long int return_value_snd_ctl_elem_info_get_max$2;
  signed long int return_value_snd_ctl_elem_info_get_step$3;
  const char *return_value_snd_ctl_elem_type_name$4;
  const char *return_value_snd_ctl_elem_type_name$5;
  switch((signed int)type)
  {
    case SND_CTL_ELEM_TYPE_BOOLEAN:
    {
      err=snd_ctl_elem_add_boolean(loop->capt->ctl, mix->dst.id, count);
      copy_value(&mix->dst, &mix->src);
      break;
    }
    case SND_CTL_ELEM_TYPE_INTEGER:
    {
      return_value_snd_ctl_elem_info_get_min$1=snd_ctl_elem_info_get_min(mix->dst.info);
      return_value_snd_ctl_elem_info_get_max$2=snd_ctl_elem_info_get_max(mix->dst.info);
      return_value_snd_ctl_elem_info_get_step$3=snd_ctl_elem_info_get_step(mix->dst.info);
      err=snd_ctl_elem_add_integer(loop->capt->ctl, mix->dst.id, count, return_value_snd_ctl_elem_info_get_min$1, return_value_snd_ctl_elem_info_get_max$2, return_value_snd_ctl_elem_info_get_step$3);
      copy_value(&mix->dst, &mix->src);
      break;
    }
    default:
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_ctl_elem_type_name$4=snd_ctl_elem_type_name(type);
          syslog(2, "Unable to handle control type %s\n", return_value_snd_ctl_elem_type_name$4);
        }

        else
        {
          return_value_snd_ctl_elem_type_name$5=snd_ctl_elem_type_name(type);
          fprintf(stderr, "Unable to handle control type %s\n", return_value_snd_ctl_elem_type_name$5);
        }
      while((_Bool)0);
      err = -22;
    }
  }
  char *return_value_id_str$6;
  const char *return_value_snd_strerror$7;
  char *return_value_id_str$8;
  const char *return_value_snd_strerror$9;
  char *return_value_id_str$10;
  const char *return_value_snd_strerror$11;
  char *return_value_id_str$12;
  const char *return_value_snd_strerror$13;
  char *return_value_id_str$14;
  const char *return_value_snd_strerror$15;
  char *return_value_id_str$16;
  const char *return_value_snd_strerror$17;
  char *return_value_id_str$18;
  const char *return_value_snd_strerror$19;
  char *return_value_id_str$20;
  const char *return_value_snd_strerror$21;
  char *return_value_id_str$22;
  const char *return_value_snd_strerror$23;
  char *return_value_id_str$24;
  const char *return_value_snd_strerror$25;
  char *return_value_id_str$27;
  const char *return_value_snd_strerror$28;
  char *return_value_id_str$29;
  const char *return_value_snd_strerror$30;
  if(!(err >= 0))
  {
    do
      if(!(use_syslog == 0))
      {
        return_value_id_str$6=id_str(mix->dst.id);
        return_value_snd_strerror$7=snd_strerror(err);
        syslog(2, "Unable to create control '%s': %s\n", return_value_id_str$6, return_value_snd_strerror$7);
      }

      else
      {
        return_value_id_str$8=id_str(mix->dst.id);
        return_value_snd_strerror$9=snd_strerror(err);
        fprintf(stderr, "Unable to create control '%s': %s\n", return_value_id_str$8, return_value_snd_strerror$9);
      }
    while((_Bool)0);
    return err;
  }

  else
  {
    err=snd_ctl_elem_unlock(loop->capt->ctl, mix->dst.id);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_id_str$10=id_str(mix->dst.id);
          return_value_snd_strerror$11=snd_strerror(err);
          syslog(2, "Unable to unlock control info '%s': %s\n", return_value_id_str$10, return_value_snd_strerror$11);
        }

        else
        {
          return_value_id_str$12=id_str(mix->dst.id);
          return_value_snd_strerror$13=snd_strerror(err);
          fprintf(stderr, "Unable to unlock control info '%s': %s\n", return_value_id_str$12, return_value_snd_strerror$13);
        }
      while((_Bool)0);
      return err;
    }

    else
    {
      err=snd_ctl_elem_info(loop->capt->ctl, mix->dst.info);
      if(!(err >= 0))
      {
        do
          if(!(use_syslog == 0))
          {
            return_value_id_str$14=id_str(mix->dst.id);
            return_value_snd_strerror$15=snd_strerror(err);
            syslog(2, "Unable to read control info '%s': %s\n", return_value_id_str$14, return_value_snd_strerror$15);
          }

          else
          {
            return_value_id_str$16=id_str(mix->dst.id);
            return_value_snd_strerror$17=snd_strerror(err);
            fprintf(stderr, "Unable to read control info '%s': %s\n", return_value_id_str$16, return_value_snd_strerror$17);
          }
        while((_Bool)0);
        return err;
      }

      else
      {
        signed int return_value_snd_ctl_elem_info_is_tlv_writable$26;
        return_value_snd_ctl_elem_info_is_tlv_writable$26=snd_ctl_elem_info_is_tlv_writable(mix->dst.info);
        if(!(return_value_snd_ctl_elem_info_is_tlv_writable$26 == 0))
        {
          unsigned int tlv[64l];
          err=snd_ctl_elem_tlv_read(loop->play->ctl, mix->src.id, tlv, (unsigned int)sizeof(unsigned int [64l]) /*256ul*/ );
          if(!(err >= 0))
          {
            do
              if(!(use_syslog == 0))
              {
                return_value_id_str$18=id_str(mix->src.id);
                return_value_snd_strerror$19=snd_strerror(err);
                syslog(2, "Unable to read TLV for '%s': %s\n", return_value_id_str$18, return_value_snd_strerror$19);
              }

              else
              {
                return_value_id_str$20=id_str(mix->src.id);
                return_value_snd_strerror$21=snd_strerror(err);
                fprintf(stderr, "Unable to read TLV for '%s': %s\n", return_value_id_str$20, return_value_snd_strerror$21);
              }
            while((_Bool)0);
            tlv[(signed long int)1] = (unsigned int)0;
            tlv[(signed long int)0] = tlv[(signed long int)1];
          }

          err=snd_ctl_elem_tlv_write(loop->capt->ctl, mix->dst.id, tlv);
          if(!(err >= 0))
          {
            do
              if(!(use_syslog == 0))
              {
                return_value_id_str$22=id_str(mix->src.id);
                return_value_snd_strerror$23=snd_strerror(err);
                syslog(2, "Unable to write TLV for '%s': %s\n", return_value_id_str$22, return_value_snd_strerror$23);
              }

              else
              {
                return_value_id_str$24=id_str(mix->src.id);
                return_value_snd_strerror$25=snd_strerror(err);
                fprintf(stderr, "Unable to write TLV for '%s': %s\n", return_value_id_str$24, return_value_snd_strerror$25);
              }
            while((_Bool)0);
            return err;
          }

        }

        err=snd_ctl_elem_write(loop->capt->ctl, mix->dst.value);
        if(!(err >= 0))
        {
          do
            if(!(use_syslog == 0))
            {
              return_value_id_str$27=id_str(mix->dst.id);
              return_value_snd_strerror$28=snd_strerror(err);
              syslog(2, "Unable to write control value '%s': %s\n", return_value_id_str$27, return_value_snd_strerror$28);
            }

            else
            {
              return_value_id_str$29=id_str(mix->dst.id);
              return_value_snd_strerror$30=snd_strerror(err);
              fprintf(stderr, "Unable to write control value '%s': %s\n", return_value_id_str$29, return_value_snd_strerror$30);
            }
          while((_Bool)0);
          return err;
        }

        else
          return 0;
      }
    }
  }
}

// control_parse_id
// file alsaloop.h line 214
signed int control_parse_id(const char *str, struct _snd_ctl_elem_id *id)
{
  signed int c;
  signed int size;
  signed int numid;
  char *ptr;
  for( ; (_Bool)1; str = str + 1l)
    if(!((signed int)*str == 32))
    {
      if(!((signed int)*str == 9))
        goto __CPROVER_DUMP_L3;

    }


__CPROVER_DUMP_L3:
  ;
  const unsigned short int **return_value___ctype_b_loc$2;
  signed int return_value_strncasecmp$23;
  signed int return_value_strncasecmp$7;
  signed int return_value_strncasecmp$6;
  signed int return_value_strncasecmp$5;
  signed int return_value_strncasecmp$4;
  signed int return_value_strncasecmp$3;
  signed int return_value_strncasecmp$22;
  _Bool tmp_if_expr$12;
  const char *tmp_post$9;
  char *tmp_post$10;
  char *tmp_post$11;
  signed int return_value_strncasecmp$21;
  const unsigned short int **return_value___ctype_b_loc$14;
  signed int return_value_strncasecmp$20;
  const unsigned short int **return_value___ctype_b_loc$16;
  signed int return_value_strncasecmp$19;
  const unsigned short int **return_value___ctype_b_loc$18;
  if(*str == 0)
    return -22;

  else
  {
    snd_ctl_elem_id_set_interface(id, (enum _snd_ctl_elem_iface)SND_CTL_ELEM_IFACE_MIXER);
    while(!(*str == 0))
    {
      signed int return_value_strncasecmp$24;
      return_value_strncasecmp$24=strncasecmp(str, "numid=", (unsigned long int)6);
      if(return_value_strncasecmp$24 == 0)
      {
        str = str + (signed long int)6;
        numid=atoi(str);
        if(!(numid >= 1))
        {
          do
            if(!(use_syslog == 0))
              syslog(2, "Invalid numid %d\n", numid);

            else
              fprintf(stderr, "Invalid numid %d\n", numid);
          while((_Bool)0);
          return -22;
        }

        signed int return_value_atoi$1;
        return_value_atoi$1=atoi(str);
        snd_ctl_elem_id_set_numid(id, (unsigned int)return_value_atoi$1);
        do
        {
          return_value___ctype_b_loc$2=__ctype_b_loc();
          if((2048 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*str]) == 0)
            break;

          str = str + 1l;
        }
        while((_Bool)1);
      }

      else
      {
        return_value_strncasecmp$23=strncasecmp(str, "iface=", (unsigned long int)6);
        if(return_value_strncasecmp$23 == 0)
        {
          str = str + (signed long int)6;
          signed int return_value_strncasecmp$8;
          return_value_strncasecmp$8=strncasecmp(str, "card", (unsigned long int)4);
          if(return_value_strncasecmp$8 == 0)
          {
            snd_ctl_elem_id_set_interface(id, (enum _snd_ctl_elem_iface)SND_CTL_ELEM_IFACE_CARD);
            str = str + (signed long int)4;
          }

          else
          {
            return_value_strncasecmp$7=strncasecmp(str, "mixer", (unsigned long int)5);
            if(return_value_strncasecmp$7 == 0)
            {
              snd_ctl_elem_id_set_interface(id, (enum _snd_ctl_elem_iface)SND_CTL_ELEM_IFACE_MIXER);
              str = str + (signed long int)5;
            }

            else
            {
              return_value_strncasecmp$6=strncasecmp(str, "pcm", (unsigned long int)3);
              if(return_value_strncasecmp$6 == 0)
              {
                snd_ctl_elem_id_set_interface(id, (enum _snd_ctl_elem_iface)SND_CTL_ELEM_IFACE_PCM);
                str = str + (signed long int)3;
              }

              else
              {
                return_value_strncasecmp$5=strncasecmp(str, "rawmidi", (unsigned long int)7);
                if(return_value_strncasecmp$5 == 0)
                {
                  snd_ctl_elem_id_set_interface(id, (enum _snd_ctl_elem_iface)SND_CTL_ELEM_IFACE_RAWMIDI);
                  str = str + (signed long int)7;
                }

                else
                {
                  return_value_strncasecmp$4=strncasecmp(str, "timer", (unsigned long int)5);
                  if(return_value_strncasecmp$4 == 0)
                  {
                    snd_ctl_elem_id_set_interface(id, (enum _snd_ctl_elem_iface)SND_CTL_ELEM_IFACE_TIMER);
                    str = str + (signed long int)5;
                  }

                  else
                  {
                    return_value_strncasecmp$3=strncasecmp(str, "sequencer", (unsigned long int)9);
                    if(return_value_strncasecmp$3 == 0)
                    {
                      snd_ctl_elem_id_set_interface(id, (enum _snd_ctl_elem_iface)SND_CTL_ELEM_IFACE_SEQUENCER);
                      str = str + (signed long int)9;
                    }

                    else
                      return -22;
                  }
                }
              }
            }
          }
        }

        else
        {
          return_value_strncasecmp$22=strncasecmp(str, "name=", (unsigned long int)5);
          if(return_value_strncasecmp$22 == 0)
          {
            char buf[64l];
            str = str + (signed long int)5;
            ptr = buf;
            size = 0;
            if((signed int)*str == 39)
              tmp_if_expr$12 = (_Bool)1;

            else
              tmp_if_expr$12 = (signed int)*str == 34 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$12)
            {
              tmp_post$9 = str;
              str = str + 1l;
              c = (signed int)*tmp_post$9;
              for( ; !(*str == 0); str = str + 1l)
              {
                if((signed int)*str == c)
                  break;

                if(!(size >= (signed int)sizeof(char [64l]) /*64*/ ))
                {
                  tmp_post$10 = ptr;
                  ptr = ptr + 1l;
                  *tmp_post$10 = *str;
                  size = size + 1;
                }

              }
              if((signed int)*str == c)
                str = str + 1l;

            }

            else
              for( ; !(*str == 0); str = str + 1l)
              {
                if((signed int)*str == 44)
                  break;

                if(!(size >= (signed int)sizeof(char [64l]) /*64*/ ))
                {
                  tmp_post$11 = ptr;
                  ptr = ptr + 1l;
                  *tmp_post$11 = *str;
                  size = size + 1;
                }

              }
            *ptr = (char)0;
            snd_ctl_elem_id_set_name(id, buf);
          }

          else
          {
            return_value_strncasecmp$21=strncasecmp(str, "index=", (unsigned long int)6);
            if(return_value_strncasecmp$21 == 0)
            {
              str = str + (signed long int)6;
              signed int return_value_atoi$13;
              return_value_atoi$13=atoi(str);
              snd_ctl_elem_id_set_index(id, (unsigned int)return_value_atoi$13);
              do
              {
                return_value___ctype_b_loc$14=__ctype_b_loc();
                if((2048 & (signed int)(*return_value___ctype_b_loc$14)[(signed long int)(signed int)*str]) == 0)
                  break;

                str = str + 1l;
              }
              while((_Bool)1);
            }

            else
            {
              return_value_strncasecmp$20=strncasecmp(str, "device=", (unsigned long int)7);
              if(return_value_strncasecmp$20 == 0)
              {
                str = str + (signed long int)7;
                signed int return_value_atoi$15;
                return_value_atoi$15=atoi(str);
                snd_ctl_elem_id_set_device(id, (unsigned int)return_value_atoi$15);
                do
                {
                  return_value___ctype_b_loc$16=__ctype_b_loc();
                  if((2048 & (signed int)(*return_value___ctype_b_loc$16)[(signed long int)(signed int)*str]) == 0)
                    break;

                  str = str + 1l;
                }
                while((_Bool)1);
              }

              else
              {
                return_value_strncasecmp$19=strncasecmp(str, "subdevice=", (unsigned long int)10);
                if(return_value_strncasecmp$19 == 0)
                {
                  str = str + (signed long int)10;
                  signed int return_value_atoi$17;
                  return_value_atoi$17=atoi(str);
                  snd_ctl_elem_id_set_subdevice(id, (unsigned int)return_value_atoi$17);
                  do
                  {
                    return_value___ctype_b_loc$18=__ctype_b_loc();
                    if((2048 & (signed int)(*return_value___ctype_b_loc$18)[(signed long int)(signed int)*str]) == 0)
                      break;

                    str = str + 1l;
                  }
                  while((_Bool)1);
                }

              }
            }
          }
        }
      }
      if((signed int)*str == 44)
        str = str + 1l;

      else
        if(!(*str == 0))
          return -22;

    }
    return 0;
  }
}

// copy_value
// file control.c line 184
static signed int copy_value(struct loopback_control *dst, struct loopback_control *src)
{
  enum _snd_ctl_elem_type type;
  unsigned int count;
  signed int i;
  type=snd_ctl_elem_info_get_type(dst->info);
  count=snd_ctl_elem_info_get_count(dst->info);
  signed int return_value_snd_ctl_elem_value_get_boolean$1;
  const char *return_value_snd_ctl_elem_type_name$3;
  const char *return_value_snd_ctl_elem_type_name$4;
  switch((signed int)type)
  {
    case SND_CTL_ELEM_TYPE_BOOLEAN:
    {
      i = 0;
      for( ; !((unsigned int)i >= count); i = i + 1)
      {
        return_value_snd_ctl_elem_value_get_boolean$1=snd_ctl_elem_value_get_boolean(src->value, (unsigned int)i);
        snd_ctl_elem_value_set_boolean(dst->value, (unsigned int)i, (signed long int)return_value_snd_ctl_elem_value_get_boolean$1);
      }
      break;
    }
    case SND_CTL_ELEM_TYPE_INTEGER:
    {
      i = 0;
      for( ; !((unsigned int)i >= count); i = i + 1)
      {
        signed long int return_value_snd_ctl_elem_value_get_integer$2;
        return_value_snd_ctl_elem_value_get_integer$2=snd_ctl_elem_value_get_integer(src->value, (unsigned int)i);
        snd_ctl_elem_value_set_integer(dst->value, (unsigned int)i, return_value_snd_ctl_elem_value_get_integer$2);
      }
      break;
    }
    default:
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_ctl_elem_type_name$3=snd_ctl_elem_type_name(type);
          syslog(2, "Unable to copy control value for type %s\n", return_value_snd_ctl_elem_type_name$3);
        }

        else
        {
          return_value_snd_ctl_elem_type_name$4=snd_ctl_elem_type_name(type);
          fprintf(stderr, "Unable to copy control value for type %s\n", return_value_snd_ctl_elem_type_name$4);
        }
      while((_Bool)0);
      return -22;
    }
  }
  return 0;
}

// create_loopback
// file alsaloop.c line 109
static signed int create_loopback(struct loopback **_handle, struct loopback_handle *play, struct loopback_handle *capt, struct _snd_output *output)
{
  struct loopback *handle;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct loopback) /*440ul*/ );
  handle = (struct loopback *)return_value_calloc$1;
  if(handle == ((struct loopback *)NULL))
    return -12;

  else
  {
    handle->play = play;
    handle->capt = capt;
    play->loopback = handle;
    capt->loopback = handle;
    handle->latency_req = (unsigned int)0;
    handle->latency_reqtime = (unsigned int)10000;
    handle->loop_time = ~0UL;
    handle->loop_limit = ~0ULL;
    handle->output = output;
    handle->state = output;
    handle->src_enable = (unsigned int)1;
    handle->src_converter_type = 0;
    *_handle = handle;
    return 0;
  }
}

// create_loopback_handle
// file alsaloop.c line 74
static signed int create_loopback_handle(struct loopback_handle **_handle, const char *device, const char *ctldev, const char *id)
{
  char idbuf[1024l];
  struct loopback_handle *handle;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct loopback_handle) /*264ul*/ );
  handle = (struct loopback_handle *)return_value_calloc$1;
  if(handle == ((struct loopback_handle *)NULL))
    return -12;

  else
  {
    if(device == ((const char *)NULL))
      device = "hw:0,0";

    handle->device=strdup(device);
    if(handle->device == ((char *)NULL))
      return -12;

    else
    {
      if(!(ctldev == ((const char *)NULL)))
      {
        handle->ctldev=strdup(ctldev);
        if(handle->ctldev == ((char *)NULL))
          return -12;

      }

      else
        handle->ctldev = (char *)(void *)0;
      snprintf(idbuf, sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1, "%s %s", id, device);
      idbuf[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
      handle->id=strdup(idbuf);
      handle->access = (enum _snd_pcm_access)SND_PCM_ACCESS_RW_INTERLEAVED;
      handle->format = (enum _snd_pcm_format)SND_PCM_FORMAT_S16_LE;
      handle->rate_req = (unsigned int)48000;
      handle->rate = handle->rate_req;
      handle->channels = (unsigned int)2;
      handle->resample = (unsigned int)0;
      *_handle = handle;
      return 0;
    }
  }
}

// ctl_event_check
// file pcmjob.c line 1686
static signed int ctl_event_check(struct _snd_ctl_elem_value *val, struct _snd_ctl_event *ev)
{
  struct _snd_ctl_elem_id *id1;
  struct _snd_ctl_elem_id *id2;
  do
  {
    unsigned long int return_value_snd_ctl_elem_id_sizeof$1;
    return_value_snd_ctl_elem_id_sizeof$1=snd_ctl_elem_id_sizeof();
    void *return_value___builtin_alloca$2;
    return_value___builtin_alloca$2=__builtin_alloca(return_value_snd_ctl_elem_id_sizeof$1);
    *(&id1) = (struct _snd_ctl_elem_id *)return_value___builtin_alloca$2;
    unsigned long int return_value_snd_ctl_elem_id_sizeof$3;
    return_value_snd_ctl_elem_id_sizeof$3=snd_ctl_elem_id_sizeof();
    memset((void *)*(&id1), 0, return_value_snd_ctl_elem_id_sizeof$3);
  }
  while((_Bool)0);
  do
  {
    unsigned long int return_value_snd_ctl_elem_id_sizeof$4;
    return_value_snd_ctl_elem_id_sizeof$4=snd_ctl_elem_id_sizeof();
    void *return_value___builtin_alloca$5;
    return_value___builtin_alloca$5=__builtin_alloca(return_value_snd_ctl_elem_id_sizeof$4);
    *(&id2) = (struct _snd_ctl_elem_id *)return_value___builtin_alloca$5;
    unsigned long int return_value_snd_ctl_elem_id_sizeof$6;
    return_value_snd_ctl_elem_id_sizeof$6=snd_ctl_elem_id_sizeof();
    memset((void *)*(&id2), 0, return_value_snd_ctl_elem_id_sizeof$6);
  }
  while((_Bool)0);
  snd_ctl_elem_value_get_id(val, id1);
  snd_ctl_event_elem_get_id(ev, id2);
  unsigned int return_value_snd_ctl_event_elem_get_mask$7;
  return_value_snd_ctl_event_elem_get_mask$7=snd_ctl_event_elem_get_mask(ev);
  if(return_value_snd_ctl_event_elem_get_mask$7 == 4294967295u)
    return 0;

  else
  {
    unsigned int return_value_snd_ctl_event_elem_get_mask$8;
    return_value_snd_ctl_event_elem_get_mask$8=snd_ctl_event_elem_get_mask(ev);
    if((1u & return_value_snd_ctl_event_elem_get_mask$8) == 0u)
      return 0;

    else
    {
      signed int return_value_control_id_match$9;
      return_value_control_id_match$9=control_id_match(id1, id2);
      return return_value_control_id_match$9;
    }
  }
}

// enable_syslog
// file alsaloop.c line 338
static void enable_syslog(void)
{
  if(use_syslog == 0)
  {
    use_syslog = 1;
    openlog("alsaloop", 0x08 | 0x01, 3 << 3);
  }

}

// fix_format
// file pcmjob.c line 1385
static void fix_format(struct loopback *loop, signed int force)
{
  enum _snd_pcm_format format = loop->capt->format;
  if(force == 0)
  {
    if((signed int)loop->sync == SYNC_TYPE_SAMPLERATE)
      goto __CPROVER_DUMP_L1;

  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(!((signed int)format == SND_PCM_FORMAT_S16) && !((signed int)format == SND_PCM_FORMAT_S32))
    {
      signed int return_value_snd_pcm_format_width$1;
      return_value_snd_pcm_format_width$1=snd_pcm_format_width(format);
      if(return_value_snd_pcm_format_width$1 >= 17)
        format = (enum _snd_pcm_format)SND_PCM_FORMAT_S32;

      else
        format = (enum _snd_pcm_format)SND_PCM_FORMAT_S16;
      loop->capt->format = format;
      loop->play->format = format;
    }

  }
}

// frames_to_time
// file pcmjob.c line 97
static inline unsigned long long int frames_to_time(unsigned int rate, unsigned long int frames)
{
  return (frames * 1000000ULL) / (unsigned long int)rate;
}

// freeit
// file pcmjob.c line 1238
static signed int freeit(struct loopback_handle *lhandle)
{
  free((void *)lhandle->buf);
  lhandle->buf = (char *)(void *)0;
  return 0;
}

// freeloop
// file pcmjob.c line 1335
static void freeloop(struct loopback *loop)
{
  if(!(loop->use_samplerate == 0u))
  {
    if(!(loop->src_state == ((struct SRC_STATE_tag *)NULL)))
      src_delete(loop->src_state);

    loop->src_state = (struct SRC_STATE_tag *)(void *)0;
    free((void *)loop->src_data.data_in);
    loop->src_data.data_in = (float *)(void *)0;
    free((void *)loop->src_data.data_out);
    loop->src_data.data_out = (float *)(void *)0;
  }

  if(loop->play->buf == loop->capt->buf)
    loop->play->buf = (char *)(void *)0;

  freeit(loop->play);
  freeit(loop->capt);
}

// get_active
// file pcmjob.c line 1075
static signed int get_active(struct loopback_handle *lhandle)
{
  signed int err;
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  if(lhandle->ctl_active == ((struct _snd_ctl_elem_value *)NULL))
    return 0;

  else
  {
    err=snd_ctl_elem_read(lhandle->ctl, lhandle->ctl_active);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$1=snd_strerror(err);
          syslog(2, "Cannot get PCM Slave Active element for %s: %s\n", lhandle->id, return_value_snd_strerror$1);
        }

        else
        {
          return_value_snd_strerror$2=snd_strerror(err);
          fprintf(stderr, "Cannot get PCM Slave Active element for %s: %s\n", lhandle->id, return_value_snd_strerror$2);
        }
      while((_Bool)0);
      return err;
    }

    else
    {
      signed int return_value_snd_ctl_elem_value_get_boolean$3;
      return_value_snd_ctl_elem_value_get_boolean$3=snd_ctl_elem_value_get_boolean(lhandle->ctl_active, (unsigned int)0);
      return return_value_snd_ctl_elem_value_get_boolean$3;
    }
  }
}

// get_channels
// file pcmjob.c line 1117
static signed int get_channels(struct loopback_handle *lhandle)
{
  signed int err;
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  if(lhandle->ctl_channels == ((struct _snd_ctl_elem_value *)NULL))
    return 0;

  else
  {
    err=snd_ctl_elem_read(lhandle->ctl, lhandle->ctl_channels);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$1=snd_strerror(err);
          syslog(2, "Cannot get PCM Channels element for %s: %s\n", lhandle->id, return_value_snd_strerror$1);
        }

        else
        {
          return_value_snd_strerror$2=snd_strerror(err);
          fprintf(stderr, "Cannot get PCM Channels element for %s: %s\n", lhandle->id, return_value_snd_strerror$2);
        }
      while((_Bool)0);
      return err;
    }

    else
    {
      signed long int return_value_snd_ctl_elem_value_get_integer$3;
      return_value_snd_ctl_elem_value_get_integer$3=snd_ctl_elem_value_get_integer(lhandle->ctl_channels, (unsigned int)0);
      return (signed int)return_value_snd_ctl_elem_value_get_integer$3;
    }
  }
}

// get_format
// file pcmjob.c line 1089
static signed int get_format(struct loopback_handle *lhandle)
{
  signed int err;
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  if(lhandle->ctl_format == ((struct _snd_ctl_elem_value *)NULL))
    return 0;

  else
  {
    err=snd_ctl_elem_read(lhandle->ctl, lhandle->ctl_format);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$1=snd_strerror(err);
          syslog(2, "Cannot get PCM Format element for %s: %s\n", lhandle->id, return_value_snd_strerror$1);
        }

        else
        {
          return_value_snd_strerror$2=snd_strerror(err);
          fprintf(stderr, "Cannot get PCM Format element for %s: %s\n", lhandle->id, return_value_snd_strerror$2);
        }
      while((_Bool)0);
      return err;
    }

    else
    {
      signed long int return_value_snd_ctl_elem_value_get_integer$3;
      return_value_snd_ctl_elem_value_get_integer$3=snd_ctl_elem_value_get_integer(lhandle->ctl_format, (unsigned int)0);
      return (signed int)return_value_snd_ctl_elem_value_get_integer$3;
    }
  }
}

// get_queued_capture_samples
// file pcmjob.c line 1674
static signed long int get_queued_capture_samples(struct loopback *loop)
{
  signed long int delay;
  signed int err;
  err=snd_pcm_delay(loop->capt->handle, &delay);
  if(!(err >= 0))
    return (signed long int)0;

  else
  {
    loop->capt->last_delay = delay;
    delay = delay + (signed long int)loop->capt->buf_count;
    return delay;
  }
}

// get_queued_playback_samples
// file pcmjob.c line 1659
static signed long int get_queued_playback_samples(struct loopback *loop)
{
  signed long int delay;
  signed int err;
  err=snd_pcm_delay(loop->play->handle, &delay);
  if(!(err >= 0))
    return (signed long int)0;

  else
  {
    loop->play->last_delay = delay;
    delay = delay + (signed long int)loop->play->buf_count;
    delay = delay + (signed long int)loop->src_out_frames;
    return delay;
  }
}

// get_rate
// file pcmjob.c line 1103
static signed int get_rate(struct loopback_handle *lhandle)
{
  signed int err;
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  if(lhandle->ctl_rate == ((struct _snd_ctl_elem_value *)NULL))
    return 0;

  else
  {
    err=snd_ctl_elem_read(lhandle->ctl, lhandle->ctl_rate);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$1=snd_strerror(err);
          syslog(2, "Cannot get PCM Rate element for %s: %s\n", lhandle->id, return_value_snd_strerror$1);
        }

        else
        {
          return_value_snd_strerror$2=snd_strerror(err);
          fprintf(stderr, "Cannot get PCM Rate element for %s: %s\n", lhandle->id, return_value_snd_strerror$2);
        }
      while((_Bool)0);
      return err;
    }

    else
    {
      signed long int return_value_snd_ctl_elem_value_get_integer$3;
      return_value_snd_ctl_elem_value_get_integer$3=snd_ctl_elem_value_get_integer(lhandle->ctl_rate, (unsigned int)0);
      return (signed int)return_value_snd_ctl_elem_value_get_integer$3;
    }
  }
}

// get_whole_latency
// file pcmjob.c line 91
static inline unsigned long int get_whole_latency(struct loopback *loop)
{
  return loop->latency;
}

// getcurtimestamp
// file pcmjob.c line 368
static signed int getcurtimestamp(struct timeval *ts)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  ts->tv_sec = tv.tv_sec;
  ts->tv_usec = tv.tv_usec;
  return 0;
}

// handle_ctl_events
// file pcmjob.c line 1700
static signed int handle_ctl_events(struct loopback_handle *lhandle, unsigned short int events)
{
  struct loopback *loop = lhandle->loopback;
  struct _snd_ctl_event *ev;
  signed int err;
  signed int restart = 0;
  do
  {
    unsigned long int return_value_snd_ctl_event_sizeof$1;
    return_value_snd_ctl_event_sizeof$1=snd_ctl_event_sizeof();
    void *return_value___builtin_alloca$2;
    return_value___builtin_alloca$2=__builtin_alloca(return_value_snd_ctl_event_sizeof$1);
    *(&ev) = (struct _snd_ctl_event *)return_value___builtin_alloca$2;
    unsigned long int return_value_snd_ctl_event_sizeof$3;
    return_value_snd_ctl_event_sizeof$3=snd_ctl_event_sizeof();
    memset((void *)*(&ev), 0, return_value_snd_ctl_event_sizeof$3);
  }
  while((_Bool)0);
  const char *return_value_snd_ctl_event_elem_get_name$5;
  signed int return_value_ctl_event_check$9;
  signed int return_value_ctl_event_check$8;
  signed int return_value_ctl_event_check$7;
  signed int return_value_ctl_event_check$6;
  do
  {
    err=snd_ctl_read(lhandle->ctl, ev);
    if(err == 0)
      break;

    if(err == -11)
      break;

    if(!(err >= 0))
      break;

    enum _snd_ctl_event_type return_value_snd_ctl_event_get_type$4;
    return_value_snd_ctl_event_get_type$4=snd_ctl_event_get_type(ev);
    if((signed int)return_value_snd_ctl_event_get_type$4 == SND_CTL_EVENT_ELEM)
    {
      if(!(lhandle == loop->play))
      {
        if(verbose >= 7)
        {
          return_value_snd_ctl_event_elem_get_name$5=snd_ctl_event_elem_get_name(ev);
          snd_output_printf(loop->output, "%s: ctl event!!!! %s\n", lhandle->id, return_value_snd_ctl_event_elem_get_name$5);
        }

        return_value_ctl_event_check$9=ctl_event_check(lhandle->ctl_active, ev);
        if(!(return_value_ctl_event_check$9 == 0))
          continue;

        return_value_ctl_event_check$8=ctl_event_check(lhandle->ctl_format, ev);
        if(!(return_value_ctl_event_check$8 == 0))
        {
          err=get_format(lhandle);
          if(!((signed int)lhandle->format == err))
            restart = 1;

          continue;
        }

        return_value_ctl_event_check$7=ctl_event_check(lhandle->ctl_rate, ev);
        if(!(return_value_ctl_event_check$7 == 0))
        {
          err=get_rate(lhandle);
          if(!(lhandle->rate == (unsigned int)err))
            restart = 1;

          continue;
        }

        return_value_ctl_event_check$6=ctl_event_check(lhandle->ctl_channels, ev);
        if(return_value_ctl_event_check$6 == 0)
          goto __ctl_check;

        err=get_channels(lhandle);
        if(!(lhandle->channels == (unsigned int)err))
          restart = 1;

      }

      else
      {

      __ctl_check:
        ;
        control_event(lhandle, ev);
      }
    }

  }
  while((_Bool)1);
  err=get_active(lhandle);
  if(verbose >= 8)
    snd_output_printf(loop->output, "%s: ctl event active %i\n", lhandle->id, err);

  if(err == 0)
  {
    if(!(lhandle->loopback->running == 0u))
    {
      loop->stop_pending = (unsigned int)1;
      loop->stop_count = (unsigned long int)0;
    }

  }

  else
  {
    loop->stop_pending = (unsigned int)0;
    if((signed int)loop->running == 0)
      restart = 1;

  }
  if(!(restart == 0))
  {
    pcmjob_stop(loop);
    err=pcmjob_start(loop);
    if(err >= 0)
      goto __CPROVER_DUMP_L17;

    return err;
  }

  else
  {

  __CPROVER_DUMP_L17:
    ;
    return 1;
  }
}

// help
// file alsaloop.c line 161
void help(void)
{
  signed int k;
  printf("Usage: alsaloop [OPTION]...\n\n-h,--help      help\n-g,--config    configuration file (one line = one job specified)\n-d,--daemonize daemonize the main process and use syslog for errors\n-P,--pdevice   playback device\n-C,--cdevice   capture device\n-X,--pctl      playback ctl device\n-Y,--cctl      capture ctl device\n-l,--latency   requested latency in frames\n-t,--tlatency  requested latency in usec (1/1000000sec)\n-f,--format    sample format\n-c,--channels  channels\n-r,--rate      rate\n-n,--resample  resample in alsa-lib\n-A,--samplerate use converter (0=sincbest,1=sincmedium,2=sincfastest,\n                               3=zerohold,4=linear)\n-B,--buffer    buffer size in frames\n-E,--period    period size in frames\n-s,--seconds   duration of loop in seconds\n-b,--nblock    non-block mode (very early process wakeup)\n-S,--sync      sync mode(0=none,1=simple,2=captshift,3=playshift,4=samplerate,\n                         5=auto)\n-a,--slave     stream parameters slave mode (0=auto, 1=on, 2=off)\n-T,--thread    thread number (-1 = create unique)\n-m,--mixer\tredirect mixer, argument is:\n\t\t    SRC_SLAVE_ID(PLAYBACK)[@DST_SLAVE_ID(CAPTURE)]\n-O,--ossmixer\trescan and redirect oss mixer, argument is:\n\t\t    ALSA_ID@OSS_ID  (for example: \"Master@VOLUME\")\n-e,--effect    apply an effect (bandpass filter sweep)\n-v,--verbose   verbose mode (more -v means more verbose)\n-w,--workaround use workaround (serialopen)\n-U,--xrun      xrun profiling\n-W,--wake      process wake timeout in ms\n-z,--syslog    use syslog for errors\n");
  printf("\nRecognized sample formats are:");
  k = 0;
  for( ; !(k >= SND_PCM_FORMAT_LAST); k = k + 1)
  {
    const char *s;
    s=snd_pcm_format_name((const enum _snd_pcm_format)k);
    if(!(s == ((const char *)NULL)))
      printf(" %s", s);

  }
  printf("\n\n");
  printf("Tip #1 (usable 500ms latency, good CPU usage, superb xrun prevention):\n  alsaloop -t 500000\nTip #2 (superb 1ms latency, but heavy CPU usage):\n  alsaloop -t 1000\n");
}

// id_str
// file control.c line 29
static char * id_str(struct _snd_ctl_elem_id *id)
{
  unsigned int return_value_snd_ctl_elem_id_get_numid$1;
  return_value_snd_ctl_elem_id_get_numid$1=snd_ctl_elem_id_get_numid(id);
  enum _snd_ctl_elem_iface return_value_snd_ctl_elem_id_get_interface$2;
  return_value_snd_ctl_elem_id_get_interface$2=snd_ctl_elem_id_get_interface(id);
  const char *return_value_snd_ctl_elem_iface_name$3;
  return_value_snd_ctl_elem_iface_name$3=snd_ctl_elem_iface_name(return_value_snd_ctl_elem_id_get_interface$2);
  unsigned int return_value_snd_ctl_elem_id_get_device$4;
  return_value_snd_ctl_elem_id_get_device$4=snd_ctl_elem_id_get_device(id);
  unsigned int return_value_snd_ctl_elem_id_get_subdevice$5;
  return_value_snd_ctl_elem_id_get_subdevice$5=snd_ctl_elem_id_get_subdevice(id);
  const char *return_value_snd_ctl_elem_id_get_name$6;
  return_value_snd_ctl_elem_id_get_name$6=snd_ctl_elem_id_get_name(id);
  unsigned int return_value_snd_ctl_elem_id_get_index$7;
  return_value_snd_ctl_elem_id_get_index$7=snd_ctl_elem_id_get_index(id);
  static char str[128l];
  sprintf(str, "%i,%s,%i,%i,%s,%i", return_value_snd_ctl_elem_id_get_numid$1, return_value_snd_ctl_elem_iface_name$3, return_value_snd_ctl_elem_id_get_device$4, return_value_snd_ctl_elem_id_get_subdevice$5, return_value_snd_ctl_elem_id_get_name$6, return_value_snd_ctl_elem_id_get_index$7);
  return str;
}

// init_handle
// file pcmjob.c line 1262
static signed int init_handle(struct loopback_handle *lhandle, signed int alloc)
{
  unsigned long int lat;
  signed int return_value_snd_pcm_format_physical_width$1;
  return_value_snd_pcm_format_physical_width$1=snd_pcm_format_physical_width(lhandle->format);
  lhandle->frame_size = (unsigned int)(return_value_snd_pcm_format_physical_width$1 / 8) * lhandle->channels;
  lhandle->sync_point = (unsigned long int)(lhandle->rate * (unsigned int)15);
  lat = lhandle->loopback->latency;
  if(!(lat >= (unsigned long int)lhandle->buffer_size))
    lat = (unsigned long int)lhandle->buffer_size;

  lhandle->buf_size = lat * (unsigned long int)2;
  if(!(alloc == 0))
  {
    void *return_value_calloc$2;
    return_value_calloc$2=calloc((unsigned long int)1, lhandle->buf_size * (unsigned long int)lhandle->frame_size);
    lhandle->buf = (char *)return_value_calloc$2;
    if(lhandle->buf == ((char *)NULL))
      return -12;

  }

  return 0;
}

// init_mixer_control
// file alsaloop.c line 240
static signed int init_mixer_control(struct loopback_control *control, char *id)
{
  signed int err;
  err=snd_ctl_elem_id_malloc(&control->id);
  if(!(err >= 0))
    return err;

  else
  {
    err=snd_ctl_elem_info_malloc(&control->info);
    if(!(err >= 0))
      return err;

    else
    {
      err=snd_ctl_elem_value_malloc(&control->value);
      if(!(err >= 0))
        return err;

      else
      {
        err=control_parse_id(id, control->id);
        if(!(err >= 0))
          return err;

        else
          return 0;
      }
    }
  }
}

// lhandle_start
// file pcmjob.c line 1377
static void lhandle_start(struct loopback_handle *lhandle)
{
  lhandle->buf_pos = (unsigned long int)0;
  lhandle->buf_count = (unsigned long int)0;
  lhandle->counter = (unsigned long long int)0;
  lhandle->total_queued = (unsigned long int)0;
}

// main
// file alsaloop.c line 835
signed int main(signed int argc, char **argv)
{
  struct _snd_output *output;
  signed int i;
  signed int j;
  signed int k;
  signed int l;
  signed int err;
  err=snd_output_stdio_attach(&output, stdout, 0);
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  if(!(err >= 0))
  {
    do
      if(!(use_syslog == 0))
      {
        return_value_snd_strerror$1=snd_strerror(err);
        syslog(2, "Output failed: %s\n", return_value_snd_strerror$1);
      }

      else
      {
        return_value_snd_strerror$2=snd_strerror(err);
        fprintf(stderr, "Output failed: %s\n", return_value_snd_strerror$2);
      }
    while((_Bool)0);
    exit(1);
  }

  err=parse_config(argc, argv, output, 1);
  if(!(err >= 0))
  {
    do
      if(!(use_syslog == 0))
        syslog(2, "Unable to parse arguments or configuration...\n");

      else
        fprintf(stderr, "Unable to parse arguments or configuration...\n");
    while((_Bool)0);
    exit(1);
  }

  while(my_argc >= 1)
  {
    my_argc = my_argc - 1;
    free((void *)my_argv[(signed long int)my_argc]);
  }
  free((void *)my_argv);
  if(!(loopbacks_count >= 1))
  {
    do
      if(!(use_syslog == 0))
        syslog(2, "No loopback defined...\n");

      else
        fprintf(stderr, "No loopback defined...\n");
    while((_Bool)0);
    exit(1);
  }

  signed int *return_value___errno_location$3;
  char *return_value_strerror$4;
  signed int *return_value___errno_location$5;
  char *return_value_strerror$6;
  signed int *return_value___errno_location$8;
  char *return_value_strerror$9;
  signed int *return_value___errno_location$10;
  char *return_value_strerror$11;
  if(!(daemonize == 0))
  {
    signed int return_value_daemon$7;
    return_value_daemon$7=daemon(0, 0);
    if(!(return_value_daemon$7 >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value___errno_location$3=__errno_location();
          return_value_strerror$4=strerror(*return_value___errno_location$3);
          syslog(2, "daemon() failed: %s\n", return_value_strerror$4);
        }

        else
        {
          return_value___errno_location$5=__errno_location();
          return_value_strerror$6=strerror(*return_value___errno_location$5);
          fprintf(stderr, "daemon() failed: %s\n", return_value_strerror$6);
        }
      while((_Bool)0);
      exit(1);
    }

    i=fork();
    if(!(i >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value___errno_location$8=__errno_location();
          return_value_strerror$9=strerror(*return_value___errno_location$8);
          syslog(2, "fork() failed: %s\n", return_value_strerror$9);
        }

        else
        {
          return_value___errno_location$10=__errno_location();
          return_value_strerror$11=strerror(*return_value___errno_location$10);
          fprintf(stderr, "fork() failed: %s\n", return_value_strerror$11);
        }
      while((_Bool)0);
      exit(1);
    }

    if(i >= 1)
      exit(0);

  }

  j = -1;
  do
  {
    k = 0x7fffffff;
    i = 0;
    for( ; !(i >= loopbacks_count); i = i + 1)
      if(!(loopbacks[(signed long int)i]->thread >= k))
      {
        if(!(j >= loopbacks[(signed long int)i]->thread))
          k = loopbacks[(signed long int)i]->thread;

      }

    j = j + 1;
    i = 0;
    for( ; !(i >= loopbacks_count); i = i + 1)
      if(loopbacks[(signed long int)i]->thread == k)
        loopbacks[(signed long int)i]->thread = j;

  }
  while(!(k == 0x7fffffff));
  i = 0;
  j = -1;
  for( ; !(i >= loopbacks_count); i = i + 1)
    if(!(j >= loopbacks[(signed long int)i]->thread))
      j = loopbacks[(signed long int)i]->thread;

  j = j + 1;
  void *return_value_calloc$12;
  return_value_calloc$12=calloc((unsigned long int)1, sizeof(struct loopback_thread) /*48ul*/  * (unsigned long int)j);
  threads = (struct loopback_thread *)return_value_calloc$12;
  if(threads == ((struct loopback_thread *)NULL))
  {
    do
      if(!(use_syslog == 0))
        syslog(2, "No enough memory\n");

      else
        fprintf(stderr, "No enough memory\n");
    while((_Bool)0);
    exit(1);
  }

  k = 0;
  signed int tmp_post$14;
  for( ; !(k >= j); k = k + 1)
  {
    l = 0;
    i = l;
    for( ; !(i >= loopbacks_count); i = i + 1)
      if(loopbacks[(signed long int)i]->thread == k)
        l = l + 1;

    void *return_value_malloc$13;
    return_value_malloc$13=malloc((unsigned long int)l * sizeof(struct loopback *) /*8ul*/ );
    (threads + (signed long int)k)->loopbacks = (struct loopback **)return_value_malloc$13;
    (threads + (signed long int)k)->loopbacks_count = l;
    (threads + (signed long int)k)->output = output;
    (threads + (signed long int)k)->threaded = (signed int)(j > 1);
    l = 0;
    i = l;
    for( ; !(i >= loopbacks_count); i = i + 1)
      if(loopbacks[(signed long int)i]->thread == k)
      {
        tmp_post$14 = l;
        l = l + 1;
        (threads + (signed long int)k)->loopbacks[(signed long int)tmp_post$14] = loopbacks[(signed long int)i];
      }

  }
  threads_count = j;
  main_job=pthread_self();
  signal(2, signal_handler);
  signal(15, signal_handler);
  signal(6, signal_handler);
  signal(10, signal_handler_state);
  signal(12, signal_handler_ignore);
  k = 0;
  for( ; !(k >= threads_count); k = k + 1)
    thread_job(&threads[(signed long int)k]);
  if(j >= 2)
  {
    k = 0;
    for( ; !(k >= threads_count); k = k + 1)
      pthread_join((threads + (signed long int)k)->thread, (void **)(void *)0);
  }

  if(!(use_syslog == 0))
    closelog();

  exit(0);
}

// my_exit
// file alsaloop.c line 61
static void my_exit(struct loopback_thread *thread, signed int exitcode)
{
  signed int i = 0;
  for( ; !(i >= thread->loopbacks_count); i = i + 1)
    pcmjob_done(thread->loopbacks[(signed long int)i]);
  if(!(thread->threaded == 0))
  {
    thread->exitcode = exitcode;
    pthread_exit(NULL);
  }

  exit(exitcode);
}

// openctl
// file pcmjob.c line 1154
static signed int openctl(struct loopback_handle *lhandle, signed int device, signed int subdevice)
{
  signed int err;
  lhandle->ctl_rate_shift = (struct _snd_ctl_elem_value *)(void *)0;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  if(lhandle->loopback->play == lhandle)
  {
    if(!(lhandle->loopback->controls == ((struct loopback_mixer *)NULL)))
      goto __events;

    return 0;
  }

  else
  {
    openctl_elem(lhandle, device, subdevice, "PCM Notify", &lhandle->ctl_notify);
    openctl_elem(lhandle, device, subdevice, "PCM Rate Shift 100000", &lhandle->ctl_rate_shift);
    set_rate_shift(lhandle, (double)1);
    openctl_elem(lhandle, device, subdevice, "PCM Slave Active", &lhandle->ctl_active);
    openctl_elem(lhandle, device, subdevice, "PCM Slave Format", &lhandle->ctl_format);
    openctl_elem(lhandle, device, subdevice, "PCM Slave Rate", &lhandle->ctl_rate);
    openctl_elem(lhandle, device, subdevice, "PCM Slave Channels", &lhandle->ctl_channels);
    if(!(lhandle->ctl_active == ((struct _snd_ctl_elem_value *)NULL)))
      tmp_if_expr$2 = lhandle->ctl_format != ((struct _snd_ctl_elem_value *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
      tmp_if_expr$3 = lhandle->ctl_rate != ((struct _snd_ctl_elem_value *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$3 = (_Bool)0;
    if(tmp_if_expr$3)
      tmp_if_expr$4 = lhandle->ctl_channels != ((struct _snd_ctl_elem_value *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$4 = (_Bool)0;
    if(tmp_if_expr$4)
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = lhandle->loopback->controls != ((struct loopback_mixer *)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
    {

    __events:
      ;
      err=snd_ctl_poll_descriptors_count(lhandle->ctl);
      if(!(err >= 0))
        lhandle->ctl_pollfd_count = (unsigned int)0;

      else
        lhandle->ctl_pollfd_count = (unsigned int)err;
      signed int return_value_snd_ctl_subscribe_events$1;
      return_value_snd_ctl_subscribe_events$1=snd_ctl_subscribe_events(lhandle->ctl, 1);
      if(!(return_value_snd_ctl_subscribe_events$1 >= 0))
        lhandle->ctl_pollfd_count = (unsigned int)0;

    }

    return 0;
  }
}

// openctl_elem
// file pcmjob.c line 1131
static void openctl_elem(struct loopback_handle *lhandle, signed int device, signed int subdevice, const char *name, struct _snd_ctl_elem_value **elem)
{
  signed int err;
  signed int return_value_snd_ctl_elem_value_malloc$1;
  return_value_snd_ctl_elem_value_malloc$1=snd_ctl_elem_value_malloc(elem);
  if(!(return_value_snd_ctl_elem_value_malloc$1 >= 0))
    *elem = (struct _snd_ctl_elem_value *)(void *)0;

  else
  {
    snd_ctl_elem_value_set_interface(*elem, (enum _snd_ctl_elem_iface)SND_CTL_ELEM_IFACE_PCM);
    snd_ctl_elem_value_set_device(*elem, (unsigned int)device);
    snd_ctl_elem_value_set_subdevice(*elem, (unsigned int)subdevice);
    snd_ctl_elem_value_set_name(*elem, name);
    err=snd_ctl_elem_read(lhandle->ctl, *elem);
    if(!(err >= 0))
    {
      snd_ctl_elem_value_free(*elem);
      *elem = (struct _snd_ctl_elem_value *)(void *)0;
    }

  }
}

// openit
// file pcmjob.c line 1193
static signed int openit(struct loopback_handle *lhandle)
{
  struct _snd_pcm_info *info;
  signed int stream = lhandle == lhandle->loopback->play ? SND_PCM_STREAM_PLAYBACK : SND_PCM_STREAM_CAPTURE;
  signed int err;
  signed int card;
  signed int device;
  signed int subdevice;
  pcm_open_lock();
  err=snd_pcm_open(&lhandle->handle, lhandle->device, (enum _snd_pcm_stream)stream, 0x00000001);
  pcm_open_unlock();
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  _Bool tmp_if_expr$7;
  const char *return_value_snd_strerror$5;
  const char *return_value_snd_strerror$6;
  if(!(err >= 0))
  {
    do
      if(!(use_syslog == 0))
      {
        return_value_snd_strerror$1=snd_strerror(err);
        syslog(2, "%s open error: %s\n", lhandle->id, return_value_snd_strerror$1);
      }

      else
      {
        return_value_snd_strerror$2=snd_strerror(err);
        fprintf(stderr, "%s open error: %s\n", lhandle->id, return_value_snd_strerror$2);
      }
    while((_Bool)0);
    return err;
  }

  else
  {
    err=snd_pcm_info_malloc(&info);
    if(!(err >= 0))
      return err;

    else
    {
      err=snd_pcm_info(lhandle->handle, info);
      if(!(err >= 0))
      {
        snd_pcm_info_free(info);
        return err;
      }

      else
      {
        card=snd_pcm_info_get_card(info);
        unsigned int return_value_snd_pcm_info_get_device$3;
        return_value_snd_pcm_info_get_device$3=snd_pcm_info_get_device(info);
        device = (signed int)return_value_snd_pcm_info_get_device$3;
        unsigned int return_value_snd_pcm_info_get_subdevice$4;
        return_value_snd_pcm_info_get_subdevice$4=snd_pcm_info_get_subdevice(info);
        subdevice = (signed int)return_value_snd_pcm_info_get_subdevice$4;
        snd_pcm_info_free(info);
        lhandle->card_number = card;
        lhandle->ctl = (struct _snd_ctl *)(void *)0;
        if(card >= 0)
          tmp_if_expr$7 = (_Bool)1;

        else
          tmp_if_expr$7 = lhandle->ctldev != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$7)
        {
          char name[16l];
          char *dev = lhandle->ctldev;
          if(dev == ((char *)NULL))
          {
            sprintf(name, "hw:%i", card);
            dev = name;
          }

          pcm_open_lock();
          err=snd_ctl_open(&lhandle->ctl, dev, 0x0001);
          pcm_open_unlock();
          if(!(err >= 0))
          {
            do
              if(!(use_syslog == 0))
              {
                return_value_snd_strerror$5=snd_strerror(err);
                syslog(2, "%s [%s] ctl open error: %s\n", lhandle->id, dev, return_value_snd_strerror$5);
              }

              else
              {
                return_value_snd_strerror$6=snd_strerror(err);
                fprintf(stderr, "%s [%s] ctl open error: %s\n", lhandle->id, dev, return_value_snd_strerror$6);
              }
            while((_Bool)0);
            lhandle->ctl = (struct _snd_ctl *)(void *)0;
          }

          if(!(lhandle->ctl == ((struct _snd_ctl *)NULL)))
            openctl(lhandle, device, subdevice);

        }

        return 0;
      }
    }
  }
}

// oss_set
// file control.c line 212
static signed int oss_set(struct loopback *loop, struct loopback_ossmixer *ossmix, signed int enable)
{
  char buf[128l];
  char file[128l];
  signed int fd;
  unsigned long int return_value_strlen$1;
  signed long int return_value_write$2;
  unsigned long int return_value_strlen$3;
  if(!(loop->capt->card_number >= 0))
    return 0;

  else
  {
    if(enable == 0)
      sprintf(buf, "%s \"\" 0\n", ossmix->oss_id);

    else
      sprintf(buf, "%s \"%s\" %i\n", ossmix->oss_id, ossmix->alsa_id, ossmix->alsa_index);
    sprintf(file, "/proc/asound/card%i/oss_mixer", loop->capt->card_number);
    if(!(verbose == 0))
      snd_output_printf(loop->output, "%s: Initialize OSS volume %s: %s", loop->id, (const void *)file, (const void *)buf);

    fd=open(file, 01);
    if(fd >= 0)
    {
      return_value_strlen$1=strlen(buf);
      return_value_write$2=write(fd, (const void *)buf, return_value_strlen$1);
      return_value_strlen$3=strlen(buf);
      if(!((unsigned long int)return_value_write$2 == return_value_strlen$3))
        goto __CPROVER_DUMP_L5;

      close(fd);
      return 0;
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      if(fd >= 0)
        close(fd);

      do
        if(!(use_syslog == 0))
          syslog(6, "%s: Unable to initialize OSS Mixer ID '%s'\n", loop->id, ossmix->oss_id);

        else
          fprintf(stderr, "%s: Unable to initialize OSS Mixer ID '%s'\n", loop->id, ossmix->oss_id);
      while((_Bool)0);
      return -1;
    }
  }
}

// parse_config
// file alsaloop.c line 348
static signed int parse_config(signed int argc, char **argv, struct _snd_output *output, signed int cmdline)
{
  struct option long_option[29l] = { { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name="config", .has_arg=1, .flag=(signed int *)(void *)0, .val=103 },
    { .name="daemonize", .has_arg=0, .flag=(signed int *)(void *)0, .val=100 },
    { .name="pdevice", .has_arg=1, .flag=(signed int *)(void *)0, .val=80 },
    { .name="cdevice", .has_arg=1, .flag=(signed int *)(void *)0, .val=67 },
    { .name="pctl", .has_arg=1, .flag=(signed int *)(void *)0, .val=88 },
    { .name="cctl", .has_arg=1, .flag=(signed int *)(void *)0, .val=89 },
    { .name="latency", .has_arg=1, .flag=(signed int *)(void *)0, .val=108 },
    { .name="tlatency", .has_arg=1, .flag=(signed int *)(void *)0, .val=116 },
    { .name="format", .has_arg=1, .flag=(signed int *)(void *)0, .val=102 },
    { .name="channels", .has_arg=1, .flag=(signed int *)(void *)0, .val=99 },
    { .name="rate", .has_arg=1, .flag=(signed int *)(void *)0, .val=114 },
    { .name="buffer", .has_arg=1, .flag=(signed int *)(void *)0, .val=66 },
    { .name="period", .has_arg=1, .flag=(signed int *)(void *)0, .val=69 },
    { .name="seconds", .has_arg=1, .flag=(signed int *)(void *)0, .val=115 },
    { .name="nblock", .has_arg=0, .flag=(signed int *)(void *)0, .val=98 },
    { .name="effect", .has_arg=0, .flag=(signed int *)(void *)0, .val=101 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name="resample", .has_arg=0, .flag=(signed int *)(void *)0, .val=110 },
    { .name="samplerate", .has_arg=1, .flag=(signed int *)(void *)0, .val=65 },
    { .name="sync", .has_arg=1, .flag=(signed int *)(void *)0, .val=83 },
    { .name="slave", .has_arg=1, .flag=(signed int *)(void *)0, .val=97 },
    { .name="thread", .has_arg=1, .flag=(signed int *)(void *)0, .val=84 },
    { .name="mixer", .has_arg=1, .flag=(signed int *)(void *)0, .val=109 },
    { .name="ossmixer", .has_arg=1, .flag=(signed int *)(void *)0, .val=79 },
    { .name="workaround", .has_arg=1, .flag=(signed int *)(void *)0, .val=119 },
    { .name="xrun", .has_arg=0, .flag=(signed int *)(void *)0, .val=85 },
    { .name="syslog", .has_arg=0, .flag=(signed int *)(void *)0, .val=122 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
  signed int err;
  signed int morehelp;
  char *arg_config = (char *)(void *)0;
  char *arg_pdevice = (char *)(void *)0;
  char *arg_cdevice = (char *)(void *)0;
  char *arg_pctl = (char *)(void *)0;
  char *arg_cctl = (char *)(void *)0;
  unsigned int arg_latency_req = (unsigned int)0;
  unsigned int arg_latency_reqtime = (unsigned int)10000;
  enum _snd_pcm_format arg_format = (enum _snd_pcm_format)SND_PCM_FORMAT_S16_LE;
  unsigned int arg_channels = (unsigned int)2;
  unsigned int arg_rate = (unsigned int)48000;
  unsigned long int arg_buffer_size = (unsigned long int)0;
  unsigned long int arg_period_size = (unsigned long int)0;
  unsigned long int arg_loop_time = ~0UL;
  signed int arg_nblock = 0;
  signed int arg_effect = 0;
  signed int arg_resample = 0;
  signed int arg_samplerate = 2 + 1;
  signed int arg_sync = SYNC_TYPE_AUTO;
  signed int arg_slave = SLAVE_TYPE_AUTO;
  signed int arg_thread = 0;
  struct loopback *loop = (struct loopback *)(void *)0;
  char *arg_mixers[64l];
  signed int arg_mixers_count = 0;
  char *arg_ossmixers[64l];
  signed int arg_ossmixers_count = 0;
  signed int arg_xrun = arg_default_xrun;
  signed int arg_wake = arg_default_wake;
  morehelp = 0;
  signed int return_value_strcasecmp$5;
  signed int return_value_strcasecmp$4;
  signed int return_value_strcasecmp$3;
  signed int return_value_strcasecmp$2;
  signed int return_value_strcasecmp$1;
  signed int return_value_strcasecmp$6;
  signed int return_value_strcasecmp$8;
  signed int return_value_strcasecmp$7;
  signed int tmp_post$9;
  signed int tmp_post$10;
  signed int return_value_strcasecmp$11;
  while((_Bool)1)
  {
    signed int c;
    c=getopt_long(argc, argv, "hdg:P:C:X:Y:l:t:F:f:c:r:s:benvA:S:a:m:T:O:w:UW:z", long_option, (signed int *)(void *)0);
    if(!(c >= 0))
      break;

    switch(c)
    {
      case 104:
      {
        morehelp = morehelp + 1;
        break;
      }
      case 103:
      {
        arg_config=strdup(optarg);
        break;
      }
      case 100:
      {
        daemonize = 1;
        enable_syslog();
        break;
      }
      case 80:
      {
        arg_pdevice=strdup(optarg);
        break;
      }
      case 67:
      {
        arg_cdevice=strdup(optarg);
        break;
      }
      case 88:
      {
        arg_pctl=strdup(optarg);
        break;
      }
      case 89:
      {
        arg_cctl=strdup(optarg);
        break;
      }
      case 108:
      {
        err=atoi(optarg);
        arg_latency_req = (unsigned int)(err >= 4 ? err : 4);
        break;
      }
      case 116:
      {
        err=atoi(optarg);
        arg_latency_reqtime = (unsigned int)(err >= 500 ? err : 500);
        break;
      }
      case 102:
      {
        arg_format=snd_pcm_format_value(optarg);
        if((signed int)arg_format == SND_PCM_FORMAT_UNKNOWN)
        {
          do
            if(!(use_syslog == 0))
              syslog(4, "Unknown format, setting to default S16_LE\n");

            else
              fprintf(stderr, "Unknown format, setting to default S16_LE\n");
          while((_Bool)0);
          arg_format = (enum _snd_pcm_format)SND_PCM_FORMAT_S16_LE;
        }

        break;
      }
      case 99:
      {
        err=atoi(optarg);
        arg_channels = (unsigned int)(err >= 1 && err < 1024 ? err : 1);
        break;
      }
      case 114:
      {
        err=atoi(optarg);
        arg_rate = (unsigned int)(err >= 4000 && err < 200000 ? err : 44100);
        break;
      }
      case 66:
      {
        err=atoi(optarg);
        arg_buffer_size = (unsigned long int)(err >= 32 && err < 200000 ? err : 0);
        break;
      }
      case 69:
      {
        err=atoi(optarg);
        arg_period_size = (unsigned long int)(err >= 32 && err < 200000 ? err : 0);
        break;
      }
      case 115:
      {
        err=atoi(optarg);
        arg_loop_time = (unsigned long int)(err >= 1 && err <= 100000 ? err : 30);
        break;
      }
      case 98:
      {
        arg_nblock = 1;
        break;
      }
      case 101:
      {
        arg_effect = 1;
        break;
      }
      case 110:
      {
        arg_resample = 1;
        break;
      }
      case 65:
      {
        return_value_strcasecmp$5=strcasecmp(optarg, "sincbest");
        if(return_value_strcasecmp$5 == 0)
          arg_samplerate = 0;

        else
        {
          return_value_strcasecmp$4=strcasecmp(optarg, "sincmedium");
          if(return_value_strcasecmp$4 == 0)
            arg_samplerate = 1;

          else
          {
            return_value_strcasecmp$3=strcasecmp(optarg, "sincfastest");
            if(return_value_strcasecmp$3 == 0)
              arg_samplerate = 2;

            else
            {
              return_value_strcasecmp$2=strcasecmp(optarg, "zerohold");
              if(return_value_strcasecmp$2 == 0)
                arg_samplerate = 3;

              else
              {
                return_value_strcasecmp$1=strcasecmp(optarg, "linear");
                if(return_value_strcasecmp$1 == 0)
                  arg_samplerate = 4;

                else
                  arg_samplerate=atoi(optarg);
              }
            }
          }
        }
        if(arg_samplerate >= 5 || !(arg_samplerate >= 0))
          arg_sync = 2;

        arg_samplerate = arg_samplerate + 1;
        break;
      }
      case 83:
      {
        return_value_strcasecmp$6=strcasecmp(optarg, "samplerate");
        if(return_value_strcasecmp$6 == 0)
          arg_sync = SYNC_TYPE_SAMPLERATE;

        else
          if((signed int)*optarg == 110)
            arg_sync = SYNC_TYPE_NONE;

          else
            if((signed int)*optarg == 115)
              arg_sync = SYNC_TYPE_SIMPLE;

            else
              if((signed int)*optarg == 99)
                arg_sync = SYNC_TYPE_CAPTRATESHIFT;

              else
                if((signed int)*optarg == 112)
                  arg_sync = SYNC_TYPE_PLAYRATESHIFT;

                else
                  if((signed int)*optarg == 114)
                    arg_sync = SYNC_TYPE_SAMPLERATE;

                  else
                    arg_sync=atoi(optarg);
        if(arg_sync >= 6 || !(arg_sync >= 0))
          arg_sync = SYNC_TYPE_AUTO;

        break;
      }
      case 97:
      {
        if((signed int)*optarg == 97)
          arg_slave = SLAVE_TYPE_AUTO;

        else
        {
          return_value_strcasecmp$8=strcasecmp(optarg, "on");
          if(return_value_strcasecmp$8 == 0)
            arg_slave = SLAVE_TYPE_ON;

          else
          {
            return_value_strcasecmp$7=strcasecmp(optarg, "off");
            if(return_value_strcasecmp$7 == 0)
              arg_slave = SLAVE_TYPE_OFF;

            else
              arg_slave=atoi(optarg);
          }
        }
        if(arg_slave >= 3 || !(arg_slave >= 0))
          arg_slave = SLAVE_TYPE_AUTO;

        break;
      }
      case 84:
      {
        arg_thread=atoi(optarg);
        if(!(arg_thread >= 0))
          arg_thread = 10000000 + loopbacks_count;

        break;
      }
      case 109:
      {
        if(arg_mixers_count >= 64)
        {
          do
            if(!(use_syslog == 0))
              syslog(2, "Maximum redirected mixer controls reached (max %i)\n", (signed int)64);

            else
              fprintf(stderr, "Maximum redirected mixer controls reached (max %i)\n", (signed int)64);
          while((_Bool)0);
          exit(1);
        }

        tmp_post$9 = arg_mixers_count;
        arg_mixers_count = arg_mixers_count + 1;
        arg_mixers[(signed long int)tmp_post$9] = optarg;
        break;
      }
      case 79:
      {
        if(arg_ossmixers_count >= 64)
        {
          do
            if(!(use_syslog == 0))
              syslog(2, "Maximum redirected mixer controls reached (max %i)\n", (signed int)64);

            else
              fprintf(stderr, "Maximum redirected mixer controls reached (max %i)\n", (signed int)64);
          while((_Bool)0);
          exit(1);
        }

        tmp_post$10 = arg_ossmixers_count;
        arg_ossmixers_count = arg_ossmixers_count + 1;
        arg_ossmixers[(signed long int)tmp_post$10] = optarg;
        break;
      }
      case 118:
      {
        verbose = verbose + 1;
        break;
      }
      case 119:
      {
        return_value_strcasecmp$11=strcasecmp(optarg, "serialopen");
        if(return_value_strcasecmp$11 == 0)
          workarounds = workarounds | 1 << 0;

        break;
      }
      case 85:
      {
        arg_xrun = 1;
        if(!(cmdline == 0))
          arg_default_xrun = 1;

        break;
      }
      case 87:
      {
        arg_wake=atoi(optarg);
        if(!(cmdline == 0))
          arg_default_wake = arg_wake;

        break;
      }
      case 122:
        enable_syslog();
    }
  }
  if(!(morehelp == 0))
  {
    help();
    exit(0);
  }

  if(arg_config == ((char *)NULL))
  {
    struct loopback_handle *play;
    struct loopback_handle *capt;
    err=create_loopback_handle(&play, arg_pdevice, arg_pctl, "playback");
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Unable to create playback handle.\n");

        else
          fprintf(stderr, "Unable to create playback handle.\n");
      while((_Bool)0);
      exit(1);
    }

    err=create_loopback_handle(&capt, arg_cdevice, arg_cctl, "capture");
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Unable to create capture handle.\n");

        else
          fprintf(stderr, "Unable to create capture handle.\n");
      while((_Bool)0);
      exit(1);
    }

    err=create_loopback(&loop, play, capt, output);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Unable to create loopback handle.\n");

        else
          fprintf(stderr, "Unable to create loopback handle.\n");
      while((_Bool)0);
      exit(1);
    }

    capt->format = arg_format;
    play->format = capt->format;
    capt->rate_req = arg_rate;
    capt->rate = capt->rate_req;
    play->rate_req = capt->rate;
    play->rate = play->rate_req;
    capt->channels = arg_channels;
    play->channels = capt->channels;
    capt->buffer_size_req = (unsigned int)arg_buffer_size;
    play->buffer_size_req = capt->buffer_size_req;
    capt->period_size_req = (unsigned int)arg_period_size;
    play->period_size_req = capt->period_size_req;
    capt->resample = (unsigned int)arg_resample;
    play->resample = (unsigned int)capt->resample;
    capt->nblock = (unsigned int)(arg_nblock != 0 ? 1 : 0);
    play->nblock = (unsigned int)capt->nblock;
    loop->latency_req = arg_latency_req;
    loop->latency_reqtime = arg_latency_reqtime;
    loop->sync = (enum _sync_type)arg_sync;
    loop->slave = (enum _slave_type)arg_slave;
    loop->thread = arg_thread;
    loop->xrun = (unsigned int)arg_xrun;
    loop->wake = (unsigned int)arg_wake;
    err=add_mixers(loop, arg_mixers, arg_mixers_count);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Unable to add mixer controls.\n");

        else
          fprintf(stderr, "Unable to add mixer controls.\n");
      while((_Bool)0);
      exit(1);
    }

    err=add_oss_mixers(loop, arg_ossmixers, arg_ossmixers_count);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Unable to add ossmixer controls.\n");

        else
          fprintf(stderr, "Unable to add ossmixer controls.\n");
      while((_Bool)0);
      exit(1);
    }

    loop->src_enable = (unsigned int)(arg_samplerate > 0);
    if(!(loop->src_enable == 0u))
      loop->src_converter_type = arg_samplerate - 1;

    set_loop_time(loop, arg_loop_time);
    add_loop(loop);
    return 0;
  }

  signed int return_value_parse_config_file$12;
  return_value_parse_config_file$12=parse_config_file(arg_config, output);
  return return_value_parse_config_file$12;
}

// parse_config_file
// file alsaloop.c line 638
static signed int parse_config_file(const char *file, struct _snd_output *output)
{
  struct _IO_FILE *fp;
  char line[2048l];
  char word[2048l];
  char *str;
  char *ptr;
  signed int argc;
  signed int c;
  signed int err = 0;
  char **argv;
  fp=fopen(file, "r");
  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  signed int *return_value___errno_location$3;
  char *return_value_strerror$4;
  signed int return_value_feof$5;
  signed int tmp_post$8;
  _Bool tmp_if_expr$14;
  char *tmp_post$9;
  char *tmp_post$10;
  char *tmp_post$11;
  char *tmp_post$12;
  char *tmp_post$13;
  signed int tmp_post$15;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    do
      if(!(use_syslog == 0))
      {
        return_value___errno_location$1=__errno_location();
        return_value_strerror$2=strerror(*return_value___errno_location$1);
        syslog(2, "Unable to open file '%s': %s\n", file, return_value_strerror$2);
      }

      else
      {
        return_value___errno_location$3=__errno_location();
        return_value_strerror$4=strerror(*return_value___errno_location$3);
        fprintf(stderr, "Unable to open file '%s': %s\n", file, return_value_strerror$4);
      }
    while((_Bool)0);
    return -5;
  }

  else
  {
    do
    {
      return_value_feof$5=feof(fp);
      if(!(return_value_feof$5 == 0))
        break;

      char *return_value_fgets$6;
      return_value_fgets$6=fgets(line, (signed int)(sizeof(char [2048l]) /*2048ul*/  - (unsigned long int)1), fp);
      if(return_value_fgets$6 == ((char *)NULL))
        break;

      line[(signed long int)(sizeof(char [2048l]) /*2048ul*/  - (unsigned long int)1)] = (char)0;
      void *return_value_realloc$7;
      return_value_realloc$7=realloc((void *)my_argv, (unsigned long int)my_argc + (unsigned long int)128 * sizeof(char *) /*8ul*/ );
      my_argv = (char **)return_value_realloc$7;
      if(my_argv == ((char **)NULL))
        return -12;

      argv = my_argv + (signed long int)my_argc;
      argc = 0;
      tmp_post$8 = argc;
      argc = argc + 1;
      argv[(signed long int)tmp_post$8]=strdup("<prog>");
      my_argc = my_argc + 1;
      str = line;
      while(!(*str == 0))
      {
        ptr = word;
        for( ; !(*str == 0); str = str + 1l)
          if(!((signed int)*str == 32))
          {
            if((signed int)*str >= 32)
              break;

          }

        if((signed int)*str == 35)
          goto __next;

        if((signed int)*str == 39)
          tmp_if_expr$14 = (_Bool)1;

        else
          tmp_if_expr$14 = (signed int)*str == 34 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$14)
        {
          tmp_post$9 = str;
          str = str + 1l;
          c = (signed int)*tmp_post$9;
          for( ; !(*str == 0); *tmp_post$10 = *tmp_post$11)
          {
            if((signed int)*str == c)
              break;

            tmp_post$10 = ptr;
            ptr = ptr + 1l;
            tmp_post$11 = str;
            str = str + 1l;
          }
          if((signed int)*str == c)
            str = str + 1l;

        }

        else
          for( ; !(*str == 0); *tmp_post$12 = *tmp_post$13)
          {
            if((signed int)*str == 32)
              break;

            if((signed int)*str == 9)
              break;

            tmp_post$12 = ptr;
            ptr = ptr + 1l;
            tmp_post$13 = str;
            str = str + 1l;
          }
        if(!(ptr == word))
        {
          if((signed int)ptr[-1l] == 10)
            ptr = ptr - 1l;

          *ptr = (char)0;
          if(argc >= 128)
          {
            do
              if(!(use_syslog == 0))
                syslog(2, "Too many arguments.");

              else
                fprintf(stderr, "Too many arguments.");
            while((_Bool)0);
            goto __error;
          }

          tmp_post$15 = argc;
          argc = argc + 1;
          argv[(signed long int)tmp_post$15]=strdup(word);
          my_argc = my_argc + 1;
        }

      }
      optarg = (char *)(void *)0;
      opterr = 1;
      optind = opterr;
      optopt = 63;
      err=parse_config(argc, argv, output, 0);

    __next:
      ;
      if(!(err >= 0))
        break;

      err = 0;
    }
    while((_Bool)1);

  __error:
    ;
    fclose(fp);
    return err;
  }
}

// pcm_open_init_mutex
// file pcmjob.c line 68
static void pcm_open_init_mutex(void)
{
  union anonymous$1 attr;
  pthread_mutexattr_init(&attr);
  pthread_mutexattr_settype(&attr, 1);
  pthread_mutex_init(&pcm_open_mutex, &attr);
  pthread_mutexattr_destroy(&attr);
}

// pcm_open_lock
// file pcmjob.c line 78
static inline void pcm_open_lock(void)
{
  pthread_once(&pcm_open_mutex_once, pcm_open_init_mutex);
  if(!((1 & workarounds) == 0))
    pthread_mutex_lock(&pcm_open_mutex);

}

// pcm_open_unlock
// file pcmjob.c line 85
static inline void pcm_open_unlock(void)
{
  if(!((1 & workarounds) == 0))
    pthread_mutex_unlock(&pcm_open_mutex);

}

// pcmjob_done
// file alsaloop.h line 207
signed int pcmjob_done(struct loopback *loop)
{
  control_done(loop);
  closeit(loop->play);
  closeit(loop->capt);
  freeloop(loop);
  free((void *)loop->id);
  loop->id = (char *)(void *)0;
  return 0;
}

// pcmjob_init
// file alsaloop.h line 206
signed int pcmjob_init(struct loopback *loop)
{
  signed int err;
  char id[128l];
  err=openit(loop->play);
  _Bool tmp_if_expr$2;
  signed int return_value_snd_ctl_elem_value_get_boolean$1;
  if(err >= 0)
  {
    err=openit(loop->capt);
    if(!(err >= 0))
      goto __error;

    snprintf(id, sizeof(char [128l]) /*128ul*/ , "%s/%s", loop->play->id, loop->capt->id);
    id[(signed long int)(sizeof(char [128l]) /*128ul*/  - (unsigned long int)1)] = (char)0;
    loop->id=strdup(id);
    if((signed int)loop->sync == SYNC_TYPE_AUTO)
    {
      if(!(loop->capt->ctl_rate_shift == ((struct _snd_ctl_elem_value *)NULL)))
        loop->sync = (enum _sync_type)SYNC_TYPE_CAPTRATESHIFT;

    }

    if((signed int)loop->sync == SYNC_TYPE_AUTO)
    {
      if(!(loop->play->ctl_rate_shift == ((struct _snd_ctl_elem_value *)NULL)))
        loop->sync = (enum _sync_type)SYNC_TYPE_PLAYRATESHIFT;

    }

    if((signed int)loop->sync == SYNC_TYPE_AUTO)
    {
      if(!(loop->src_enable == 0u))
        loop->sync = (enum _sync_type)SYNC_TYPE_SAMPLERATE;

    }

    if((signed int)loop->sync == SYNC_TYPE_AUTO)
      loop->sync = (enum _sync_type)SYNC_TYPE_SIMPLE;

    if((signed int)loop->slave == SLAVE_TYPE_AUTO)
    {
      if(!(loop->capt->ctl_notify == ((struct _snd_ctl_elem_value *)NULL)))
      {
        if(!(loop->capt->ctl_active == ((struct _snd_ctl_elem_value *)NULL)))
        {
          if(!(loop->capt->ctl_format == ((struct _snd_ctl_elem_value *)NULL)))
          {
            if(!(loop->capt->ctl_rate == ((struct _snd_ctl_elem_value *)NULL)))
            {
              if(!(loop->capt->ctl_channels == ((struct _snd_ctl_elem_value *)NULL)))
                loop->slave = (enum _slave_type)SLAVE_TYPE_ON;

            }

          }

        }

      }

    }

    if((signed int)loop->slave == SLAVE_TYPE_ON)
    {
      err=set_notify(loop->capt, 1);
      if(!(err >= 0))
        goto __error;

      if(loop->capt->ctl_notify == ((struct _snd_ctl_elem_value *)NULL))
        tmp_if_expr$2 = (_Bool)1;

      else
      {
        return_value_snd_ctl_elem_value_get_boolean$1=snd_ctl_elem_value_get_boolean(loop->capt->ctl_notify, (unsigned int)0);
        tmp_if_expr$2 = return_value_snd_ctl_elem_value_get_boolean$1 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$2)
      {
        do
          if(!(use_syslog == 0))
            syslog(2, "unable to enable slave mode for %s\n", loop->id);

          else
            fprintf(stderr, "unable to enable slave mode for %s\n", loop->id);
        while((_Bool)0);
        err = -22;
        goto __error;
      }

    }

    err=control_init(loop);
    if(!(err >= 0))
      goto __error;

    return 0;
  }

  else
  {

  __error:
    ;
    pcmjob_done(loop);
    return err;
  }
}

// pcmjob_pollfds_handle
// file alsaloop.h line 211
signed int pcmjob_pollfds_handle(struct loopback *loop, struct pollfd *fds)
{
  struct loopback_handle *play = loop->play;
  struct loopback_handle *capt = loop->capt;
  unsigned short int prevents;
  unsigned short int crevents;
  unsigned short int events;
  unsigned long int ccount;
  unsigned long int pcount;
  signed int err;
  signed int loopcount = 10;
  signed int idx;
  if(verbose >= 12)
    snd_output_printf(loop->output, "%s: pollfds handle\n", loop->id);

  _Bool tmp_if_expr$1;
  if(verbose >= 14)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = loop->xrun != 0u ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    getcurtimestamp(&loop->tstamp_start);

  const char *return_value_snd_strerror$2;
  const char *return_value_snd_strerror$3;
  if(verbose >= 13)
  {
    signed long int pdelay;
    signed long int cdelay;
    err=snd_pcm_delay(play->handle, &pdelay);
    if(!(err >= 0))
    {
      return_value_snd_strerror$2=snd_strerror(err);
      snd_output_printf(loop->output, "%s: delay error: %s / %li / %li\n", play->id, return_value_snd_strerror$2, play->buf_size, play->buf_count);
    }

    else
      snd_output_printf(loop->output, "%s: delay %li / %li / %li\n", play->id, pdelay, play->buf_size, play->buf_count);
    err=snd_pcm_delay(capt->handle, &cdelay);
    if(!(err >= 0))
    {
      return_value_snd_strerror$3=snd_strerror(err);
      snd_output_printf(loop->output, "%s: delay error: %s / %li / %li\n", capt->id, return_value_snd_strerror$3, capt->buf_size, capt->buf_count);
    }

    else
      snd_output_printf(loop->output, "%s: delay %li / %li / %li\n", capt->id, cdelay, capt->buf_size, capt->buf_count);
  }

  idx = 0;
  if(!(loop->running == 0u))
  {
    err=snd_pcm_poll_descriptors_revents(play->handle, fds, play->pollfd_count, &prevents);
    if(!(err >= 0))
      return err;

    idx = idx + (signed int)play->pollfd_count;
    err=snd_pcm_poll_descriptors_revents(capt->handle, fds + (signed long int)idx, capt->pollfd_count, &crevents);
    if(!(err >= 0))
      return err;

    idx = idx + (signed int)capt->pollfd_count;
    if(!(loop->xrun == 0u))
    {
      if(!(crevents == 0) || !(prevents == 0))
      {
        loop->xrun_last_wake = loop->xrun_last_wake0;
        loop->xrun_last_wake0 = loop->tstamp_start;
      }

      loop->xrun_last_check = loop->xrun_last_check0;
      loop->xrun_last_check0 = loop->tstamp_start;
    }

  }

  else
  {
    crevents = (unsigned short int)0;
    prevents = crevents;
  }
  _Bool tmp_if_expr$4;
  if(play->ctl_pollfd_count >= 1u)
  {
    if((signed int)loop->slave == SLAVE_TYPE_ON)
      tmp_if_expr$4 = (_Bool)1;

    else
      tmp_if_expr$4 = loop->controls != ((struct loopback_mixer *)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$4)
    {
      err=snd_ctl_poll_descriptors_revents(play->ctl, fds + (signed long int)idx, play->ctl_pollfd_count, &events);
      if(!(err >= 0))
        return err;

      if(!(events == 0))
      {
        err=handle_ctl_events(play, events);
        if(err == 1)
          return 0;

        if(!(err >= 0))
          return err;

      }

      idx = idx + (signed int)play->ctl_pollfd_count;
    }

  }

  _Bool tmp_if_expr$5;
  if(capt->ctl_pollfd_count >= 1u)
  {
    if((signed int)loop->slave == SLAVE_TYPE_ON)
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = loop->controls != ((struct loopback_mixer *)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
    {
      err=snd_ctl_poll_descriptors_revents(capt->ctl, fds + (signed long int)idx, capt->ctl_pollfd_count, &events);
      if(!(err >= 0))
        return err;

      if(!(events == 0))
      {
        err=handle_ctl_events(capt, events);
        if(err == 1)
          return 0;

        if(!(err >= 0))
          return err;

      }

      idx = idx + (signed int)capt->ctl_pollfd_count;
    }

  }

  if(verbose >= 10)
    snd_output_printf(loop->output, "%s: prevents = 0x%x, crevents = 0x%x\n", loop->id, prevents, crevents);

  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$10;
  const char *return_value_snd_strerror$12;
  const char *return_value_snd_strerror$13;
  if(!(loop->running == 0u))
  {
    do
    {
      signed int return_value_readit$6;
      return_value_readit$6=readit(capt);
      ccount = (unsigned long int)return_value_readit$6;
      buf_add(loop, ccount);
      if(!(capt->xrun_pending == 0u))
        tmp_if_expr$7 = (_Bool)1;

      else
        tmp_if_expr$7 = loop->reinit != 0u ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$7)
        break;

      signed int return_value_writeit$8;
      return_value_writeit$8=writeit(play);
      pcount = (unsigned long int)return_value_writeit$8;
      buf_remove(loop, pcount);
      if(!(play->xrun_pending == 0u))
        tmp_if_expr$9 = (_Bool)1;

      else
        tmp_if_expr$9 = loop->reinit != 0u ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$9)
        break;

      loopcount = loopcount - 1;
    }
    while(loopcount >= 1 && (ccount >= 1ul || pcount >= 1ul));
    if(!(play->xrun_pending == 0u))
      tmp_if_expr$10 = (_Bool)1;

    else
      tmp_if_expr$10 = capt->xrun_pending != 0u ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$10)
    {
      err=xrun_sync(loop);
      if(!(err >= 0))
        return err;

    }

    if(!(loop->reinit == 0u))
    {
      err=pcmjob_stop(loop);
      if(!(err >= 0))
        return err;

      err=pcmjob_start(loop);
      if(!(err >= 0))
        return err;

    }

    if(!((signed int)loop->sync == SYNC_TYPE_NONE))
    {
      if(play->counter >= play->sync_point)
      {
        if(capt->counter >= play->sync_point)
        {
          signed long int pcmjob_pollfds_handle$$1$$9$$diff;
          signed long int lat;
          unsigned long int return_value_get_whole_latency$11;
          return_value_get_whole_latency$11=get_whole_latency(loop);
          lat = (signed long int)return_value_get_whole_latency$11;
          pcmjob_pollfds_handle$$1$$9$$diff = (signed long int)((double)((double)play->total_queued * play->pitch + (double)capt->total_queued * capt->pitch) / (double)loop->total_queued_count - (double)lat);
          if(verbose >= 4)
            snd_output_printf(loop->output, "%s: sync diff %li old diff %li\n", loop->id, pcmjob_pollfds_handle$$1$$9$$diff, loop->pitch_diff);

          if(pcmjob_pollfds_handle$$1$$9$$diff >= 1l)
          {
            if(pcmjob_pollfds_handle$$1$$9$$diff == loop->pitch_diff)
              loop->pitch = loop->pitch + loop->pitch_delta;

            else
              if(!(loop->pitch_diff >= pcmjob_pollfds_handle$$1$$9$$diff))
                loop->pitch = loop->pitch + loop->pitch_delta * (double)2;

          }

          else
            if(!(pcmjob_pollfds_handle$$1$$9$$diff >= 0l))
            {
              if(pcmjob_pollfds_handle$$1$$9$$diff == loop->pitch_diff)
                loop->pitch = loop->pitch - loop->pitch_delta;

              else
                if(!(pcmjob_pollfds_handle$$1$$9$$diff >= loop->pitch_diff))
                  loop->pitch = loop->pitch - loop->pitch_delta * (double)2;

            }

          loop->pitch_diff = pcmjob_pollfds_handle$$1$$9$$diff;
          if(!(pcmjob_pollfds_handle$$1$$9$$diff >= loop->pitch_diff_min))
            loop->pitch_diff_min = pcmjob_pollfds_handle$$1$$9$$diff;

          if(!(loop->pitch_diff_max >= pcmjob_pollfds_handle$$1$$9$$diff))
            loop->pitch_diff_max = pcmjob_pollfds_handle$$1$$9$$diff;

          update_pitch(loop);
          play->counter = play->counter - play->sync_point;
          capt->counter = capt->counter - play->sync_point;
          play->total_queued = (unsigned long int)0;
          capt->total_queued = (unsigned long int)0;
          loop->total_queued_count = (unsigned int)0;
        }

      }

    }

    if(!((signed int)loop->sync == SYNC_TYPE_NONE))
    {
      signed long int pqueued;
      signed long int cqueued;
      pqueued=get_queued_playback_samples(loop);
      cqueued=get_queued_capture_samples(loop);
      if(verbose >= 5)
        snd_output_printf(loop->output, "%s: queued %li/%li samples\n", loop->id, pqueued, cqueued);

      if(pqueued >= 1l)
        play->total_queued = play->total_queued + (unsigned long int)pqueued;

      if(cqueued >= 1l)
        capt->total_queued = capt->total_queued + (unsigned long int)cqueued;

      if(cqueued >= 1l || pqueued >= 1l)
        loop->total_queued_count = loop->total_queued_count + (unsigned int)1;

    }

    if(verbose >= 13)
    {
      signed long int pcmjob_pollfds_handle$$1$$11$$pdelay;
      signed long int pcmjob_pollfds_handle$$1$$11$$cdelay;
      err=snd_pcm_delay(play->handle, &pcmjob_pollfds_handle$$1$$11$$pdelay);
      if(!(err >= 0))
      {
        return_value_snd_strerror$12=snd_strerror(err);
        snd_output_printf(loop->output, "%s: end delay error: %s / %li / %li\n", play->id, return_value_snd_strerror$12, play->buf_size, play->buf_count);
      }

      else
        snd_output_printf(loop->output, "%s: end delay %li / %li / %li\n", play->id, pcmjob_pollfds_handle$$1$$11$$pdelay, play->buf_size, play->buf_count);
      err=snd_pcm_delay(capt->handle, &pcmjob_pollfds_handle$$1$$11$$cdelay);
      if(!(err >= 0))
      {
        return_value_snd_strerror$13=snd_strerror(err);
        snd_output_printf(loop->output, "%s: end delay error: %s / %li / %li\n", capt->id, return_value_snd_strerror$13, capt->buf_size, capt->buf_count);
      }

      else
        snd_output_printf(loop->output, "%s: end delay %li / %li / %li\n", capt->id, pcmjob_pollfds_handle$$1$$11$$cdelay, capt->buf_size, capt->buf_count);
    }

  }


__pcm_end:
  ;
  _Bool tmp_if_expr$14;
  if(verbose >= 14)
    tmp_if_expr$14 = (_Bool)1;

  else
    tmp_if_expr$14 = loop->xrun != 0u ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$14)
  {
    signed long int diff;
    getcurtimestamp(&loop->tstamp_end);
    diff=timediff$link1(loop->tstamp_end, loop->tstamp_start);
    if(verbose >= 14)
      snd_output_printf(loop->output, "%s: processing time %lius\n", loop->id, diff);

    if(!(loop->xrun == 0u))
    {
      if(!(loop->xrun_max_proctime >= diff))
        loop->xrun_max_proctime = diff;

    }

  }

  return 0;
}

// pcmjob_pollfds_init
// file alsaloop.h line 210
signed int pcmjob_pollfds_init(struct loopback *loop, struct pollfd *fds)
{
  signed int err;
  signed int idx = 0;
  if(!(loop->running == 0u))
  {
    err=snd_pcm_poll_descriptors(loop->play->handle, fds + (signed long int)idx, loop->play->pollfd_count);
    if(!(err >= 0))
      return err;

    idx = idx + (signed int)loop->play->pollfd_count;
    err=snd_pcm_poll_descriptors(loop->capt->handle, fds + (signed long int)idx, loop->capt->pollfd_count);
    if(!(err >= 0))
      return err;

    idx = idx + (signed int)loop->capt->pollfd_count;
  }

  _Bool tmp_if_expr$1;
  if(loop->play->ctl_pollfd_count >= 1u)
  {
    if((signed int)loop->slave == SLAVE_TYPE_ON)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = loop->controls != ((struct loopback_mixer *)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
    {
      err=snd_ctl_poll_descriptors(loop->play->ctl, fds + (signed long int)idx, loop->play->ctl_pollfd_count);
      if(!(err >= 0))
        return err;

      idx = idx + (signed int)loop->play->ctl_pollfd_count;
    }

  }

  _Bool tmp_if_expr$2;
  if(loop->capt->ctl_pollfd_count >= 1u)
  {
    if((signed int)loop->slave == SLAVE_TYPE_ON)
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = loop->controls != ((struct loopback_mixer *)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
    {
      err=snd_ctl_poll_descriptors(loop->capt->ctl, fds + (signed long int)idx, loop->capt->ctl_pollfd_count);
      if(!(err >= 0))
        return err;

      idx = idx + (signed int)loop->capt->ctl_pollfd_count;
    }

  }

  loop->active_pollfd_count = idx;
  return idx;
}

// pcmjob_start
// file alsaloop.h line 208
signed int pcmjob_start(struct loopback *loop)
{
  unsigned long int count;
  signed int err;
  loop->pollfd_count = (signed int)(loop->play->ctl_pollfd_count + loop->capt->ctl_pollfd_count);
  err=snd_pcm_poll_descriptors_count(loop->play->handle);
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$5;
  enum _snd_pcm_format format1;
  enum _snd_pcm_format format2;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$19;
  _Bool tmp_if_expr$18;
  const char *return_value_snd_pcm_format_name$10;
  const char *return_value_snd_pcm_format_name$11;
  const char *return_value_snd_pcm_format_name$12;
  const char *return_value_snd_pcm_format_name$13;
  const char *return_value_snd_pcm_format_name$14;
  const char *return_value_snd_pcm_format_name$15;
  const char *return_value_snd_pcm_format_name$16;
  const char *return_value_snd_pcm_format_name$17;
  unsigned long int return_value_get_whole_latency$22;
  const char *return_value_snd_strerror$23;
  const char *return_value_snd_strerror$24;
  const char *return_value_snd_strerror$25;
  const char *return_value_snd_strerror$26;
  if(err >= 0)
  {
    loop->play->pollfd_count = (unsigned int)err;
    loop->pollfd_count = loop->pollfd_count + err;
    err=snd_pcm_poll_descriptors_count(loop->capt->handle);
    if(!(err >= 0))
      goto __error;

    loop->capt->pollfd_count = (unsigned int)err;
    loop->pollfd_count = loop->pollfd_count + err;
    if((signed int)loop->slave == SLAVE_TYPE_ON)
    {
      err=get_active(loop->capt);
      if(!(err >= 0))
        goto __error;

      if(err == 0)
        return 0;

      err=get_format(loop->capt);
      if(!(err >= 0))
        goto __error;

      loop->capt->format = (enum _snd_pcm_format)err;
      loop->play->format = loop->capt->format;
      fix_format(loop, 0);
      err=get_rate(loop->capt);
      if(!(err >= 0))
        goto __error;

      loop->capt->rate_req = (unsigned int)err;
      loop->play->rate_req = loop->capt->rate_req;
      err=get_channels(loop->capt);
      if(!(err >= 0))
        goto __error;

      loop->capt->channels = (unsigned int)err;
      loop->play->channels = loop->capt->channels;
    }

    loop->reinit = (unsigned int)0;
    loop->use_samplerate = (unsigned int)0;

  __again:
    ;
    while((_Bool)1)
    {
      if(!(loop->latency_req == 0u))
      {
        unsigned long long int return_value_frames_to_time$1;
        return_value_frames_to_time$1=frames_to_time(loop->play->rate_req, (unsigned long int)loop->latency_req);
        loop->latency_reqtime = (unsigned int)return_value_frames_to_time$1;
        loop->latency_req = (unsigned int)0;
      }

      loop->latency=time_to_frames(loop->play->rate_req, (unsigned long long int)loop->latency_reqtime);
      err=setparams(loop, loop->latency / (unsigned long int)2);
      if(!(err >= 0))
        goto __error;

      if(!(verbose == 0))
        showlatency(loop->output, loop->latency, loop->play->rate_req, "Latency");

      if(loop->play->access == loop->capt->access)
        tmp_if_expr$6 = loop->play->format == loop->capt->format ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$6 = (_Bool)0;
      if(tmp_if_expr$6)
        tmp_if_expr$7 = loop->play->rate == loop->capt->rate ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$7 = (_Bool)0;
      if(tmp_if_expr$7)
        tmp_if_expr$8 = loop->play->channels == loop->play->channels ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$8 = (_Bool)0;
      if(tmp_if_expr$8)
        tmp_if_expr$9 = (signed int)loop->sync != SYNC_TYPE_SAMPLERATE ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$9 = (_Bool)0;
      if(tmp_if_expr$9)
      {
        if(verbose >= 2)
          snd_output_printf(loop->output, "shared buffer!!!\n");

        err=init_handle(loop->play, 1);
        if(!(err >= 0))
          goto __error;

        err=init_handle(loop->capt, 0);
        if(!(err >= 0))
          goto __error;

        if(!(loop->play->buf_size >= loop->capt->buf_size))
        {
          char *pcmjob_start$$1$$3$$1$$nbuf;
          void *return_value_realloc$2;
          return_value_realloc$2=realloc((void *)loop->play->buf, loop->capt->buf_size * (unsigned long int)loop->capt->frame_size);
          pcmjob_start$$1$$3$$1$$nbuf = (char *)return_value_realloc$2;
          if(pcmjob_start$$1$$3$$1$$nbuf == ((char *)NULL))
          {
            err = -12;
            goto __error;
          }

          loop->play->buf = pcmjob_start$$1$$3$$1$$nbuf;
          loop->play->buf_size = loop->capt->buf_size;
        }

        else
          if(!(loop->capt->buf_size >= loop->play->buf_size))
          {
            char *nbuf;
            void *return_value_realloc$3;
            return_value_realloc$3=realloc((void *)loop->capt->buf, loop->play->buf_size * (unsigned long int)loop->play->frame_size);
            nbuf = (char *)return_value_realloc$3;
            if(nbuf == ((char *)NULL))
            {
              err = -12;
              goto __error;
            }

            loop->capt->buf = nbuf;
            loop->capt->buf_size = loop->play->buf_size;
          }

        loop->capt->buf = loop->play->buf;
        goto __CPROVER_DUMP_L25;
      }

      err=init_handle(loop->play, 1);
      if(!(err >= 0))
        goto __error;

      err=init_handle(loop->capt, 1);
      if(!(err >= 0))
        goto __error;

      if(!(loop->play->rate_req == loop->play->rate))
        tmp_if_expr$5 = (_Bool)1;

      else
        tmp_if_expr$5 = loop->capt->rate_req != loop->capt->rate ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr$5)
        goto __CPROVER_DUMP_L25;

      loop->use_samplerate = (unsigned int)1;
      format1 = loop->play->format;
      format2 = loop->capt->format;
      fix_format(loop, 1);
      if(!(loop->play->format == format1))
        tmp_if_expr$4 = (_Bool)1;

      else
        tmp_if_expr$4 = loop->capt->format != format2 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr$4)
        break;

      pcmjob_stop(loop);
    }

  __CPROVER_DUMP_L25:
    ;
    if((signed int)loop->sync == SYNC_TYPE_SAMPLERATE)
      loop->use_samplerate = (unsigned int)1;

    if(!(loop->use_samplerate == 0u))
    {
      if(loop->src_enable == 0u)
      {
        do
          if(!(use_syslog == 0))
            syslog(2, "samplerate conversion required but disabled\n");

          else
            fprintf(stderr, "samplerate conversion required but disabled\n");
        while((_Bool)0);
        loop->use_samplerate = (unsigned int)0;
        err = -5;
        goto __error;
      }

    }

    if(!(loop->use_samplerate == 0u))
    {
      if(!((signed int)loop->capt->format == SND_PCM_FORMAT_S16))
        tmp_if_expr$19 = (_Bool)1;

      else
        tmp_if_expr$19 = (signed int)loop->play->format != SND_PCM_FORMAT_S16 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$19)
      {
        if(!((signed int)loop->capt->format == SND_PCM_FORMAT_S32))
          tmp_if_expr$18 = (_Bool)1;

        else
          tmp_if_expr$18 = (signed int)loop->play->format != SND_PCM_FORMAT_S32 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$18)
        {
          do
            if(!(use_syslog == 0))
            {
              return_value_snd_pcm_format_name$10=snd_pcm_format_name((const enum _snd_pcm_format)SND_PCM_FORMAT_S16);
              return_value_snd_pcm_format_name$11=snd_pcm_format_name((const enum _snd_pcm_format)SND_PCM_FORMAT_S32);
              return_value_snd_pcm_format_name$12=snd_pcm_format_name(loop->play->format);
              return_value_snd_pcm_format_name$13=snd_pcm_format_name(loop->capt->format);
              syslog(2, "samplerate conversion supports only %s or %s formats (play=%s, capt=%s)\n", return_value_snd_pcm_format_name$10, return_value_snd_pcm_format_name$11, return_value_snd_pcm_format_name$12, return_value_snd_pcm_format_name$13);
            }

            else
            {
              return_value_snd_pcm_format_name$14=snd_pcm_format_name((const enum _snd_pcm_format)SND_PCM_FORMAT_S16);
              return_value_snd_pcm_format_name$15=snd_pcm_format_name((const enum _snd_pcm_format)SND_PCM_FORMAT_S32);
              return_value_snd_pcm_format_name$16=snd_pcm_format_name(loop->play->format);
              return_value_snd_pcm_format_name$17=snd_pcm_format_name(loop->capt->format);
              fprintf(stderr, "samplerate conversion supports only %s or %s formats (play=%s, capt=%s)\n", return_value_snd_pcm_format_name$14, return_value_snd_pcm_format_name$15, return_value_snd_pcm_format_name$16, return_value_snd_pcm_format_name$17);
            }
          while((_Bool)0);
          loop->use_samplerate = (unsigned int)0;
          err = -5;
          goto __error;
        }

      }

      loop->src_state=src_new(loop->src_converter_type, (signed int)loop->play->channels, &err);
      void *return_value_calloc$20;
      return_value_calloc$20=calloc((unsigned long int)1, sizeof(float) /*4ul*/  * (unsigned long int)loop->capt->channels * loop->capt->buf_size);
      loop->src_data.data_in = (float *)return_value_calloc$20;
      if(loop->src_data.data_in == ((float *)NULL))
      {
        err = -12;
        goto __error;
      }

      void *return_value_calloc$21;
      return_value_calloc$21=calloc((unsigned long int)1, sizeof(float) /*4ul*/  * (unsigned long int)loop->play->channels * loop->play->buf_size);
      loop->src_data.data_out = (float *)return_value_calloc$21;
      if(loop->src_data.data_out == ((float *)NULL))
      {
        err = -12;
        goto __error;
      }

      loop->src_data.src_ratio = (double)loop->play->rate / (double)loop->capt->rate;
      loop->src_data.end_of_input = 0;
      loop->src_out_frames = (unsigned int)0;
    }

    else
      loop->src_state = (struct SRC_STATE_tag *)(void *)0;
    if(!(verbose == 0))
    {
      snd_output_printf(loop->output, "%s sync type: %s", loop->id, sync_types[(signed long int)loop->sync]);
      if((signed int)loop->sync == SYNC_TYPE_SAMPLERATE)
        snd_output_printf(loop->output, " (%s)", src_types[(signed long int)loop->src_converter_type]);

      snd_output_printf(loop->output, "\n");
    }

    lhandle_start(loop->play);
    lhandle_start(loop->capt);
    err=snd_pcm_format_set_silence(loop->play->format, (void *)loop->play->buf, (unsigned int)(loop->play->buf_size * (unsigned long int)loop->play->channels));
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "%s: silence error\n", loop->id);

        else
          fprintf(stderr, "%s: silence error\n", loop->id);
      while((_Bool)0);
      goto __error;
    }

    if(verbose >= 5)
      snd_output_printf(loop->output, "%s: capt->buffer_size = %li, play->buffer_size = %li\n", loop->id, loop->capt->buf_size, loop->play->buf_size);

    loop->pitch = 1.0;
    update_pitch(loop);
    loop->pitch_delta = 1.0 / ((double)loop->capt->rate * (double)4);
    loop->total_queued_count = (unsigned int)0;
    loop->pitch_diff = (signed long int)0;
    return_value_get_whole_latency$22=get_whole_latency(loop);
    count = (unsigned long int)((double)return_value_get_whole_latency$22 / loop->play->pitch);
    loop->play->buf_count = count;
    if(loop->play->buf == loop->capt->buf)
      loop->capt->buf_pos = count;

    err=writeit(loop->play);
    if(verbose >= 5)
      snd_output_printf(loop->output, "%s: silence queued %i samples\n", loop->id, err);

    if(!((unsigned long int)loop->play->buffer_size >= count))
      count = (unsigned long int)loop->play->buffer_size;

    if(!((unsigned long int)err == count))
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "%s: initial playback fill error (%i/%i/%i)\n", loop->id, err, (signed int)count, loop->play->buffer_size);

        else
          fprintf(stderr, "%s: initial playback fill error (%i/%i/%i)\n", loop->id, err, (signed int)count, loop->play->buffer_size);
      while((_Bool)0);
      err = -5;
      goto __error;
    }

    loop->running = (unsigned int)1;
    loop->stop_pending = (unsigned int)0;
    if(!(loop->xrun == 0u))
    {
      getcurtimestamp(&loop->xrun_last_update);
      loop->xrun_last_pdelay = (signed long int)-10000000;
      loop->xrun_last_cdelay = (signed long int)-10000000;
      loop->xrun_max_proctime = (signed long int)0;
    }

    err=snd_pcm_start(loop->capt->handle);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$23=snd_strerror(err);
          syslog(2, "pcm start %s error: %s\n", loop->capt->id, return_value_snd_strerror$23);
        }

        else
        {
          return_value_snd_strerror$24=snd_strerror(err);
          fprintf(stderr, "pcm start %s error: %s\n", loop->capt->id, return_value_snd_strerror$24);
        }
      while((_Bool)0);
      goto __error;
    }

    if(loop->linked == 0u)
    {
      err=snd_pcm_start(loop->play->handle);
      if(!(err >= 0))
      {
        do
          if(!(use_syslog == 0))
          {
            return_value_snd_strerror$25=snd_strerror(err);
            syslog(2, "pcm start %s error: %s\n", loop->play->id, return_value_snd_strerror$25);
          }

          else
          {
            return_value_snd_strerror$26=snd_strerror(err);
            fprintf(stderr, "pcm start %s error: %s\n", loop->play->id, return_value_snd_strerror$26);
          }
        while((_Bool)0);
        goto __error;
      }

    }

    return 0;
  }

  else
  {

  __error:
    ;
    pcmjob_stop(loop);
    return err;
  }
}

// pcmjob_state
// file alsaloop.h line 212
void pcmjob_state(struct loopback *loop)
{
  unsigned long int self;
  self=pthread_self();
  pthread_mutex_lock(&state_mutex);
  snd_output_printf(loop->state, "State dump for thread %p job %i: %s:\n", (void *)self, loop->thread, loop->id);
  snd_output_printf(loop->state, "  running = %i\n", loop->running);
  snd_output_printf(loop->state, "  sync = %i\n", loop->sync);
  snd_output_printf(loop->state, "  slave = %i\n", loop->slave);
  if(!(loop->running == 0u))
  {
    snd_output_printf(loop->state, "  pollfd_count = %i\n", loop->pollfd_count);
    snd_output_printf(loop->state, "  pitch = %.8f, delta = %.8f, diff = %li, min = %li, max = %li\n", loop->pitch, loop->pitch_delta, loop->pitch_diff, loop->pitch_diff_min, loop->pitch_diff_max);
    snd_output_printf(loop->state, "  use_samplerate = %i\n", loop->use_samplerate);
  }


__skip:
  ;
  show_handle(loop->play, "playback");
  show_handle(loop->capt, "capture");
  pthread_mutex_unlock(&state_mutex);
}

// pcmjob_stop
// file pcmjob.c line 1608
signed int pcmjob_stop(struct loopback *loop)
{
  signed int err;
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  const char *return_value_snd_strerror$3;
  const char *return_value_snd_strerror$4;
  const char *return_value_snd_strerror$5;
  const char *return_value_snd_strerror$6;
  const char *return_value_snd_strerror$7;
  const char *return_value_snd_strerror$8;
  if(!(loop->running == 0u))
  {
    err=snd_pcm_drop(loop->capt->handle);
    if(!(err >= 0))
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$1=snd_strerror(err);
          syslog(4, "pcm drop %s error: %s\n", loop->capt->id, return_value_snd_strerror$1);
        }

        else
        {
          return_value_snd_strerror$2=snd_strerror(err);
          fprintf(stderr, "pcm drop %s error: %s\n", loop->capt->id, return_value_snd_strerror$2);
        }
      while((_Bool)0);

    err=snd_pcm_drop(loop->play->handle);
    if(!(err >= 0))
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$3=snd_strerror(err);
          syslog(4, "pcm drop %s error: %s\n", loop->play->id, return_value_snd_strerror$3);
        }

        else
        {
          return_value_snd_strerror$4=snd_strerror(err);
          fprintf(stderr, "pcm drop %s error: %s\n", loop->play->id, return_value_snd_strerror$4);
        }
      while((_Bool)0);

    err=snd_pcm_hw_free(loop->capt->handle);
    if(!(err >= 0))
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$5=snd_strerror(err);
          syslog(4, "pcm hw_free %s error: %s\n", loop->capt->id, return_value_snd_strerror$5);
        }

        else
        {
          return_value_snd_strerror$6=snd_strerror(err);
          fprintf(stderr, "pcm hw_free %s error: %s\n", loop->capt->id, return_value_snd_strerror$6);
        }
      while((_Bool)0);

    err=snd_pcm_hw_free(loop->play->handle);
    if(!(err >= 0))
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$7=snd_strerror(err);
          syslog(4, "pcm hw_free %s error: %s\n", loop->play->id, return_value_snd_strerror$7);
        }

        else
        {
          return_value_snd_strerror$8=snd_strerror(err);
          fprintf(stderr, "pcm hw_free %s error: %s\n", loop->play->id, return_value_snd_strerror$8);
        }
      while((_Bool)0);

    loop->running = (unsigned int)0;
  }

  freeloop(loop);
  return 0;
}

// readit
// file pcmjob.c line 638
static signed int readit(struct loopback_handle *lhandle)
{
  signed long int r;
  signed long int res = (signed long int)0;
  signed long int avail;
  signed int err;
  avail=snd_pcm_avail_update(lhandle->handle);
  if(avail == -32l)
  {
    signed int return_value_xrun$1;
    return_value_xrun$1=xrun(lhandle);
    return return_value_xrun$1;
  }

  else
    if(avail == -86l)
    {
      err=suspend(lhandle);
      if(!(err >= 0))
        return err;

    }

  unsigned long int return_value_buf_avail$5;
  return_value_buf_avail$5=buf_avail(lhandle);
  if(!(return_value_buf_avail$5 >= (unsigned long int)avail))
  {
    unsigned long int return_value_buf_avail$2;
    return_value_buf_avail$2=buf_avail(lhandle);
    lhandle->buf_over = lhandle->buf_over + ((unsigned long int)avail - return_value_buf_avail$2);
    unsigned long int return_value_buf_avail$3;
    return_value_buf_avail$3=buf_avail(lhandle);
    avail = (signed long int)return_value_buf_avail$3;
  }

  else
    if(avail == 0l)
    {
      enum _snd_pcm_state return_value_snd_pcm_state$4;
      return_value_snd_pcm_state$4=snd_pcm_state(lhandle->handle);
      if((signed int)return_value_snd_pcm_state$4 == SND_PCM_STATE_DRAINING)
      {
        lhandle->loopback->reinit = (unsigned int)1;
        return 0;
      }

    }

  while(avail >= 1l)
  {
    unsigned long int return_value_buf_avail$6;
    return_value_buf_avail$6=buf_avail(lhandle);
    r = (signed long int)return_value_buf_avail$6;
    if(!(lhandle->buf_size >= lhandle->buf_pos + (unsigned long int)r))
      r = (signed long int)(lhandle->buf_size - lhandle->buf_pos);

    if(!(avail >= r))
      r = avail;

    r=snd_pcm_readi(lhandle->handle, (void *)(lhandle->buf + (signed long int)(lhandle->buf_pos * (unsigned long int)lhandle->frame_size)), (unsigned long int)r);
    if(r == 0l)
      return (signed int)res;

    if(!(r >= 0l))
    {
      if(r == -32l)
      {
        err=xrun(lhandle);
        return (signed int)(res > (signed long int)0 ? res : (signed long int)err);
      }

      else
        if(r == -86l)
        {
          err=suspend(lhandle);
          if(!(err >= 0))
            return (signed int)(res > (signed long int)0 ? res : (signed long int)err);

          r = (signed long int)0;
        }

        else
          return (signed int)(res > (signed long int)0 ? res : r);
    }

    res = res + r;
    if(!(lhandle->max >= (unsigned long int)res))
      lhandle->max = (unsigned long int)res;

    lhandle->counter = lhandle->counter + (unsigned long long int)r;
    lhandle->buf_count = lhandle->buf_count + (unsigned long int)r;
    lhandle->buf_pos = lhandle->buf_pos + (unsigned long int)r;
    lhandle->buf_pos = lhandle->buf_pos % lhandle->buf_size;
    avail = avail - r;
  }
  return (signed int)res;
}

// remove_samples
// file pcmjob.c line 761
static signed long int remove_samples(struct loopback *loop, signed int capture_preferred, signed long int count)
{
  struct loopback_handle *play = loop->play;
  struct loopback_handle *capt = loop->capt;
  if(loop->play->buf == loop->capt->buf)
  {
    if(!(loop->play->buf_count >= (unsigned long int)count))
      count = (signed long int)loop->play->buf_count;

    if(!(loop->capt->buf_count >= (unsigned long int)count))
      count = (signed long int)loop->capt->buf_count;

    capt->buf_count = capt->buf_count - (unsigned long int)count;
    play->buf_pos = play->buf_pos + (unsigned long int)count;
    play->buf_pos = play->buf_pos % play->buf_size;
    play->buf_count = play->buf_count - (unsigned long int)count;
    return count;
  }

  else
  {
    if(!(capture_preferred == 0))
    {
      if(!(capt->buf_count >= (unsigned long int)count))
        count = (signed long int)capt->buf_count;

      capt->buf_count = capt->buf_count - (unsigned long int)count;
    }

    else
    {
      if(!(play->buf_count >= (unsigned long int)count))
        count = (signed long int)play->buf_count;

      play->buf_count = play->buf_count - (unsigned long int)count;
    }
    return count;
  }
}

// send_to_all
// file alsaloop.c line 794
static void send_to_all(signed int sig)
{
  struct loopback_thread *thread;
  signed int i = 0;
  for( ; !(i >= threads_count); i = i + 1)
  {
    thread = &threads[(signed long int)i];
    if(!(thread->threaded == 0))
      pthread_kill(thread->thread, sig);

  }
}

// set_loop_time
// file alsaloop.c line 137
static void set_loop_time(struct loopback *loop, unsigned long int loop_time)
{
  loop->loop_time = loop_time;
  loop->loop_limit = (unsigned long int)loop->capt->rate * loop_time;
}

// set_notify
// file pcmjob.c line 1000
static signed int set_notify(struct loopback_handle *lhandle, signed int enable)
{
  signed int err;
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  const char *return_value_snd_strerror$3;
  const char *return_value_snd_strerror$4;
  if(lhandle->ctl_notify == ((struct _snd_ctl_elem_value *)NULL))
    return 0;

  else
  {
    snd_ctl_elem_value_set_boolean(lhandle->ctl_notify, (unsigned int)0, (signed long int)enable);
    err=snd_ctl_elem_write(lhandle->ctl, lhandle->ctl_notify);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$1=snd_strerror(err);
          syslog(2, "Cannot set PCM Notify element for %s: %s\n", lhandle->id, return_value_snd_strerror$1);
        }

        else
        {
          return_value_snd_strerror$2=snd_strerror(err);
          fprintf(stderr, "Cannot set PCM Notify element for %s: %s\n", lhandle->id, return_value_snd_strerror$2);
        }
      while((_Bool)0);
      return err;
    }

    else
    {
      err=snd_ctl_elem_read(lhandle->ctl, lhandle->ctl_notify);
      if(!(err >= 0))
      {
        do
          if(!(use_syslog == 0))
          {
            return_value_snd_strerror$3=snd_strerror(err);
            syslog(2, "Cannot get PCM Notify element for %s: %s\n", lhandle->id, return_value_snd_strerror$3);
          }

          else
          {
            return_value_snd_strerror$4=snd_strerror(err);
            fprintf(stderr, "Cannot get PCM Notify element for %s: %s\n", lhandle->id, return_value_snd_strerror$4);
          }
        while((_Bool)0);
        return err;
      }

      else
        return 0;
    }
  }
}

// set_rate_shift
// file pcmjob.c line 1020
static signed int set_rate_shift(struct loopback_handle *lhandle, double pitch)
{
  signed int err;
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  if(lhandle->ctl_rate_shift == ((struct _snd_ctl_elem_value *)NULL))
    return 0;

  else
  {
    snd_ctl_elem_value_set_integer(lhandle->ctl_rate_shift, (unsigned int)0, (signed long int)(pitch * (double)100000));
    err=snd_ctl_elem_write(lhandle->ctl, lhandle->ctl_rate_shift);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$1=snd_strerror(err);
          syslog(2, "Cannot set PCM Rate Shift element for %s: %s\n", lhandle->id, return_value_snd_strerror$1);
        }

        else
        {
          return_value_snd_strerror$2=snd_strerror(err);
          fprintf(stderr, "Cannot set PCM Rate Shift element for %s: %s\n", lhandle->id, return_value_snd_strerror$2);
        }
      while((_Bool)0);
      return err;
    }

    else
      return 0;
  }
}

// setparams
// file pcmjob.c line 285
static signed int setparams(struct loopback *loop, unsigned long int bufsize)
{
  signed int err;
  struct _snd_pcm_hw_params *pt_params;
  struct _snd_pcm_hw_params *ct_params;
  struct _snd_pcm_hw_params *p_params;
  struct _snd_pcm_hw_params *c_params;
  struct _snd_pcm_sw_params *p_swparams;
  struct _snd_pcm_sw_params *c_swparams;
  do
  {
    unsigned long int return_value_snd_pcm_hw_params_sizeof$1;
    return_value_snd_pcm_hw_params_sizeof$1=snd_pcm_hw_params_sizeof();
    void *return_value___builtin_alloca$2;
    return_value___builtin_alloca$2=__builtin_alloca(return_value_snd_pcm_hw_params_sizeof$1);
    *(&p_params) = (struct _snd_pcm_hw_params *)return_value___builtin_alloca$2;
    unsigned long int return_value_snd_pcm_hw_params_sizeof$3;
    return_value_snd_pcm_hw_params_sizeof$3=snd_pcm_hw_params_sizeof();
    memset((void *)*(&p_params), 0, return_value_snd_pcm_hw_params_sizeof$3);
  }
  while((_Bool)0);
  do
  {
    unsigned long int return_value_snd_pcm_hw_params_sizeof$4;
    return_value_snd_pcm_hw_params_sizeof$4=snd_pcm_hw_params_sizeof();
    void *return_value___builtin_alloca$5;
    return_value___builtin_alloca$5=__builtin_alloca(return_value_snd_pcm_hw_params_sizeof$4);
    *(&c_params) = (struct _snd_pcm_hw_params *)return_value___builtin_alloca$5;
    unsigned long int return_value_snd_pcm_hw_params_sizeof$6;
    return_value_snd_pcm_hw_params_sizeof$6=snd_pcm_hw_params_sizeof();
    memset((void *)*(&c_params), 0, return_value_snd_pcm_hw_params_sizeof$6);
  }
  while((_Bool)0);
  do
  {
    unsigned long int return_value_snd_pcm_hw_params_sizeof$7;
    return_value_snd_pcm_hw_params_sizeof$7=snd_pcm_hw_params_sizeof();
    void *return_value___builtin_alloca$8;
    return_value___builtin_alloca$8=__builtin_alloca(return_value_snd_pcm_hw_params_sizeof$7);
    *(&pt_params) = (struct _snd_pcm_hw_params *)return_value___builtin_alloca$8;
    unsigned long int return_value_snd_pcm_hw_params_sizeof$9;
    return_value_snd_pcm_hw_params_sizeof$9=snd_pcm_hw_params_sizeof();
    memset((void *)*(&pt_params), 0, return_value_snd_pcm_hw_params_sizeof$9);
  }
  while((_Bool)0);
  do
  {
    unsigned long int return_value_snd_pcm_hw_params_sizeof$10;
    return_value_snd_pcm_hw_params_sizeof$10=snd_pcm_hw_params_sizeof();
    void *return_value___builtin_alloca$11;
    return_value___builtin_alloca$11=__builtin_alloca(return_value_snd_pcm_hw_params_sizeof$10);
    *(&ct_params) = (struct _snd_pcm_hw_params *)return_value___builtin_alloca$11;
    unsigned long int return_value_snd_pcm_hw_params_sizeof$12;
    return_value_snd_pcm_hw_params_sizeof$12=snd_pcm_hw_params_sizeof();
    memset((void *)*(&ct_params), 0, return_value_snd_pcm_hw_params_sizeof$12);
  }
  while((_Bool)0);
  do
  {
    unsigned long int return_value_snd_pcm_sw_params_sizeof$13;
    return_value_snd_pcm_sw_params_sizeof$13=snd_pcm_sw_params_sizeof();
    void *return_value___builtin_alloca$14;
    return_value___builtin_alloca$14=__builtin_alloca(return_value_snd_pcm_sw_params_sizeof$13);
    *(&p_swparams) = (struct _snd_pcm_sw_params *)return_value___builtin_alloca$14;
    unsigned long int return_value_snd_pcm_sw_params_sizeof$15;
    return_value_snd_pcm_sw_params_sizeof$15=snd_pcm_sw_params_sizeof();
    memset((void *)*(&p_swparams), 0, return_value_snd_pcm_sw_params_sizeof$15);
  }
  while((_Bool)0);
  do
  {
    unsigned long int return_value_snd_pcm_sw_params_sizeof$16;
    return_value_snd_pcm_sw_params_sizeof$16=snd_pcm_sw_params_sizeof();
    void *return_value___builtin_alloca$17;
    return_value___builtin_alloca$17=__builtin_alloca(return_value_snd_pcm_sw_params_sizeof$16);
    *(&c_swparams) = (struct _snd_pcm_sw_params *)return_value___builtin_alloca$17;
    unsigned long int return_value_snd_pcm_sw_params_sizeof$18;
    return_value_snd_pcm_sw_params_sizeof$18=snd_pcm_sw_params_sizeof();
    memset((void *)*(&c_swparams), 0, return_value_snd_pcm_sw_params_sizeof$18);
  }
  while((_Bool)0);
  err=setparams_stream(loop->play, pt_params);
  const char *return_value_snd_strerror$19;
  const char *return_value_snd_strerror$20;
  const char *return_value_snd_strerror$21;
  const char *return_value_snd_strerror$22;
  const char *return_value_snd_strerror$23;
  const char *return_value_snd_strerror$24;
  const char *return_value_snd_strerror$25;
  const char *return_value_snd_strerror$26;
  const char *return_value_snd_strerror$27;
  const char *return_value_snd_strerror$28;
  const char *return_value_snd_strerror$29;
  const char *return_value_snd_strerror$30;
  const char *return_value_snd_strerror$31;
  const char *return_value_snd_strerror$32;
  const char *return_value_snd_strerror$33;
  const char *return_value_snd_strerror$34;
  if(!(err >= 0))
  {
    do
      if(!(use_syslog == 0))
      {
        return_value_snd_strerror$19=snd_strerror(err);
        syslog(2, "Unable to set parameters for %s stream: %s\n", loop->play->id, return_value_snd_strerror$19);
      }

      else
      {
        return_value_snd_strerror$20=snd_strerror(err);
        fprintf(stderr, "Unable to set parameters for %s stream: %s\n", loop->play->id, return_value_snd_strerror$20);
      }
    while((_Bool)0);
    return err;
  }

  else
  {
    err=setparams_stream(loop->capt, ct_params);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$21=snd_strerror(err);
          syslog(2, "Unable to set parameters for %s stream: %s\n", loop->capt->id, return_value_snd_strerror$21);
        }

        else
        {
          return_value_snd_strerror$22=snd_strerror(err);
          fprintf(stderr, "Unable to set parameters for %s stream: %s\n", loop->capt->id, return_value_snd_strerror$22);
        }
      while((_Bool)0);
      return err;
    }

    else
    {
      err=setparams_bufsize(loop->play, p_params, pt_params, (unsigned long int)((double)bufsize / loop->play->pitch));
      if(!(err >= 0))
      {
        do
          if(!(use_syslog == 0))
          {
            return_value_snd_strerror$23=snd_strerror(err);
            syslog(2, "Unable to set buffer parameters for %s stream: %s\n", loop->play->id, return_value_snd_strerror$23);
          }

          else
          {
            return_value_snd_strerror$24=snd_strerror(err);
            fprintf(stderr, "Unable to set buffer parameters for %s stream: %s\n", loop->play->id, return_value_snd_strerror$24);
          }
        while((_Bool)0);
        return err;
      }

      else
      {
        err=setparams_bufsize(loop->capt, c_params, ct_params, (unsigned long int)((double)bufsize / loop->capt->pitch));
        if(!(err >= 0))
        {
          do
            if(!(use_syslog == 0))
            {
              return_value_snd_strerror$25=snd_strerror(err);
              syslog(2, "Unable to set buffer parameters for %s stream: %s\n", loop->capt->id, return_value_snd_strerror$25);
            }

            else
            {
              return_value_snd_strerror$26=snd_strerror(err);
              fprintf(stderr, "Unable to set buffer parameters for %s stream: %s\n", loop->capt->id, return_value_snd_strerror$26);
            }
          while((_Bool)0);
          return err;
        }

        else
        {
          err=setparams_set(loop->play, p_params, p_swparams, (unsigned long int)((double)bufsize / loop->play->pitch));
          if(!(err >= 0))
          {
            do
              if(!(use_syslog == 0))
              {
                return_value_snd_strerror$27=snd_strerror(err);
                syslog(2, "Unable to set sw parameters for %s stream: %s\n", loop->play->id, return_value_snd_strerror$27);
              }

              else
              {
                return_value_snd_strerror$28=snd_strerror(err);
                fprintf(stderr, "Unable to set sw parameters for %s stream: %s\n", loop->play->id, return_value_snd_strerror$28);
              }
            while((_Bool)0);
            return err;
          }

          else
          {
            err=setparams_set(loop->capt, c_params, c_swparams, (unsigned long int)((double)bufsize / loop->capt->pitch));
            if(!(err >= 0))
            {
              do
                if(!(use_syslog == 0))
                {
                  return_value_snd_strerror$29=snd_strerror(err);
                  syslog(2, "Unable to set sw parameters for %s stream: %s\n", loop->capt->id, return_value_snd_strerror$29);
                }

                else
                {
                  return_value_snd_strerror$30=snd_strerror(err);
                  fprintf(stderr, "Unable to set sw parameters for %s stream: %s\n", loop->capt->id, return_value_snd_strerror$30);
                }
              while((_Bool)0);
              return err;
            }

            else
            {
              err=snd_pcm_prepare(loop->play->handle);
              if(!(err >= 0))
              {
                do
                  if(!(use_syslog == 0))
                  {
                    return_value_snd_strerror$31=snd_strerror(err);
                    syslog(2, "Prepare %s error: %s\n", loop->play->id, return_value_snd_strerror$31);
                  }

                  else
                  {
                    return_value_snd_strerror$32=snd_strerror(err);
                    fprintf(stderr, "Prepare %s error: %s\n", loop->play->id, return_value_snd_strerror$32);
                  }
                while((_Bool)0);
                return err;
              }

              else
                if(loop->linked == 0u)
                {
                  err=snd_pcm_prepare(loop->capt->handle);
                  if(err >= 0)
                    goto __CPROVER_DUMP_L38;

                  do
                    if(!(use_syslog == 0))
                    {
                      return_value_snd_strerror$33=snd_strerror(err);
                      syslog(2, "Prepare %s error: %s\n", loop->capt->id, return_value_snd_strerror$33);
                    }

                    else
                    {
                      return_value_snd_strerror$34=snd_strerror(err);
                      fprintf(stderr, "Prepare %s error: %s\n", loop->capt->id, return_value_snd_strerror$34);
                    }
                  while((_Bool)0);
                  return err;
                }

                else
                {

                __CPROVER_DUMP_L38:
                  ;
                  if(!(verbose == 0))
                  {
                    snd_pcm_dump(loop->play->handle, loop->output);
                    snd_pcm_dump(loop->capt->handle, loop->output);
                  }

                  return 0;
                }
            }
          }
        }
      }
    }
  }
}

// setparams_bufsize
// file pcmjob.c line 162
static signed int setparams_bufsize(struct loopback_handle *lhandle, struct _snd_pcm_hw_params *params, struct _snd_pcm_hw_params *tparams, unsigned long int bufsize)
{
  struct _snd_pcm *handle = lhandle->handle;
  signed int err;
  unsigned long int periodsize;
  unsigned long int buffersize;
  unsigned long int last_bufsize = (unsigned long int)0;
  if(lhandle->buffer_size_req >= 1u)
  {
    bufsize = (unsigned long int)lhandle->buffer_size_req;
    last_bufsize = bufsize;
  }

  else
  {

  __again:
    ;
    if(lhandle->buffer_size_req >= 1u)
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Unable to set buffer size %li for %s\n", (signed long int)lhandle->buffer_size, lhandle->id);

        else
          fprintf(stderr, "Unable to set buffer size %li for %s\n", (signed long int)lhandle->buffer_size, lhandle->id);
      while((_Bool)0);
      return -5;
    }

    if(last_bufsize == bufsize)
      bufsize = bufsize + (unsigned long int)4;

    last_bufsize = bufsize;
    if(bufsize >= 10485761ul)
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Buffer size too big\n");

        else
          fprintf(stderr, "Buffer size too big\n");
      while((_Bool)0);
      return -5;
    }

  }

__set_it:
  ;
  snd_pcm_hw_params_copy(params, tparams);
  periodsize = bufsize * (unsigned long int)8;
  err=snd_pcm_hw_params_set_buffer_size_near(handle, params, &periodsize);
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  if(!(err >= 0))
  {
    do
      if(!(use_syslog == 0))
      {
        return_value_snd_strerror$1=snd_strerror(err);
        syslog(2, "Unable to set buffer size %li for %s: %s\n", periodsize, lhandle->id, return_value_snd_strerror$1);
      }

      else
      {
        return_value_snd_strerror$2=snd_strerror(err);
        fprintf(stderr, "Unable to set buffer size %li for %s: %s\n", periodsize, lhandle->id, return_value_snd_strerror$2);
      }
    while((_Bool)0);
    goto __again;
  }

  snd_pcm_hw_params_get_buffer_size(params, &periodsize);
  if(verbose >= 7)
    snd_output_printf(lhandle->loopback->output, "%s: buffer_size=%li\n", lhandle->id, periodsize);

  if(lhandle->period_size_req >= 1u)
    periodsize = (unsigned long int)lhandle->period_size_req;

  else
    periodsize = periodsize / (unsigned long int)8;
  err=snd_pcm_hw_params_set_period_size_near(handle, params, &periodsize, ((signed int *)NULL));
  const char *return_value_snd_strerror$3;
  const char *return_value_snd_strerror$4;
  if(!(err >= 0))
  {
    do
      if(!(use_syslog == 0))
      {
        return_value_snd_strerror$3=snd_strerror(err);
        syslog(2, "Unable to set period size %li for %s: %s\n", periodsize, lhandle->id, return_value_snd_strerror$3);
      }

      else
      {
        return_value_snd_strerror$4=snd_strerror(err);
        fprintf(stderr, "Unable to set period size %li for %s: %s\n", periodsize, lhandle->id, return_value_snd_strerror$4);
      }
    while((_Bool)0);
    goto __again;
  }

  snd_pcm_hw_params_get_period_size(params, &periodsize, (signed int *)(void *)0);
  if(verbose >= 7)
    snd_output_printf(lhandle->loopback->output, "%s: period_size=%li\n", lhandle->id, periodsize);

  if(!(periodsize == bufsize))
    bufsize = periodsize;

  snd_pcm_hw_params_get_buffer_size(params, &buffersize);
  if(!(buffersize >= 2ul * periodsize))
    goto __again;

  lhandle->period_size = (unsigned int)periodsize;
  lhandle->buffer_size = (unsigned int)buffersize;
  return 0;
}

// setparams_set
// file pcmjob.c line 223
static signed int setparams_set(struct loopback_handle *lhandle, struct _snd_pcm_hw_params *params, struct _snd_pcm_sw_params *swparams, unsigned long int bufsize)
{
  struct _snd_pcm *handle = lhandle->handle;
  signed int err;
  unsigned long int val;
  unsigned long int period_size;
  unsigned long int buffer_size;
  err=snd_pcm_hw_params(handle, params);
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  const char *return_value_snd_strerror$3;
  const char *return_value_snd_strerror$4;
  const char *return_value_snd_strerror$5;
  const char *return_value_snd_strerror$6;
  const char *return_value_snd_strerror$7;
  const char *return_value_snd_strerror$8;
  const char *return_value_snd_strerror$9;
  const char *return_value_snd_strerror$10;
  if(!(err >= 0))
  {
    do
      if(!(use_syslog == 0))
      {
        return_value_snd_strerror$1=snd_strerror(err);
        syslog(2, "Unable to set hw params for %s: %s\n", lhandle->id, return_value_snd_strerror$1);
      }

      else
      {
        return_value_snd_strerror$2=snd_strerror(err);
        fprintf(stderr, "Unable to set hw params for %s: %s\n", lhandle->id, return_value_snd_strerror$2);
      }
    while((_Bool)0);
    return err;
  }

  else
  {
    err=snd_pcm_sw_params_current(handle, swparams);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$3=snd_strerror(err);
          syslog(2, "Unable to determine current swparams for %s: %s\n", lhandle->id, return_value_snd_strerror$3);
        }

        else
        {
          return_value_snd_strerror$4=snd_strerror(err);
          fprintf(stderr, "Unable to determine current swparams for %s: %s\n", lhandle->id, return_value_snd_strerror$4);
        }
      while((_Bool)0);
      return err;
    }

    else
    {
      err=snd_pcm_sw_params_set_start_threshold(handle, swparams, (unsigned long int)0x7fffffff);
      if(!(err >= 0))
      {
        do
          if(!(use_syslog == 0))
          {
            return_value_snd_strerror$5=snd_strerror(err);
            syslog(2, "Unable to set start threshold mode for %s: %s\n", lhandle->id, return_value_snd_strerror$5);
          }

          else
          {
            return_value_snd_strerror$6=snd_strerror(err);
            fprintf(stderr, "Unable to set start threshold mode for %s: %s\n", lhandle->id, return_value_snd_strerror$6);
          }
        while((_Bool)0);
        return err;
      }

      else
      {
        snd_pcm_hw_params_get_period_size(params, &period_size, (signed int *)(void *)0);
        snd_pcm_hw_params_get_buffer_size(params, &buffer_size);
        if(!(lhandle->nblock == 0u))
        {
          if(lhandle == lhandle->loopback->play)
            val = buffer_size - ((unsigned long int)2 * period_size - (unsigned long int)4);

          else
            val = (unsigned long int)4;
          if(verbose >= 7)
            snd_output_printf(lhandle->loopback->output, "%s: avail_min1=%li\n", lhandle->id, val);

        }

        else
        {
          if(lhandle == lhandle->loopback->play)
          {
            val = bufsize + bufsize / (unsigned long int)2;
            if(!((3ul * buffer_size) / 4ul >= val))
              val = (buffer_size * (unsigned long int)3) / (unsigned long int)4;

            val = buffer_size - val;
          }

          else
          {
            val = bufsize / (unsigned long int)2;
            if(!(buffer_size / 4ul >= val))
              val = buffer_size / (unsigned long int)4;

          }
          if(verbose >= 7)
            snd_output_printf(lhandle->loopback->output, "%s: avail_min2=%li\n", lhandle->id, val);

        }
        err=snd_pcm_sw_params_set_avail_min(handle, swparams, val);
        if(!(err >= 0))
        {
          do
            if(!(use_syslog == 0))
            {
              return_value_snd_strerror$7=snd_strerror(err);
              syslog(2, "Unable to set avail min for %s: %s\n", lhandle->id, return_value_snd_strerror$7);
            }

            else
            {
              return_value_snd_strerror$8=snd_strerror(err);
              fprintf(stderr, "Unable to set avail min for %s: %s\n", lhandle->id, return_value_snd_strerror$8);
            }
          while((_Bool)0);
          return err;
        }

        else
        {
          snd_pcm_sw_params_get_avail_min(swparams, &lhandle->avail_min);
          err=snd_pcm_sw_params(handle, swparams);
          if(!(err >= 0))
          {
            do
              if(!(use_syslog == 0))
              {
                return_value_snd_strerror$9=snd_strerror(err);
                syslog(2, "Unable to set sw params for %s: %s\n", lhandle->id, return_value_snd_strerror$9);
              }

              else
              {
                return_value_snd_strerror$10=snd_strerror(err);
                fprintf(stderr, "Unable to set sw params for %s: %s\n", lhandle->id, return_value_snd_strerror$10);
              }
            while((_Bool)0);
            return err;
          }

          else
            return 0;
        }
      }
    }
  }
}

// setparams_stream
// file pcmjob.c line 109
static signed int setparams_stream(struct loopback_handle *lhandle, struct _snd_pcm_hw_params *params)
{
  struct _snd_pcm *handle = lhandle->handle;
  signed int err;
  unsigned int rrate;
  err=snd_pcm_hw_params_any(handle, params);
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  const char *return_value_snd_strerror$3;
  const char *return_value_snd_strerror$4;
  const char *return_value_snd_strerror$5;
  const char *return_value_snd_strerror$6;
  const char *return_value_snd_strerror$7;
  const char *return_value_snd_strerror$8;
  const char *return_value_snd_strerror$9;
  const char *return_value_snd_strerror$10;
  const char *return_value_snd_strerror$11;
  const char *return_value_snd_strerror$12;
  if(!(err >= 0))
  {
    do
      if(!(use_syslog == 0))
      {
        return_value_snd_strerror$1=snd_strerror(err);
        syslog(2, "Broken configuration for %s PCM: no configurations available: %s\n", lhandle->id, return_value_snd_strerror$1);
      }

      else
      {
        return_value_snd_strerror$2=snd_strerror(err);
        fprintf(stderr, "Broken configuration for %s PCM: no configurations available: %s\n", lhandle->id, return_value_snd_strerror$2);
      }
    while((_Bool)0);
    return err;
  }

  else
  {
    err=snd_pcm_hw_params_set_rate_resample(handle, params, (unsigned int)lhandle->resample);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$3=snd_strerror(err);
          syslog(2, "Resample setup failed for %s (val %i): %s\n", lhandle->id, lhandle->resample, return_value_snd_strerror$3);
        }

        else
        {
          return_value_snd_strerror$4=snd_strerror(err);
          fprintf(stderr, "Resample setup failed for %s (val %i): %s\n", lhandle->id, lhandle->resample, return_value_snd_strerror$4);
        }
      while((_Bool)0);
      return err;
    }

    else
    {
      err=snd_pcm_hw_params_set_access(handle, params, lhandle->access);
      if(!(err >= 0))
      {
        do
          if(!(use_syslog == 0))
          {
            return_value_snd_strerror$5=snd_strerror(err);
            syslog(2, "Access type not available for %s: %s\n", lhandle->id, return_value_snd_strerror$5);
          }

          else
          {
            return_value_snd_strerror$6=snd_strerror(err);
            fprintf(stderr, "Access type not available for %s: %s\n", lhandle->id, return_value_snd_strerror$6);
          }
        while((_Bool)0);
        return err;
      }

      else
      {
        err=snd_pcm_hw_params_set_format(handle, params, lhandle->format);
        if(!(err >= 0))
        {
          do
            if(!(use_syslog == 0))
            {
              return_value_snd_strerror$7=snd_strerror(err);
              syslog(2, "Sample format not available for %s: %s\n", lhandle->id, return_value_snd_strerror$7);
            }

            else
            {
              return_value_snd_strerror$8=snd_strerror(err);
              fprintf(stderr, "Sample format not available for %s: %s\n", lhandle->id, return_value_snd_strerror$8);
            }
          while((_Bool)0);
          return err;
        }

        else
        {
          err=snd_pcm_hw_params_set_channels(handle, params, lhandle->channels);
          if(!(err >= 0))
          {
            do
              if(!(use_syslog == 0))
              {
                return_value_snd_strerror$9=snd_strerror(err);
                syslog(2, "Channels count (%i) not available for %s: %s\n", lhandle->channels, lhandle->id, return_value_snd_strerror$9);
              }

              else
              {
                return_value_snd_strerror$10=snd_strerror(err);
                fprintf(stderr, "Channels count (%i) not available for %s: %s\n", lhandle->channels, lhandle->id, return_value_snd_strerror$10);
              }
            while((_Bool)0);
            return err;
          }

          else
          {
            rrate = lhandle->rate_req;
            err=snd_pcm_hw_params_set_rate_near(handle, params, &rrate, ((signed int *)NULL));
            if(!(err >= 0))
            {
              do
                if(!(use_syslog == 0))
                {
                  return_value_snd_strerror$11=snd_strerror(err);
                  syslog(2, "Rate %iHz not available for %s: %s\n", lhandle->rate_req, lhandle->id, return_value_snd_strerror$11);
                }

                else
                {
                  return_value_snd_strerror$12=snd_strerror(err);
                  fprintf(stderr, "Rate %iHz not available for %s: %s\n", lhandle->rate_req, lhandle->id, return_value_snd_strerror$12);
                }
              while((_Bool)0);
              return err;
            }

            else
            {
              rrate = (unsigned int)0;
              snd_pcm_hw_params_get_rate(params, &rrate, ((signed int *)NULL));
              lhandle->rate = rrate;
              if(lhandle->loopback->src_enable == 0u)
              {
                if((unsigned int)(signed int)rrate == lhandle->rate)
                  goto __CPROVER_DUMP_L28;

                do
                  if(!(use_syslog == 0))
                    syslog(2, "Rate does not match (requested %iHz, got %iHz, resample %i)\n", lhandle->rate, rrate, lhandle->resample);

                  else
                    fprintf(stderr, "Rate does not match (requested %iHz, got %iHz, resample %i)\n", lhandle->rate, rrate, lhandle->resample);
                while((_Bool)0);
                return -22;
              }

              else
              {

              __CPROVER_DUMP_L28:
                ;
                lhandle->pitch = (double)lhandle->rate_req / (double)lhandle->rate;
                return 0;
              }
            }
          }
        }
      }
    }
  }
}

// setscheduler
// file alsaloop.c line 143
static void setscheduler(void)
{
  struct sched_param sched_param;
  signed int return_value_sched_getparam$1;
  return_value_sched_getparam$1=sched_getparam(0, &sched_param);
  if(!(return_value_sched_getparam$1 >= 0))
    do
      if(!(use_syslog == 0))
        syslog(4, "Scheduler getparam failed.\n");

      else
        fprintf(stderr, "Scheduler getparam failed.\n");
    while((_Bool)0);

  else
  {
    sched_param.__sched_priority=sched_get_priority_max(2);
    signed int return_value_sched_setscheduler$2;
    return_value_sched_setscheduler$2=sched_setscheduler(0, 2, &sched_param);
    if(return_value_sched_setscheduler$2 == 0)
    {
      if(!(verbose == 0))
        do
          if(!(use_syslog == 0))
            syslog(4, "Scheduler set to Round Robin with priority %i\n", sched_param.__sched_priority);

          else
            fprintf(stderr, "Scheduler set to Round Robin with priority %i\n", sched_param.__sched_priority);
        while((_Bool)0);

    }

    else
      if(!(verbose == 0))
        do
          if(!(use_syslog == 0))
            syslog(6, "!!!Scheduler set to Round Robin with priority %i FAILED!\n", sched_param.__sched_priority);

          else
            fprintf(stderr, "!!!Scheduler set to Round Robin with priority %i FAILED!\n", sched_param.__sched_priority);
        while((_Bool)0);

  }
}

// show_handle
// file pcmjob.c line 1944
static void show_handle(struct loopback_handle *lhandle, const char *id)
{
  struct loopback *loop = lhandle->loopback;
  snd_output_printf(loop->state, "  %s: %s:\n", id, lhandle->id);
  snd_output_printf(loop->state, "    device = '%s', ctldev '%s'\n", lhandle->device, lhandle->ctldev);
  snd_output_printf(loop->state, "    card_number = %i\n", lhandle->card_number);
  if(!(loop->running == 0u))
  {
    const char *return_value_snd_pcm_access_name$1;
    return_value_snd_pcm_access_name$1=snd_pcm_access_name(lhandle->access);
    const char *return_value_snd_pcm_format_name$2;
    return_value_snd_pcm_format_name$2=snd_pcm_format_name(lhandle->format);
    snd_output_printf(loop->state, "    access = %s, format = %s, rate = %u, channels = %u\n", return_value_snd_pcm_access_name$1, return_value_snd_pcm_format_name$2, lhandle->rate, lhandle->channels);
    snd_output_printf(loop->state, "    buffer_size = %u, period_size = %u, avail_min = %li\n", lhandle->buffer_size, lhandle->period_size, lhandle->avail_min);
    snd_output_printf(loop->state, "    xrun_pending = %i\n", lhandle->xrun_pending);
    snd_output_printf(loop->state, "    buf_size = %li, buf_pos = %li, buf_count = %li, buf_over = %li\n", lhandle->buf_size, lhandle->buf_pos, lhandle->buf_count, lhandle->buf_over);
    snd_output_printf(loop->state, "    pitch = %.8f\n", lhandle->pitch);
  }

}

// showlatency
// file pcmjob.c line 346
static void showlatency(struct _snd_output *out, unsigned long int latency, unsigned int rate, char *prefix)
{
  double d = (double)latency / (double)rate;
  snd_output_printf(out, "%s %li frames, %.3fus, %.6fms (%.4fHz)\n", prefix, (signed long int)latency, d * (double)1000000, d * (double)1000, (double)1 / d);
}

// signal_handler
// file alsaloop.c line 806
static void signal_handler(signed int sig)
{
  quit = 1;
  send_to_all(12);
}

// signal_handler_ignore
// file alsaloop.c line 830
static void signal_handler_ignore(signed int sig)
{
  signal(sig, signal_handler_ignore);
}

// signal_handler_state
// file alsaloop.c line 812
static void signal_handler_state(signed int sig)
{
  unsigned long int self;
  self=pthread_self();
  struct loopback_thread *thread;
  signed int i;
  signed int j;
  signed int return_value_pthread_equal$1;
  return_value_pthread_equal$1=pthread_equal(main_job, self);
  if(!(return_value_pthread_equal$1 == 0))
    send_to_all(10);

  i = 0;
  for( ; !(i >= threads_count); i = i + 1)
  {
    thread = &threads[(signed long int)i];
    if(thread->thread == self)
    {
      j = 0;
      for( ; !(j >= thread->loopbacks_count); j = j + 1)
        pcmjob_state(thread->loopbacks[(signed long int)j]);
    }

  }
  signal(sig, signal_handler_state);
}

// suspend
// file pcmjob.c line 627
static signed int suspend(struct loopback_handle *lhandle)
{
  signed int err;
  do
  {
    err=snd_pcm_resume(lhandle->handle);
    if(!(err == -11))
      break;

    usleep((unsigned int)1);
  }
  while((_Bool)1);
  signed int return_value_xrun$1;
  if(!(err >= 0))
  {
    return_value_xrun$1=xrun(lhandle);
    return return_value_xrun$1;
  }

  else
    return 0;
}

// thread_job
// file alsaloop.c line 784
static void thread_job(struct loopback_thread *thread)
{
  if(thread->threaded == 0)
    thread_job1((void *)thread);

  else
    pthread_create(&thread->thread, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)thread_job1, (void *)thread);
}

// thread_job1
// file alsaloop.c line 708
static void thread_job1(void *_data)
{
  struct loopback_thread *thread = (struct loopback_thread *)_data;
  struct _snd_output *output = thread->output;
  struct pollfd *pfds = (struct pollfd *)(void *)0;
  signed int pfds_count = 0;
  signed int i;
  signed int j;
  signed int err;
  signed int wake = 1000000;
  setscheduler();
  i = 0;
  for( ; !(i >= thread->loopbacks_count); i = i + 1)
  {
    err=pcmjob_init(thread->loopbacks[(signed long int)i]);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Loopback initialization failure.\n");

        else
          fprintf(stderr, "Loopback initialization failure.\n");
      while((_Bool)0);
      my_exit(thread, 1);
    }

  }
  i = 0;
  for( ; !(i >= thread->loopbacks_count); i = i + 1)
  {
    err=pcmjob_start(thread->loopbacks[(signed long int)i]);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
          syslog(2, "Loopback start failure.\n");

        else
          fprintf(stderr, "Loopback start failure.\n");
      while((_Bool)0);
      my_exit(thread, 1);
    }

    pfds_count = pfds_count + thread->loopbacks[(signed long int)i]->pollfd_count;
    j = (signed int)thread->loopbacks[(signed long int)i]->wake;
    if(j >= 1 && !(j >= wake))
      wake = j;

  }
  if(wake >= 1000000)
    wake = -1;

  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)pfds_count, sizeof(struct pollfd) /*8ul*/ );
  pfds = (struct pollfd *)return_value_calloc$1;
  if(pfds == ((struct pollfd *)NULL) || !(pfds_count >= 1))
  {
    do
      if(!(use_syslog == 0))
        syslog(2, "Poll FDs allocation failed.\n");

      else
        fprintf(stderr, "Poll FDs allocation failed.\n");
    while((_Bool)0);
    my_exit(thread, 1);
  }

  signed int *return_value___errno_location$2;
  char *return_value_strerror$4;
  char *return_value_strerror$5;
  while(quit == 0)
  {
    struct timeval tv1;
    struct timeval tv2;
    j = 0;
    i = j;
    for( ; !(i >= thread->loopbacks_count); i = i + 1)
    {
      err=pcmjob_pollfds_init(thread->loopbacks[(signed long int)i], &pfds[(signed long int)j]);
      if(!(err >= 0))
      {
        do
          if(!(use_syslog == 0))
            syslog(2, "Poll FD initialization failed.\n");

          else
            fprintf(stderr, "Poll FD initialization failed.\n");
        while((_Bool)0);
        my_exit(thread, 1);
      }

      j = j + err;
    }
    if(verbose >= 11)
      gettimeofday(&tv1, (struct timezone *)(void *)0);

    err=poll(pfds, (unsigned long int)j, wake);
    if(!(err >= 0))
    {
      return_value___errno_location$2=__errno_location();
      err = -(*return_value___errno_location$2);
    }

    if(verbose >= 11)
    {
      gettimeofday(&tv2, (struct timezone *)(void *)0);
      signed long int return_value_timediff$3;
      return_value_timediff$3=timediff(tv2, tv1);
      snd_output_printf(output, "pool took %lius\n", return_value_timediff$3);
    }

    if(!(err >= 0))
    {
      if(err == -85 || err == -4)
        continue;

      do
        if(!(use_syslog == 0))
        {
          return_value_strerror$4=strerror(-err);
          syslog(2, "Poll failed: %s\n", return_value_strerror$4);
        }

        else
        {
          return_value_strerror$5=strerror(-err);
          fprintf(stderr, "Poll failed: %s\n", return_value_strerror$5);
        }
      while((_Bool)0);
      my_exit(thread, 1);
    }

    j = 0;
    i = j;
    for( ; !(i >= thread->loopbacks_count); i = i + 1)
    {
      struct loopback *loop = thread->loopbacks[(signed long int)i];
      if(!(j >= loop->active_pollfd_count))
      {
        err=pcmjob_pollfds_handle(loop, &pfds[(signed long int)j]);
        if(!(err >= 0))
        {
          do
            if(!(use_syslog == 0))
              syslog(2, "pcmjob failed.\n");

            else
              fprintf(stderr, "pcmjob failed.\n");
          while((_Bool)0);
          exit(1);
        }

      }

      j = j + loop->active_pollfd_count;
    }
  }
  my_exit(thread, 0);
}

// time_to_frames
// file pcmjob.c line 103
static inline unsigned long int time_to_frames(unsigned int rate, unsigned long long int time)
{
  return (time * (unsigned long int)rate) / 1000000ULL;
}

// timediff
// file alsaloop.c line 215
static signed long int timediff(struct timeval t1, struct timeval t2)
{
  signed long int l;
  t1.tv_sec = t1.tv_sec - t2.tv_sec;
  l = (signed long int)t1.tv_usec - (signed long int)t2.tv_usec;
  if(!(l >= 0l))
  {
    t1.tv_sec = t1.tv_sec - 1l;
    l = (signed long int)1000000 + l;
    l = l % (signed long int)1000000;
  }

  return t1.tv_sec * (signed long int)1000000 + l;
}

// timediff$link1
// file pcmjob.c line 354
static signed long int timediff$link1(struct timeval t1$link1, struct timeval t2$link1)
{
  signed long int l$link1;
  t1$link1.tv_sec = t1$link1.tv_sec - t2$link1.tv_sec;
  if(!(t1$link1.tv_usec >= t2$link1.tv_usec))
  {
    l$link1 = ((t1$link1.tv_usec + (signed long int)1000000) - t2$link1.tv_usec) % (signed long int)1000000;
    t1$link1.tv_sec = t1$link1.tv_sec - 1l;
  }

  else
    l$link1 = t1$link1.tv_usec - t2$link1.tv_usec;
  return t1$link1.tv_sec * (signed long int)1000000 + l$link1;
}

// update_pitch
// file pcmjob.c line 1035
void update_pitch(struct loopback *loop)
{
  double pitch = loop->pitch;
  if((signed int)loop->sync == SYNC_TYPE_SAMPLERATE)
  {
    loop->src_data.src_ratio = (double)1.0 / (pitch * loop->play->pitch * loop->capt->pitch);
    if(verbose >= 3)
      snd_output_printf(loop->output, "%s: Samplerate src_ratio update1: %.8f\n", loop->id, loop->src_data.src_ratio);

  }

  else
    if((signed int)loop->sync == SYNC_TYPE_CAPTRATESHIFT)
    {
      set_rate_shift(loop->capt, pitch);
      if(!(loop->use_samplerate == 0u))
      {
        loop->src_data.src_ratio = (double)1.0 / (loop->play->pitch * loop->capt->pitch);
        if(verbose >= 3)
          snd_output_printf(loop->output, "%s: Samplerate src_ratio update2: %.8f\n", loop->id, loop->src_data.src_ratio);

      }

    }

    else
      if((signed int)loop->sync == SYNC_TYPE_PLAYRATESHIFT)
      {
        set_rate_shift(loop->play, pitch);
        if(!(loop->use_samplerate == 0u))
        {
          loop->src_data.src_ratio = (double)1.0 / (loop->play->pitch * loop->capt->pitch);
          if(verbose >= 3)
            snd_output_printf(loop->output, "%s: Samplerate src_ratio update3: %.8f\n", loop->id, loop->src_data.src_ratio);

        }

      }

  if(!(verbose == 0))
    snd_output_printf(loop->output, "New pitch for %s: %.8f (min/max samples = %li/%li)\n", loop->id, pitch, loop->pitch_diff_min, loop->pitch_diff_max);

}

// writeit
// file pcmjob.c line 701
static signed int writeit(struct loopback_handle *lhandle)
{
  signed long int avail;
  signed long int r;
  signed long int res = (signed long int)0;
  signed int err;
  do
  {

  __again:
    ;
    avail=snd_pcm_avail_update(lhandle->handle);
    if(avail == -32l)
    {
      err=xrun(lhandle);
      if(!(err >= 0))
        return err;

      return (signed int)res;
      break;
    }

    if(!(avail == -86l))
      break;

    err=suspend(lhandle);
    if(!(err >= 0))
      return err;

  }
  while((_Bool)1);
  while(avail >= 1l)
  {
    if(!(lhandle->buf_count >= 1ul))
      break;

    r = (signed long int)lhandle->buf_count;
    if(!(lhandle->buf_size >= lhandle->buf_pos + (unsigned long int)r))
      r = (signed long int)(lhandle->buf_size - lhandle->buf_pos);

    if(!(avail >= r))
      r = avail;

    r=snd_pcm_writei(lhandle->handle, (const void *)(lhandle->buf + (signed long int)(lhandle->buf_pos * (unsigned long int)lhandle->frame_size)), (unsigned long int)r);
    if(!(r >= 1l))
    {
      if(r == -32l)
      {
        err=xrun(lhandle);
        if(!(err >= 0))
          return err;

        return (signed int)res;
      }

      return (signed int)(res > (signed long int)0 ? res : r);
    }

    res = res + r;
    lhandle->counter = lhandle->counter + (unsigned long long int)r;
    lhandle->buf_count = lhandle->buf_count - (unsigned long int)r;
    lhandle->buf_pos = lhandle->buf_pos + (unsigned long int)r;
    lhandle->buf_pos = lhandle->buf_pos % lhandle->buf_size;
    xrun_profile(lhandle->loopback);
    if(!(lhandle->loopback->stop_pending == 0u))
    {
      lhandle->loopback->stop_count = lhandle->loopback->stop_count + (unsigned long int)r;
      if((double)lhandle->loopback->stop_count * lhandle->pitch > (double)(3ul * lhandle->loopback->latency))
      {
        lhandle->loopback->stop_pending = (unsigned int)0;
        lhandle->loopback->reinit = (unsigned int)1;
        break;
      }

    }

  }
  return (signed int)res;
}

// xrun
// file pcmjob.c line 607
static signed int xrun(struct loopback_handle *lhandle)
{
  signed int err;
  if(lhandle == lhandle->loopback->play)
  {
    do
      if(!(use_syslog == 0))
        syslog(7, "underrun for %s\n", lhandle->id);

      else
        fprintf(stderr, "underrun for %s\n", lhandle->id);
    while((_Bool)0);
    xrun_stats(lhandle->loopback);
    err=snd_pcm_prepare(lhandle->handle);
    if(!(err >= 0))
      return err;

    lhandle->xrun_pending = (unsigned int)1;
  }

  else
  {
    do
      if(!(use_syslog == 0))
        syslog(7, "overrun for %s\n", lhandle->id);

      else
        fprintf(stderr, "overrun for %s\n", lhandle->id);
    while((_Bool)0);
    xrun_stats(lhandle->loopback);
    err=snd_pcm_prepare(lhandle->handle);
    if(!(err >= 0))
      return err;

    lhandle->xrun_pending = (unsigned int)1;
  }
  return 0;
}

// xrun_profile
// file pcmjob.c line 394
static inline void xrun_profile(struct loopback *loop)
{
  if(!(loop->xrun == 0u))
    xrun_profile0(loop);

}

// xrun_profile0
// file pcmjob.c line 377
static void xrun_profile0(struct loopback *loop)
{
  signed long int pdelay;
  signed long int cdelay;
  signed int return_value_snd_pcm_delay$2;
  return_value_snd_pcm_delay$2=snd_pcm_delay(loop->play->handle, &pdelay);
  signed int return_value_snd_pcm_delay$1;
  if(return_value_snd_pcm_delay$2 >= 0)
  {
    return_value_snd_pcm_delay$1=snd_pcm_delay(loop->capt->handle, &cdelay);
    if(return_value_snd_pcm_delay$1 >= 0)
    {
      getcurtimestamp(&loop->xrun_last_update);
      loop->xrun_last_pdelay = pdelay;
      loop->xrun_last_cdelay = cdelay;
      loop->xrun_buf_pcount = loop->play->buf_count;
      loop->xrun_buf_ccount = loop->capt->buf_count;
      loop->xrun_out_frames = loop->src_out_frames;
    }

  }

}

// xrun_stats
// file pcmjob.c line 444
static inline void xrun_stats(struct loopback *loop)
{
  if(!(loop->xrun == 0u))
    xrun_stats0(loop);

}

// xrun_stats0
// file pcmjob.c line 400
static void xrun_stats0(struct loopback *loop)
{
  struct timeval t;
  double expected;
  double last;
  double wake;
  double check;
  double queued = (double)-1;
  double proc;
  double missing = (double)-1;
  double maxbuf;
  double pfilled;
  double cfilled;
  double cqueued = (double)-1;
  double avail_min;
  double sincejob;
  expected = ((double)loop->latency / (double)loop->play->rate_req) * (double)1000;
  getcurtimestamp(&t);
  signed long int return_value_timediff$1;
  return_value_timediff$1=timediff$link1(t, loop->xrun_last_update);
  last = (double)return_value_timediff$1 / (double)1000;
  signed long int return_value_timediff$2;
  return_value_timediff$2=timediff$link1(t, loop->xrun_last_wake);
  wake = (double)return_value_timediff$2 / (double)1000;
  signed long int return_value_timediff$3;
  return_value_timediff$3=timediff$link1(t, loop->xrun_last_check);
  check = (double)return_value_timediff$3 / (double)1000;
  signed long int return_value_timediff$4;
  return_value_timediff$4=timediff$link1(t, loop->tstamp_start);
  sincejob = (double)return_value_timediff$4 / (double)1000;
  if(!(loop->xrun_last_pdelay == -10000000l))
    queued = ((double)loop->xrun_last_pdelay / (double)loop->play->rate) * (double)1000;

  if(!(loop->xrun_last_cdelay == -10000000l))
    cqueued = ((double)loop->xrun_last_cdelay / (double)loop->capt->rate) * (double)1000;

  maxbuf = ((double)loop->play->buffer_size / (double)loop->play->rate) * (double)1000;
  proc = (double)loop->xrun_max_proctime / (double)1000;
  pfilled = ((double)(loop->xrun_buf_pcount + (unsigned long int)loop->xrun_out_frames) / (double)loop->play->rate) * (double)1000;
  cfilled = ((double)loop->xrun_buf_ccount / (double)loop->capt->rate) * (double)1000;
  avail_min = (((double)loop->play->buffer_size - (double)loop->play->avail_min) / (double)loop->play->rate) * (double)1000;
  avail_min = expected - avail_min;
  if(queued >= 0.000000)
    missing = last - queued;

  if(missing >= 0.000000)
  {
    if(loop->xrun_max_missing < missing)
      loop->xrun_max_missing = missing;

  }

  loop->xrun_max_proctime = (signed long int)0;
  getcurtimestamp(&t);
  do
    if(!(use_syslog == 0))
      syslog(6, "  last write before %.4fms, queued %.4fms/%.4fms -> missing %.4fms\n", last, queued, cqueued, missing);

    else
      fprintf(stderr, "  last write before %.4fms, queued %.4fms/%.4fms -> missing %.4fms\n", last, queued, cqueued, missing);
  while((_Bool)0);
  do
    if(!(use_syslog == 0))
      syslog(6, "  expected %.4fms, processing %.4fms, max missing %.4fms\n", expected, proc, loop->xrun_max_missing);

    else
      fprintf(stderr, "  expected %.4fms, processing %.4fms, max missing %.4fms\n", expected, proc, loop->xrun_max_missing);
  while((_Bool)0);
  do
    if(!(use_syslog == 0))
      syslog(6, "  last wake %.4fms, last check %.4fms, avail_min %.4fms\n", wake, check, avail_min);

    else
      fprintf(stderr, "  last wake %.4fms, last check %.4fms, avail_min %.4fms\n", wake, check, avail_min);
  while((_Bool)0);
  do
    if(!(use_syslog == 0))
      syslog(6, "  max buf %.4fms, pfilled %.4fms, cfilled %.4fms\n", maxbuf, pfilled, cfilled);

    else
      fprintf(stderr, "  max buf %.4fms, pfilled %.4fms, cfilled %.4fms\n", maxbuf, pfilled, cfilled);
  while((_Bool)0);
  do
    if(!(use_syslog == 0))
      syslog(6, "  job started before %.4fms\n", sincejob);

    else
      fprintf(stderr, "  job started before %.4fms\n", sincejob);
  while((_Bool)0);
}

// xrun_sync
// file pcmjob.c line 791
static signed int xrun_sync(struct loopback *loop)
{
  struct loopback_handle *play = loop->play;
  struct loopback_handle *capt = loop->capt;
  unsigned long int fill;
  fill=get_whole_latency(loop);
  signed long int pdelay;
  signed long int cdelay;
  signed long int delay1;
  signed long int pdelay1;
  signed long int cdelay1;
  signed long int diff;
  signed int err;

__again:
  ;
  const char *return_value_snd_strerror$1;
  const char *return_value_snd_strerror$2;
  const char *return_value_snd_strerror$3;
  const char *return_value_snd_strerror$4;
  const char *return_value_snd_strerror$6;
  const char *return_value_snd_strerror$7;
  const char *return_value_snd_strerror$8;
  const char *return_value_snd_strerror$9;
  while((_Bool)1)
  {
    if(verbose >= 6)
      snd_output_printf(loop->output, "%s: xrun sync %i %i\n", loop->id, capt->xrun_pending, play->xrun_pending);

    if(!(capt->xrun_pending == 0u))
    {

    __pagain:
      ;
      capt->xrun_pending = (unsigned int)0;
      err=snd_pcm_prepare(capt->handle);
      if(!(err >= 0))
      {
        do
          if(!(use_syslog == 0))
          {
            return_value_snd_strerror$1=snd_strerror(err);
            syslog(2, "%s prepare failed: %s\n", capt->id, return_value_snd_strerror$1);
          }

          else
          {
            return_value_snd_strerror$2=snd_strerror(err);
            fprintf(stderr, "%s prepare failed: %s\n", capt->id, return_value_snd_strerror$2);
          }
        while((_Bool)0);
        return err;
      }

      err=snd_pcm_start(capt->handle);
      if(!(err >= 0))
      {
        do
          if(!(use_syslog == 0))
          {
            return_value_snd_strerror$3=snd_strerror(err);
            syslog(2, "%s start failed: %s\n", capt->id, return_value_snd_strerror$3);
          }

          else
          {
            return_value_snd_strerror$4=snd_strerror(err);
            fprintf(stderr, "%s start failed: %s\n", capt->id, return_value_snd_strerror$4);
          }
        while((_Bool)0);
        return err;
      }

    }

    else
    {
      signed int return_value_readit$5;
      return_value_readit$5=readit(capt);
      diff = (signed long int)return_value_readit$5;
      buf_add(loop, (unsigned long int)diff);
      if(capt->xrun_pending != 0u)
        goto __pagain;

    }
    err=snd_pcm_delay(capt->handle, &cdelay);
    if(!(err >= 0))
    {
      if(err == -32)
      {
        capt->xrun_pending = (unsigned int)1;
        goto __again;
      }

      if(err == -86)
      {
        err=suspend(capt);
        if(!(err >= 0))
          return err;

        goto __again;
      }

      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$6=snd_strerror(err);
          syslog(2, "%s capture delay failed: %s\n", capt->id, return_value_snd_strerror$6);
        }

        else
        {
          return_value_snd_strerror$7=snd_strerror(err);
          fprintf(stderr, "%s capture delay failed: %s\n", capt->id, return_value_snd_strerror$7);
        }
      while((_Bool)0);
      return err;
    }

    err=snd_pcm_delay(play->handle, &pdelay);
    if(!(err >= 0))
    {
      if(err == -32)
      {
        pdelay = (signed long int)0;
        play->xrun_pending = (unsigned int)1;
      }

      else
        if(err == -86)
        {
          err=suspend(play);
          if(!(err >= 0))
            return err;

          goto __again;
        }

        else
        {
          do
            if(!(use_syslog == 0))
            {
              return_value_snd_strerror$8=snd_strerror(err);
              syslog(2, "%s playback delay failed: %s\n", play->id, return_value_snd_strerror$8);
            }

            else
            {
              return_value_snd_strerror$9=snd_strerror(err);
              fprintf(stderr, "%s playback delay failed: %s\n", play->id, return_value_snd_strerror$9);
            }
          while((_Bool)0);
          return err;
        }
    }

    capt->counter = (unsigned long long int)cdelay;
    play->counter = (unsigned long long int)pdelay;
    if(!(play->buf == capt->buf))
      cdelay = cdelay + (signed long int)capt->buf_count;

    pdelay = pdelay + (signed long int)play->buf_count;
    pdelay = pdelay + (signed long int)loop->src_out_frames;
    cdelay1 = (signed long int)((double)cdelay * capt->pitch);
    pdelay1 = (signed long int)((double)pdelay * play->pitch);
    delay1 = cdelay1 + pdelay1;
    capt->total_queued = (unsigned long int)0;
    play->total_queued = (unsigned long int)0;
    loop->total_queued_count = (unsigned int)0;
    loop->pitch_diff_max = (signed long int)0;
    loop->pitch_diff_min = loop->pitch_diff_max;
    loop->pitch_diff = loop->pitch_diff_min;
    if(verbose >= 7)
    {
      snd_output_printf(loop->output, "sync: cdelay=%li(%li), pdelay=%li(%li), fill=%li (delay=%li), src_out=%li\n", (signed long int)cdelay, (signed long int)cdelay1, (signed long int)pdelay, (signed long int)pdelay1, (signed long int)fill, (signed long int)delay1, (signed long int)loop->src_out_frames);
      snd_output_printf(loop->output, "sync: cbufcount=%li, pbufcount=%li\n", (signed long int)capt->buf_count, (signed long int)play->buf_count);
    }

    if(fill >= (unsigned long int)delay1)
      break;

    if(!(capt->counter >= 1ul))
      break;

    err=snd_pcm_drop(capt->handle);
    if(!(err >= 0))
      return err;

    err=snd_pcm_prepare(capt->handle);
    if(!(err >= 0))
      return err;

    err=snd_pcm_start(capt->handle);
    if(!(err >= 0))
      return err;

    diff=remove_samples(loop, 1, (signed long int)((double)((unsigned long int)delay1 - fill) / capt->pitch));
    if(verbose >= 7)
      snd_output_printf(loop->output, "sync: capt stop removed %li samples\n", (signed long int)diff);

  }
  if(!(fill >= (unsigned long int)delay1))
  {
    diff = (signed long int)((double)((unsigned long int)delay1 - fill) / play->pitch);
    if(!(play->buf_count >= (unsigned long int)diff))
      diff = (signed long int)play->buf_count;

    if(verbose >= 7)
      snd_output_printf(loop->output, "sync: removing %li playback samples, delay1=%li\n", (signed long int)diff, (signed long int)delay1);

    diff=remove_samples(loop, 0, diff);
    pdelay = pdelay - diff;
    pdelay1 = (signed long int)((double)pdelay * play->pitch);
    delay1 = cdelay1 + pdelay1;
    if(verbose >= 7)
      snd_output_printf(loop->output, "sync: removed %li playback samples, delay1=%li\n", (signed long int)diff, (signed long int)delay1);

  }

  if(!(fill >= (unsigned long int)delay1))
  {
    diff = (signed long int)((double)((unsigned long int)delay1 - fill) / capt->pitch);
    if(!(capt->buf_count >= (unsigned long int)diff))
      diff = (signed long int)capt->buf_count;

    if(verbose >= 7)
      snd_output_printf(loop->output, "sync: removing %li captured samples, delay1=%li\n", (signed long int)diff, (signed long int)delay1);

    signed long int return_value_remove_samples$10;
    return_value_remove_samples$10=remove_samples(loop, 1, diff);
    diff = diff - return_value_remove_samples$10;
    cdelay = cdelay - diff;
    cdelay1 = (signed long int)((double)cdelay * capt->pitch);
    delay1 = cdelay1 + pdelay1;
    if(verbose >= 7)
      snd_output_printf(loop->output, "sync: removed %li captured samples, delay1=%li\n", (signed long int)diff, (signed long int)delay1);

  }

  const char *return_value_snd_strerror$11;
  const char *return_value_snd_strerror$12;
  const char *return_value_snd_strerror$14;
  const char *return_value_snd_strerror$15;
  if(!(play->xrun_pending == 0u))
  {
    play->xrun_pending = (unsigned int)0;
    diff = (signed long int)((double)(fill - (unsigned long int)delay1) / play->pitch);
    if(verbose >= 7)
      snd_output_printf(loop->output, "sync: xrun_pending, silence filling %li / buf_count=%li\n", (signed long int)diff, play->buf_count);

    if(!((unsigned long int)delay1 >= fill))
    {
      if(!(play->buf_count >= (unsigned long int)diff))
      {
        diff = (signed long int)((unsigned long int)diff - play->buf_count);
        if(verbose >= 7)
          snd_output_printf(loop->output, "sync: playback silence added %li samples\n", (signed long int)diff);

        play->buf_pos = play->buf_pos - (unsigned long int)diff;
        play->buf_pos = play->buf_pos % play->buf_size;
        err=snd_pcm_format_set_silence(play->format, (void *)(play->buf + (signed long int)(play->buf_pos * (unsigned long int)play->channels)), (unsigned int)diff);
        if(!(err >= 0))
          return err;

        play->buf_count = play->buf_count + (unsigned long int)diff;
      }

    }

    err=snd_pcm_prepare(play->handle);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$11=snd_strerror(err);
          syslog(2, "%s prepare failed: %s\n", play->id, return_value_snd_strerror$11);
        }

        else
        {
          return_value_snd_strerror$12=snd_strerror(err);
          fprintf(stderr, "%s prepare failed: %s\n", play->id, return_value_snd_strerror$12);
        }
      while((_Bool)0);
      return err;
    }

    signed int return_value_writeit$13;
    return_value_writeit$13=writeit(play);
    delay1 = (signed long int)return_value_writeit$13;
    if(verbose >= 7)
      snd_output_printf(loop->output, "sync: playback wrote %li samples\n", (signed long int)delay1);

    if(!(diff >= delay1))
    {
      buf_remove(loop, (unsigned long int)(delay1 - diff));
      if(verbose >= 7)
        snd_output_printf(loop->output, "sync: playback buf_remove %li samples\n", (signed long int)(delay1 - diff));

    }

    err=snd_pcm_start(play->handle);
    if(!(err >= 0))
    {
      do
        if(!(use_syslog == 0))
        {
          return_value_snd_strerror$14=snd_strerror(err);
          syslog(2, "%s start failed: %s\n", play->id, return_value_snd_strerror$14);
        }

        else
        {
          return_value_snd_strerror$15=snd_strerror(err);
          fprintf(stderr, "%s start failed: %s\n", play->id, return_value_snd_strerror$15);
        }
      while((_Bool)0);
      return err;
    }

  }

  else
    if(!((unsigned long int)delay1 >= fill))
    {
      diff = (signed long int)((double)(fill - (unsigned long int)delay1) / play->pitch);
      for( ; diff >= 1l; diff = diff - delay1)
      {
        delay1 = (signed long int)(play->buf_size - play->buf_pos);
        if(verbose >= 7)
          snd_output_printf(loop->output, "sync: playback short, silence filling %li / buf_count=%li\n", (signed long int)delay1, play->buf_count);

        if(!(diff >= delay1))
          delay1 = diff;

        err=snd_pcm_format_set_silence(play->format, (void *)(play->buf + (signed long int)(play->buf_pos * (unsigned long int)play->channels)), (unsigned int)delay1);
        if(!(err >= 0))
          return err;

        play->buf_pos = play->buf_pos + (unsigned long int)delay1;
        play->buf_pos = play->buf_pos % play->buf_size;
        play->buf_count = play->buf_count + (unsigned long int)delay1;
      }
      writeit(play);
    }

  if(verbose >= 6)
  {
    snd_output_printf(loop->output, "%s: xrun sync ok\n", loop->id);
    if(verbose >= 7)
    {
      signed int return_value_snd_pcm_delay$16;
      return_value_snd_pcm_delay$16=snd_pcm_delay(capt->handle, &cdelay);
      if(!(return_value_snd_pcm_delay$16 >= 0))
        cdelay = (signed long int)-1;

      signed int return_value_snd_pcm_delay$17;
      return_value_snd_pcm_delay$17=snd_pcm_delay(play->handle, &pdelay);
      if(!(return_value_snd_pcm_delay$17 >= 0))
        pdelay = (signed long int)-1;

      if(!(play->buf == capt->buf))
        cdelay = cdelay + (signed long int)capt->buf_count;

      pdelay = pdelay + (signed long int)play->buf_count;
      pdelay = pdelay + (signed long int)loop->src_out_frames;
      cdelay1 = (signed long int)((double)cdelay * capt->pitch);
      pdelay1 = (signed long int)((double)pdelay * play->pitch);
      delay1 = cdelay1 + pdelay1;
      snd_output_printf(loop->output, "%s: sync verify: %li\n", loop->id, delay1);
    }

  }

  loop->xrun_max_proctime = (signed long int)0;
  return 0;
}
