# 1 "test.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "test.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 309 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 310 "/usr/include/features.h" 2 3 4
# 332 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 333 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 213 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

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




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 129 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 130 "/usr/include/bits/types.h" 2 3 4






__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef int __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4









typedef struct _IO_FILE FILE;





# 62 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 72 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 14 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 325 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 3 4
typedef long int wchar_t;
# 354 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 15 "/usr/include/_G_config.h" 2 3 4
# 24 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 51 "/usr/include/wchar.h" 2 3 4
# 76 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 44 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/gconv.h" 1 3 4
# 28 "/usr/include/gconv.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 29 "/usr/include/gconv.h" 2 3 4


# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 32 "/usr/include/gconv.h" 2 3 4





enum
{
  __GCONV_OK = 0,
  __GCONV_NOCONV,
  __GCONV_NODB,
  __GCONV_NOMEM,

  __GCONV_EMPTY_INPUT,
  __GCONV_FULL_OUTPUT,
  __GCONV_ILLEGAL_INPUT,
  __GCONV_INCOMPLETE_INPUT,

  __GCONV_ILLEGAL_DESCRIPTOR,
  __GCONV_INTERNAL_ERROR
};



enum
{
  __GCONV_IS_LAST = 0x0001,
  __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
                            __const unsigned char **, __const unsigned char *,
                            unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
                                  struct __gconv_step_data *, void *,
                                  __const unsigned char *,
                                  __const unsigned char **,
                                  __const unsigned char *, unsigned char **,
                                  size_t *);


typedef int (*__gconv_trans_context_fct) (void *, __const unsigned char *,
                                          __const unsigned char *,
                                          unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (__const char *, __const char ***,
                                        size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

  __gconv_trans_fct __trans_fct;
  __gconv_trans_context_fct __trans_context_fct;
  __gconv_trans_end_fct __trans_end_fct;
  void *__data;
  struct __gconv_trans_data *__next;
};



struct __gconv_step
{
  struct __gconv_loaded_object *__shlib_handle;
  __const char *__modname;

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_btowc_fct __btowc_fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;



  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;


  int __stateful;

  void *__data;
};



struct __gconv_step_data
{
  unsigned char *__outbuf;
  unsigned char *__outbufend;



  int __flags;



  int __invocation_counter;



  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;



  struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
  size_t __nsteps;
  struct __gconv_step *__steps;
  __extension__ struct __gconv_step_data __data [];
} *__gconv_t;
# 45 "/usr/include/_G_config.h" 2 3 4
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 166 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 176 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 199 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 267 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 315 "/usr/include/libio.h" 3 4
  __off64_t _offset;





  void *__pad1;
  void *__pad2;

  int _mode;

  char _unused2[15 * sizeof (int) - 2 * sizeof (void *)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 354 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
                                 size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 406 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *) __attribute__ ((__nothrow__));
extern int __uflow (_IO_FILE *) __attribute__ ((__nothrow__));
extern int __overflow (_IO_FILE *, int) __attribute__ ((__nothrow__));
extern wint_t __wunderflow (_IO_FILE *) __attribute__ ((__nothrow__));
extern wint_t __wuflow (_IO_FILE *) __attribute__ ((__nothrow__));
extern wint_t __woverflow (_IO_FILE *, wint_t) __attribute__ ((__nothrow__));
# 444 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_putc (int __c, _IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp) __attribute__ ((__nothrow__));





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 474 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
                        __gnuc_va_list, int *__restrict) __attribute__ ((__nothrow__));
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
                         __gnuc_va_list) __attribute__ ((__nothrow__));
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t) __attribute__ ((__nothrow__));
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t) __attribute__ ((__nothrow__));

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int) __attribute__ ((__nothrow__));
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int) __attribute__ ((__nothrow__));

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 73 "/usr/include/stdio.h" 2 3 4
# 86 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 138 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 139 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));









extern FILE *tmpfile (void);
# 178 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__));





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__));
# 196 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 221 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 235 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
                    __const char *__restrict __modes);




extern FILE *freopen (__const char *__restrict __filename,
                      __const char *__restrict __modes,
                      FILE *__restrict __stream);
# 262 "/usr/include/stdio.h" 3 4

# 273 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__));
# 294 "/usr/include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
                    int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
                       size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
                    __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
                    __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
                     __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
                     __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
                     __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
                      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 388 "/usr/include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
                   __const char *__restrict __format, ...);




extern int scanf (__const char *__restrict __format, ...);

extern int sscanf (__const char *__restrict __s,
                   __const char *__restrict __format, ...) __attribute__ ((__nothrow__));

# 430 "/usr/include/stdio.h" 3 4





extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 454 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 465 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 498 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream);






extern char *gets (char *__s);

# 578 "/usr/include/stdio.h" 3 4





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
                     size_t __n, FILE *__restrict __stream);




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
                      size_t __n, FILE *__restrict __s);

# 631 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
                              size_t __n, FILE *__restrict __stream);
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
                               size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream);




extern void rewind (FILE *__stream);

# 686 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 709 "/usr/include/stdio.h" 3 4

# 718 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__));




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__));








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 748 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
# 767 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes);





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 807 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__));


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 834 "/usr/include/stdio.h" 3 4

# 2 "test.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4


# 96 "/usr/include/stdlib.h" 3 4


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



# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__));




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern double strtod (__const char *__restrict __nptr,
                      char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

# 181 "/usr/include/stdlib.h" 3 4


extern long int strtol (__const char *__restrict __nptr,
                        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (__const char *__restrict __nptr,
                                  char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
                             char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
                                       char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
                              char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
                                        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

# 277 "/usr/include/stdlib.h" 3 4
extern double __strtod_internal (__const char *__restrict __nptr,
                                 char **__restrict __endptr, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern float __strtof_internal (__const char *__restrict __nptr,
                                char **__restrict __endptr, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern long double __strtold_internal (__const char *__restrict __nptr,
                                       char **__restrict __endptr,
                                       int __group) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

extern long int __strtol_internal (__const char *__restrict __nptr,
                                   char **__restrict __endptr,
                                   int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern unsigned long int __strtoul_internal (__const char *__restrict __nptr,
                                             char **__restrict __endptr,
                                             int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
                                         char **__restrict __endptr,
                                         int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern unsigned long long int __strtoull_internal (__const char *
                                                   __restrict __nptr,
                                                   char **__restrict __endptr,
                                                   int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 424 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__));


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4






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
# 191 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
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
extern int select (int __nfds, fd_set *__restrict __readfds,
                   fd_set *__restrict __writefds,
                   fd_set *__restrict __exceptfds,
                   struct timeval *__restrict __timeout);
# 128 "/usr/include/sys/select.h" 3 4

# 217 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern __inline unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern __inline unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern __inline unsigned long long int gnu_dev_makedev (unsigned int __major,
                                                        unsigned int __minor)
     __attribute__ ((__nothrow__));


__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline unsigned long long int
__attribute__ ((__nothrow__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
          | (((unsigned long long int) (__minor & ~0xff)) << 12)
          | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
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





__extension__ typedef long long __pthread_cond_align_t;




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



# 434 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
                        size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







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

extern int random_r (struct random_data *__restrict __buf,
                     int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
                        size_t __statelen,
                        struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
                       struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
                      double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
                      long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
                      long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
                     struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
                      struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));







extern void *realloc (void *__ptr, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 607 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 620 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));

# 652 "/usr/include/stdlib.h" 3 4


extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern char *__secure_getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 691 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 702 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1)));
# 721 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));








extern int system (__const char *__command);

# 749 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
                       char *__restrict __resolved) __attribute__ ((__nothrow__));






typedef int (*__compar_fn_t) (__const void *, __const void *);









extern void *bsearch (__const void *__key, __const void *__base,
                      size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5)));



extern void qsort (void *__base, size_t __nmemb, size_t __size,
                   __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));



extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));












extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));

# 814 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));




extern char *qecvt (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));
extern char *qfcvt (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign, char *__restrict __buf,
                   size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign, char *__restrict __buf,
                   size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign,
                    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign,
                    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__));


extern int mbtowc (wchar_t *__restrict __pwc,
                   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
                        __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
                        __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 954 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






# 3 "test.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4

# 171 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 172 "/usr/include/unistd.h" 2 3 4
# 195 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 196 "/usr/include/unistd.h" 2 3 4
# 236 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 256 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 287 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
# 305 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes);





extern ssize_t write (int __fd, __const void *__buf, size_t __n);
# 369 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__));
# 378 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__));
# 390 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);






extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__));






extern int usleep (__useconds_t __useconds);
# 414 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__));




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int chdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int fchdir (int __fd) __attribute__ ((__nothrow__));
# 448 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__));
# 461 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int dup (int __fd) __attribute__ ((__nothrow__));


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));


extern char **__environ;







extern int execve (__const char *__path, char *__const __argv[],
                   char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 492 "/usr/include/unistd.h" 3 4
extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int nice (int __inc) __attribute__ ((__nothrow__));




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,


    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS

  };
# 531 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__));
# 567 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__));
# 576 "/usr/include/unistd.h" 3 4
extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
# 593 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__));
# 610 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__));







extern __uid_t getuid (void) __attribute__ ((__nothrow__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__));
# 643 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));
# 695 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));






extern __pid_t vfork (void) __attribute__ ((__nothrow__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern int isatty (int __fd) __attribute__ ((__nothrow__));





extern int ttyslot (void) __attribute__ ((__nothrow__));




extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int symlink (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int readlink (__const char *__restrict __path, char *__restrict __buf,
                     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int unlink (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int rmdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));






extern char *getlogin (void);
# 774 "/usr/include/unistd.h" 3 4
extern int setlogin (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 783 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__));
# 784 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int sethostid (long int __id) __attribute__ ((__nothrow__));





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int setdomainname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int vhangup (void) __attribute__ ((__nothrow__));


extern int revoke (__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int profil (unsigned short int *__sample_buffer, size_t __size,
                   size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern char *getusershell (void) __attribute__ ((__nothrow__));
extern void endusershell (void) __attribute__ ((__nothrow__));
extern void setusershell (void) __attribute__ ((__nothrow__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__));






extern int chroot (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 869 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__));




extern int getpagesize (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__));




extern int truncate (__const char *__file, __off_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 916 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__));
# 936 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__));





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
# 957 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
# 980 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len);
# 1011 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes) __attribute__ ((__nothrow__));
# 1043 "/usr/include/unistd.h" 3 4

# 4 "test.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 29 "/usr/include/fcntl.h" 3 4




# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 138 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 183 "/usr/include/bits/fcntl.h" 3 4



extern ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    __attribute__ ((__nothrow__));


# 34 "/usr/include/fcntl.h" 2 3 4
# 63 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 72 "/usr/include/fcntl.h" 3 4
extern int open (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 91 "/usr/include/fcntl.h" 3 4
extern int creat (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 174 "/usr/include/fcntl.h" 3 4

# 5 "test.c" 2
# 1 "/usr/include/sys/mman.h" 1 3 4
# 26 "/usr/include/sys/mman.h" 3 4
# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 27 "/usr/include/sys/mman.h" 2 3 4
# 42 "/usr/include/sys/mman.h" 3 4
# 1 "/usr/include/bits/mman.h" 1 3 4
# 43 "/usr/include/sys/mman.h" 2 3 4





# 58 "/usr/include/sys/mman.h" 3 4
extern void *mmap (void *__addr, size_t __len, int __prot,
                   int __flags, int __fd, __off_t __offset) __attribute__ ((__nothrow__));
# 77 "/usr/include/sys/mman.h" 3 4
extern int munmap (void *__addr, size_t __len) __attribute__ ((__nothrow__));




extern int mprotect (void *__addr, size_t __len, int __prot) __attribute__ ((__nothrow__));







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__));
# 104 "/usr/include/sys/mman.h" 3 4
extern int mlock (__const void *__addr, size_t __len) __attribute__ ((__nothrow__));


extern int munlock (__const void *__addr, size_t __len) __attribute__ ((__nothrow__));




extern int mlockall (int __flags) __attribute__ ((__nothrow__));



extern int munlockall (void) __attribute__ ((__nothrow__));





extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
                     int __may_move) __attribute__ ((__nothrow__));






extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     __attribute__ ((__nothrow__));



extern int remap_file_pages (void *__start, size_t __size, int __prot,
                             size_t __pgoff, int __flags) __attribute__ ((__nothrow__));




extern int shm_open (__const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (__const char *__name);


# 6 "test.c" 2
# 1 "/usr/include/esd.h" 1 3 4


# 1 "/usr/include/audiofile.h" 1 3 4
# 31 "/usr/include/audiofile.h" 3 4
# 1 "/usr/include/aupvlist.h" 1 3 4
# 36 "/usr/include/aupvlist.h" 3 4
enum
{
        AU_PVTYPE_LONG = 1,
        AU_PVTYPE_DOUBLE = 2,
        AU_PVTYPE_PTR = 3
};

typedef struct _AUpvlist *AUpvlist;



AUpvlist AUpvnew (int maxItems);
int AUpvgetmaxitems (AUpvlist);
int AUpvfree (AUpvlist);
int AUpvsetparam (AUpvlist, int item, int param);
int AUpvsetvaltype (AUpvlist, int item, int type);
int AUpvsetval (AUpvlist, int item, void *val);
int AUpvgetparam (AUpvlist, int item, int *param);
int AUpvgetvaltype (AUpvlist, int item, int *type);
int AUpvgetval (AUpvlist, int item, void *val);
# 32 "/usr/include/audiofile.h" 2 3 4
# 42 "/usr/include/audiofile.h" 3 4
typedef struct _AFvirtualfile AFvirtualfile;

typedef struct _AFfilesetup *AFfilesetup;
typedef struct _AFfilehandle *AFfilehandle;
typedef void (*AFerrfunc)(long, const char *);

typedef off_t AFframecount;
typedef off_t AFfileoffset;






enum
{
        AF_DEFAULT_TRACK = 1001
};

enum
{
        AF_DEFAULT_INST = 2001
};

enum
{
        AF_NUM_UNLIMITED = 99999
};

enum
{
        AF_BYTEORDER_BIGENDIAN = 501,
        AF_BYTEORDER_LITTLEENDIAN = 502
};

enum
{
        AF_FILE_UNKNOWN = -1,
        AF_FILE_RAWDATA = 0,
        AF_FILE_AIFFC = 1,
        AF_FILE_AIFF = 2,
        AF_FILE_NEXTSND = 3,
        AF_FILE_WAVE = 4,
        AF_FILE_BICSF = 5,
        AF_FILE_IRCAM = AF_FILE_BICSF,
        AF_FILE_MPEG1BITSTREAM = 6,
        AF_FILE_SOUNDDESIGNER1 = 7,
        AF_FILE_SOUNDDESIGNER2 = 8,
        AF_FILE_AVR = 9,
        AF_FILE_IFF_8SVX = 10,
        AF_FILE_SAMPLEVISION = 11,
        AF_FILE_VOC = 12,
        AF_FILE_NIST_SPHERE = 13,
        AF_FILE_SOUNDFONT2 = 14
};

enum
{
        AF_LOOP_MODE_NOLOOP = 0,
        AF_LOOP_MODE_FORW = 1,
        AF_LOOP_MODE_FORWBAKW = 2
};

enum
{
        AF_SAMPFMT_TWOSCOMP = 401,
        AF_SAMPFMT_UNSIGNED = 402,
        AF_SAMPFMT_FLOAT = 403,
        AF_SAMPFMT_DOUBLE = 404
};

enum
{
        AF_INST_LOOP_OFF = 0,
        AF_INST_LOOP_CONTINUOUS = 1,
        AF_INST_LOOP_SUSTAIN = 3
};

enum
{
        AF_INST_MIDI_BASENOTE = 301,
        AF_INST_NUMCENTS_DETUNE = 302,
        AF_INST_MIDI_LONOTE = 303,
        AF_INST_MIDI_HINOTE = 304,
        AF_INST_MIDI_LOVELOCITY = 305,
        AF_INST_MIDI_HIVELOCITY = 306,
        AF_INST_NUMDBS_GAIN = 307,
        AF_INST_SUSLOOPID = 308,
        AF_INST_RELLOOPID = 309,
        AF_INST_SAMP_STARTFRAME = 310,
        AF_INST_SAMP_ENDFRAME = 311,
        AF_INST_SAMP_MODE = 312,
        AF_INST_TRACKID = 313,
        AF_INST_NAME = 314,
        AF_INST_SAMP_RATE = 315,
        AF_INST_PRESETID = 316,
        AF_INST_PRESET_NAME = 317
};

enum
{
        AF_MISC_UNRECOGNIZED = 0,
        AF_MISC_COPY = 201,
        AF_MISC_AUTH = 202,
        AF_MISC_NAME = 203,
        AF_MISC_ANNO = 204,
        AF_MISC_APPL = 205,
        AF_MISC_MIDI = 206,
        AF_MISC_PCMMAP = 207,
        AF_MISC_NeXT = 208,
        AF_MISC_IRCAM_PEAKAMP = 209,
        AF_MISC_IRCAM_COMMENT = 210,
        AF_MISC_COMMENT = 210,

        AF_MISC_ICMT = AF_MISC_COMMENT,
        AF_MISC_ICRD = 211,
        AF_MISC_ISFT = 212
};

enum
{

        AF_COMPRESSION_UNKNOWN = -1,
        AF_COMPRESSION_NONE = 0,
        AF_COMPRESSION_G722 = 501,
        AF_COMPRESSION_G711_ULAW = 502,
        AF_COMPRESSION_G711_ALAW = 503,


        AF_COMPRESSION_APPLE_ACE2 = 504,
        AF_COMPRESSION_APPLE_ACE8 = 505,
        AF_COMPRESSION_APPLE_MAC3 = 506,
        AF_COMPRESSION_APPLE_MAC6 = 507,

        AF_COMPRESSION_G726 = 517,
        AF_COMPRESSION_G728 = 518,
        AF_COMPRESSION_DVI_AUDIO = 519,
        AF_COMPRESSION_IMA = AF_COMPRESSION_DVI_AUDIO,
        AF_COMPRESSION_GSM = 520,
        AF_COMPRESSION_FS1016 = 521,
        AF_COMPRESSION_DV = 522,
        AF_COMPRESSION_MS_ADPCM = 523
};



enum
{
        AF_QUERYTYPE_INSTPARAM = 500,
        AF_QUERYTYPE_FILEFMT = 501,
        AF_QUERYTYPE_COMPRESSION = 502,
        AF_QUERYTYPE_COMPRESSIONPARAM = 503,
        AF_QUERYTYPE_MISC = 504,
        AF_QUERYTYPE_INST = 505,
        AF_QUERYTYPE_MARK = 506,
        AF_QUERYTYPE_LOOP = 507
};


enum
{
        AF_QUERY_NAME = 600,
        AF_QUERY_DESC = 601,
        AF_QUERY_LABEL = 602,
        AF_QUERY_TYPE = 603,
        AF_QUERY_DEFAULT = 604,
        AF_QUERY_ID_COUNT = 605,
        AF_QUERY_IDS = 606,
        AF_QUERY_IMPLEMENTED = 613,
        AF_QUERY_TYPE_COUNT = 607,
        AF_QUERY_TYPES = 608,
        AF_QUERY_NATIVE_SAMPFMT = 609,
        AF_QUERY_NATIVE_SAMPWIDTH = 610,
        AF_QUERY_SQUISHFAC = 611,
        AF_QUERY_MAX_NUMBER = 612,
        AF_QUERY_SUPPORTED = 613
};


enum
{
        AF_QUERY_TRACKS = 620,
        AF_QUERY_CHANNELS = 621,
        AF_QUERY_SAMPLE_SIZES = 622,
        AF_QUERY_SAMPLE_FORMATS = 623,
        AF_QUERY_COMPRESSION_TYPES = 624
};


enum
{
        AF_QUERY_VALUE_COUNT = 650,
        AF_QUERY_VALUES = 651
};
# 245 "/usr/include/audiofile.h" 3 4
enum
{
        AF_BAD_NOT_IMPLEMENTED = 0,
        AF_BAD_FILEHANDLE = 1,
        AF_BAD_OPEN = 3,
        AF_BAD_CLOSE = 4,
        AF_BAD_READ = 5,
        AF_BAD_WRITE = 6,
        AF_BAD_LSEEK = 7,
        AF_BAD_NO_FILEHANDLE = 8,
        AF_BAD_ACCMODE = 10,
        AF_BAD_NOWRITEACC = 11,
        AF_BAD_NOREADACC = 12,
        AF_BAD_FILEFMT = 13,
        AF_BAD_RATE = 14,
        AF_BAD_CHANNELS = 15,
        AF_BAD_SAMPCNT = 16,
        AF_BAD_WIDTH = 17,
        AF_BAD_SEEKMODE = 18,
        AF_BAD_NO_LOOPDATA = 19,
        AF_BAD_MALLOC = 20,
        AF_BAD_LOOPID = 21,
        AF_BAD_SAMPFMT = 22,
        AF_BAD_FILESETUP = 23,
        AF_BAD_TRACKID = 24,
        AF_BAD_NUMTRACKS = 25,
        AF_BAD_NO_FILESETUP = 26,
        AF_BAD_LOOPMODE = 27,
        AF_BAD_INSTID = 28,
        AF_BAD_NUMLOOPS = 29,
        AF_BAD_NUMMARKS = 30,
        AF_BAD_MARKID = 31,
        AF_BAD_MARKPOS = 32,
        AF_BAD_NUMINSTS = 33,
        AF_BAD_NOAESDATA = 34,
        AF_BAD_MISCID = 35,
        AF_BAD_NUMMISC = 36,
        AF_BAD_MISCSIZE = 37,
        AF_BAD_MISCTYPE = 38,
        AF_BAD_MISCSEEK = 39,
        AF_BAD_STRLEN = 40,
        AF_BAD_RATECONV = 45,
        AF_BAD_SYNCFILE = 46,
        AF_BAD_CODEC_CONFIG = 47,
        AF_BAD_CODEC_STATE = 48,
        AF_BAD_CODEC_LICENSE = 49,
        AF_BAD_CODEC_TYPE = 50,
        AF_BAD_COMPRESSION = AF_BAD_CODEC_CONFIG,
        AF_BAD_COMPTYPE = AF_BAD_CODEC_TYPE,

        AF_BAD_INSTPTYPE = 51,
        AF_BAD_INSTPID = 52,
        AF_BAD_BYTEORDER = 53,
        AF_BAD_FILEFMT_PARAM = 54,
        AF_BAD_COMP_PARAM = 55,
        AF_BAD_DATAOFFSET = 56,
        AF_BAD_FRAMECNT = 57,
        AF_BAD_QUERYTYPE = 58,
        AF_BAD_QUERY = 59,
        AF_WARNING_CODEC_RATE = 60,
        AF_WARNING_RATECVT = 61,

        AF_BAD_HEADER = 62,
        AF_BAD_FRAME = 63,
        AF_BAD_LOOPCOUNT = 64,
        AF_BAD_DMEDIA_CALL = 65,


        AF_BAD_AIFF_HEADER = 108,
        AF_BAD_AIFF_FORM = 109,
        AF_BAD_AIFF_SSND = 110,
        AF_BAD_AIFF_CHUNKID = 111,
        AF_BAD_AIFF_COMM = 112,
        AF_BAD_AIFF_INST = 113,
        AF_BAD_AIFF_MARK = 114,
        AF_BAD_AIFF_SKIP = 115,
        AF_BAD_AIFF_LOOPMODE = 116
};





enum
{
        AF_ERR_NOT_IMPLEMENTED = 0+3000,
        AF_ERR_BAD_FILEHANDLE = 1+3000,
        AF_ERR_BAD_READ = 5+3000,
        AF_ERR_BAD_WRITE = 6+3000,
        AF_ERR_BAD_LSEEK = 7+3000,
        AF_ERR_BAD_ACCMODE = 10+3000,
        AF_ERR_NO_WRITEACC = 11+3000,
        AF_ERR_NO_READACC = 12+3000,
        AF_ERR_BAD_FILEFMT = 13+3000,
        AF_ERR_BAD_RATE = 14+3000,
        AF_ERR_BAD_CHANNELS = 15+3000,
        AF_ERR_BAD_SAMPCNT = 16+3000,
        AF_ERR_BAD_WIDTH = 17+3000,
        AF_ERR_BAD_SEEKMODE = 18+3000,
        AF_ERR_BAD_LOOPID = 21+3000,
        AF_ERR_BAD_SAMPFMT = 22+3000,
        AF_ERR_BAD_FILESETUP = 23+3000,
        AF_ERR_BAD_TRACKID = 24+3000,
        AF_ERR_BAD_NUMTRACKS = 25+3000,
        AF_ERR_BAD_LOOPMODE = 27+3000,
        AF_ERR_BAD_INSTID = 28+3000,
        AF_ERR_BAD_NUMLOOPS = 29+3000,
        AF_ERR_BAD_NUMMARKS = 30+3000,
        AF_ERR_BAD_MARKID = 31+3000,
        AF_ERR_BAD_MARKPOS = 32+3000,
        AF_ERR_BAD_NUMINSTS = 33+3000,
        AF_ERR_BAD_NOAESDATA = 34+3000,
        AF_ERR_BAD_MISCID = 35+3000,
        AF_ERR_BAD_NUMMISC = 36+3000,
        AF_ERR_BAD_MISCSIZE = 37+3000,
        AF_ERR_BAD_MISCTYPE = 38+3000,
        AF_ERR_BAD_MISCSEEK = 39+3000,
        AF_ERR_BAD_STRLEN = 40+3000,
        AF_ERR_BAD_RATECONV = 45+3000,
        AF_ERR_BAD_SYNCFILE = 46+3000,
        AF_ERR_BAD_CODEC_CONFIG = 47+3000,
        AF_ERR_BAD_CODEC_TYPE = 50+3000,
        AF_ERR_BAD_INSTPTYPE = 51+3000,
        AF_ERR_BAD_INSTPID = 52+3000,

        AF_ERR_BAD_BYTEORDER = 53+3000,
        AF_ERR_BAD_FILEFMT_PARAM = 54+3000,
        AF_ERR_BAD_COMP_PARAM = 55+3000,
        AF_ERR_BAD_DATAOFFSET = 56+3000,
        AF_ERR_BAD_FRAMECNT = 57+3000,

        AF_ERR_BAD_QUERYTYPE = 58+3000,
        AF_ERR_BAD_QUERY = 59+3000,
        AF_ERR_BAD_HEADER = 62+3000,
        AF_ERR_BAD_FRAME = 63+3000,
        AF_ERR_BAD_LOOPCOUNT = 64+3000,



        AF_ERR_BAD_AIFF_HEADER = 66+3000,
        AF_ERR_BAD_AIFF_FORM = 67+3000,
        AF_ERR_BAD_AIFF_SSND = 68+3000,
        AF_ERR_BAD_AIFF_CHUNKID = 69+3000,
        AF_ERR_BAD_AIFF_COMM = 70+3000,
        AF_ERR_BAD_AIFF_INST = 71+3000,
        AF_ERR_BAD_AIFF_MARK = 72+3000,
        AF_ERR_BAD_AIFF_SKIP = 73+3000,
        AF_ERR_BAD_AIFF_LOOPMODE = 74+3000
};



AFerrfunc afSetErrorHandler (AFerrfunc efunc);


AUpvlist afQuery (int querytype, int arg1, int arg2, int arg3, int arg4);
long afQueryLong (int querytype, int arg1, int arg2, int arg3, int arg4);
double afQueryDouble (int querytype, int arg1, int arg2, int arg3, int arg4);
void *afQueryPointer (int querytype, int arg1, int arg2, int arg3, int arg4);


AFfilesetup afNewFileSetup (void);
void afFreeFileSetup (AFfilesetup);
int afIdentifyFD (int);
int afIdentifyNamedFD (int, const char *filename, int *implemented);

AFfilehandle afOpenFile (const char *filename, const char *mode,
        AFfilesetup setup);
AFfilehandle afOpenVirtualFile (AFvirtualfile *vfile, const char *mode,
        AFfilesetup setup);
AFfilehandle afOpenFD (int fd, const char *mode, AFfilesetup setup);
AFfilehandle afOpenNamedFD (int fd, const char *mode, AFfilesetup setup,
        const char *filename);

void afSaveFilePosition (AFfilehandle file);
void afRestoreFilePosition (AFfilehandle file);
int afSyncFile (AFfilehandle file);
int afCloseFile (AFfilehandle file);

void afInitFileFormat (AFfilesetup, int format);
int afGetFileFormat (AFfilehandle, int *version);


void afInitTrackIDs (AFfilesetup, int *trackids, int trackCount);
int afGetTrackIDs (AFfilehandle, int *trackids);


int afReadFrames (AFfilehandle, int track, void *buffer, int frameCount);
int afWriteFrames (AFfilehandle, int track, const void *buffer, int frameCount);
AFframecount afSeekFrame (AFfilehandle, int track, AFframecount frameoffset);
AFframecount afTellFrame (AFfilehandle, int track);
AFfileoffset afGetTrackBytes (AFfilehandle, int track);
float afGetFrameSize (AFfilehandle, int track, int expand3to4);
float afGetVirtualFrameSize (AFfilehandle, int track, int expand3to4);



void afInitAESChannelData (AFfilesetup, int track);
void afInitAESChannelDataTo (AFfilesetup, int track, int willBeData);
int afGetAESChannelData (AFfilehandle, int track, unsigned char buf[24]);
void afSetAESChannelData (AFfilehandle, int track, unsigned char buf[24]);
# 463 "/usr/include/audiofile.h" 3 4
void afInitByteOrder (AFfilesetup, int track, int byteOrder);
int afGetByteOrder (AFfilehandle, int track);
int afSetVirtualByteOrder (AFfilehandle, int track, int byteOrder);
int afGetVirtualByteOrder (AFfilehandle, int track);


void afInitChannels (AFfilesetup, int track, int nchannels);
int afGetChannels (AFfilehandle, int track);
int afSetVirtualChannels (AFfilehandle, int track, int channelCount);
int afGetVirtualChannels (AFfilehandle, int track);
void afSetChannelMatrix (AFfilehandle, int track, double *matrix);


void afInitSampleFormat (AFfilesetup, int track, int sampleFormat,
        int sampleWidth);
void afGetSampleFormat (AFfilehandle file, int track, int *sampfmt,
        int *sampwidth);
void afGetVirtualSampleFormat (AFfilehandle file, int track, int *sampfmt,
        int *sampwidth);
int afSetVirtualSampleFormat (AFfilehandle, int track,
        int sampleFormat, int sampleWidth);
void afGetVirtualSampleFormat (AFfilehandle, int track,
        int *sampleFormat, int *sampleWidth);


void afInitRate (AFfilesetup, int track, double rate);
double afGetRate (AFfilehandle, int track);







void afInitCompression (AFfilesetup, int track, int compression);





int afGetCompression (AFfilehandle, int track);
# 518 "/usr/include/audiofile.h" 3 4
void afInitPCMMapping (AFfilesetup filesetup, int track,
        double slope, double intercept, double minClip, double maxClip);
void afGetPCMMapping (AFfilehandle file, int track,
        double *slope, double *intercept, double *minClip, double *maxClip);


int afSetTrackPCMMapping (AFfilehandle file, int track,
        double slope, double intercept, double minClip, double maxClip);


int afSetVirtualPCMMapping (AFfilehandle file, int track,
        double slope, double intercept, double minClip, double maxClip);
void afGetVirtualPCMMapping (AFfilehandle file, int track,
        double *slope, double *intercept, double *minClip, double *maxClip);



void afInitDataOffset(AFfilesetup, int track, AFfileoffset offset);
AFfileoffset afGetDataOffset (AFfilehandle, int track);


void afInitFrameCount (AFfilesetup, int track, AFframecount frameCount);
AFframecount afGetFrameCount (AFfilehandle file, int track);


void afInitLoopIDs (AFfilesetup, int instid, int ids[], int nids);
int afGetLoopIDs (AFfilehandle, int instid, int loopids[]);
void afSetLoopMode (AFfilehandle, int instid, int loop, int mode);
int afGetLoopMode (AFfilehandle, int instid, int loopid);
int afSetLoopCount (AFfilehandle, int instid, int loop, int count);
int afGetLoopCount (AFfilehandle, int instid, int loopid);
void afSetLoopStart (AFfilehandle, int instid, int loopid, int markerid);
int afGetLoopStart (AFfilehandle, int instid, int loopid);
void afSetLoopEnd (AFfilehandle, int instid, int loopid, int markerid);
int afGetLoopEnd (AFfilehandle, int instid, int loopid);

int afSetLoopStartFrame (AFfilehandle, int instid, int loop,
        AFframecount startFrame);
AFframecount afGetLoopStartFrame (AFfilehandle, int instid, int loop);
int afSetLoopEndFrame (AFfilehandle, int instid, int loop,
        AFframecount startFrame);
AFframecount afGetLoopEndFrame (AFfilehandle, int instid, int loop);

void afSetLoopTrack (AFfilehandle, int instid, int loopid, int trackid);
int afGetLoopTrack (AFfilehandle, int instid, int loopid);


void afInitMarkIDs (AFfilesetup, int trackid, int *ids, int nids);
int afGetMarkIDs (AFfilehandle file, int trackid, int markids[]);
void afSetMarkPosition (AFfilehandle file, int trackid, int markid,
        AFframecount markpos);
AFframecount afGetMarkPosition (AFfilehandle file, int trackid, int markid);
void afInitMarkName (AFfilesetup, int trackid, int marker, const char *name);
void afInitMarkComment (AFfilesetup, int trackid, int marker,
        const char *comment);
char *afGetMarkName (AFfilehandle file, int trackid, int markid);
char *afGetMarkComment (AFfilehandle file, int trackid, int markid);


void afInitInstIDs (AFfilesetup, int *ids, int nids);
int afGetInstIDs (AFfilehandle file, int *instids);
void afGetInstParams (AFfilehandle file, int instid, AUpvlist pvlist,
        int nparams);
void afSetInstParams (AFfilehandle file, int instid, AUpvlist pvlist,
        int nparams);
long afGetInstParamLong (AFfilehandle file, int instid, int param);
void afSetInstParamLong (AFfilehandle file, int instid, int param, long value);


void afInitMiscIDs (AFfilesetup, int *ids, int nids);
int afGetMiscIDs (AFfilehandle, int *ids);
void afInitMiscType (AFfilesetup, int miscellaneousid, int type);
int afGetMiscType (AFfilehandle, int miscellaneousid);
void afInitMiscSize (AFfilesetup, int miscellaneousid, int size);
int afGetMiscSize (AFfilehandle, int miscellaneousid);
int afWriteMisc (AFfilehandle, int miscellaneousid, void *buf, int bytes);
int afReadMisc (AFfilehandle, int miscellaneousid, void *buf, int bytes);
int afSeekMisc (AFfilehandle, int miscellaneousid, int offset);
# 4 "/usr/include/esd.h" 2 3 4
# 36 "/usr/include/esd.h" 3 4
enum esd_proto {
    ESD_PROTO_CONNECT,


    ESD_PROTO_LOCK,
    ESD_PROTO_UNLOCK,


    ESD_PROTO_STREAM_PLAY,
    ESD_PROTO_STREAM_REC,
    ESD_PROTO_STREAM_MON,


    ESD_PROTO_SAMPLE_CACHE,
    ESD_PROTO_SAMPLE_FREE,
    ESD_PROTO_SAMPLE_PLAY,
    ESD_PROTO_SAMPLE_LOOP,
    ESD_PROTO_SAMPLE_STOP,
    ESD_PROTO_SAMPLE_KILL,


    ESD_PROTO_STANDBY,
    ESD_PROTO_RESUME,


    ESD_PROTO_SAMPLE_GETID,
    ESD_PROTO_STREAM_FILT,


    ESD_PROTO_SERVER_INFO,
    ESD_PROTO_ALL_INFO,
    ESD_PROTO_SUBSCRIBE,
    ESD_PROTO_UNSUBSCRIBE,


    ESD_PROTO_STREAM_PAN,
    ESD_PROTO_SAMPLE_PAN,


    ESD_PROTO_STANDBY_MODE,


    ESD_PROTO_LATENCY,

    ESD_PROTO_MAX
};
# 115 "/usr/include/esd.h" 3 4
typedef int esd_format_t;
typedef int esd_proto_t;




typedef unsigned char octet;
# 130 "/usr/include/esd.h" 3 4
int esd_open_sound( const char *host );


int esd_send_auth( int sock );


int esd_lock( int esd );
int esd_unlock( int esd );


int esd_standby( int esd );
int esd_resume( int esd );



int esd_play_stream( esd_format_t format, int rate,
                     const char *host, const char *name );
int esd_play_stream_fallback( esd_format_t format, int rate,
                              const char *host, const char *name );
int esd_monitor_stream( esd_format_t format, int rate,
                        const char *host, const char *name );

int esd_record_stream( esd_format_t format, int rate,
                       const char *host, const char *name );
int esd_record_stream_fallback( esd_format_t format, int rate,
                                const char *host, const char *name );
int esd_filter_stream( esd_format_t format, int rate,
                       const char *host, const char *name );


int esd_sample_cache( int esd, esd_format_t format, const int rate,
                      const int length, const char *name );
int esd_confirm_sample_cache( int esd );


int esd_sample_getid( int esd, const char *name);


int esd_sample_free( int esd, int sample );


int esd_sample_play( int esd, int sample );

int esd_sample_loop( int esd, int sample );


int esd_sample_stop( int esd, int sample );

int esd_sample_kill( int esd, int sample );


int esd_close( int esd );
# 190 "/usr/include/esd.h" 3 4
int esd_get_latency(int esd);






typedef struct esd_server_info {

    int version;
    esd_format_t format;
    int rate;

} esd_server_info_t;

typedef struct esd_player_info {

    struct esd_player_info *next;
    esd_server_info_t *server;

    int source_id;
    char name[ (128) ];
    int rate;
    int left_vol_scale;
    int right_vol_scale;

    esd_format_t format;

} esd_player_info_t;

typedef struct esd_sample_info {

    struct esd_sample_info *next;
    esd_server_info_t *server;

    int sample_id;
    char name[ (128) ];
    int rate;
    int left_vol_scale;
    int right_vol_scale;

    esd_format_t format;
    int length;

} esd_sample_info_t;

typedef struct esd_info {

    esd_server_info_t *server;
    esd_player_info_t *player_list;
    esd_sample_info_t *sample_list;

} esd_info_t;

enum esd_standby_mode {
    ESM_ERROR, ESM_ON_STANDBY, ESM_ON_AUTOSTANDBY, ESM_RUNNING
};
typedef int esd_standby_mode_t;



typedef int esd_new_player_callback_t( esd_player_info_t * );

typedef int esd_old_player_callback_t( esd_player_info_t * );

typedef int esd_new_sample_callback_t( esd_sample_info_t * );

typedef int esd_old_sample_callback_t( esd_sample_info_t * );

typedef struct esd_update_info_callbacks {
    esd_new_player_callback_t *esd_new_player_callback;
    esd_old_player_callback_t *esd_old_player_callback;
    esd_new_sample_callback_t *esd_new_sample_callback;
    esd_old_sample_callback_t *esd_old_sample_callback;
} esd_update_info_callbacks_t;


void esd_print_server_info( esd_server_info_t *server_info );
void esd_print_player_info( esd_player_info_t *player_info );
void esd_print_sample_info( esd_sample_info_t *sample_info );

void esd_print_all_info( esd_info_t *all_info );


esd_server_info_t *esd_get_server_info( int esd );

void esd_free_server_info( esd_server_info_t *server_info );


esd_info_t *esd_get_all_info( int esd );


esd_info_t *esd_subscribe_all_info( int esd );


esd_info_t *esd_update_info( int esd, esd_info_t *info,
                             esd_update_info_callbacks_t *callbacks );
esd_info_t *esd_unsubscribe_info( int esd );


void esd_free_all_info( esd_info_t *info );



int esd_set_stream_pan( int esd, int stream_id,
                        int left_scale, int right_scale );


int esd_set_default_sample_pan( int esd, int sample_id,
                                int left_scale, int right_scale );


esd_standby_mode_t esd_get_standby_mode( int esd );





int esd_send_file( int esd, AFfilehandle au_file, int frame_length );
int esd_play_file( const char *name_prefix, const char *filename, int fallback );
int esd_file_cache( int esd, const char *name_prefix, const char *filename );




extern esd_format_t esd_audio_format;
extern int esd_audio_rate;
extern char *esd_audio_device;

const char *esd_audio_devices( void );
int esd_audio_open( void );
void esd_audio_close( void );
void esd_audio_pause( void );
int esd_audio_write( void *buffer, int buf_size );
int esd_audio_read( void *buffer, int buf_size );
void esd_audio_flush( void );




const char *esd_get_socket_dirname( void );
const char *esd_get_socket_name( void );

int have_ipv6( void );
# 7 "test.c" 2


int main(int ac, char *argv[ac])
{



    __label__ c;
  _Bool d;
  __complex e;
  _Complex f;

  typeof(f) g;
  __typeof(f) h;
  __typeof__(f) i;

  struct tutu
  {
    int a;
    int b;
    int c;
  } muf;

  int a;
  int b;

  a = 12 + 4 * 42 + (int)calc(123, 348);

  c:

  if (a && b)
    {
      printf("ok");
    }
  else
    {
      printf("ko");
    }
  return a;
}


long long int tutu;
long long toto;
unsigned long muf;
signed short grogro;

static int g1 = 0;
typedef long mylong;
static mylong z;

typedef int Length;
Length len, maxlen;
Length *lengths[1][12];

int signed long test;

typedef char *String;
String p, lineptr[100], alloc(int);
int StrCmp(String, String);

typedef struct tnode *Treeptr;

typedef struct tnode {
    char *word;
    int count;
    Treeptr left;
    Treeptr right;
} Treenode;

int
tester (int len; char data[len][len], int len)
{

}

Treeptr talloc(void) {
    return (Treeptr) malloc(sizeof(Treenode));
}

int fun(int a, mylong b) {
    mylong c;
    register int *foore asm ("eax");
    return a+b;
}


typedef struct foo {int a[4];} nianiania;

struct foo fr();

int bar (int index)
{
  for (;;)
    return fr().a[index];
}

int foobin (float f, float g)
{
  float beat_freqs[2] = { f-g, f+g };
  float result;
  float angle;
  float output;

  asm ("fsinx %[angle],%[output]"
          : [output] "=f" (result)
          : [angle] "f" (angle));
  
     struct foo nia;
     __builtin_offsetof(struct foo, nia.a);

}

extern func () asm ("FUNC");

void __f () { ; }
void f () __attribute__ ((weak, alias ("__f")));

int x __attribute__ ((aligned (16))) = 0;

struct S { short f[3]; } __attribute__ ((aligned (8)));
typedef int more_aligned_int __attribute__ ((aligned (8)));
