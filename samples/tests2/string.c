# 1 "string.h"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "string.h"
# 26 "string.h"
# 1 "/usr/include/features.h" 1 3 4
# 309 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 310 "/usr/include/features.h" 2 3 4
# 332 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 333 "/usr/include/features.h" 2 3 4
# 27 "string.h" 2






# 1 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 1 3 4
# 213 "/usr/lib/gcc-lib/i686-pc-linux-gnu/3.3.6/include/stddef.h" 3 4
typedef unsigned int size_t;
# 34 "string.h" 2




extern void *memcpy (void * __dest,
                     const void * __src, size_t __n)
     ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
     ;






extern void *memccpy (void * __dest, const void * __src,
                      int __c, size_t __n)
     ;





extern void *memset (void *__s, int __c, size_t __n) ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     ;


extern void *memchr (const void *__s, int __c, size_t __n)
      ;

# 82 "string.h"


extern char *strcpy (char * __dest, const char * __src)
     ;

extern char *strncpy (char * __dest,
                      const char * __src, size_t __n)
     ;


extern char *strcat (char * __dest, const char * __src)
     ;

extern char *strncat (char * __dest, const char * __src,
                      size_t __n) ;


extern int strcmp (const char *__s1, const char *__s2)
     ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     ;


extern int strcoll (const char *__s1, const char *__s2)
     ;

extern size_t strxfrm (char * __dest,
                       const char * __src, size_t __n)
     ;

# 130 "string.h"
extern char *strdup (const char *__s)
     ;
# 165 "string.h"


extern char *strchr (const char *__s, int __c)
     ;

extern char *strrchr (const char *__s, int __c)
     ;

# 181 "string.h"



extern size_t strcspn (const char *__s, const char *__reject)
     ;


extern size_t strspn (const char *__s, const char *__accept)
     ;

extern char *strpbrk (const char *__s, const char *__accept)
     ;

extern char *strstr (const char *__haystack, const char *__needle)
     ;



extern char *strtok (char * __s, const char * __delim)
     ;




extern char *__strtok_r (char * __s,
                         const char * __delim,
                         char ** __save_ptr)
     ;

extern char *strtok_r (char * __s, const char * __delim,
                       char ** __save_ptr)
     ;
# 240 "string.h"


extern size_t strlen (const char *__s)
     ;

# 254 "string.h"


extern char *strerror (int __errnum) ;

# 281 "string.h"
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     ;
# 294 "string.h"
extern void __bzero (void *__s, size_t __n) ;



extern void bcopy (const void *__src, void *__dest, size_t __n)
     ;


extern void bzero (void *__s, size_t __n) ;


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     ;


extern char *index (const char *__s, int __c)
     ;


extern char *rindex (const char *__s, int __c)
     ;



extern int ffs (int __i) ;
# 331 "string.h"
extern int strcasecmp (const char *__s1, const char *__s2)
     ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     ;
# 354 "string.h"
extern char *strsep (char ** __stringp,
                     const char * __delim)
     ;
# 432 "string.h"

