# 1 "/usr/include/stdlib.h"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/usr/include/stdlib.h"
# 25 "/usr/include/stdlib.h"
# 1 "/usr/include/features.h" 1 3 4
# 309 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 310 "/usr/include/features.h" 2 3 4
# 332 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 333 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/stdlib.h" 2







# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 213 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 3 4
typedef unsigned int size_t;
# 325 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 3 4
typedef long int wchar_t;
# 34 "/usr/include/stdlib.h" 2


# 96 "/usr/include/stdlib.h"


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;



# 140 "/usr/include/stdlib.h"
extern size_t __ctype_get_mb_cur_max (void) ;




extern double atof (const char *__nptr)
     ;

extern int atoi (const char *__nptr)
     ;

extern long int atol (const char *__nptr)
     ;

# 163 "/usr/include/stdlib.h"


extern double strtod (const char * __nptr,
                      char ** __endptr) ;

# 181 "/usr/include/stdlib.h"


extern long int strtol (const char * __nptr,
                        char ** __endptr, int __base)
     ;

extern unsigned long int strtoul (const char * __nptr,
                                  char ** __endptr, int __base)
     ;

# 277 "/usr/include/stdlib.h"
extern double __strtod_internal (const char * __nptr,
                                 char ** __endptr, int __group)
     ;
extern float __strtof_internal (const char * __nptr,
                                char ** __endptr, int __group)
     ;
extern long double __strtold_internal (const char * __nptr,
                                       char ** __endptr,
                                       int __group) ;

extern long int __strtol_internal (const char * __nptr,
                                   char ** __endptr,
                                   int __base, int __group)
     ;



extern unsigned long int __strtoul_internal (const char * __nptr,
                                             char ** __endptr,
                                             int __base, int __group)
     ;
# 424 "/usr/include/stdlib.h"
extern char *l64a (long int __n) ;


extern long int a64l (const char *__s)
     ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4


# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 32 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
# 62 "/usr/include/bits/types.h" 3 4
typedef struct
{
  long __val[2];
} __quad_t;
typedef struct
{
  __u_long __val[2];
} __u_quad_t;
# 129 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 130 "/usr/include/bits/types.h" 2 3 4






 typedef __u_quad_t __dev_t;
 typedef unsigned int __uid_t;
 typedef unsigned int __gid_t;
 typedef unsigned long int __ino_t;
 typedef __u_quad_t __ino64_t;
 typedef unsigned int __mode_t;
 typedef unsigned int __nlink_t;
 typedef long int __off_t;
 typedef __quad_t __off64_t;
 typedef int __pid_t;
 typedef struct { int __val[2]; } __fsid_t;
 typedef long int __clock_t;
 typedef unsigned long int __rlim_t;
 typedef __u_quad_t __rlim64_t;
 typedef unsigned int __id_t;
 typedef long int __time_t;
 typedef unsigned int __useconds_t;
 typedef long int __suseconds_t;

 typedef int __daddr_t;
 typedef long int __swblk_t;
 typedef int __key_t;


 typedef int __clockid_t;


 typedef int __timer_t;


 typedef long int __blksize_t;




 typedef long int __blkcnt_t;
 typedef __quad_t __blkcnt64_t;


 typedef unsigned long int __fsblkcnt_t;
 typedef __u_quad_t __fsblkcnt64_t;


 typedef unsigned long int __fsfilcnt_t;
 typedef __u_quad_t __fsfilcnt64_t;

 typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


 typedef int __intptr_t;


 typedef unsigned int __socklen_t;
# 32 "/usr/include/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 100 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 163 "/usr/include/sys/types.h" 3 4
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;






typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;




typedef int register_t;
# 213 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 214 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 118 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set * __readfds,
                   fd_set * __writefds,
                   fd_set * __exceptfds,
                   struct timeval * __timeout);
# 128 "/usr/include/sys/select.h" 3 4

# 217 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 220 "/usr/include/sys/types.h" 2 3 4
# 231 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 266 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/sched.h" 1 3 4
# 83 "/usr/include/bits/sched.h" 3 4
struct __sched_param
  {
    int __sched_priority;
  };
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4


struct _pthread_fastlock
{
  long int __status;
  int __spinlock;

};



typedef struct _pthread_descr_struct *_pthread_descr;





typedef struct __pthread_attr_s
{
  int __detachstate;
  int __schedpolicy;
  struct __sched_param __schedparam;
  int __inheritsched;
  int __scope;
  size_t __guardsize;
  int __stackaddr_set;
  void *__stackaddr;
  size_t __stacksize;
} pthread_attr_t;







typedef long __pthread_cond_align_t;


typedef struct
{
  struct _pthread_fastlock __c_lock;
  _pthread_descr __c_waiting;

  char __padding[48 - sizeof (struct _pthread_fastlock)
                 - sizeof (_pthread_descr) - sizeof (__pthread_cond_align_t)];
  __pthread_cond_align_t __align;

} pthread_cond_t;



typedef struct
{
  int __dummy;
} pthread_condattr_t;


typedef unsigned int pthread_key_t;





typedef struct
{
  int __m_reserved;
  int __m_count;
  _pthread_descr __m_owner;
  int __m_kind;
  struct _pthread_fastlock __m_lock;
} pthread_mutex_t;



typedef struct
{
  int __mutexkind;
} pthread_mutexattr_t;



typedef int pthread_once_t;
# 152 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;
# 267 "/usr/include/sys/types.h" 2 3 4



# 434 "/usr/include/stdlib.h" 2






extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
                        size_t __statelen) ;



extern char *setstate (char *__statebuf) ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data * __buf,
                     int32_t * __result) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     ;

extern int initstate_r (unsigned int __seed, char * __statebuf,
                        size_t __statelen,
                        struct random_data * __buf)
     ;

extern int setstate_r (char * __statebuf,
                       struct random_data * __buf)
     ;






extern int rand (void) ;

extern void srand (unsigned int __seed) ;




extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     ;
extern void lcong48 (unsigned short int __param[7]) ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data * __buffer,
                      double * __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
                      struct drand48_data * __buffer,
                      double * __result) ;


extern int lrand48_r (struct drand48_data * __buffer,
                      long int * __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
                      struct drand48_data * __buffer,
                      long int * __result)
     ;


extern int mrand48_r (struct drand48_data * __buffer,
                      long int * __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
                      struct drand48_data * __buffer,
                      long int * __result)
     ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;

extern int seed48_r (unsigned short int __seed16v[3],
                     struct drand48_data *__buffer) ;

extern int lcong48_r (unsigned short int __param[7],
                      struct drand48_data *__buffer)
     ;









extern void *malloc (size_t __size) ;

extern void *calloc (size_t __nmemb, size_t __size)
     ;







extern void *realloc (void *__ptr, size_t __size) ;

extern void free (void *__ptr) ;




extern void cfree (void *__ptr) ;



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) ;






# 607 "/usr/include/stdlib.h" 2




extern void *valloc (size_t __size) ;
# 620 "/usr/include/stdlib.h"


extern void abort (void) ;



extern int atexit (void (*__func) (void)) ;





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;






extern void exit (int __status) ;

# 652 "/usr/include/stdlib.h"


extern char *getenv (const char *__name) ;




extern char *__secure_getenv (const char *__name) ;





extern int putenv (char *__string) ;





extern int setenv (const char *__name, const char *__value, int __replace)
     ;


extern int unsetenv (const char *__name) ;






extern int clearenv (void) ;
# 691 "/usr/include/stdlib.h"
extern char *mktemp (char *__template) ;
# 702 "/usr/include/stdlib.h"
extern int mkstemp (char *__template) ;
# 721 "/usr/include/stdlib.h"
extern char *mkdtemp (char *__template) ;








extern int system (const char *__command);

# 749 "/usr/include/stdlib.h"
extern char *realpath (const char * __name,
                       char * __resolved) ;






typedef int (*__compar_fn_t) (const void *, const void *);









extern void *bsearch (const void *__key, const void *__base,
                      size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
                   __compar_fn_t __compar) ;



extern int abs (int __x) ;
extern long int labs (long int __x) ;












extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;

# 814 "/usr/include/stdlib.h"
extern char *ecvt (double __value, int __ndigit, int * __decpt,
                   int * __sign) ;




extern char *fcvt (double __value, int __ndigit, int * __decpt,
                   int * __sign) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     ;




extern char *qecvt (long double __value, int __ndigit,
                    int * __decpt, int * __sign)
     ;
extern char *qfcvt (long double __value, int __ndigit,
                    int * __decpt, int * __sign)
     ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     ;




extern int ecvt_r (double __value, int __ndigit, int * __decpt,
                   int * __sign, char * __buf,
                   size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int * __decpt,
                   int * __sign, char * __buf,
                   size_t __len) ;

extern int qecvt_r (long double __value, int __ndigit,
                    int * __decpt, int * __sign,
                    char * __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
                    int * __decpt, int * __sign,
                    char * __buf, size_t __len)
     ;







extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t * __pwc,
                   const char * __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t * __pwcs,
                        const char * __s, size_t __n) ;

extern size_t wcstombs (char * __s,
                        const wchar_t * __pwcs, size_t __n)
     ;








extern int rpmatch (const char *__response) ;
# 954 "/usr/include/stdlib.h"
extern int getloadavg (double __loadavg[], int __nelem)
     ;






