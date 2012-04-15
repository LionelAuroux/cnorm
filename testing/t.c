
typedef unsigned int size_t;
typedef long int wchar_t;
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
extern size_t __ctype_get_mb_cur_max(void );
extern double atof(const char * __nptr );
extern int atoi(const char * __nptr );
extern long int atol(const char * __nptr );
extern double strtod(const char * __nptr , char * * __endptr);
extern long int strtol(const char * __nptr , char * * __endptr, int __base);
extern unsigned long int strtoul(const char * __nptr , char * * __endptr, int __base);
extern double __strtod_internal(const char * __nptr , char * * __endptr, int __group);
extern float __strtof_internal(const char * __nptr , char * * __endptr, int __group);
extern long double __strtold_internal(const char * __nptr , char * * __endptr, int __group);
extern long int __strtol_internal(const char * __nptr , char * * __endptr, int __base, int __group);
extern unsigned long int __strtoul_internal(const char * __nptr , char * * __endptr, int __base, int __group);
extern char * l64a(__n long int );
extern long int a64l(const char * __s );
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef struct  
{
	long  __val[2];
} __quad_t;
typedef struct  
{
	__u_long __val[2];
} __u_quad_t;
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
typedef struct  
{
	int __val[2];
} __fsid_t;
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
typedef __quad_t * __qaddr_t;
typedef char * __caddr_t;
typedef int __intptr_t;
typedef unsigned int __socklen_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef int register_t;
typedef int __sig_atomic_t;
typedef struct  
{
	unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timespec 
{
	__time_t tv_sec;
	long int tv_nsec;
} ;
struct timeval 
{
	__time_t tv_sec;
	__suseconds_t tv_usec;
} ;
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct  
{
	__fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask ))];
} fd_set;
typedef __fd_mask fd_mask;
extern int select(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, struct timeval * __timeout);
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
struct __sched_param 
{
	int __sched_priority;
} ;
struct _pthread_fastlock 
{
	long int __status;
	int __spinlock;
} ;
typedef struct _pthread_descr_struct * _pthread_descr;
typedef struct __pthread_attr_s 
{
	int __detachstate;
	int __schedpolicy;
	struct __sched_param __schedparam;
	int __inheritsched;
	int __scope;
	size_t __guardsize;
	int __stackaddr_set;
	void * __stackaddr;
	size_t __stacksize;
} pthread_attr_t;
typedef long  __pthread_cond_align_t;
typedef struct  
{
	struct _pthread_fastlock __c_lock;
	_pthread_descr __c_waiting;
	char __padding[48 - sizeof (struct _pthread_fastlock ) - sizeof (_pthread_descr ) - sizeof (__pthread_cond_align_t )];
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
typedef unsigned long int pthread_t;
extern long int random(void );
extern void srandom(__seed unsigned int );
extern char * initstate(__seed unsigned int , char * __statebuf, size_t __statelen);
extern char * setstate(char * __statebuf );
struct random_data 
{
	int32_t * fptr;
	int32_t * rptr;
	int32_t * state;
	int rand_type;
	int rand_deg;
	int rand_sep;
	int32_t * end_ptr;
} ;
extern int random_r(struct random_data * __buf, int32_t * __result);
extern int srandom_r(__seed unsigned int , struct random_data * __buf);
extern int initstate_r(__seed unsigned int , char * __statebuf, size_t __statelen, struct random_data * __buf);
extern int setstate_r(char * __statebuf , struct random_data * __buf);
extern int rand(void );
extern void srand(__seed unsigned int );
extern int rand_r(unsigned int * __seed );
extern double drand48(void );
extern double erand48(__xsubi unsigned short int [3]);
extern long int lrand48(void );
extern long int nrand48(__xsubi unsigned short int [3]);
extern long int mrand48(void );
extern long int jrand48(__xsubi unsigned short int [3]);
extern void srand48(__seedval long int );
extern unsigned short int * seed48(__seed16v unsigned short int [3]);
extern void lcong48(__param unsigned short int [7]);
struct drand48_data 
{
	unsigned short int __x[3];
	unsigned short int __old_x[3];
	unsigned short int __c;
	unsigned short int __init;
	unsigned long long int __a;
} ;
extern int drand48_r(struct drand48_data * __buffer , double * __result);
extern int erand48_r(__xsubi unsigned short int [3], struct drand48_data * __buffer, double * __result);
extern int lrand48_r(struct drand48_data * __buffer , long int * __result);
extern int nrand48_r(__xsubi unsigned short int [3], struct drand48_data * __buffer, long int * __result);
extern int mrand48_r(struct drand48_data * __buffer , long int * __result);
extern int jrand48_r(__xsubi unsigned short int [3], struct drand48_data * __buffer, long int * __result);
extern int srand48_r(__seedval long int , struct drand48_data * __buffer);
extern int seed48_r(__seed16v unsigned short int [3], struct drand48_data * __buffer);
extern int lcong48_r(__param unsigned short int [7], struct drand48_data * __buffer);
extern void * malloc(__size size_t );
extern void * calloc(size_t int __nmemb, size_t __size);
extern void * realloc(void * __ptr, size_t __size);
extern void free(void * __ptr );
extern void cfree(void * __ptr );
extern void * alloca(__size size_t );
extern void * valloc(__size size_t );
extern void abort(void );
extern int atexit(void ( * __func)(void ));
extern int on_exit(void ( * __func)(__status int , void * __arg), void * __arg );
extern void exit(__status int );
extern char * getenv(const char * __name );
extern char * __secure_getenv(const char * __name );
extern int putenv(char * __string );
extern int setenv(const char * __name , const char * __value, int __replace);
extern int unsetenv(const char * __name );
extern int clearenv(void );
extern char * mktemp(char * __template );
extern int mkstemp(char * __template );
extern char * mkdtemp(char * __template );
extern int system(const char * __command );
extern char * realpath(const char * __name , char * __resolved);
typedef int ( * __compar_fn_t)(const void * , const void * );
extern void * bsearch(const void * __key , const void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar);
extern void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar);
extern int abs(__x int );
extern long int labs(__x long int );
extern div_t div(__numer int , int __denom);
extern ldiv_t ldiv(__numer long int , long int __denom);
extern char * ecvt(__value double , int __ndigit, int * __decpt, int * __sign);
extern char * fcvt(__value double , int __ndigit, int * __decpt, int * __sign);
extern char * gcvt(__value double , int __ndigit, char * __buf);
extern char * qecvt(__value long double , int __ndigit, int * __decpt, int * __sign);
extern char * qfcvt(__value long double , int __ndigit, int * __decpt, int * __sign);
extern char * qgcvt(__value long double , int __ndigit, char * __buf);
extern int ecvt_r(__value double , int __ndigit, int * __decpt, int * __sign, char * __buf, size_t __len);
extern int fcvt_r(__value double , int __ndigit, int * __decpt, int * __sign, char * __buf, size_t __len);
extern int qecvt_r(__value long double , int __ndigit, int * __decpt, int * __sign, char * __buf, size_t __len);
extern int qfcvt_r(__value long double , int __ndigit, int * __decpt, int * __sign, char * __buf, size_t __len);
extern int mblen(const char * __s, size_t __n);
extern int mbtowc(wchar_t * __pwc , const char * __s, size_t __n);
extern int wctomb(char * __s, wchar_t __wchar);
extern size_t mbstowcs(wchar_t * __pwcs , const char * __s, size_t __n);
extern size_t wcstombs(char * __s , const wchar_t * __pwcs, size_t __n);
extern int rpmatch(const char * __response );
//extern int getloadavg(__loadavg double [], int __nelem);
