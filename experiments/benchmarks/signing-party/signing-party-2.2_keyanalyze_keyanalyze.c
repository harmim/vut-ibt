// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$0;

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

// tag-keydata
// file keyanalyze.c line 43
struct keydata;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sig
// file keyanalyze.c line 32
struct sig;

// tag-threadparam
// file keyanalyze.c line 38
struct threadparam;

#ifndef NULL
#define NULL ((void*)0)
#endif

// AddKey
// file keyanalyze.c line 75
void AddKey(unsigned char *newid);
// AddKeyToList
// file keyanalyze.c line 83
void AddKeyToList(struct sig **pptr, signed int id);
// AddSig
// file keyanalyze.c line 92
void AddSig(signed int src, signed int dst);
// CloseFiles
// file keyanalyze.c line 103
void CloseFiles();
// ConvertFromHex
// file keyanalyze.c line 119
unsigned int ConvertFromHex(const unsigned char *c);
// CountSigs
// file keyanalyze.c line 108
signed int CountSigs(struct sig *current);
// DFSMarkConnected
// file keyanalyze.c line 144
signed int DFSMarkConnected(signed int *markset, signed int id);
// DFSVisit
// file keyanalyze.c line 394
void DFSVisit(signed int id);
// DeleteKeyList
// file keyanalyze.c line 132
void DeleteKeyList(struct sig **pptr);
// GetKeyById
// file keyanalyze.c line 158
signed int GetKeyById(const unsigned char *searchid);
// IndivReport
// file keyanalyze.c line 454
void IndivReport(struct _IO_FILE *fp, signed int key);
// MeanCrawler
// file keyanalyze.c line 175
void MeanCrawler(signed int *distset, signed int id, signed int len);
// MeanDistance
// file keyanalyze.c line 200
float MeanDistance(signed int id, signed int *hops, signed int *hophigh, struct sig **farthest);
// OpenFileById
// file keyanalyze.c line 230
struct _IO_FILE * OpenFileById(unsigned int id);
// OpenFiles
// file keyanalyze.c line 251
signed int OpenFiles();
// ParseArgs
// file keyanalyze.c line 291
void ParseArgs(signed int argc, char **argv);
// PrintKeyList
// file keyanalyze.c line 329
signed int PrintKeyList(struct _IO_FILE *f, struct sig *s);
// ReadInput
// file keyanalyze.c line 341
void ReadInput();
// SaveState
// file keyanalyze.c line 382
void SaveState();
// TestConnectivity
// file keyanalyze.c line 438
void TestConnectivity();
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$0 *, const union anonymous *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$0 *);
// rewind
// file /usr/include/stdio.h line 759
extern void rewind(struct _IO_FILE *);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncat
// file /usr/include/string.h line 140
extern char * strncat(char *, const char *, unsigned long int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// thread_slave
// file keyanalyze.c line 478
void * thread_slave(void *arg);

union anonymous
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

struct keydata
{
  // id1
  unsigned int id1;
  // id2
  unsigned int id2;
  // to
  struct sig *to;
  // from
  struct sig *from;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct sig
{
  // id
  signed int id;
  // next
  struct sig *next;
};

struct threadparam
{
  // threadnum
  signed int threadnum;
};


// component
// file keyanalyze.c line 54
signed int component[160000l];
// dfsnum
// file keyanalyze.c line 387
signed int dfsnum[160000l];
// fpin
// file keyanalyze.c line 51
struct _IO_FILE *fpin;
// fpmsd
// file keyanalyze.c line 51
struct _IO_FILE *fpmsd;
// fpout
// file keyanalyze.c line 51
struct _IO_FILE *fpout;
// fpsets
// file keyanalyze.c line 51
struct _IO_FILE *fpsets;
// fpstat
// file keyanalyze.c line 51
struct _IO_FILE *fpstat;
// infile
// file keyanalyze.c line 14
static char *infile = "preprocess.keys";
// keys
// file keyanalyze.c line 50
struct keydata keys[160000l];
// lastdfsnum
// file keyanalyze.c line 392
signed int lastdfsnum;
// lownum
// file keyanalyze.c line 388
signed int lownum[160000l];
// max_component
// file keyanalyze.c line 55
signed int max_component;
// max_size
// file keyanalyze.c line 56
signed int max_size;
// mean_l
// file keyanalyze.c line 60
union anonymous$0 mean_l;
// meantotal
// file keyanalyze.c line 59
float meantotal;
// num_reachable
// file keyanalyze.c line 58
signed int num_reachable;
// numkeys
// file keyanalyze.c line 52
signed int numkeys = 0;
// numsigs
// file keyanalyze.c line 53
signed int numsigs = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// outdir
// file keyanalyze.c line 15
static char *outdir = "output/";
// outsubdirs
// file keyanalyze.c line 16
static signed int outsubdirs = 1;
// reachable
// file keyanalyze.c line 57
signed int reachable[160000l];
// removed
// file keyanalyze.c line 389
signed int removed[160000l];
// stack
// file keyanalyze.c line 390
signed int stack[160000l];
// stackindex
// file keyanalyze.c line 391
signed int stackindex;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;

// AddKey
// file keyanalyze.c line 75
void AddKey(unsigned char *newid)
{
  struct keydata *key;
  signed int tmp_post$1 = numkeys;
  numkeys = numkeys + 1;
  key = &keys[(signed long int)tmp_post$1];
  key->id1=ConvertFromHex(newid);
  key->id2=ConvertFromHex(newid + (signed long int)8);
}

// AddKeyToList
// file keyanalyze.c line 83
void AddKeyToList(struct sig **pptr, signed int id)
{
  for( ; !(*pptr == ((struct sig *)NULL)); pptr = &(*pptr)->next)
    ;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct sig) /*16ul*/ );
  *pptr = (struct sig *)return_value_calloc$1;
  (*pptr)->id = id;
}

// AddSig
// file keyanalyze.c line 92
void AddSig(signed int src, signed int dst)
{
  if(!(dst == -1) && !(src == -1))
  {
    AddKeyToList(&keys[(signed long int)dst].to, src);
    AddKeyToList(&keys[(signed long int)src].from, dst);
    numsigs = numsigs + 1;
  }

}

// CloseFiles
// file keyanalyze.c line 103
void CloseFiles()
{
  fclose(fpin);
  fclose(fpout);
}

// ConvertFromHex
// file keyanalyze.c line 119
unsigned int ConvertFromHex(const unsigned char *c)
{
  unsigned char buf1[5l];
  unsigned char buf2[5l];
  unsigned int ret;
  buf1[(signed long int)4] = (unsigned char)0;
  buf2[(signed long int)4] = (unsigned char)0;
  memcpy((void *)buf1, (const void *)c, (unsigned long int)4);
  memcpy((void *)buf2, (const void *)(c + (signed long int)4), (unsigned long int)4);
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol((const char *)buf1, (char ** restrict )(void *)0, 16);
  signed long int return_value_strtol$2;
  return_value_strtol$2=strtol((const char *)buf2, (char ** restrict )(void *)0, 16);
  ret = (unsigned int)(return_value_strtol$1 * (signed long int)65536 + return_value_strtol$2);
  return ret;
}

// CountSigs
// file keyanalyze.c line 108
signed int CountSigs(struct sig *current)
{
  signed int ret = 0;
  for( ; !(current->next == ((struct sig *)NULL)); ret = ret + 1)
    current = current->next;
  return ret;
}

// DFSMarkConnected
// file keyanalyze.c line 144
signed int DFSMarkConnected(signed int *markset, signed int id)
{
  struct sig *psig;
  signed int num = 1;
  markset[(signed long int)id] = 1;
  psig = keys[(signed long int)id].from;
  signed int return_value_DFSMarkConnected$1;
  for( ; !(psig == ((struct sig *)NULL)); psig = psig->next)
    if(markset[(signed long int)psig->id] == 0)
    {
      return_value_DFSMarkConnected$1=DFSMarkConnected(markset, psig->id);
      num = num + return_value_DFSMarkConnected$1;
    }

  return num;
}

// DFSVisit
// file keyanalyze.c line 394
void DFSVisit(signed int id)
{
  struct sig *psig;
  lastdfsnum = lastdfsnum + 1;
  lownum[(signed long int)id] = lastdfsnum;
  dfsnum[(signed long int)id] = lownum[(signed long int)id];
  signed int tmp_post$1 = stackindex;
  stackindex = stackindex + 1;
  stack[(signed long int)tmp_post$1] = id;
  psig = keys[(signed long int)id].to;
  for( ; !(psig == ((struct sig *)NULL)); psig = psig->next)
  {
    signed int neighbor = psig->id;
    if(removed[(signed long int)neighbor] == 0)
    {
      if(dfsnum[(signed long int)neighbor] == 0)
      {
        DFSVisit(neighbor);
        if(!(lownum[(signed long int)neighbor] >= lownum[(signed long int)id]))
          lownum[(signed long int)id] = lownum[(signed long int)neighbor];

      }

      else
        if(!(dfsnum[(signed long int)neighbor] >= lownum[(signed long int)id]))
          lownum[(signed long int)id] = dfsnum[(signed long int)neighbor];

    }

  }
  if(lownum[(signed long int)id] == dfsnum[(signed long int)id])
  {
    signed int i;
    signed int size = 0;
    do
    {
      struct keydata *key;
      stackindex = stackindex - 1;
      i = stack[(signed long int)stackindex];
      key = &keys[(signed long int)i];
      component[(signed long int)i] = id;
      removed[(signed long int)i] = 1;
      size = size + 1;
      fprintf(fpsets, "%08X %08X\n", key->id1, key->id2);
    }
    while(!(i == id));
    fprintf(fpsets, "*** %d keys in this strongly connected set\n\n", size);
    if(!(max_size >= size))
    {
      max_size = size;
      max_component = id;
    }

  }

}

// DeleteKeyList
// file keyanalyze.c line 132
void DeleteKeyList(struct sig **pptr)
{
  struct sig *current = *pptr;
  for( ; !(*pptr == ((struct sig *)NULL)); *pptr = current)
  {
    current = (*pptr)->next;
    free((void *)*pptr);
  }
}

// GetKeyById
// file keyanalyze.c line 158
signed int GetKeyById(const unsigned char *searchid)
{
  signed int i;
  unsigned int s1;
  unsigned int s2;
  s1=ConvertFromHex(searchid);
  s2=ConvertFromHex(searchid + (signed long int)8);
  i = 0;
  for( ; !(i >= numkeys); i = i + 1)
  {
    struct keydata *key = &keys[(signed long int)i];
    if(s1 == key->id1)
    {
      if(s2 == key->id2)
        return i;

    }

  }
  return -1;
}

// IndivReport
// file keyanalyze.c line 454
void IndivReport(struct _IO_FILE *fp, signed int key)
{
  signed int totalsigsto;
  signed int totalsigsfrom;
  fprintf(fp, "KeyID %08X %08X\n\n", keys[(signed long int)key].id1, keys[(signed long int)key].id2);
  fprintf(fp, "This individual key report was generated as part of the monthly keyanalyze\n");
  fprintf(fp, "report at http://dtype.org/keyanalyze/.\n\n");
  fprintf(fp, "Note: Key signature counts and lists are from a pruned list that only\n");
  fprintf(fp, "includes keys with signatures other than their own.\n\n");
  fprintf(fp, "Signatures to this key:\n");
  totalsigsto=PrintKeyList(fp, keys[(signed long int)key].to);
  fprintf(fp, "Total: %d signatures to this id from this set\n\n", totalsigsto);
  fprintf(fp, "Signatures from this key:\n");
  totalsigsfrom=PrintKeyList(fp, keys[(signed long int)key].from);
  fprintf(fp, "Total: %d signatures from this id to this set\n\n", totalsigsfrom);
}

// MeanCrawler
// file keyanalyze.c line 175
void MeanCrawler(signed int *distset, signed int id, signed int len)
{
  struct sig *psig;
  signed int queue[160000l];
  signed int qhead;
  signed int qtail;
  memset((void *)queue, 0, sizeof(signed int) /*4ul*/  * (unsigned long int)160000);
  queue[(signed long int)0] = id;
  distset[(signed long int)id] = 0;
  qhead = 0;
  qtail = 1;
  signed int tmp_post$1;
  signed int tmp_post$2;
  while(!(qhead >= qtail))
  {
    tmp_post$1 = qhead;
    qhead = qhead + 1;
    id = queue[(signed long int)tmp_post$1];
    len = distset[(signed long int)id];
    psig = keys[(signed long int)id].to;
    for( ; !(psig == ((struct sig *)NULL)); psig = psig->next)
      if(!(1 + len >= distset[(signed long int)psig->id]))
      {
        distset[(signed long int)psig->id] = len + 1;
        tmp_post$2 = qtail;
        qtail = qtail + 1;
        queue[(signed long int)tmp_post$2] = psig->id;
      }

  }
}

// MeanDistance
// file keyanalyze.c line 200
float MeanDistance(signed int id, signed int *hops, signed int *hophigh, struct sig **farthest)
{
  signed int dist[160000l];
  signed int i;
  signed int totaldist = 0;
  memset((void *)dist, 100, sizeof(signed int) /*4ul*/  * (unsigned long int)160000);
  MeanCrawler(dist, id, 0);
  i = 0;
  for( ; !(i >= numkeys); i = i + 1)
    if(component[(signed long int)i] == max_component)
    {
      totaldist = totaldist + dist[(signed long int)i];
      if(!(dist[(signed long int)i] >= 30))
        hops[(signed long int)dist[(signed long int)i]] = hops[(signed long int)dist[(signed long int)i]] + 1;

      if(!(*hophigh >= dist[(signed long int)i]))
      {
        *hophigh = dist[(signed long int)i];
        DeleteKeyList(farthest);
      }

      if(dist[(signed long int)i] == *hophigh)
        AddKeyToList(farthest, i);

    }

  if(*hophigh >= 31)
    *hophigh = 30;

  return (float)totaldist / (float)max_size;
}

// OpenFileById
// file keyanalyze.c line 230
struct _IO_FILE * OpenFileById(unsigned int id)
{
  char buf[255l];
  char idchr[9l];
  sprintf(idchr, "%08X", id);
  buf[(signed long int)0] = (char)0;
  strcat(buf, outdir);
  if(!(outsubdirs == 0))
  {
    strncat(buf, idchr, (unsigned long int)2);
    mkdir(buf, (unsigned int)493);
    strcat(buf, "/");
  }

  strcat(buf, idchr);
  struct _IO_FILE *return_value_fopen$1;
  return_value_fopen$1=fopen(buf, "w");
  return return_value_fopen$1;
}

// OpenFiles
// file keyanalyze.c line 251
signed int OpenFiles()
{
  char buf[255l];
  fpin=fopen(infile, "r");
  if(fpin == ((struct _IO_FILE *)NULL))
    return 1;

  else
  {
    mkdir(outdir, (unsigned int)493);
    buf[(signed long int)0] = (char)0;
    strcat(buf, outdir);
    strcat(buf, "status.txt");
    fpstat=fopen(buf, "w");
    if(fpstat == ((struct _IO_FILE *)NULL))
      return 1;

    else
    {
      buf[(signed long int)0] = (char)0;
      strcat(buf, outdir);
      strcat(buf, "msd.txt");
      fpmsd=fopen(buf, "w");
      if(fpmsd == ((struct _IO_FILE *)NULL))
        return 1;

      else
      {
        buf[(signed long int)0] = (char)0;
        strcat(buf, outdir);
        strcat(buf, "othersets.txt");
        fpsets=fopen(buf, "w");
        if(fpsets == ((struct _IO_FILE *)NULL))
          return 1;

        else
        {
          buf[(signed long int)0] = (char)0;
          strcat(buf, outdir);
          strcat(buf, "other.txt");
          fpout=fopen(buf, "w");
          if(fpout == ((struct _IO_FILE *)NULL))
            return 1;

          else
            return 0;
        }
      }
    }
  }
}

// ParseArgs
// file keyanalyze.c line 291
void ParseArgs(signed int argc, char **argv)
{
  signed int outdirlen;
  unsigned long int return_value_strlen$1;
  while((_Bool)1)
  {
    signed int option;
    option=getopt(argc, argv, "hi:o:1");
    if(option == -1)
      break;

    switch(option)
    {
      case 104:
      {
        printf("Usage: %s [-h1] [-i infile] [-o outdir]\n", argv[(signed long int)0]);
        exit(0);
        break;
      }
      case 105:
      {
        infile = optarg;
        break;
      }
      case 111:
      {
        outdir = optarg;
        return_value_strlen$1=strlen(outdir);
        outdirlen = (signed int)return_value_strlen$1;
        if(!((signed int)outdir[(signed long int)(outdirlen + -1)] == 47))
        {
          void *return_value_malloc$2;
          return_value_malloc$2=malloc((unsigned long int)(outdirlen + 2));
          outdir = (char *)return_value_malloc$2;
          memcpy((void *)outdir, (const void *)optarg, (unsigned long int)outdirlen);
          outdir[(signed long int)outdirlen] = (char)47;
          outdir[(signed long int)(outdirlen + 1)] = (char)0;
        }

        break;
      }
      case 49:
        outsubdirs = 0;
    }
  }
  if(!(optind >= argc))
    infile = argv[(signed long int)optind];

}

// PrintKeyList
// file keyanalyze.c line 329
signed int PrintKeyList(struct _IO_FILE *f, struct sig *s)
{
  signed int i = 0;
  while(!(s == ((struct sig *)NULL)))
  {
    struct keydata *key = &keys[(signed long int)s->id];
    fprintf(f, "  %08X %08X\n", key->id1, key->id2);
    s = s->next;
    i = i + 1;
  }
  return i;
}

// ReadInput
// file keyanalyze.c line 341
void ReadInput()
{
  unsigned char buf[20l];
  signed int currentkey = -1;
  fprintf(fpstat, "Importing pass 1 (keys)...\n");
  unsigned long int return_value_fread$1;
  do
  {
    return_value_fread$1=fread((void *)buf, (unsigned long int)1, (unsigned long int)18, fpin);
    if(!(return_value_fread$1 == 18ul))
      break;

    if((signed int)buf[17l] == 10)
    {
      if((signed int)buf[0l] == 112)
        AddKey(buf + (signed long int)1);

    }

  }
  while((_Bool)1);
  fprintf(fpstat, "done.\n");
  fprintf(fpstat, "%d keys imported\n", numkeys);
  rewind(fpin);
  fprintf(fpstat, "Importing pass 2 (sigs)...\n");
  unsigned long int return_value_fread$2;
  do
  {
    return_value_fread$2=fread((void *)buf, (unsigned long int)1, (unsigned long int)18, fpin);
    if(!(return_value_fread$2 == 18ul))
      break;

    if((signed int)buf[17l] == 10)
    {
      if((signed int)buf[0l] == 112)
      {
        currentkey=GetKeyById(buf + (signed long int)1);
        if(currentkey == -1)
        {
          fprintf(fpstat, "Error finding key in pass 2.\n");
          exit(1);
        }

      }

      if((signed int)buf[0l] == 115)
      {
        signed int return_value_GetKeyById$3;
        return_value_GetKeyById$3=GetKeyById(buf + (signed long int)1);
        AddSig(return_value_GetKeyById$3, currentkey);
        if(numsigs % 1000 == 0)
        {
          fprintf(fpstat, "%d sigs imported...\n", numsigs);
          fflush(fpstat);
        }

      }

    }

  }
  while((_Bool)1);
  fprintf(fpstat, "done.\n");
  fprintf(fpstat, "%d sigs imported\n", numsigs);
}

// SaveState
// file keyanalyze.c line 382
void SaveState()
{
  ;
}

// TestConnectivity
// file keyanalyze.c line 438
void TestConnectivity()
{
  signed int i = 0;
  for( ; !(i >= numkeys); i = i + 1)
    if(dfsnum[(signed long int)i] == 0)
      DFSVisit(i);

  num_reachable=DFSMarkConnected(reachable, max_component);
  fprintf(fpstat, "reachable set is size %d\n", num_reachable);
  fprintf(fpstat, "strongly connected set is size %d\n", max_size);
}

// main
// file keyanalyze.c line 530
signed int main(signed int argc, char **argv)
{
  unsigned long int *slave0;
  unsigned long int *slave1;
  struct threadparam arg0;
  struct threadparam arg1;
  void *retval;
  ParseArgs(argc, argv);
  signed int return_value_OpenFiles$1;
  return_value_OpenFiles$1=OpenFiles();
  if(!(return_value_OpenFiles$1 == 0))
  {
    fprintf(stderr, "Error opening files.\n");
    exit(1);
  }

  ReadInput();
  TestConnectivity();
  pthread_mutex_init(&mean_l, (const union anonymous *)(void *)0);
  void *return_value_calloc$2;
  return_value_calloc$2=calloc((unsigned long int)1, sizeof(unsigned long int) /*8ul*/ );
  slave0 = (unsigned long int *)return_value_calloc$2;
  void *return_value_calloc$3;
  return_value_calloc$3=calloc((unsigned long int)1, sizeof(unsigned long int) /*8ul*/ );
  slave1 = (unsigned long int *)return_value_calloc$3;
  arg0.threadnum = 0;
  arg1.threadnum = 1;
  signed int return_value_pthread_create$4;
  return_value_pthread_create$4=pthread_create(slave0, (const union pthread_attr_t *)(void *)0, thread_slave, (void *)&arg0);
  if(!(return_value_pthread_create$4 == 0))
    fprintf(stderr, "Cannot create thread 0.");

  signed int return_value_pthread_create$5;
  return_value_pthread_create$5=pthread_create(slave1, (const union pthread_attr_t *)(void *)0, thread_slave, (void *)&arg1);
  if(!(return_value_pthread_create$5 == 0))
    fprintf(stderr, "Cannot create thread 1.");

  pthread_join(*slave0, &retval);
  pthread_join(*slave1, &retval);
  fprintf(fpout, "Average mean is %9.4f\n", meantotal / (float)num_reachable);
  CloseFiles();
  return 0;
}

// thread_slave
// file keyanalyze.c line 478
void * thread_slave(void *arg)
{
  signed int i;
  signed int j;
  float threadmean;
  struct sig *distant_sigs = (struct sig *)(void *)0;
  struct _IO_FILE *fpindiv;
  signed int hops[30l];
  signed int hophigh;
  struct threadparam data = *((struct threadparam *)arg);
  i = 0;
  for( ; !(i >= numkeys); i = i + 1)
  {
    struct keydata *key = &keys[(signed long int)i];
    if(!(reachable[(signed long int)i] == 0))
    {
      if(i % 2 == data.threadnum)
      {
        memset((void *)hops, 0, sizeof(signed int) /*4ul*/  * (unsigned long int)30);
        hophigh = 0;
        threadmean=MeanDistance(i, hops, &hophigh, &distant_sigs);
        pthread_mutex_lock(&mean_l);
        meantotal = meantotal + threadmean;
        fprintf(fpmsd, "%08X %08X %8.4f\n", key->id1, key->id2, threadmean);
        fflush(fpmsd);
        pthread_mutex_unlock(&mean_l);
        fpindiv=OpenFileById(key->id2);
        IndivReport(fpindiv, i);
        fprintf(fpindiv, "This key is %sin the strong set.\n", component[(signed long int)i] == max_component ? "" : "not ");
        fprintf(fpindiv, "Mean distance to this key from strong set: %8.4f\n\n", threadmean);
        fprintf(fpindiv, "Breakout by hop count (only from strong set):\n");
        j = 0;
        for( ; hophigh >= j; j = j + 1)
          fprintf(fpindiv, "%2d hops: %5d\n", j, hops[(signed long int)j]);
        if(!(distant_sigs == ((struct sig *)NULL)))
        {
          fprintf(fpindiv, "\nFarthest keys (%d hops):\n", j - 1);
          PrintKeyList(fpindiv, distant_sigs);
          DeleteKeyList(&distant_sigs);
        }

        fclose(fpindiv);
      }

    }

  }
  return (void *)0;
}
