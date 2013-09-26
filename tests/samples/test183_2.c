#pragma warning(push)
#pragma warning(disable:4115)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#pragma warning(push)
#pragma warning(disable:4115)
#pragma warning(disable:4201)
#pragma warning(disable:4214)







       
       
       
       
typedef char* ValidCompNameA;
typedef unsigned short* ValidCompNameW;
typedef const unsigned short* ConstValidCompNameW;
typedef char* SAL_ValidCompNameT;
typedef const char* SAL_ConstValidCompNameT;
       
#pragma pack(push,8)
typedef __w64 unsigned int size_t;
typedef __w64 int intptr_t;
typedef __w64 unsigned int uintptr_t;
typedef __w64 int ptrdiff_t;
typedef size_t rsize_t;
typedef unsigned short wchar_t;
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
typedef char * va_list;
typedef int errcode;
typedef int errno_t;
typedef __w64 long __time32_t;
typedef __int64 __time64_t;
typedef __time32_t time_t;
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct * pthreadlocinfo;
typedef struct threadmbcinfostruct * pthreadmbcinfo;
struct __lc_time_data;
typedef struct localeinfo_struct
{
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;
typedef struct tagLC_ID {
        unsigned short wLanguage;
        unsigned short wCountry;
        unsigned short wCodePage;
} LC_ID, *LPLC_ID;
typedef struct threadlocaleinfostruct {
        int refcount;
        unsigned int lc_codepage;
        unsigned int lc_collate_cp;
        unsigned long lc_handle[6];
        LC_ID lc_id[6];
        struct {
            char *locale;
            wchar_t *wlocale;
            int *refcount;
            int *wrefcount;
        } lc_category[6];
        int lc_clike;
        int mb_cur_max;
        int * lconv_intl_refcount;
        int * lconv_num_refcount;
        int * lconv_mon_refcount;
        struct lconv * lconv;
        int * ctype1_refcount;
        unsigned short * ctype1;
        const unsigned short * pctype;
        const unsigned char * pclmap;
        const unsigned char * pcumap;
        struct __lc_time_data * lc_time_curr;
} threadlocinfo;
#pragma pack(pop)
#pragma pack(push,8)
typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution,
    ExceptionContinueSearch,
    ExceptionNestedException,
    ExceptionCollidedUnwind
} EXCEPTION_DISPOSITION;
struct _EXCEPTION_RECORD;
struct _CONTEXT;
EXCEPTION_DISPOSITION __cdecl _except_handler (
     struct _EXCEPTION_RECORD *_ExceptionRecord,
     void * _EstablisherFrame,
     struct _CONTEXT *_ContextRecord,
     void * _DispatcherContext
    );
unsigned long __cdecl _exception_code(void);
void * __cdecl _exception_info(void);
int __cdecl _abnormal_termination(void);
#pragma pack(pop)
       
       
__declspec(dllimport) int __cdecl _isctype( int _C, int _Type);
__declspec(dllimport) int __cdecl _isctype_l( int _C, int _Type, _locale_t _Locale);
 __declspec(dllimport) int __cdecl isalpha( int _C);
__declspec(dllimport) int __cdecl _isalpha_l( int _C, _locale_t _Locale);
 __declspec(dllimport) int __cdecl isupper( int _C);
__declspec(dllimport) int __cdecl _isupper_l( int _C, _locale_t _Locale);
 __declspec(dllimport) int __cdecl islower( int _C);
__declspec(dllimport) int __cdecl _islower_l( int _C, _locale_t _Locale);
 __declspec(dllimport) int __cdecl isdigit( int _C);
__declspec(dllimport) int __cdecl _isdigit_l( int _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl isxdigit( int _C);
__declspec(dllimport) int __cdecl _isxdigit_l( int _C, _locale_t _Locale);
 __declspec(dllimport) int __cdecl isspace( int _C);
__declspec(dllimport) int __cdecl _isspace_l( int _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl ispunct( int _C);
__declspec(dllimport) int __cdecl _ispunct_l( int _C, _locale_t _Locale);
 __declspec(dllimport) int __cdecl isalnum( int _C);
__declspec(dllimport) int __cdecl _isalnum_l( int _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl isprint( int _C);
__declspec(dllimport) int __cdecl _isprint_l( int _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl isgraph( int _C);
__declspec(dllimport) int __cdecl _isgraph_l( int _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iscntrl( int _C);
__declspec(dllimport) int __cdecl _iscntrl_l( int _C, _locale_t _Locale);
 __declspec(dllimport) int __cdecl toupper( int _C);
 __declspec(dllimport) int __cdecl tolower( int _C);
 __declspec(dllimport) int __cdecl _tolower( int _C);
__declspec(dllimport) int __cdecl _tolower_l( int _C, _locale_t _Locale);
 __declspec(dllimport) int __cdecl _toupper( int _C);
__declspec(dllimport) int __cdecl _toupper_l( int _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl __isascii( int _C);
__declspec(dllimport) int __cdecl __toascii( int _C);
__declspec(dllimport) int __cdecl __iscsymf( int _C);
__declspec(dllimport) int __cdecl __iscsym( int _C);
__declspec(dllimport) int __cdecl iswalpha( wint_t _C);
__declspec(dllimport) int __cdecl _iswalpha_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswupper( wint_t _C);
__declspec(dllimport) int __cdecl _iswupper_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswlower( wint_t _C);
__declspec(dllimport) int __cdecl _iswlower_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswdigit( wint_t _C);
__declspec(dllimport) int __cdecl _iswdigit_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswxdigit( wint_t _C);
__declspec(dllimport) int __cdecl _iswxdigit_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswspace( wint_t _C);
__declspec(dllimport) int __cdecl _iswspace_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswpunct( wint_t _C);
__declspec(dllimport) int __cdecl _iswpunct_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswalnum( wint_t _C);
__declspec(dllimport) int __cdecl _iswalnum_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswprint( wint_t _C);
__declspec(dllimport) int __cdecl _iswprint_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswgraph( wint_t _C);
__declspec(dllimport) int __cdecl _iswgraph_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswcntrl( wint_t _C);
__declspec(dllimport) int __cdecl _iswcntrl_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswascii( wint_t _C);
__declspec(dllimport) int __cdecl isleadbyte( int _C);
__declspec(dllimport) int __cdecl _isleadbyte_l( int _C, _locale_t _Locale);
__declspec(dllimport) wint_t __cdecl towupper( wint_t _C);
__declspec(dllimport) wint_t __cdecl _towupper_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) wint_t __cdecl towlower( wint_t _C);
__declspec(dllimport) wint_t __cdecl _towlower_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl iswctype( wint_t _C, wctype_t _Type);
__declspec(dllimport) int __cdecl _iswctype_l( wint_t _C, wctype_t _Type, _locale_t _Locale);
__declspec(dllimport) int __cdecl __iswcsymf( wint_t _C);
__declspec(dllimport) int __cdecl _iswcsymf_l( wint_t _C, _locale_t _Locale);
__declspec(dllimport) int __cdecl __iswcsym( wint_t _C);
__declspec(dllimport) int __cdecl _iswcsym_l( wint_t _C, _locale_t _Locale);

__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using" "iswctype" "instead. See online help for details.")) __declspec(dllimport) int __cdecl is_wctype( wint_t _C, wctype_t _Type);
  typedef unsigned long POINTER_64_INT;
       
typedef signed char INT8, *PINT8;
typedef signed short INT16, *PINT16;
typedef signed int INT32, *PINT32;
typedef signed __int64 INT64, *PINT64;
typedef unsigned char UINT8, *PUINT8;
typedef unsigned short UINT16, *PUINT16;
typedef unsigned int UINT32, *PUINT32;
typedef unsigned __int64 UINT64, *PUINT64;
typedef signed int LONG32, *PLONG32;
typedef unsigned int ULONG32, *PULONG32;
typedef unsigned int DWORD32, *PDWORD32;
    typedef __w64 int INT_PTR, *PINT_PTR;
    typedef __w64 unsigned int UINT_PTR, *PUINT_PTR;
    typedef __w64 long LONG_PTR, *PLONG_PTR;
    typedef __w64 unsigned long ULONG_PTR, *PULONG_PTR;
typedef unsigned short UHALF_PTR, *PUHALF_PTR;
typedef short HALF_PTR, *PHALF_PTR;
typedef __w64 long SHANDLE_PTR;
typedef __w64 unsigned long HANDLE_PTR;
__inline
void * __ptr64
PtrToPtr64(
    const void *p
    )
{
    return((void * __ptr64) (unsigned __int64) (ULONG_PTR)p );
}
__inline
void *
Ptr64ToPtr(
    const void * __ptr64 p
    )
{
    return((void *) (ULONG_PTR) (unsigned __int64) p);
}
__inline
void * __ptr64
HandleToHandle64(
    const void *h
    )
{
    return((void * __ptr64)(__int64)(LONG_PTR)h );
}
__inline
void *
Handle64ToHandle(
    const void * __ptr64 h
    )
{
    return((void *) (ULONG_PTR) (unsigned __int64) h );
}
typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;
typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;
typedef __int64 LONG64, *PLONG64;
typedef unsigned __int64 ULONG64, *PULONG64;
typedef unsigned __int64 DWORD64, *PDWORD64;
typedef ULONG_PTR KAFFINITY;
typedef KAFFINITY *PKAFFINITY;
typedef void *PVOID;
typedef void * __ptr64 PVOID64;
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef int INT;
typedef wchar_t WCHAR;
typedef WCHAR *PWCHAR, *LPWCH, *PWCH;
typedef const WCHAR *LPCWCH, *PCWCH;
typedef WCHAR *NWPSTR, *LPWSTR, *PWSTR;
typedef PWSTR *PZPWSTR;
typedef const PWSTR *PCZPWSTR;
typedef WCHAR *LPUWSTR, *PUWSTR;
typedef const WCHAR *LPCWSTR, *PCWSTR;
typedef PCWSTR *PZPCWSTR;
typedef const WCHAR *LPCUWSTR, *PCUWSTR;
typedef CHAR *PCHAR, *LPCH, *PCH;
typedef const CHAR *LPCCH, *PCCH;
typedef CHAR *NPSTR, *LPSTR, *PSTR;
typedef PSTR *PZPSTR;
typedef const PSTR *PCZPSTR;
typedef const CHAR *LPCSTR, *PCSTR;
typedef PCSTR *PZPCSTR;
typedef char TCHAR, *PTCHAR;
typedef unsigned char TUCHAR, *PTUCHAR;
typedef LPCH LPTCH, PTCH;
typedef LPSTR PTSTR, LPTSTR, PUTSTR, LPUTSTR;
typedef LPCSTR PCTSTR, LPCTSTR, PCUTSTR, LPCUTSTR;
typedef double DOUBLE;
typedef struct _QUAD {
    union {
        __int64 UseThisFieldToCopy;
        double DoNotUseThisField;
    } ;
} QUAD;
typedef SHORT *PSHORT;
typedef LONG *PLONG;
typedef QUAD *PQUAD;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
typedef QUAD UQUAD;
typedef UCHAR *PUCHAR;
typedef USHORT *PUSHORT;
typedef ULONG *PULONG;
typedef UQUAD *PUQUAD;
typedef signed char SCHAR;
typedef SCHAR *PSCHAR;
typedef void *HANDLE;
typedef HANDLE *PHANDLE;
typedef UCHAR FCHAR;
typedef USHORT FSHORT;
typedef ULONG FLONG;
typedef long HRESULT;
typedef char CCHAR;
typedef short CSHORT;
typedef ULONG CLONG;
typedef CCHAR *PCCHAR;
typedef CSHORT *PCSHORT;
typedef CLONG *PCLONG;
typedef ULONG LCID;
typedef PULONG PLCID;
typedef USHORT LANGID;
typedef enum {
    UNSPECIFIED_COMPARTMENT_ID = 0,
    DEFAULT_COMPARTMENT_ID
} COMPARTMENT_ID, *PCOMPARTMENT_ID;
typedef ULONG LOGICAL;
typedef ULONG *PLOGICAL;
typedef LONG NTSTATUS;
typedef NTSTATUS *PNTSTATUS;
typedef long SECURITY_STATUS;
typedef struct _FLOAT128 {
    __int64 LowPart;
    __int64 HighPart;
} FLOAT128;
typedef FLOAT128 *PFLOAT128;
typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;
typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;
typedef LONGLONG USN;
typedef union _LARGE_INTEGER {
    struct {
        ULONG LowPart;
        LONG HighPart;
    } ;
    struct {
        ULONG LowPart;
        LONG HighPart;
    } u;
    LONGLONG QuadPart;
} LARGE_INTEGER;
typedef LARGE_INTEGER *PLARGE_INTEGER;
typedef union _ULARGE_INTEGER {
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } ;
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } u;
    ULONGLONG QuadPart;
} ULARGE_INTEGER;
typedef ULARGE_INTEGER *PULARGE_INTEGER;
typedef struct _LUID {
    ULONG LowPart;
    LONG HighPart;
} LUID, *PLUID;
typedef ULONGLONG DWORDLONG;
typedef DWORDLONG *PDWORDLONG;
typedef LARGE_INTEGER PHYSICAL_ADDRESS, *PPHYSICAL_ADDRESS;
ULONGLONG
__stdcall
Int64ShllMod32 (
    ULONGLONG Value,
    ULONG ShiftCount
    );
LONGLONG
__stdcall
Int64ShraMod32 (
    LONGLONG Value,
    ULONG ShiftCount
    );
ULONGLONG
__stdcall
Int64ShrlMod32 (
    ULONGLONG Value,
    ULONG ShiftCount
    );
#pragma warning(push)
#pragma warning(disable:4035 4793)
__inline ULONGLONG
__stdcall
Int64ShllMod32 (
    ULONGLONG Value,
    ULONG ShiftCount
    )
{
    __asm {
        mov ecx, ShiftCount
        mov eax, dword ptr [Value]
        mov edx, dword ptr [Value+4]
        shld edx, eax, cl
        shl eax, cl
    }
}
__inline LONGLONG
__stdcall
Int64ShraMod32 (
    LONGLONG Value,
    ULONG ShiftCount
    )
{
    __asm {
        mov ecx, ShiftCount
        mov eax, dword ptr [Value]
        mov edx, dword ptr [Value+4]
        shrd eax, edx, cl
        sar edx, cl
    }
}
__inline ULONGLONG
__stdcall
Int64ShrlMod32 (
    ULONGLONG Value,
    ULONG ShiftCount
    )
{
    __asm {
        mov ecx, ShiftCount
        mov eax, dword ptr [Value]
        mov edx, dword ptr [Value+4]
        shrd eax, edx, cl
        shr edx, cl
    }
}
#pragma warning(pop)
unsigned int
__cdecl
_rotl (
     unsigned int Value,
     int Shift
    );
unsigned __int64
__cdecl
_rotl64 (
     unsigned __int64 Value,
     int Shift
    );
unsigned int
__cdecl
_rotr (
     unsigned int Value,
     int Shift
    );
unsigned __int64
__cdecl
_rotr64 (
     unsigned __int64 Value,
     int Shift
    );
#pragma intrinsic(_rotl)
#pragma intrinsic(_rotl64)
#pragma intrinsic(_rotr)
#pragma intrinsic(_rotr64)
typedef enum _EVENT_TYPE {
    NotificationEvent,
    SynchronizationEvent
    } EVENT_TYPE;
typedef enum _TIMER_TYPE {
    NotificationTimer,
    SynchronizationTimer
    } TIMER_TYPE;
typedef enum _WAIT_TYPE {
    WaitAll,
    WaitAny
    } WAIT_TYPE;
typedef CHAR *PSZ;
typedef const char *PCSZ;
typedef USHORT RTL_STRING_LENGTH_TYPE;
typedef struct _STRING {
     USHORT Length;
     USHORT MaximumLength;
     PCHAR Buffer;
} STRING;
typedef STRING *PSTRING;
typedef STRING ANSI_STRING;
typedef PSTRING PANSI_STRING;
typedef STRING OEM_STRING;
typedef PSTRING POEM_STRING;
typedef const STRING* PCOEM_STRING;
typedef struct _CSTRING {
    USHORT Length;
    USHORT MaximumLength;
    const char *Buffer;
} CSTRING;
typedef CSTRING *PCSTRING;
typedef STRING CANSI_STRING;
typedef PSTRING PCANSI_STRING;
typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
     PWCH Buffer;
} UNICODE_STRING;
typedef UNICODE_STRING *PUNICODE_STRING;
typedef const UNICODE_STRING *PCUNICODE_STRING;
typedef UCHAR BOOLEAN;
typedef BOOLEAN *PBOOLEAN;
typedef struct _LIST_ENTRY {
   struct _LIST_ENTRY *Flink;
   struct _LIST_ENTRY *Blink;
} LIST_ENTRY, *PLIST_ENTRY, * PRLIST_ENTRY;
typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY;
typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
} LIST_ENTRY32;
typedef LIST_ENTRY32 *PLIST_ENTRY32;
typedef struct LIST_ENTRY64 {
    ULONGLONG Flink;
    ULONGLONG Blink;
} LIST_ENTRY64;
typedef LIST_ENTRY64 *PLIST_ENTRY64;
__inline
void
ListEntry32To64(
     PLIST_ENTRY32 l32,
     PLIST_ENTRY64 l64
    )
{
    l64->Flink = (ULONGLONG)(ULONG)l32->Flink;
    l64->Blink = (ULONGLONG)(ULONG)l32->Blink;
}
__inline
void
ListEntry64To32(
     PLIST_ENTRY64 l64,
     PLIST_ENTRY32 l32
    )
{
    l32->Flink = (ULONG)l64->Flink;
    l32->Blink = (ULONG)l64->Blink;
}
typedef struct _STRING32 {
    USHORT Length;
    USHORT MaximumLength;
    ULONG Buffer;
} STRING32;
typedef STRING32 *PSTRING32;
typedef STRING32 UNICODE_STRING32;
typedef UNICODE_STRING32 *PUNICODE_STRING32;
typedef STRING32 ANSI_STRING32;
typedef ANSI_STRING32 *PANSI_STRING32;
typedef struct _STRING64 {
    USHORT Length;
    USHORT MaximumLength;
    ULONGLONG Buffer;
} STRING64;
typedef STRING64 *PSTRING64;
typedef STRING64 UNICODE_STRING64;
typedef UNICODE_STRING64 *PUNICODE_STRING64;
typedef STRING64 ANSI_STRING64;
typedef ANSI_STRING64 *PANSI_STRING64;
typedef struct _OBJECT_ATTRIBUTES64 {
    ULONG Length;
    ULONG64 RootDirectory;
    ULONG64 ObjectName;
    ULONG Attributes;
    ULONG64 SecurityDescriptor;
    ULONG64 SecurityQualityOfService;
} OBJECT_ATTRIBUTES64;
typedef OBJECT_ATTRIBUTES64 *POBJECT_ATTRIBUTES64;
typedef const OBJECT_ATTRIBUTES64 *PCOBJECT_ATTRIBUTES64;
typedef struct _OBJECT_ATTRIBUTES32 {
    ULONG Length;
    ULONG RootDirectory;
    ULONG ObjectName;
    ULONG Attributes;
    ULONG SecurityDescriptor;
    ULONG SecurityQualityOfService;
} OBJECT_ATTRIBUTES32;
typedef OBJECT_ATTRIBUTES32 *POBJECT_ATTRIBUTES32;
typedef const OBJECT_ATTRIBUTES32 *PCOBJECT_ATTRIBUTES32;
typedef struct _OBJECT_ATTRIBUTES {
    ULONG Length;
    HANDLE RootDirectory;
    PUNICODE_STRING ObjectName;
    ULONG Attributes;
    PVOID SecurityDescriptor;
    PVOID SecurityQualityOfService;
} OBJECT_ATTRIBUTES;
typedef OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;
typedef const OBJECT_ATTRIBUTES *PCOBJECT_ATTRIBUTES;
typedef struct _GUID {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[ 8 ];
} GUID;
typedef GUID *LPGUID;
typedef const GUID *LPCGUID;
typedef GUID IID;
typedef IID *LPIID;
typedef GUID CLSID;
typedef CLSID *LPCLSID;
typedef GUID FMTID;
typedef FMTID *LPFMTID;
       
__declspec(dllimport) void * __cdecl _memccpy( void * _Dst, const void * _Src, int _Val, size_t _MaxCount);
__declspec(dllimport) void * __cdecl memchr( const void * _Buf , int _Val, size_t _MaxCount);
__declspec(dllimport) int __cdecl _memicmp( const void * _Buf1, const void * _Buf2, size_t _Size);
__declspec(dllimport) int __cdecl _memicmp_l( const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale);
         int __cdecl memcmp( const void * _Buf1, const void * _Buf2, size_t _Size);
 void * __cdecl memcpy( void * _Dst, const void * _Src, size_t _Size);
 errno_t __cdecl memcpy_s( void * _Dst, rsize_t _DstSize, const void * _Src, rsize_t _MaxCount);
        void * __cdecl memset( void * _Dst, int _Val, size_t _Size);
 __declspec(dllimport) void * __cdecl memccpy( void * _Dst, const void * _Src, int _Val, size_t _Size);
 __declspec(dllimport) int __cdecl memicmp( const void * _Buf1, const void * _Buf2, size_t _Size);
 char * __cdecl _strset( char * _Str, int _Val);
  errno_t __cdecl _strset_s( char * _Dst, size_t _DstSize, int _Value);
  errno_t __cdecl strcpy_s( char * _Dst, rsize_t _DstSize, const char * _Src);
  char * __cdecl strcpy( char *_Dest, const char * _Source);
  errno_t __cdecl strcat_s( char * _Dst, rsize_t _DstSize, const char * _Src);
  char * __cdecl strcat( char *_Dest, const char * _Source);
         int __cdecl strcmp( const char * _Str1, const char * _Str2);
         size_t __cdecl strlen( const char * _Str);
  size_t __cdecl strnlen( const char * _Str, size_t _MaxCount);
static __inline size_t __cdecl strnlen_s( const char * _Str, size_t _MaxCount)
{
    return strnlen(_Str, _MaxCount);
}
  errno_t __cdecl memmove_s( void * _Dst, rsize_t _DstSize, const void * _Src, rsize_t _MaxCount);
__declspec(dllimport) void * __cdecl memmove( void * _Dst, const void * _Src, size_t _MaxCount);
__declspec(dllimport) char * __cdecl _strdup( const char * _Src);
__declspec(dllimport) char * __cdecl strchr( const char * _Str, int _Val);
__declspec(dllimport) int __cdecl _stricmp( const char * _Str1, const char * _Str2);
__declspec(dllimport) int __cdecl _strcmpi( const char * _Str1, const char * _Str2);
__declspec(dllimport) int __cdecl _stricmp_l( const char * _Str1, const char * _Str2, _locale_t _Locale);
__declspec(dllimport) int __cdecl strcoll( const char * _Str1, const char * _Str2);
__declspec(dllimport) int __cdecl _strcoll_l( const char * _Str1, const char * _Str2, _locale_t _Locale);
__declspec(dllimport) int __cdecl _stricoll( const char * _Str1, const char * _Str2);
__declspec(dllimport) int __cdecl _stricoll_l( const char * _Str1, const char * _Str2, _locale_t _Locale);
__declspec(dllimport) int __cdecl _strncoll ( const char * _Str1, const char * _Str2, size_t _MaxCount);
__declspec(dllimport) int __cdecl _strncoll_l( const char * _Str1, const char * _Str2, size_t _MaxCount, _locale_t _Locale);
__declspec(dllimport) int __cdecl _strnicoll ( const char * _Str1, const char * _Str2, size_t _MaxCount);
__declspec(dllimport) int __cdecl _strnicoll_l( const char * _Str1, const char * _Str2, size_t _MaxCount, _locale_t _Locale);
__declspec(dllimport) size_t __cdecl strcspn( const char * _Str, const char * _Control);
 __declspec(dllimport) char * __cdecl _strerror( const char * _ErrMsg);
__declspec(dllimport) errno_t __cdecl _strerror_s( char * _Buf, size_t _SizeInBytes, const char * _ErrMsg);
 __declspec(dllimport) char * __cdecl strerror( int);
__declspec(dllimport) errno_t __cdecl strerror_s( char * _Buf, size_t _SizeInBytes, int _ErrNum);
  errno_t __cdecl _strlwr_s( char * _Str, size_t _Size);
 __declspec(dllimport) char * __cdecl _strlwr( char *_String);
__declspec(dllimport) errno_t __cdecl _strlwr_s_l( char * _Str, size_t _Size, _locale_t _Locale);
 __declspec(dllimport) char * __cdecl _strlwr_l( char *_String, _locale_t _Locale);
  errno_t __cdecl strncat_s( char * _Dst, rsize_t _DstSize, const char * _Src, rsize_t _MaxCount);
#pragma warning(push)
#pragma warning(disable:4609)
#pragma warning(disable:6059)
 __declspec(dllimport) char * __cdecl strncat( char *_Dest, const char * _Source, size_t _Count);
#pragma warning(pop)
__declspec(dllimport) int __cdecl strncmp( const char * _Str1, const char * _Str2, size_t _MaxCount);
__declspec(dllimport) int __cdecl _strnicmp( const char * _Str1, const char * _Str2, size_t _MaxCount);
__declspec(dllimport) int __cdecl _strnicmp_l( const char * _Str1, const char * _Str2, size_t _MaxCount, _locale_t _Locale);
  errno_t __cdecl strncpy_s( char * _Dst, rsize_t _DstSize, const char * _Src, rsize_t _MaxCount);
 __declspec(dllimport) char * __cdecl strncpy( char *_Dest, const char * _Source, size_t _Count);
 __declspec(dllimport) char * __cdecl _strnset( char * _Str, int _Val, size_t _MaxCount);
  errno_t __cdecl _strnset_s( char * _Str, size_t _Size, int _Val, size_t _MaxCount);
__declspec(dllimport) char * __cdecl strpbrk( const char * _Str, const char * _Control);
__declspec(dllimport) char * __cdecl strrchr( const char * _Str, int _Ch);
__declspec(dllimport) char * __cdecl _strrev( char * _Str);
__declspec(dllimport) size_t __cdecl strspn( const char * _Str, const char * _Control);
__declspec(dllimport) char * __cdecl strstr( const char * _Str, const char * _SubStr);
 __declspec(dllimport) char * __cdecl strtok( char * _Str, const char * _Delim);
  char * __cdecl strtok_s( char * _Str, const char * _Delim, char ** _Context);
  errno_t __cdecl _strupr_s( char * _Str, size_t _Size);
 __declspec(dllimport) char * __cdecl _strupr( char *_String);
__declspec(dllimport) errno_t __cdecl _strupr_s_l( char * _Str, size_t _Size, _locale_t _Locale);
 __declspec(dllimport) char * __cdecl _strupr_l( char *_String, _locale_t _Locale);
__declspec(dllimport) size_t __cdecl strxfrm ( char * _Dst, const char * _Src, size_t _MaxCount);
__declspec(dllimport) size_t __cdecl _strxfrm_l( char * _Dst, const char * _Src, size_t _MaxCount, _locale_t _Locale);
 __declspec(dllimport) char * __cdecl strdup( const char * _Src);
 __declspec(dllimport) int __cdecl strcmpi( const char * _Str1, const char * _Str2);
 __declspec(dllimport) int __cdecl stricmp( const char * _Str1, const char * _Str2);
 __declspec(dllimport) char * __cdecl strlwr( char * _Str);
 __declspec(dllimport) int __cdecl strnicmp( const char * _Str1, const char * _Str, size_t _MaxCount);
 __declspec(dllimport) char * __cdecl strnset( char * _Str, int _Val, size_t _MaxCount);
 __declspec(dllimport) char * __cdecl strrev( char * _Str);
         char * __cdecl strset( char * _Str, int _Val);
 __declspec(dllimport) char * __cdecl strupr( char * _Str);
__declspec(dllimport) wchar_t * __cdecl _wcsdup( const wchar_t * _Str);
  errno_t __cdecl wcscat_s( wchar_t * _Dst, rsize_t _DstSize, const wchar_t * _Src);
 __declspec(dllimport) wchar_t * __cdecl wcscat( wchar_t *_Dest, const wchar_t * _Source);
__declspec(dllimport) wchar_t * __cdecl wcschr( const wchar_t * _Str, wchar_t _Ch);
__declspec(dllimport) int __cdecl wcscmp( const wchar_t * _Str1, const wchar_t * _Str2);
  errno_t __cdecl wcscpy_s( wchar_t * _Dst, rsize_t _DstSize, const wchar_t * _Src);
 __declspec(dllimport) wchar_t * __cdecl wcscpy( wchar_t *_Dest, const wchar_t * _Source);
__declspec(dllimport) size_t __cdecl wcscspn( const wchar_t * _Str, const wchar_t * _Control);
__declspec(dllimport) size_t __cdecl wcslen( const wchar_t * _Str);
  size_t __cdecl wcsnlen( const wchar_t * _Src, size_t _MaxCount);
static __inline size_t __cdecl wcsnlen_s( const wchar_t * _Src, size_t _MaxCount)
{
    return wcsnlen(_Src, _MaxCount);
}
  errno_t __cdecl wcsncat_s( wchar_t * _Dst, rsize_t _DstSize, const wchar_t * _Src, rsize_t _MaxCount);
 __declspec(dllimport) wchar_t * __cdecl wcsncat( wchar_t *_Dest, const wchar_t * _Source, size_t _Count);
__declspec(dllimport) int __cdecl wcsncmp( const wchar_t * _Str1, const wchar_t * _Str2, size_t _MaxCount);
  errno_t __cdecl wcsncpy_s( wchar_t * _Dst, rsize_t _DstSize, const wchar_t * _Src, rsize_t _MaxCount);
 __declspec(dllimport) wchar_t * __cdecl wcsncpy( wchar_t *_Dest, const wchar_t * _Source, size_t _Count);
__declspec(dllimport) wchar_t * __cdecl wcspbrk( const wchar_t * _Str, const wchar_t * _Control);
__declspec(dllimport) wchar_t * __cdecl wcsrchr( const wchar_t * _Str, wchar_t _Ch);
__declspec(dllimport) size_t __cdecl wcsspn( const wchar_t * _Str, const wchar_t * _Control);
__declspec(dllimport) wchar_t * __cdecl wcsstr( const wchar_t * _Str, const wchar_t * _SubStr);
 __declspec(dllimport) wchar_t * __cdecl wcstok( wchar_t * _Str, const wchar_t * _Delim);
  wchar_t * __cdecl wcstok_s( wchar_t * _Str, const wchar_t * _Delim, wchar_t ** _Context);
 __declspec(dllimport) wchar_t * __cdecl _wcserror( int _ErrNum);
__declspec(dllimport) errno_t __cdecl _wcserror_s( wchar_t * _Buf, size_t _SizeInWords, int _ErrNum);
 __declspec(dllimport) wchar_t * __cdecl __wcserror( const wchar_t * _Str);
__declspec(dllimport) errno_t __cdecl __wcserror_s( wchar_t * _Buffer, size_t _SizeInWords, const wchar_t * _ErrMsg);
__declspec(dllimport) int __cdecl _wcsicmp( const wchar_t * _Str1, const wchar_t * _Str2);
__declspec(dllimport) int __cdecl _wcsicmp_l( const wchar_t * _Str1, const wchar_t * _Str2, _locale_t _Locale);
__declspec(dllimport) int __cdecl _wcsnicmp( const wchar_t * _Str1, const wchar_t * _Str2, size_t _MaxCount);
__declspec(dllimport) int __cdecl _wcsnicmp_l( const wchar_t * _Str1, const wchar_t * _Str2, size_t _MaxCount, _locale_t _Locale);
 __declspec(dllimport) wchar_t * __cdecl _wcsnset( wchar_t * _Str, wchar_t _Val, size_t _MaxCount);
  errno_t __cdecl _wcsnset_s( wchar_t * _Dst, size_t _DstSizeInWords, wchar_t _Val, size_t _MaxCount);
__declspec(dllimport) wchar_t * __cdecl _wcsrev( wchar_t * _Str);
 __declspec(dllimport) wchar_t * __cdecl _wcsset( wchar_t * _Str, wchar_t _Val);
  errno_t __cdecl _wcsset_s( wchar_t * _Str, size_t _SizeInWords, wchar_t _Val);
  errno_t __cdecl _wcslwr_s( wchar_t * _Str, size_t _SizeInWords);
 __declspec(dllimport) wchar_t * __cdecl _wcslwr( wchar_t *_String);
__declspec(dllimport) errno_t __cdecl _wcslwr_s_l( wchar_t * _Str, size_t _SizeInWords, _locale_t _Locale);
 __declspec(dllimport) wchar_t * __cdecl _wcslwr_l( wchar_t *_String, _locale_t _Locale);
  errno_t __cdecl _wcsupr_s( wchar_t * _Str, size_t _Size);
 __declspec(dllimport) wchar_t * __cdecl _wcsupr( wchar_t *_String);
__declspec(dllimport) errno_t __cdecl _wcsupr_s_l( wchar_t * _Str, size_t _Size, _locale_t _Locale);
 __declspec(dllimport) wchar_t * __cdecl _wcsupr_l( wchar_t *_String, _locale_t _Locale);
__declspec(dllimport) size_t __cdecl wcsxfrm( wchar_t * _Dst, const wchar_t * _Src, size_t _MaxCount);
__declspec(dllimport) size_t __cdecl _wcsxfrm_l( wchar_t * _Dst, const wchar_t *_Src, size_t _MaxCount, _locale_t _Locale);
__declspec(dllimport) int __cdecl wcscoll( const wchar_t * _Str1, const wchar_t * _Str2);
__declspec(dllimport) int __cdecl _wcscoll_l( const wchar_t * _Str1, const wchar_t * _Str2, _locale_t _Locale);
__declspec(dllimport) int __cdecl _wcsicoll( const wchar_t * _Str1, const wchar_t * _Str2);
__declspec(dllimport) int __cdecl _wcsicoll_l( const wchar_t * _Str1, const wchar_t *_Str2, _locale_t _Locale);
__declspec(dllimport) int __cdecl _wcsncoll( const wchar_t * _Str1, const wchar_t * _Str2, size_t _MaxCount);
__declspec(dllimport) int __cdecl _wcsncoll_l( const wchar_t * _Str1, const wchar_t * _Str2, size_t _MaxCount, _locale_t _Locale);
__declspec(dllimport) int __cdecl _wcsnicoll( const wchar_t * _Str1, const wchar_t * _Str2, size_t _MaxCount);
__declspec(dllimport) int __cdecl _wcsnicoll_l( const wchar_t * _Str1, const wchar_t * _Str2, size_t _MaxCount, _locale_t _Locale);
 __declspec(dllimport) wchar_t * __cdecl wcsdup( const wchar_t * _Str);
 __declspec(dllimport) int __cdecl wcsicmp( const wchar_t * _Str1, const wchar_t * _Str2);
 __declspec(dllimport) int __cdecl wcsnicmp( const wchar_t * _Str1, const wchar_t * _Str2, size_t _MaxCount);
 __declspec(dllimport) wchar_t * __cdecl wcsnset( wchar_t * _Str, wchar_t _Val, size_t _MaxCount);
 __declspec(dllimport) wchar_t * __cdecl wcsrev( wchar_t * _Str);
 __declspec(dllimport) wchar_t * __cdecl wcsset( wchar_t * _Str, wchar_t _Val);
 __declspec(dllimport) wchar_t * __cdecl wcslwr( wchar_t * _Str);
 __declspec(dllimport) wchar_t * __cdecl wcsupr( wchar_t * _Str);
 __declspec(dllimport) int __cdecl wcsicoll( const wchar_t * _Str1, const wchar_t * _Str2);
typedef struct _OBJECTID {
    GUID Lineage;
    ULONG Uniquifier;
} OBJECTID;
char _RTL_CONSTANT_STRING_type_check(const void *s);
typedef
EXCEPTION_DISPOSITION
(__stdcall *PEXCEPTION_ROUTINE) (
     struct _EXCEPTION_RECORD *ExceptionRecord,
     PVOID EstablisherFrame,
      struct _CONTEXT *ContextRecord,
      PVOID DispatcherContext
    );
typedef UCHAR KIRQL;
typedef KIRQL *PKIRQL;
typedef enum _NT_PRODUCT_TYPE {
    NtProductWinNt = 1,
    NtProductLanManNt,
    NtProductServer
} NT_PRODUCT_TYPE, *PNT_PRODUCT_TYPE;
typedef enum _SUITE_TYPE {
    SmallBusiness,
    Enterprise,
    BackOffice,
    CommunicationServer,
    TerminalServer,
    SmallBusinessRestricted,
    EmbeddedNT,
    DataCenter,
    SingleUserTS,
    Personal,
    Blade,
    EmbeddedRestricted,
    SecurityAppliance,
    StorageServer,
    ComputeServer,
    WHServer,
    MaxSuiteType
} SUITE_TYPE;
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
       
       
typedef struct _ACCESS_STATE *PACCESS_STATE;
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;
typedef struct _EPROCESS *PEPROCESS;
typedef struct _ETHREAD *PETHREAD;
typedef struct _IO_TIMER *PIO_TIMER;
typedef struct _KINTERRUPT *PKINTERRUPT;
typedef struct _KTHREAD *PKTHREAD, *PRKTHREAD;
typedef struct _OBJECT_TYPE *POBJECT_TYPE;
typedef struct _SECURITY_QUALITY_OF_SERVICE *PSECURITY_QUALITY_OF_SERVICE;
typedef struct _CONTEXT *PCONTEXT;
typedef struct _IO_STACK_LOCATION *PIO_STACK_LOCATION;
typedef struct _VPB *PVPB;
typedef struct _FILE_GET_QUOTA_INFORMATION *PFILE_GET_QUOTA_INFORMATION;
__declspec(dllimport)
PKTHREAD
__stdcall
KeGetCurrentThread(
    void
    );
       
typedef union _MCI_ADDR{
    struct {
        ULONG Address;
        ULONG Reserved;
    } ;
    ULONGLONG QuadPart;
} MCI_ADDR, *PMCI_ADDR;
typedef enum {
    HAL_MCE_RECORD,
    HAL_MCA_RECORD
} MCA_EXCEPTION_TYPE;
typedef union _MCI_STATS {
    struct {
        USHORT McaCod;
        USHORT MsCod;
        ULONG OtherInfo : 25;
        ULONG Damage : 1;
        ULONG AddressValid : 1;
        ULONG MiscValid : 1;
        ULONG Enabled : 1;
        ULONG UnCorrected : 1;
        ULONG OverFlow : 1;
        ULONG Valid : 1;
    } MciStats;
    ULONGLONG QuadPart;
} MCI_STATS, *PMCI_STATS;
typedef struct _MCA_EXCEPTION {
    ULONG VersionNumber;
    MCA_EXCEPTION_TYPE ExceptionType;
    LARGE_INTEGER TimeStamp;
    ULONG ProcessorNumber;
    ULONG Reserved1;
    union {
        struct {
            UCHAR BankNumber;
            UCHAR Reserved2[7];
            MCI_STATS Status;
            MCI_ADDR Address;
            ULONGLONG Misc;
        } Mca;
        struct {
            ULONGLONG Address;
            ULONGLONG Type;
        } Mce;
    } u;
    ULONG ExtCnt;
    ULONG Reserved3;
    ULONGLONG ExtReg[24];
} MCA_EXCEPTION, *PMCA_EXCEPTION;
typedef MCA_EXCEPTION CMC_EXCEPTION, *PCMC_EXCEPTION;
typedef MCA_EXCEPTION CPE_EXCEPTION, *PCPE_EXCEPTION;
extern __declspec(dllimport) CCHAR KeNumberProcessors;
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
BOOLEAN
_bittest (
     LONG const *Base,
     LONG Offset
    );
BOOLEAN
_bittestandcomplement (
     LONG *Base,
     LONG Offset
    );
BOOLEAN
_bittestandset (
     LONG *Base,
     LONG Offset
    );
BOOLEAN
_bittestandreset (
     LONG *Base,
     LONG Offset
    );
BOOLEAN
_interlockedbittestandset (
     LONG volatile *Base,
     LONG Offset
    );
BOOLEAN
_interlockedbittestandreset (
     LONG volatile *Base,
     LONG Offset
    );
#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_interlockedbittestandset)
#pragma intrinsic(_interlockedbittestandreset)
BOOLEAN
_BitScanForward (
     ULONG *Index,
     ULONG Mask
    );
BOOLEAN
_BitScanReverse (
     ULONG *Index,
     ULONG Mask
    );
#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)
SHORT
_InterlockedCompareExchange16 (
     SHORT volatile *Destination,
     SHORT ExChange,
     SHORT Comperand
    );
#pragma intrinsic(_InterlockedCompareExchange16)
#pragma warning(push)
#pragma warning(disable:4035 4793)
__forceinline
BOOLEAN
InterlockedBitTestAndComplement (
     LONG volatile *Base,
     LONG Bit
    )
{
    __asm {
           mov eax, Bit
           mov ecx, Base
           lock btc [ecx], eax
           setc al
    };
}
#pragma warning(pop)
UCHAR
__readfsbyte (
     ULONG Offset
    );
USHORT
__readfsword (
     ULONG Offset
    );
ULONG
__readfsdword (
     ULONG Offset
    );
void
__writefsbyte (
     ULONG Offset,
     UCHAR Data
    );
void
__writefsword (
     ULONG Offset,
     USHORT Data
    );
void
__writefsdword (
     ULONG Offset,
     ULONG Data
    );
#pragma intrinsic(__readfsbyte)
#pragma intrinsic(__readfsword)
#pragma intrinsic(__readfsdword)
#pragma intrinsic(__writefsbyte)
#pragma intrinsic(__writefsword)
#pragma intrinsic(__writefsdword)
void
__incfsbyte (
    ULONG Offset
    );
void
__addfsbyte (
    ULONG Offset,
    UCHAR Value
    );
void
__incfsword (
    ULONG Offset
    );
void
__addfsword (
    ULONG Offset,
    USHORT Value
    );
void
__incfsdword (
    ULONG Offset
    );
void
__addfsdword (
    ULONG Offset,
    ULONG Value
    );
void
_mm_pause (
    void
    );
#pragma intrinsic(_mm_pause)
void
__int2c (
    void
    );
#pragma intrinsic(__int2c)
typedef PVOID PACCESS_TOKEN;
typedef PVOID PSECURITY_DESCRIPTOR;
typedef PVOID PSID;
typedef ULONG ACCESS_MASK;
typedef ACCESS_MASK *PACCESS_MASK;
typedef struct _GENERIC_MAPPING {
    ACCESS_MASK GenericRead;
    ACCESS_MASK GenericWrite;
    ACCESS_MASK GenericExecute;
    ACCESS_MASK GenericAll;
} GENERIC_MAPPING;
typedef GENERIC_MAPPING *PGENERIC_MAPPING;
#pragma warning(disable:4103)
#pragma pack(push,4)
typedef struct _LUID_AND_ATTRIBUTES {
    LUID Luid;
    ULONG Attributes;
    } LUID_AND_ATTRIBUTES, * PLUID_AND_ATTRIBUTES;
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1];
typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;
#pragma warning(disable:4103)
#pragma pack(pop)
typedef struct _ACL {
    UCHAR AclRevision;
    UCHAR Sbz1;
    USHORT AclSize;
    USHORT AceCount;
    USHORT Sbz2;
} ACL;
typedef ACL *PACL;
typedef struct _PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    LUID_AND_ATTRIBUTES Privilege[1];
    } PRIVILEGE_SET, * PPRIVILEGE_SET;
typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous,
    SecurityIdentification,
    SecurityImpersonation,
    SecurityDelegation
    } SECURITY_IMPERSONATION_LEVEL, * PSECURITY_IMPERSONATION_LEVEL;
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE,
                    * PSECURITY_CONTEXT_TRACKING_MODE;
typedef struct _SECURITY_QUALITY_OF_SERVICE {
    ULONG Length;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
    BOOLEAN EffectiveOnly;
    } SECURITY_QUALITY_OF_SERVICE, * PSECURITY_QUALITY_OF_SERVICE;
typedef struct _SE_IMPERSONATION_STATE {
    PACCESS_TOKEN Token;
    BOOLEAN CopyOnOpen;
    BOOLEAN EffectiveOnly;
    SECURITY_IMPERSONATION_LEVEL Level;
} SE_IMPERSONATION_STATE, *PSE_IMPERSONATION_STATE;
typedef ULONG SECURITY_INFORMATION, *PSECURITY_INFORMATION;
typedef enum _SE_ADT_PARAMETER_TYPE {
    SeAdtParmTypeNone = 0,
    SeAdtParmTypeString,
    SeAdtParmTypeFileSpec,
    SeAdtParmTypeUlong,
    SeAdtParmTypeSid,
    SeAdtParmTypeLogonId,
    SeAdtParmTypeNoLogonId,
    SeAdtParmTypeAccessMask,
    SeAdtParmTypePrivs,
    SeAdtParmTypeObjectTypes,
    SeAdtParmTypeHexUlong,
    SeAdtParmTypePtr,
    SeAdtParmTypeTime,
    SeAdtParmTypeGuid,
    SeAdtParmTypeLuid,
    SeAdtParmTypeHexInt64,
    SeAdtParmTypeStringList,
    SeAdtParmTypeSidList,
    SeAdtParmTypeDuration,
    SeAdtParmTypeUserAccountControl,
    SeAdtParmTypeNoUac,
    SeAdtParmTypeMessage,
    SeAdtParmTypeDateTime,
    SeAdtParmTypeSockAddr,
    SeAdtParmTypeSD,
    SeAdtParmTypeLogonHours,
    SeAdtParmTypeLogonIdNoSid,
    SeAdtParmTypeUlongNoConv,
    SeAdtParmTypeSockAddrNoPort
} SE_ADT_PARAMETER_TYPE, *PSE_ADT_PARAMETER_TYPE;
typedef struct _SE_ADT_OBJECT_TYPE {
    GUID ObjectType;
    USHORT Flags;
    USHORT Level;
    ACCESS_MASK AccessMask;
} SE_ADT_OBJECT_TYPE, *PSE_ADT_OBJECT_TYPE;
typedef struct _SE_ADT_PARAMETER_ARRAY_ENTRY {
    SE_ADT_PARAMETER_TYPE Type;
    ULONG Length;
    ULONG_PTR Data[2];
    PVOID Address;
} SE_ADT_PARAMETER_ARRAY_ENTRY, *PSE_ADT_PARAMETER_ARRAY_ENTRY;
typedef struct _SE_ADT_PARAMETER_ARRAY {
    ULONG CategoryId;
    ULONG AuditId;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ 32 ];
} SE_ADT_PARAMETER_ARRAY, *PSE_ADT_PARAMETER_ARRAY;
typedef struct _KSYSTEM_TIME {
    ULONG LowPart;
    LONG High1Time;
    LONG High2Time;
} KSYSTEM_TIME, *PKSYSTEM_TIME;
typedef LONG KPRIORITY;
typedef ULONG_PTR KSPIN_LOCK;
typedef KSPIN_LOCK *PKSPIN_LOCK;
typedef enum _KSPIN_LOCK_QUEUE_NUMBER {
    LockQueueDispatcherLock,
    LockQueueExpansionLock,
    LockQueuePfnLock,
    LockQueueSystemSpaceLock,
    LockQueueVacbLock,
    LockQueueMasterLock,
    LockQueueNonPagedPoolLock,
    LockQueueIoCancelLock,
    LockQueueWorkQueueLock,
    LockQueueIoVpbLock,
    LockQueueIoDatabaseLock,
    LockQueueIoCompletionLock,
    LockQueueNtfsStructLock,
    LockQueueAfdWorkQueueLock,
    LockQueueBcbLock,
    LockQueueMmNonPagedPoolLock,
    LockQueueUnusedSpare16,
    LockQueueTimerTableLock,
    LockQueueMaximumLock = LockQueueTimerTableLock + (1 << (8 - 3))
} KSPIN_LOCK_QUEUE_NUMBER, *PKSPIN_LOCK_QUEUE_NUMBER;
typedef struct _KSPIN_LOCK_QUEUE {
    struct _KSPIN_LOCK_QUEUE * volatile Next;
    PKSPIN_LOCK volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE;
typedef struct _KLOCK_QUEUE_HANDLE {
    KSPIN_LOCK_QUEUE LockQueue;
    KIRQL OldIrql;
} KLOCK_QUEUE_HANDLE, *PKLOCK_QUEUE_HANDLE;
typedef
void
(*PKINTERRUPT_ROUTINE) (
    void
    );
typedef enum _KPROFILE_SOURCE {
    ProfileTime,
    ProfileAlignmentFixup,
    ProfileTotalIssues,
    ProfilePipelineDry,
    ProfileLoadInstructions,
    ProfilePipelineFrozen,
    ProfileBranchInstructions,
    ProfileTotalNonissues,
    ProfileDcacheMisses,
    ProfileIcacheMisses,
    ProfileCacheMisses,
    ProfileBranchMispredictions,
    ProfileStoreInstructions,
    ProfileFpInstructions,
    ProfileIntegerInstructions,
    Profile2Issue,
    Profile3Issue,
    Profile4Issue,
    ProfileSpecialInstructions,
    ProfileTotalCycles,
    ProfileIcacheIssues,
    ProfileDcacheAccesses,
    ProfileMemoryBarrierCycles,
    ProfileLoadLinkedIssues,
    ProfileMaximum
} KPROFILE_SOURCE;
typedef struct _IO_STATUS_BLOCK {
    union {
        NTSTATUS Status;
        PVOID Pointer;
    } ;
    ULONG_PTR Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;
typedef
void
(__stdcall *PIO_APC_ROUTINE) (
     PVOID ApcContext,
     PIO_STATUS_BLOCK IoStatusBlock,
     ULONG Reserved
    );
typedef enum _FILE_INFORMATION_CLASS {
    FileDirectoryInformation = 1,
    FileFullDirectoryInformation,
    FileBothDirectoryInformation,
    FileBasicInformation,
    FileStandardInformation,
    FileInternalInformation,
    FileEaInformation,
    FileAccessInformation,
    FileNameInformation,
    FileRenameInformation,
    FileLinkInformation,
    FileNamesInformation,
    FileDispositionInformation,
    FilePositionInformation,
    FileFullEaInformation,
    FileModeInformation,
    FileAlignmentInformation,
    FileAllInformation,
    FileAllocationInformation,
    FileEndOfFileInformation,
    FileAlternateNameInformation,
    FileStreamInformation,
    FilePipeInformation,
    FilePipeLocalInformation,
    FilePipeRemoteInformation,
    FileMailslotQueryInformation,
    FileMailslotSetInformation,
    FileCompressionInformation,
    FileObjectIdInformation,
    FileCompletionInformation,
    FileMoveClusterInformation,
    FileQuotaInformation,
    FileReparsePointInformation,
    FileNetworkOpenInformation,
    FileAttributeTagInformation,
    FileTrackingInformation,
    FileIdBothDirectoryInformation,
    FileIdFullDirectoryInformation,
    FileValidDataLengthInformation,
    FileShortNameInformation,
    FileIoCompletionNotificationInformation,
    FileIoStatusBlockRangeInformation,
    FileIoPriorityHintInformation,
    FileSfioReserveInformation,
    FileSfioVolumeInformation,
    FileHardLinkInformation,
    FileProcessIdsUsingFileInformation,
    FileNormalizedNameInformation,
    FileNetworkPhysicalNameInformation,
    FileIdGlobalTxDirectoryInformation,
    FileMaximumInformation
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;
typedef struct _FILE_BASIC_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION;
typedef struct _FILE_STANDARD_INFORMATION {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION;
typedef struct _FILE_POSITION_INFORMATION {
    LARGE_INTEGER CurrentByteOffset;
} FILE_POSITION_INFORMATION, *PFILE_POSITION_INFORMATION;
typedef struct _FILE_NETWORK_OPEN_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION;
typedef struct _FILE_FULL_EA_INFORMATION {
    ULONG NextEntryOffset;
    UCHAR Flags;
    UCHAR EaNameLength;
    USHORT EaValueLength;
    CHAR EaName[1];
} FILE_FULL_EA_INFORMATION, *PFILE_FULL_EA_INFORMATION;
typedef struct _FILE_SFIO_RESERVE_INFORMATION {
    ULONG RequestsPerPeriod;
    ULONG Period;
    BOOLEAN RetryFailures;
    BOOLEAN Discardable;
    ULONG RequestSize;
    ULONG NumOutstandingRequests;
} FILE_SFIO_RESERVE_INFORMATION, *PFILE_SFIO_RESERVE_INFORMATION;
typedef struct _FILE_SFIO_VOLUME_INFORMATION {
    ULONG MaximumRequestsPerPeriod;
    ULONG MinimumPeriod;
    ULONG MinimumTransferSize;
} FILE_SFIO_VOLUME_INFORMATION, *PFILE_SFIO_VOLUME_INFORMATION;
typedef enum _IO_PRIORITY_HINT {
    IoPriorityVeryLow = 0,
    IoPriorityLow,
    IoPriorityNormal,
    IoPriorityHigh,
    IoPriorityCritical,
    MaxIoPriorityTypes
} IO_PRIORITY_HINT;
typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION {
    IO_PRIORITY_HINT PriorityHint;
} FILE_IO_PRIORITY_HINT_INFORMATION, *PFILE_IO_PRIORITY_HINT_INFORMATION;
typedef struct _FILE_IO_COMPLETION_NOTIFICATION_INFORMATION {
    ULONG Flags;
} FILE_IO_COMPLETION_NOTIFICATION_INFORMATION, *PFILE_IO_COMPLETION_NOTIFICATION_INFORMATION;
typedef struct _FILE_PROCESS_IDS_USING_FILE_INFORMATION {
    ULONG NumberOfProcessIdsInList;
    ULONG_PTR ProcessIdList[1];
} FILE_PROCESS_IDS_USING_FILE_INFORMATION, *PFILE_PROCESS_IDS_USING_FILE_INFORMATION;
typedef struct _FILE_IOSTATUSBLOCK_RANGE_INFORMATION {
    PUCHAR IoStatusBlockRange;
    ULONG Length;
} FILE_IOSTATUSBLOCK_RANGE_INFORMATION, *PFILE_IOSTATUSBLOCK_RANGE_INFORMATION;
typedef enum _FSINFOCLASS {
    FileFsVolumeInformation = 1,
    FileFsLabelInformation,
    FileFsSizeInformation,
    FileFsDeviceInformation,
    FileFsAttributeInformation,
    FileFsControlInformation,
    FileFsFullSizeInformation,
    FileFsObjectIdInformation,
    FileFsDriverPathInformation,
    FileFsVolumeFlagsInformation,
    FileFsMaximumInformation
} FS_INFORMATION_CLASS, *PFS_INFORMATION_CLASS;
typedef struct _FILE_FS_DEVICE_INFORMATION {
    ULONG DeviceType;
    ULONG Characteristics;
} FILE_FS_DEVICE_INFORMATION, *PFILE_FS_DEVICE_INFORMATION;
typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    Vmcs,
    MaximumInterfaceType
}INTERFACE_TYPE, *PINTERFACE_TYPE;
typedef enum _DMA_WIDTH {
    Width8Bits,
    Width16Bits,
    Width32Bits,
    MaximumDmaWidth
}DMA_WIDTH, *PDMA_WIDTH;
typedef enum _DMA_SPEED {
    Compatible,
    TypeA,
    TypeB,
    TypeC,
    TypeF,
    MaximumDmaSpeed
}DMA_SPEED, *PDMA_SPEED;
typedef void (*PINTERFACE_REFERENCE)(PVOID Context);
typedef void (*PINTERFACE_DEREFERENCE)(PVOID Context);
typedef struct _IO_ERROR_LOG_PACKET {
    UCHAR MajorFunctionCode;
    UCHAR RetryCount;
    USHORT DumpDataSize;
    USHORT NumberOfStrings;
    USHORT StringOffset;
    USHORT EventCategory;
    NTSTATUS ErrorCode;
    ULONG UniqueErrorValue;
    NTSTATUS FinalStatus;
    ULONG SequenceNumber;
    ULONG IoControlCode;
    LARGE_INTEGER DeviceOffset;
    ULONG DumpData[1];
}IO_ERROR_LOG_PACKET, *PIO_ERROR_LOG_PACKET;
typedef struct _IO_ERROR_LOG_MESSAGE {
    USHORT Type;
    USHORT Size;
    USHORT DriverNameLength;
    LARGE_INTEGER TimeStamp;
    ULONG DriverNameOffset;
    IO_ERROR_LOG_PACKET EntryData;
}IO_ERROR_LOG_MESSAGE, *PIO_ERROR_LOG_MESSAGE;
typedef struct _KEY_BASIC_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG TitleIndex;
    ULONG NameLength;
    WCHAR Name[1];
} KEY_BASIC_INFORMATION, *PKEY_BASIC_INFORMATION;
typedef struct _KEY_NODE_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG TitleIndex;
    ULONG ClassOffset;
    ULONG ClassLength;
    ULONG NameLength;
    WCHAR Name[1];
} KEY_NODE_INFORMATION, *PKEY_NODE_INFORMATION;
typedef struct _KEY_FULL_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG TitleIndex;
    ULONG ClassOffset;
    ULONG ClassLength;
    ULONG SubKeys;
    ULONG MaxNameLen;
    ULONG MaxClassLen;
    ULONG Values;
    ULONG MaxValueNameLen;
    ULONG MaxValueDataLen;
    WCHAR Class[1];
} KEY_FULL_INFORMATION, *PKEY_FULL_INFORMATION;
typedef enum _KEY_INFORMATION_CLASS {
    KeyBasicInformation,
    KeyNodeInformation,
    KeyFullInformation,
    KeyNameInformation,
    KeyCachedInformation,
    KeyFlagsInformation,
    KeyVirtualizationInformation,
    MaxKeyInfoClass
} KEY_INFORMATION_CLASS;
typedef struct _KEY_WRITE_TIME_INFORMATION {
    LARGE_INTEGER LastWriteTime;
} KEY_WRITE_TIME_INFORMATION, *PKEY_WRITE_TIME_INFORMATION;
typedef struct _KEY_WOW64_FLAGS_INFORMATION {
    ULONG UserFlags;
} KEY_WOW64_FLAGS_INFORMATION, *PKEY_WOW64_FLAGS_INFORMATION;
typedef struct _KEY_CONTROL_FLAGS_INFORMATION {
    ULONG ControlFlags;
} KEY_CONTROL_FLAGS_INFORMATION, *PKEY_CONTROL_FLAGS_INFORMATION;
typedef struct _KEY_SET_VIRTUALIZATION_INFORMATION {
    ULONG VirtualTarget : 1;
    ULONG VirtualStore : 1;
    ULONG VirtualSource : 1;
    ULONG Reserved : 29;
} KEY_SET_VIRTUALIZATION_INFORMATION, *PKEY_SET_VIRTUALIZATION_INFORMATION;
typedef enum _KEY_SET_INFORMATION_CLASS {
    KeyWriteTimeInformation,
    KeyWow64FlagsInformation,
    KeyControlFlagsInformation,
    KeySetVirtualizationInformation,
    KeySetDebugInformation,
    MaxKeySetInfoClass
} KEY_SET_INFORMATION_CLASS;
typedef struct _KEY_VALUE_BASIC_INFORMATION {
    ULONG TitleIndex;
    ULONG Type;
    ULONG NameLength;
    WCHAR Name[1];
} KEY_VALUE_BASIC_INFORMATION, *PKEY_VALUE_BASIC_INFORMATION;
typedef struct _KEY_VALUE_FULL_INFORMATION {
    ULONG TitleIndex;
    ULONG Type;
    ULONG DataOffset;
    ULONG DataLength;
    ULONG NameLength;
    WCHAR Name[1];
} KEY_VALUE_FULL_INFORMATION, *PKEY_VALUE_FULL_INFORMATION;
typedef struct _KEY_VALUE_PARTIAL_INFORMATION {
    ULONG TitleIndex;
    ULONG Type;
    ULONG DataLength;
    UCHAR Data[1];
} KEY_VALUE_PARTIAL_INFORMATION, *PKEY_VALUE_PARTIAL_INFORMATION;
typedef struct _KEY_VALUE_PARTIAL_INFORMATION_ALIGN64 {
    ULONG Type;
    ULONG DataLength;
    UCHAR Data[1];
} KEY_VALUE_PARTIAL_INFORMATION_ALIGN64, *PKEY_VALUE_PARTIAL_INFORMATION_ALIGN64;
typedef struct _KEY_VALUE_ENTRY {
    PUNICODE_STRING ValueName;
    ULONG DataLength;
    ULONG DataOffset;
    ULONG Type;
} KEY_VALUE_ENTRY, *PKEY_VALUE_ENTRY;
typedef enum _KEY_VALUE_INFORMATION_CLASS {
    KeyValueBasicInformation,
    KeyValueFullInformation,
    KeyValuePartialInformation,
    KeyValueFullInformationAlign64,
    KeyValuePartialInformationAlign64,
    MaxKeyValueInfoClass
} KEY_VALUE_INFORMATION_CLASS;
typedef struct _OBJECT_NAME_INFORMATION {
    UNICODE_STRING Name;
} OBJECT_NAME_INFORMATION, *POBJECT_NAME_INFORMATION;
typedef enum _SECTION_INHERIT {
    ViewShare = 1,
    ViewUnmap = 2
} SECTION_INHERIT;
typedef struct _CLIENT_ID {
    HANDLE UniqueProcess;
    HANDLE UniqueThread;
} CLIENT_ID;
typedef CLIENT_ID *PCLIENT_ID;
extern const GUID GUID_MAX_POWER_SAVINGS;
extern const GUID GUID_MIN_POWER_SAVINGS;
extern const GUID GUID_TYPICAL_POWER_SAVINGS;
extern const GUID NO_SUBGROUP_GUID;
extern const GUID ALL_POWERSCHEMES_GUID;
extern const GUID GUID_POWERSCHEME_PERSONALITY;
extern const GUID GUID_ACTIVE_POWERSCHEME;
extern const GUID GUID_VIDEO_SUBGROUP;
extern const GUID GUID_VIDEO_POWERDOWN_TIMEOUT;
extern const GUID GUID_VIDEO_ADAPTIVE_POWERDOWN;
extern const GUID GUID_MONITOR_POWER_ON;
extern const GUID GUID_DISK_SUBGROUP;
extern const GUID GUID_DISK_POWERDOWN_TIMEOUT;
extern const GUID GUID_DISK_BURST_IGNORE_THRESHOLD;
extern const GUID GUID_DISK_ADAPTIVE_POWERDOWN;
extern const GUID GUID_SLEEP_SUBGROUP;
extern const GUID GUID_SLEEP_IDLE_THRESHOLD;
extern const GUID GUID_STANDBY_TIMEOUT;
extern const GUID GUID_UNATTEND_SLEEP_TIMEOUT;
extern const GUID GUID_HIBERNATE_TIMEOUT;
extern const GUID GUID_HIBERNATE_FASTS4_POLICY;
extern const GUID GUID_CRITICAL_POWER_TRANSITION;
extern const GUID GUID_SYSTEM_AWAYMODE;
extern const GUID GUID_ALLOW_AWAYMODE;
extern const GUID GUID_ALLOW_STANDBY_STATES;
extern const GUID GUID_ALLOW_RTC_WAKE;
extern const GUID GUID_SYSTEM_BUTTON_SUBGROUP;
extern const GUID GUID_POWERBUTTON_ACTION;
extern const GUID GUID_POWERBUTTON_ACTION_FLAGS;
extern const GUID GUID_SLEEPBUTTON_ACTION;
extern const GUID GUID_SLEEPBUTTON_ACTION_FLAGS;
extern const GUID GUID_USERINTERFACEBUTTON_ACTION;
extern const GUID GUID_LIDCLOSE_ACTION;
extern const GUID GUID_LIDCLOSE_ACTION_FLAGS;
extern const GUID GUID_LIDOPEN_POWERSTATE;
extern const GUID GUID_BATTERY_SUBGROUP;
extern const GUID GUID_BATTERY_DISCHARGE_ACTION_0;
extern const GUID GUID_BATTERY_DISCHARGE_LEVEL_0;
extern const GUID GUID_BATTERY_DISCHARGE_FLAGS_0;
extern const GUID GUID_BATTERY_DISCHARGE_ACTION_1;
extern const GUID GUID_BATTERY_DISCHARGE_LEVEL_1;
extern const GUID GUID_BATTERY_DISCHARGE_FLAGS_1;
extern const GUID GUID_BATTERY_DISCHARGE_ACTION_2;
extern const GUID GUID_BATTERY_DISCHARGE_LEVEL_2;
extern const GUID GUID_BATTERY_DISCHARGE_FLAGS_2;
extern const GUID GUID_BATTERY_DISCHARGE_ACTION_3;
extern const GUID GUID_BATTERY_DISCHARGE_LEVEL_3;
extern const GUID GUID_BATTERY_DISCHARGE_FLAGS_3;
extern const GUID GUID_PROCESSOR_SETTINGS_SUBGROUP;
extern const GUID GUID_PROCESSOR_THROTTLE_POLICY;
extern const GUID GUID_PROCESSOR_THROTTLE_MAXIMUM;
extern const GUID GUID_PROCESSOR_THROTTLE_MINIMUM;
extern const GUID GUID_PROCESSOR_ALLOW_THROTTLING;
extern const GUID GUID_PROCESSOR_IDLESTATE_POLICY;
extern const GUID GUID_PROCESSOR_PERFSTATE_POLICY;
extern const GUID GUID_SYSTEM_COOLING_POLICY;
extern const GUID GUID_LOCK_CONSOLE_ON_WAKE;
extern const GUID GUID_DEVICE_IDLE_POLICY;
extern const GUID GUID_ACDC_POWER_SOURCE;
extern const GUID GUID_LIDSWITCH_STATE_CHANGE;
extern const GUID GUID_BATTERY_PERCENTAGE_REMAINING;
extern const GUID GUID_IDLE_BACKGROUND_TASK;
extern const GUID GUID_BACKGROUND_TASK_NOTIFICATION;
extern const GUID GUID_APPLAUNCH_BUTTON;
extern const GUID GUID_PCIEXPRESS_SETTINGS_SUBGROUP;
extern const GUID GUID_PCIEXPRESS_ASPM_POLICY;
typedef enum _SYSTEM_POWER_STATE {
    PowerSystemUnspecified = 0,
    PowerSystemWorking = 1,
    PowerSystemSleeping1 = 2,
    PowerSystemSleeping2 = 3,
    PowerSystemSleeping3 = 4,
    PowerSystemHibernate = 5,
    PowerSystemShutdown = 6,
    PowerSystemMaximum = 7
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;
typedef enum {
    PowerActionNone = 0,
    PowerActionReserved,
    PowerActionSleep,
    PowerActionHibernate,
    PowerActionShutdown,
    PowerActionShutdownReset,
    PowerActionShutdownOff,
    PowerActionWarmEject
} POWER_ACTION, *PPOWER_ACTION;
typedef enum _DEVICE_POWER_STATE {
    PowerDeviceUnspecified = 0,
    PowerDeviceD0,
    PowerDeviceD1,
    PowerDeviceD2,
    PowerDeviceD3,
    PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;
typedef union _POWER_STATE {
    SYSTEM_POWER_STATE SystemState;
    DEVICE_POWER_STATE DeviceState;
} POWER_STATE, *PPOWER_STATE;
typedef enum _POWER_STATE_TYPE {
    SystemPowerState = 0,
    DevicePowerState
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;
typedef ULONG EXECUTION_STATE;
typedef enum {
    LT_DONT_CARE,
    LT_LOWEST_LATENCY
} LATENCY_TIME;
typedef struct CM_Power_Data_s {
    ULONG PD_Size;
    DEVICE_POWER_STATE PD_MostRecentPowerState;
    ULONG PD_Capabilities;
    ULONG PD_D1Latency;
    ULONG PD_D2Latency;
    ULONG PD_D3Latency;
    DEVICE_POWER_STATE PD_PowerStateMapping[7];
    SYSTEM_POWER_STATE PD_DeepestSystemWake;
} CM_POWER_DATA, *PCM_POWER_DATA;
typedef enum {
    SystemPowerPolicyAc,
    SystemPowerPolicyDc,
    VerifySystemPolicyAc,
    VerifySystemPolicyDc,
    SystemPowerCapabilities,
    SystemBatteryState,
    SystemPowerStateHandler,
    ProcessorStateHandler,
    SystemPowerPolicyCurrent,
    AdministratorPowerPolicy,
    SystemReserveHiberFile,
    ProcessorInformation,
    SystemPowerInformation,
    ProcessorStateHandler2,
    LastWakeTime,
    LastSleepTime,
    SystemExecutionState,
    SystemPowerStateNotifyHandler,
    ProcessorPowerPolicyAc,
    ProcessorPowerPolicyDc,
    VerifyProcessorPowerPolicyAc,
    VerifyProcessorPowerPolicyDc,
    ProcessorPowerPolicyCurrent,
    SystemPowerStateLogging,
    SystemPowerLoggingEntry,
    SetPowerSettingValue,
    NotifyUserPowerSetting,
    GetPowerTransitionVetoes,
    SetPowerTransitionVeto,
    SystemVideoState,
    TraceApplicationPowerMessage,
    TraceApplicationPowerMessageEnd,
    ProcessorPerfStates,
    ProcessorIdleStates,
    ProcessorThrottleStates,
    SystemWakeSource,
    SystemHiberFileInformation,
    TraceServicePowerMessage,
    ProcessorLoad,
    PowerShutdownNotification,
    MonitorCapabilities
} POWER_INFORMATION_LEVEL;
typedef struct _PO_TRANSITION_VETO_REASON {
    ULONG ResourceId;
    ULONG ModuleNameOffset;
} PO_TRANSITION_VETO_REASON, *PPO_TRANSITION_VETO_REASON;
typedef struct _PO_TRANSITION_VETO_WINDOW {
    HANDLE Handle;
} PO_TRANSITION_VETO_WINDOW, *PPO_TRANSITION_VETO_WINDOW;
typedef struct _PO_TRANSITION_VETO_SERVICE {
    ULONG ServiceNameOffset;
} PO_TRANSITION_VETO_SERVICE, *PPO_TRANSITION_VETO_SERVICE;
typedef struct _PO_TRANSITION_VETO {
    ULONG Type;
    PO_TRANSITION_VETO_REASON Reason;
    ULONG ProcessId;
    union {
        PO_TRANSITION_VETO_WINDOW Window;
        PO_TRANSITION_VETO_SERVICE Service;
    } ;
} PO_TRANSITION_VETO, *PPO_TRANSITION_VETO;
typedef struct _PO_TRANSITION_VETOES {
    ULONG Count;
    PO_TRANSITION_VETO Vetoes[1];
} PO_TRANSITION_VETOES, *PPO_TRANSITION_VETOES;
typedef enum {
    PoAc,
    PoDc,
    PoHot,
    PoConditionMaximum
} SYSTEM_POWER_CONDITION;
typedef struct {
    ULONG Version;
    GUID Guid;
    SYSTEM_POWER_CONDITION PowerCondition;
    ULONG DataLength;
    UCHAR Data[1];
} SET_POWER_SETTING_VALUE, *PSET_POWER_SETTING_VALUE;
typedef struct {
    GUID Guid;
} NOTIFY_USER_POWER_SETTING, *PNOTIFY_USER_POWER_SETTING;
typedef struct _APPLICATIONLAUNCH_SETTING_VALUE {
    LARGE_INTEGER ActivationTime;
    ULONG Flags;
    ULONG ButtonInstanceID;
} APPLICATIONLAUNCH_SETTING_VALUE, *PAPPLICATIONLAUNCH_SETTING_VALUE;
typedef enum {
    PlatformRoleUnspecified = 0,
    PlatformRoleDesktop,
    PlatformRoleMobile,
    PlatformRoleWorkstation,
    PlatformRoleEnterpriseServer,
    PlatformRoleSOHOServer,
    PlatformRoleAppliancePC,
    PlatformRolePerformanceServer,
    PlatformRoleMaximum
} POWER_PLATFORM_ROLE;
typedef enum {
    DeviceWakeSourceType,
    FixedWakeSourceType
} PO_WAKE_SOURCE_TYPE, *PPO_WAKE_SOURCE_TYPE;
typedef enum {
    FixedWakeSourcePowerButton,
    FixedWakeSourceSleepButton,
    FixedWakeSourceRtc
} PO_FIXED_WAKE_SOURCE_TYPE, *PPO_FIXED_WAKE_SOURCE_TYPE;
typedef struct _PO_WAKE_SOURCE_HEADER {
    PO_WAKE_SOURCE_TYPE Type;
    ULONG Size;
} PO_WAKE_SOURCE_HEADER, *PPO_WAKE_SOURCE_HEADER;
typedef struct _PO_WAKE_SOURCE_DEVICE {
    PO_WAKE_SOURCE_HEADER Header;
    WCHAR InstancePath[1];
} PO_WAKE_SOURCE_DEVICE, *PPO_WAKE_SOURCE_DEVICE;
typedef struct _PO_WAKE_SOURCE_FIXED {
    PO_WAKE_SOURCE_HEADER Header;
    PO_FIXED_WAKE_SOURCE_TYPE FixedWakeSourceType;
} PO_WAKE_SOURCE_FIXED, *PPO_WAKE_SOURCE_FIXED;
typedef struct _PO_WAKE_SOURCE_INFO {
    ULONG Count;
    ULONG Offsets[1];
} PO_WAKE_SOURCE_INFO, *PPO_WAKE_SOURCE_INFO;
typedef struct _PO_WAKE_SOURCE_HISTORY {
    ULONG Count;
    ULONG Offsets[1];
} PO_WAKE_SOURCE_HISTORY, *PPO_WAKE_SOURCE_HISTORY;
typedef struct {
    ULONG Granularity;
    ULONG Capacity;
} BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;
typedef enum _CM_SERVICE_NODE_TYPE {
    DriverType = 0x00000001,
    FileSystemType = 0x00000002,
    Win32ServiceOwnProcess = 0x00000010,
    Win32ServiceShareProcess = 0x00000020,
    AdapterType = 0x00000004,
    RecognizerType = 0x00000008
} SERVICE_NODE_TYPE;
typedef enum _CM_SERVICE_LOAD_TYPE {
    BootLoad = 0x00000000,
    SystemLoad = 0x00000001,
    AutoLoad = 0x00000002,
    DemandLoad = 0x00000003,
    DisableLoad = 0x00000004
} SERVICE_LOAD_TYPE;
typedef enum _CM_ERROR_CONTROL_TYPE {
    IgnoreError = 0x00000000,
    NormalError = 0x00000001,
    SevereError = 0x00000002,
    CriticalError = 0x00000003
} SERVICE_ERROR_TYPE;
typedef int CM_RESOURCE_TYPE;
typedef enum _CM_SHARE_DISPOSITION {
    CmResourceShareUndetermined = 0,
    CmResourceShareDeviceExclusive,
    CmResourceShareDriverExclusive,
    CmResourceShareShared
} CM_SHARE_DISPOSITION;
#pragma warning(disable:4103)
#pragma pack(push,4)
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
    UCHAR Type;
    UCHAR ShareDisposition;
    USHORT Flags;
    union {
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length;
        } Generic;
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length;
        } Port;
        struct {
            ULONG Level;
            ULONG Vector;
            KAFFINITY Affinity;
        } Interrupt;
        struct {
            union {
               struct {
                   USHORT Reserved;
                   USHORT MessageCount;
                   ULONG Vector;
                   KAFFINITY Affinity;
               } Raw;
               struct {
                   ULONG Level;
                   ULONG Vector;
                   KAFFINITY Affinity;
               } Translated;
            } ;
        } MessageInterrupt;
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length;
        } Memory;
        struct {
            ULONG Channel;
            ULONG Port;
            ULONG Reserved1;
        } Dma;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Start;
            ULONG Length;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG DataSize;
            ULONG Reserved1;
            ULONG Reserved2;
        } DeviceSpecificData;
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length40;
        } Memory40;
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length48;
        } Memory48;
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length64;
        } Memory64;
    } u;
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR;
#pragma warning(disable:4103)
#pragma pack(pop)
typedef struct _CM_PARTIAL_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
} CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST;
typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
    INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR;
typedef struct _CM_RESOURCE_LIST {
    ULONG Count;
    CM_FULL_RESOURCE_DESCRIPTOR List[1];
} CM_RESOURCE_LIST, *PCM_RESOURCE_LIST;
typedef struct _DEVICE_FLAGS {
    ULONG Failed : 1;
    ULONG ReadOnly : 1;
    ULONG Removable : 1;
    ULONG ConsoleIn : 1;
    ULONG ConsoleOut : 1;
    ULONG Input : 1;
    ULONG Output : 1;
} DEVICE_FLAGS, *PDEVICE_FLAGS;
typedef struct _CM_COMPONENT_INFORMATION {
    DEVICE_FLAGS Flags;
    ULONG Version;
    ULONG Key;
    KAFFINITY AffinityMask;
} CM_COMPONENT_INFORMATION, *PCM_COMPONENT_INFORMATION;
typedef struct _CM_ROM_BLOCK {
    ULONG Address;
    ULONG Size;
} CM_ROM_BLOCK, *PCM_ROM_BLOCK;
#pragma warning(disable:4103)
#pragma pack(push,1)
typedef struct _CM_INT13_DRIVE_PARAMETER {
    USHORT DriveSelect;
    ULONG MaxCylinders;
    USHORT SectorsPerTrack;
    USHORT MaxHeads;
    USHORT NumberDrives;
} CM_INT13_DRIVE_PARAMETER, *PCM_INT13_DRIVE_PARAMETER;
typedef struct _CM_MCA_POS_DATA {
    USHORT AdapterId;
    UCHAR PosData1;
    UCHAR PosData2;
    UCHAR PosData3;
    UCHAR PosData4;
} CM_MCA_POS_DATA, *PCM_MCA_POS_DATA;
typedef struct _EISA_MEMORY_TYPE {
    UCHAR ReadWrite: 1;
    UCHAR Cached : 1;
    UCHAR Reserved0 :1;
    UCHAR Type:2;
    UCHAR Shared:1;
    UCHAR Reserved1 :1;
    UCHAR MoreEntries : 1;
} EISA_MEMORY_TYPE, *PEISA_MEMORY_TYPE;
typedef struct _EISA_MEMORY_CONFIGURATION {
    EISA_MEMORY_TYPE ConfigurationByte;
    UCHAR DataSize;
    USHORT AddressLowWord;
    UCHAR AddressHighByte;
    USHORT MemorySize;
} EISA_MEMORY_CONFIGURATION, *PEISA_MEMORY_CONFIGURATION;
typedef struct _EISA_IRQ_DESCRIPTOR {
    UCHAR Interrupt : 4;
    UCHAR Reserved :1;
    UCHAR LevelTriggered :1;
    UCHAR Shared : 1;
    UCHAR MoreEntries : 1;
} EISA_IRQ_DESCRIPTOR, *PEISA_IRQ_DESCRIPTOR;
typedef struct _EISA_IRQ_CONFIGURATION {
    EISA_IRQ_DESCRIPTOR ConfigurationByte;
    UCHAR Reserved;
} EISA_IRQ_CONFIGURATION, *PEISA_IRQ_CONFIGURATION;
typedef struct _DMA_CONFIGURATION_BYTE0 {
    UCHAR Channel : 3;
    UCHAR Reserved : 3;
    UCHAR Shared :1;
    UCHAR MoreEntries :1;
} DMA_CONFIGURATION_BYTE0;
typedef struct _DMA_CONFIGURATION_BYTE1 {
    UCHAR Reserved0 : 2;
    UCHAR TransferSize : 2;
    UCHAR Timing : 2;
    UCHAR Reserved1 : 2;
} DMA_CONFIGURATION_BYTE1;
typedef struct _EISA_DMA_CONFIGURATION {
    DMA_CONFIGURATION_BYTE0 ConfigurationByte0;
    DMA_CONFIGURATION_BYTE1 ConfigurationByte1;
} EISA_DMA_CONFIGURATION, *PEISA_DMA_CONFIGURATION;
typedef struct _EISA_PORT_DESCRIPTOR {
    UCHAR NumberPorts : 5;
    UCHAR Reserved :1;
    UCHAR Shared :1;
    UCHAR MoreEntries : 1;
} EISA_PORT_DESCRIPTOR, *PEISA_PORT_DESCRIPTOR;
typedef struct _EISA_PORT_CONFIGURATION {
    EISA_PORT_DESCRIPTOR Configuration;
    USHORT PortAddress;
} EISA_PORT_CONFIGURATION, *PEISA_PORT_CONFIGURATION;
typedef struct _CM_EISA_SLOT_INFORMATION {
    UCHAR ReturnCode;
    UCHAR ReturnFlags;
    UCHAR MajorRevision;
    UCHAR MinorRevision;
    USHORT Checksum;
    UCHAR NumberFunctions;
    UCHAR FunctionInformation;
    ULONG CompressedId;
} CM_EISA_SLOT_INFORMATION, *PCM_EISA_SLOT_INFORMATION;
typedef struct _CM_EISA_FUNCTION_INFORMATION {
    ULONG CompressedId;
    UCHAR IdSlotFlags1;
    UCHAR IdSlotFlags2;
    UCHAR MinorRevision;
    UCHAR MajorRevision;
    UCHAR Selections[26];
    UCHAR FunctionFlags;
    UCHAR TypeString[80];
    EISA_MEMORY_CONFIGURATION EisaMemory[9];
    EISA_IRQ_CONFIGURATION EisaIrq[7];
    EISA_DMA_CONFIGURATION EisaDma[4];
    EISA_PORT_CONFIGURATION EisaPort[20];
    UCHAR InitializationData[60];
} CM_EISA_FUNCTION_INFORMATION, *PCM_EISA_FUNCTION_INFORMATION;
typedef struct _CM_PNP_BIOS_DEVICE_NODE {
    USHORT Size;
    UCHAR Node;
    ULONG ProductId;
    UCHAR DeviceType[3];
    USHORT DeviceAttributes;
} CM_PNP_BIOS_DEVICE_NODE,*PCM_PNP_BIOS_DEVICE_NODE;
typedef struct _CM_PNP_BIOS_INSTALLATION_CHECK {
    UCHAR Signature[4];
    UCHAR Revision;
    UCHAR Length;
    USHORT ControlField;
    UCHAR Checksum;
    ULONG EventFlagAddress;
    USHORT RealModeEntryOffset;
    USHORT RealModeEntrySegment;
    USHORT ProtectedModeEntryOffset;
    ULONG ProtectedModeCodeBaseAddress;
    ULONG OemDeviceId;
    USHORT RealModeDataBaseAddress;
    ULONG ProtectedModeDataBaseAddress;
} CM_PNP_BIOS_INSTALLATION_CHECK, *PCM_PNP_BIOS_INSTALLATION_CHECK;
#pragma warning(disable:4103)
#pragma pack(pop)
typedef struct _CM_SCSI_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    UCHAR HostIdentifier;
} CM_SCSI_DEVICE_DATA, *PCM_SCSI_DEVICE_DATA;
typedef struct _CM_VIDEO_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    ULONG VideoClock;
} CM_VIDEO_DEVICE_DATA, *PCM_VIDEO_DEVICE_DATA;
typedef struct _CM_SONIC_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    USHORT DataConfigurationRegister;
    UCHAR EthernetAddress[8];
} CM_SONIC_DEVICE_DATA, *PCM_SONIC_DEVICE_DATA;
typedef struct _CM_SERIAL_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    ULONG BaudClock;
} CM_SERIAL_DEVICE_DATA, *PCM_SERIAL_DEVICE_DATA;
typedef struct _CM_MONITOR_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    USHORT HorizontalScreenSize;
    USHORT VerticalScreenSize;
    USHORT HorizontalResolution;
    USHORT VerticalResolution;
    USHORT HorizontalDisplayTimeLow;
    USHORT HorizontalDisplayTime;
    USHORT HorizontalDisplayTimeHigh;
    USHORT HorizontalBackPorchLow;
    USHORT HorizontalBackPorch;
    USHORT HorizontalBackPorchHigh;
    USHORT HorizontalFrontPorchLow;
    USHORT HorizontalFrontPorch;
    USHORT HorizontalFrontPorchHigh;
    USHORT HorizontalSyncLow;
    USHORT HorizontalSync;
    USHORT HorizontalSyncHigh;
    USHORT VerticalBackPorchLow;
    USHORT VerticalBackPorch;
    USHORT VerticalBackPorchHigh;
    USHORT VerticalFrontPorchLow;
    USHORT VerticalFrontPorch;
    USHORT VerticalFrontPorchHigh;
    USHORT VerticalSyncLow;
    USHORT VerticalSync;
    USHORT VerticalSyncHigh;
} CM_MONITOR_DEVICE_DATA, *PCM_MONITOR_DEVICE_DATA;
typedef struct _CM_FLOPPY_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    CHAR Size[8];
    ULONG MaxDensity;
    ULONG MountDensity;
    UCHAR StepRateHeadUnloadTime;
    UCHAR HeadLoadTime;
    UCHAR MotorOffTime;
    UCHAR SectorLengthCode;
    UCHAR SectorPerTrack;
    UCHAR ReadWriteGapLength;
    UCHAR DataTransferLength;
    UCHAR FormatGapLength;
    UCHAR FormatFillCharacter;
    UCHAR HeadSettleTime;
    UCHAR MotorSettleTime;
    UCHAR MaximumTrackValue;
    UCHAR DataTransferRate;
} CM_FLOPPY_DEVICE_DATA, *PCM_FLOPPY_DEVICE_DATA;
typedef struct _CM_KEYBOARD_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    UCHAR Type;
    UCHAR Subtype;
    USHORT KeyboardFlags;
} CM_KEYBOARD_DEVICE_DATA, *PCM_KEYBOARD_DEVICE_DATA;
typedef struct _CM_DISK_GEOMETRY_DEVICE_DATA {
    ULONG BytesPerSector;
    ULONG NumberOfCylinders;
    ULONG SectorsPerTrack;
    ULONG NumberOfHeads;
} CM_DISK_GEOMETRY_DEVICE_DATA, *PCM_DISK_GEOMETRY_DEVICE_DATA;
typedef enum _IRQ_DEVICE_POLICY {
    IrqPolicyMachineDefault = 0,
    IrqPolicyAllCloseProcessors,
    IrqPolicyOneCloseProcessor,
    IrqPolicyAllProcessorsInMachine,
    IrqPolicySpecifiedProcessors,
    IrqPolicySpreadMessagesAcrossAllProcessors
} IRQ_DEVICE_POLICY, *PIRQ_DEVICE_POLICY;
typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow,
    IrqPriorityNormal,
    IrqPriorityHigh
} IRQ_PRIORITY, *PIRQ_PRIORITY;
typedef struct _IO_RESOURCE_DESCRIPTOR {
    UCHAR Option;
    UCHAR Type;
    UCHAR ShareDisposition;
    UCHAR Spare1;
    USHORT Flags;
    USHORT Spare2;
    union {
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Port;
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory;
        struct {
            ULONG MinimumVector;
            ULONG MaximumVector;
            IRQ_DEVICE_POLICY AffinityPolicy;
            IRQ_PRIORITY PriorityPolicy;
            KAFFINITY TargetedProcessors;
        } Interrupt;
        struct {
            ULONG MinimumChannel;
            ULONG MaximumChannel;
        } Dma;
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Generic;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Length;
            ULONG MinBusNumber;
            ULONG MaxBusNumber;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG Priority;
            ULONG Reserved1;
            ULONG Reserved2;
        } ConfigData;
        struct {
            ULONG Length40;
            ULONG Alignment40;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory40;
        struct {
            ULONG Length48;
            ULONG Alignment48;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory48;
        struct {
            ULONG Length64;
            ULONG Alignment64;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory64;
    } u;
} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR;
typedef struct _IO_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST;
typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
    ULONG ListSize;
    INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    ULONG SlotNumber;
    ULONG Reserved[3];
    ULONG AlternativeLists;
    IO_RESOURCE_LIST List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST;
typedef union _SLIST_HEADER {
    ULONGLONG Alignment;
    struct {
        SINGLE_LIST_ENTRY Next;
        USHORT Depth;
        USHORT Sequence;
    } ;
} SLIST_HEADER, *PSLIST_HEADER;
__declspec(dllimport)
void
__stdcall
RtlAssert(
     PVOID VoidFailedAssertion,
     PVOID VoidFileName,
     ULONG LineNumber,
     PSTR MutableMessage
    );
__forceinline
void
InitializeListHead(
     PLIST_ENTRY ListHead
    )
{
    ListHead->Flink = ListHead->Blink = ListHead;
}
BOOLEAN
__forceinline
IsListEmpty(
     const LIST_ENTRY * ListHead
    )
{
    return (BOOLEAN)(ListHead->Flink == ListHead);
}
__forceinline
BOOLEAN
RemoveEntryList(
     PLIST_ENTRY Entry
    )
{
    PLIST_ENTRY Blink;
    PLIST_ENTRY Flink;
    Flink = Entry->Flink;
    Blink = Entry->Blink;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    return (BOOLEAN)(Flink == Blink);
}
__forceinline
PLIST_ENTRY
RemoveHeadList(
     PLIST_ENTRY ListHead
    )
{
    PLIST_ENTRY Flink;
    PLIST_ENTRY Entry;
    Entry = ListHead->Flink;
    Flink = Entry->Flink;
    ListHead->Flink = Flink;
    Flink->Blink = ListHead;
    return Entry;
}
__forceinline
PLIST_ENTRY
RemoveTailList(
     PLIST_ENTRY ListHead
    )
{
    PLIST_ENTRY Blink;
    PLIST_ENTRY Entry;
    Entry = ListHead->Blink;
    Blink = Entry->Blink;
    ListHead->Blink = Blink;
    Blink->Flink = ListHead;
    return Entry;
}
__forceinline
void
InsertTailList(
     PLIST_ENTRY ListHead,
     PLIST_ENTRY Entry
    )
{
    PLIST_ENTRY Blink;
    Blink = ListHead->Blink;
    Entry->Flink = ListHead;
    Entry->Blink = Blink;
    Blink->Flink = Entry;
    ListHead->Blink = Entry;
}
__forceinline
void
InsertHeadList(
     PLIST_ENTRY ListHead,
     PLIST_ENTRY Entry
    )
{
    PLIST_ENTRY Flink;
    Flink = ListHead->Flink;
    Entry->Flink = Flink;
    Entry->Blink = ListHead;
    Flink->Blink = Entry;
    ListHead->Flink = Entry;
}
__forceinline
void
AppendTailList(
     PLIST_ENTRY ListHead,
     PLIST_ENTRY ListToAppend
    )
{
    PLIST_ENTRY ListEnd = ListHead->Blink;
    ListHead->Blink->Flink = ListToAppend;
    ListHead->Blink = ListToAppend->Blink;
    ListToAppend->Blink->Flink = ListHead;
    ListToAppend->Blink = ListEnd;
}
__forceinline
PSINGLE_LIST_ENTRY
PopEntryList(
    PSINGLE_LIST_ENTRY ListHead
    )
{
    PSINGLE_LIST_ENTRY FirstEntry;
    FirstEntry = ListHead->Next;
    if (FirstEntry != ((void *)0)) {
        ListHead->Next = FirstEntry->Next;
    }
    return FirstEntry;
}
__forceinline
void
PushEntryList(
    PSINGLE_LIST_ENTRY ListHead,
    PSINGLE_LIST_ENTRY Entry
    )
{
    Entry->Next = ListHead->Next;
    ListHead->Next = Entry;
}
typedef NTSTATUS (__stdcall * PRTL_QUERY_REGISTRY_ROUTINE)(
     PWSTR ValueName,
     ULONG ValueType,
     PVOID ValueData,
     ULONG ValueLength,
     PVOID Context,
     PVOID EntryContext
    );
typedef struct _RTL_QUERY_REGISTRY_TABLE {
    PRTL_QUERY_REGISTRY_ROUTINE QueryRoutine;
    ULONG Flags;
    PWSTR Name;
    PVOID EntryContext;
    ULONG DefaultType;
    PVOID DefaultData;
    ULONG DefaultLength;
} RTL_QUERY_REGISTRY_TABLE, *PRTL_QUERY_REGISTRY_TABLE;
__declspec(dllimport)
NTSTATUS
__stdcall
RtlQueryRegistryValues(
     ULONG RelativeTo,
     PCWSTR Path,
     PRTL_QUERY_REGISTRY_TABLE QueryTable,
     PVOID Context,
     PVOID Environment
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlWriteRegistryValue(
     ULONG RelativeTo,
     PCWSTR Path,
     PCWSTR ValueName,
     ULONG ValueType,
     PVOID ValueData,
     ULONG ValueLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlDeleteRegistryValue(
     ULONG RelativeTo,
     PCWSTR Path,
     PCWSTR ValueName
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlCreateRegistryKey(
     ULONG RelativeTo,
     PWSTR Path
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlCheckRegistryKey(
     ULONG RelativeTo,
     PWSTR Path
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlIntegerToUnicodeString (
    ULONG Value,
    ULONG Base,
    PUNICODE_STRING String
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlInt64ToUnicodeString (
     ULONGLONG Value,
     ULONG Base ,
      PUNICODE_STRING String
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlUnicodeStringToInteger (
    PCUNICODE_STRING String,
    ULONG Base,
    PULONG Value
    );
extern BOOLEAN (*NlsMbCodePageTag);
extern BOOLEAN (*NlsMbOemCodePageTag);
__declspec(dllimport)
void
__stdcall
RtlInitString(
    PSTRING DestinationString,
    PCSZ SourceString
    );
__declspec(dllimport)
void
__stdcall
RtlInitAnsiString(
     PANSI_STRING DestinationString,
     PCSZ SourceString
    );
__declspec(dllimport)
void
__stdcall
RtlInitUnicodeString(
     PUNICODE_STRING DestinationString,
     PCWSTR SourceString
    );
__forceinline
void
RtlInitEmptyUnicodeString(
     PUNICODE_STRING UnicodeString,
     PWSTR Buffer,
     USHORT BufferSize
    )
{
    UnicodeString->Length = 0;
    UnicodeString->MaximumLength = BufferSize;
    UnicodeString->Buffer = Buffer;
}
__forceinline
void
RtlInitEmptyAnsiString(
     PANSI_STRING AnsiString,
     PCHAR Buffer,
     USHORT BufferSize
    )
{
    AnsiString->Length = 0;
    AnsiString->MaximumLength = BufferSize;
    AnsiString->Buffer = Buffer;
}
__declspec(dllimport)
NTSTATUS
__stdcall
RtlAnsiStringToUnicodeString(
     PUNICODE_STRING DestinationString,
     PCANSI_STRING SourceString,
     BOOLEAN AllocateDestinationString
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlUnicodeStringToAnsiString(
     PANSI_STRING DestinationString,
     PCUNICODE_STRING SourceString,
     BOOLEAN AllocateDestinationString
    );
__declspec(dllimport)
LONG
__stdcall
RtlCompareUnicodeStrings(
     PCWCH String1,
     SIZE_T String1Length,
     PCWCH String2,
     SIZE_T String2Length,
     BOOLEAN CaseInSensitive
    );
__declspec(dllimport)
LONG
__stdcall
RtlCompareUnicodeString(
     PCUNICODE_STRING String1,
     PCUNICODE_STRING String2,
     BOOLEAN CaseInSensitive
    );
__declspec(dllimport)
BOOLEAN
__stdcall
RtlEqualUnicodeString(
     PCUNICODE_STRING String1,
     PCUNICODE_STRING String2,
     BOOLEAN CaseInSensitive
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlHashUnicodeString(
     const UNICODE_STRING *String,
     BOOLEAN CaseInSensitive,
     ULONG HashAlgorithm,
     PULONG HashValue
    );
__declspec(dllimport)
void
__stdcall
RtlCopyUnicodeString(
     PUNICODE_STRING DestinationString,
     PCUNICODE_STRING SourceString
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlAppendUnicodeStringToString (
     PUNICODE_STRING Destination,
     PCUNICODE_STRING Source
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlAppendUnicodeToString (
     PUNICODE_STRING Destination,
     PCWSTR Source
    );
__declspec(dllimport)
WCHAR
__stdcall
RtlUpcaseUnicodeChar(
     WCHAR SourceCharacter
    );
__declspec(dllimport)
WCHAR
__stdcall
RtlDowncaseUnicodeChar(
    WCHAR SourceCharacter
    );
__declspec(dllimport)
void
__stdcall
RtlFreeUnicodeString(
     PUNICODE_STRING UnicodeString
    );
__declspec(dllimport)
void
__stdcall
RtlFreeAnsiString(
     PANSI_STRING AnsiString
    );
__declspec(dllimport)
ULONG
__stdcall
RtlxUnicodeStringToAnsiSize(
    PCUNICODE_STRING UnicodeString
    );
__declspec(dllimport)
ULONG
__stdcall
RtlxAnsiStringToUnicodeSize(
     PCANSI_STRING AnsiString
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlStringFromGUID(
     const GUID * const Guid,
     PUNICODE_STRING GuidString
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlGUIDFromString(
     PUNICODE_STRING GuidString,
     GUID* Guid
    );
__declspec(dllimport)
SIZE_T
__stdcall
RtlCompareMemory (
    const void *Source1,
    const void *Source2,
    SIZE_T Length
    );
__forceinline
PVOID
RtlSecureZeroMemory(
     PVOID ptr,
     SIZE_T cnt
    )
{
    volatile char *vptr = (volatile char *)ptr;
    while (cnt) {
        *vptr = 0;
        vptr++;
        cnt--;
    }
    return ptr;
}
__declspec(dllimport)
void
__fastcall
RtlPrefetchMemoryNonTemporal(
     PVOID Source,
     SIZE_T Length
    );
void
__stdcall
DbgBreakPoint(
    void
    );
__declspec(dllimport)
void
__stdcall
DbgBreakPointWithStatus(
     ULONG Status
    );
ULONG
__cdecl
DbgPrint (
     PCCH Format,
    ...
    );
__declspec(dllimport)
ULONG
__cdecl
DbgPrintEx (
     ULONG ComponentId,
     ULONG Level,
     PCCH Format,
    ...
    );
__declspec(dllimport)
ULONG
__stdcall
vDbgPrintEx(
     ULONG ComponentId,
     ULONG Level,
     PCCH Format,
     va_list arglist
    );
__declspec(dllimport)
ULONG
__stdcall
vDbgPrintExWithPrefix (
     PCCH Prefix,
     ULONG ComponentId,
     ULONG Level,
     PCCH Format,
     va_list arglist
    );
__declspec(dllimport)
ULONG
__cdecl
DbgPrintReturnControlC (
     PCCH Format,
    ...
    );
__declspec(dllimport)
NTSTATUS
__stdcall
DbgQueryDebugFilterState (
     ULONG ComponentId,
     ULONG Level
    );
__declspec(dllimport)
NTSTATUS
__stdcall
DbgSetDebugFilterState (
     ULONG ComponentId,
     ULONG Level,
     BOOLEAN State
    );
__declspec(deprecated)
__inline
LARGE_INTEGER
__stdcall
RtlLargeIntegerAdd (
    LARGE_INTEGER Addend1,
    LARGE_INTEGER Addend2
    )
{
    LARGE_INTEGER Sum;
    Sum.QuadPart = Addend1.QuadPart + Addend2.QuadPart;
    return Sum;
}
__declspec(deprecated)
__inline
LARGE_INTEGER
__stdcall
RtlEnlargedIntegerMultiply (
    LONG Multiplicand,
    LONG Multiplier
    )
{
    LARGE_INTEGER Product;
    Product.QuadPart = (LONGLONG)Multiplicand * (ULONGLONG)Multiplier;
    return Product;
}
__declspec(deprecated)
__inline
LARGE_INTEGER
__stdcall
RtlEnlargedUnsignedMultiply (
    ULONG Multiplicand,
    ULONG Multiplier
    )
{
    LARGE_INTEGER Product;
    Product.QuadPart = (ULONGLONG)Multiplicand * (ULONGLONG)Multiplier;
    return Product;
}
__declspec(deprecated)
__inline
ULONG
__stdcall
RtlEnlargedUnsignedDivide (
     ULARGE_INTEGER Dividend,
     ULONG Divisor,
     PULONG Remainder
    )
{
    ULONG Quotient;
    Quotient = (ULONG)(Dividend.QuadPart / Divisor);
    if (( (CHAR *)((ULONG_PTR)(Remainder)) != (CHAR *)(((void *)0)) )) {
        *Remainder = (ULONG)(Dividend.QuadPart % Divisor);
    }
    return Quotient;
}
__declspec(deprecated)
__inline
LARGE_INTEGER
__stdcall
RtlLargeIntegerNegate (
    LARGE_INTEGER Subtrahend
    )
{
    LARGE_INTEGER Difference;
    Difference.QuadPart = -Subtrahend.QuadPart;
    return Difference;
}
__declspec(deprecated)
__inline
LARGE_INTEGER
__stdcall
RtlLargeIntegerSubtract (
    LARGE_INTEGER Minuend,
    LARGE_INTEGER Subtrahend
    )
{
    LARGE_INTEGER Difference;
    Difference.QuadPart = Minuend.QuadPart - Subtrahend.QuadPart;
    return Difference;
}
__declspec(deprecated)
__declspec(dllimport)
LARGE_INTEGER
__stdcall
RtlExtendedMagicDivide (
    LARGE_INTEGER Dividend,
    LARGE_INTEGER MagicDivisor,
    CCHAR ShiftCount
    );
__declspec(deprecated)
__declspec(dllimport)
LARGE_INTEGER
__stdcall
RtlExtendedLargeIntegerDivide (
    LARGE_INTEGER Dividend,
    ULONG Divisor,
    PULONG Remainder
    );
__declspec(deprecated)
__declspec(dllimport)
LARGE_INTEGER
__stdcall
RtlExtendedIntegerMultiply (
    LARGE_INTEGER Multiplicand,
    LONG Multiplier
    );
#pragma deprecated(RtlLargeIntegerAnd)
__declspec(deprecated)
__inline
LARGE_INTEGER
__stdcall
RtlConvertLongToLargeInteger (
    LONG SignedInteger
    )
{
    LARGE_INTEGER Result;
    Result.QuadPart = SignedInteger;
    return Result;
}
__declspec(deprecated)
__inline
LARGE_INTEGER
__stdcall
RtlConvertUlongToLargeInteger (
    ULONG UnsignedInteger
    )
{
    LARGE_INTEGER Result;
    Result.QuadPart = UnsignedInteger;
    return Result;
}
__declspec(deprecated)
__inline
LARGE_INTEGER
__stdcall
RtlLargeIntegerShiftLeft (
    LARGE_INTEGER LargeInteger,
    CCHAR ShiftCount
    )
{
    LARGE_INTEGER Result;
    Result.QuadPart = LargeInteger.QuadPart << ShiftCount;
    return Result;
}
__declspec(deprecated)
__inline
LARGE_INTEGER
__stdcall
RtlLargeIntegerShiftRight (
    LARGE_INTEGER LargeInteger,
    CCHAR ShiftCount
    )
{
    LARGE_INTEGER Result;
    Result.QuadPart = (ULONG64)LargeInteger.QuadPart >> ShiftCount;
    return Result;
}
__declspec(deprecated)
__inline
LARGE_INTEGER
__stdcall
RtlLargeIntegerArithmeticShift (
    LARGE_INTEGER LargeInteger,
    CCHAR ShiftCount
    )
{
    LARGE_INTEGER Result;
    Result.QuadPart = LargeInteger.QuadPart >> ShiftCount;
    return Result;
}
#pragma deprecated(RtlLargeIntegerGreaterThan)
#pragma deprecated(RtlLargeIntegerGreaterThanOrEqualTo)
#pragma deprecated(RtlLargeIntegerEqualTo)
#pragma deprecated(RtlLargeIntegerNotEqualTo)
#pragma deprecated(RtlLargeIntegerLessThan)
#pragma deprecated(RtlLargeIntegerLessThanOrEqualTo)
#pragma deprecated(RtlLargeIntegerGreaterThanZero)
#pragma deprecated(RtlLargeIntegerGreaterOrEqualToZero)
#pragma deprecated(RtlLargeIntegerEqualToZero)
#pragma deprecated(RtlLargeIntegerNotEqualToZero)
#pragma deprecated(RtlLargeIntegerLessThanZero)
#pragma deprecated(RtlLargeIntegerLessOrEqualToZero)
typedef struct _TIME_FIELDS {
    CSHORT Year;
    CSHORT Month;
    CSHORT Day;
    CSHORT Hour;
    CSHORT Minute;
    CSHORT Second;
    CSHORT Milliseconds;
    CSHORT Weekday;
} TIME_FIELDS;
typedef TIME_FIELDS *PTIME_FIELDS;
__declspec(dllimport)
void
__stdcall
RtlTimeToTimeFields (
    PLARGE_INTEGER Time,
    PTIME_FIELDS TimeFields
    );
__declspec(dllimport)
BOOLEAN
__stdcall
RtlTimeFieldsToTime (
    PTIME_FIELDS TimeFields,
    PLARGE_INTEGER Time
    );
typedef struct _RTL_BITMAP {
    ULONG SizeOfBitMap;
    PULONG Buffer;
} RTL_BITMAP;
typedef RTL_BITMAP *PRTL_BITMAP;
__declspec(dllimport)
void
__stdcall
RtlInitializeBitMap (
    PRTL_BITMAP BitMapHeader,
    PULONG BitMapBuffer,
    ULONG SizeOfBitMap
    );
__declspec(dllimport)
void
__stdcall
RtlClearBit (
    PRTL_BITMAP BitMapHeader,
    ULONG BitNumber
    );
__declspec(dllimport)
void
__stdcall
RtlSetBit (
    PRTL_BITMAP BitMapHeader,
    ULONG BitNumber
    );
__declspec(dllimport)
BOOLEAN
__stdcall
RtlTestBit (
    PRTL_BITMAP BitMapHeader,
    ULONG BitNumber
    );
__declspec(dllimport)
void
__stdcall
RtlClearAllBits (
    PRTL_BITMAP BitMapHeader
    );
__declspec(dllimport)
void
__stdcall
RtlSetAllBits (
    PRTL_BITMAP BitMapHeader
    );
__declspec(dllimport)
ULONG
__stdcall
RtlFindClearBits (
    PRTL_BITMAP BitMapHeader,
    ULONG NumberToFind,
    ULONG HintIndex
    );
__declspec(dllimport)
ULONG
__stdcall
RtlFindSetBits (
    PRTL_BITMAP BitMapHeader,
    ULONG NumberToFind,
    ULONG HintIndex
    );
__declspec(dllimport)
ULONG
__stdcall
RtlFindClearBitsAndSet (
    PRTL_BITMAP BitMapHeader,
    ULONG NumberToFind,
    ULONG HintIndex
    );
__declspec(dllimport)
ULONG
__stdcall
RtlFindSetBitsAndClear (
    PRTL_BITMAP BitMapHeader,
    ULONG NumberToFind,
    ULONG HintIndex
    );
__declspec(dllimport)
void
__stdcall
RtlClearBits (
    PRTL_BITMAP BitMapHeader,
    ULONG StartingIndex,
    ULONG NumberToClear
    );
__declspec(dllimport)
void
__stdcall
RtlSetBits (
    PRTL_BITMAP BitMapHeader,
    ULONG StartingIndex,
    ULONG NumberToSet
    );
typedef struct _RTL_BITMAP_RUN {
    ULONG StartingIndex;
    ULONG NumberOfBits;
} RTL_BITMAP_RUN;
typedef RTL_BITMAP_RUN *PRTL_BITMAP_RUN;
__declspec(dllimport)
ULONG
__stdcall
RtlFindClearRuns (
    PRTL_BITMAP BitMapHeader,
    PRTL_BITMAP_RUN RunArray,
    ULONG SizeOfRunArray,
    BOOLEAN LocateLongestRuns
    );
__declspec(dllimport)
ULONG
__stdcall
RtlFindLongestRunClear (
    PRTL_BITMAP BitMapHeader,
    PULONG StartingIndex
    );
__declspec(dllimport)
ULONG
__stdcall
RtlFindFirstRunClear (
    PRTL_BITMAP BitMapHeader,
    PULONG StartingIndex
    );
__declspec(dllimport)
ULONG
__stdcall
RtlNumberOfClearBits (
    PRTL_BITMAP BitMapHeader
    );
__declspec(dllimport)
ULONG
__stdcall
RtlNumberOfSetBits (
    PRTL_BITMAP BitMapHeader
    );
__declspec(dllimport)
BOOLEAN
__stdcall
RtlAreBitsClear (
    PRTL_BITMAP BitMapHeader,
    ULONG StartingIndex,
    ULONG Length
    );
__declspec(dllimport)
BOOLEAN
__stdcall
RtlAreBitsSet (
    PRTL_BITMAP BitMapHeader,
    ULONG StartingIndex,
    ULONG Length
    );
__declspec(dllimport)
ULONG
__stdcall
RtlFindNextForwardRunClear (
     PRTL_BITMAP BitMapHeader,
     ULONG FromIndex,
     PULONG StartingRunIndex
    );
__declspec(dllimport)
ULONG
__stdcall
RtlFindLastBackwardRunClear (
     PRTL_BITMAP BitMapHeader,
     ULONG FromIndex,
     PULONG StartingRunIndex
    );
__declspec(dllimport)
CCHAR
__stdcall
RtlFindLeastSignificantBit (
     ULONGLONG Set
    );
__declspec(dllimport)
CCHAR
__stdcall
RtlFindMostSignificantBit (
     ULONGLONG Set
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlCreateSecurityDescriptor (
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    ULONG Revision
    );
__declspec(dllimport)
BOOLEAN
__stdcall
RtlValidSecurityDescriptor (
    PSECURITY_DESCRIPTOR SecurityDescriptor
    );
__declspec(dllimport)
ULONG
__stdcall
RtlLengthSecurityDescriptor (
    PSECURITY_DESCRIPTOR SecurityDescriptor
    );
__declspec(dllimport)
BOOLEAN
__stdcall
RtlValidRelativeSecurityDescriptor (
     PSECURITY_DESCRIPTOR SecurityDescriptorInput,
     ULONG SecurityDescriptorLength,
     SECURITY_INFORMATION RequiredInformation
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlSetDaclSecurityDescriptor (
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    BOOLEAN DaclPresent,
    PACL Dacl,
    BOOLEAN DaclDefaulted
    );
 unsigned short __cdecl _byteswap_ushort(unsigned short);
 unsigned long __cdecl _byteswap_ulong (unsigned long);
unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64);
#pragma intrinsic(_byteswap_ushort)
#pragma intrinsic(_byteswap_ulong)
#pragma intrinsic(_byteswap_uint64)
typedef BOOLEAN (*PFN_RTL_IS_NTDDI_VERSION_AVAILABLE)(
     ULONG Version
    );
typedef BOOLEAN (*PFN_RTL_IS_SERVICE_PACK_VERSION_INSTALLED)(
     ULONG Version
    );
BOOLEAN
RtlIsNtDdiVersionAvailable(
    ULONG Version
    );
BOOLEAN
RtlIsServicePackVersionInstalled(
    ULONG Version
    );
BOOLEAN
WdmlibRtlIsNtDdiVersionAvailable(
    ULONG Version
    );
BOOLEAN
WdmlibRtlIsServicePackVersionInstalled(
    ULONG Version
    );
typedef enum _DPFLTR_TYPE {
    DPFLTR_SYSTEM_ID = 0,
    DPFLTR_SMSS_ID = 1,
    DPFLTR_SETUP_ID = 2,
    DPFLTR_NTFS_ID = 3,
    DPFLTR_FSTUB_ID = 4,
    DPFLTR_CRASHDUMP_ID = 5,
    DPFLTR_CDAUDIO_ID = 6,
    DPFLTR_CDROM_ID = 7,
    DPFLTR_CLASSPNP_ID = 8,
    DPFLTR_DISK_ID = 9,
    DPFLTR_REDBOOK_ID = 10,
    DPFLTR_STORPROP_ID = 11,
    DPFLTR_SCSIPORT_ID = 12,
    DPFLTR_SCSIMINIPORT_ID = 13,
    DPFLTR_CONFIG_ID = 14,
    DPFLTR_I8042PRT_ID = 15,
    DPFLTR_SERMOUSE_ID = 16,
    DPFLTR_LSERMOUS_ID = 17,
    DPFLTR_KBDHID_ID = 18,
    DPFLTR_MOUHID_ID = 19,
    DPFLTR_KBDCLASS_ID = 20,
    DPFLTR_MOUCLASS_ID = 21,
    DPFLTR_TWOTRACK_ID = 22,
    DPFLTR_WMILIB_ID = 23,
    DPFLTR_ACPI_ID = 24,
    DPFLTR_AMLI_ID = 25,
    DPFLTR_HALIA64_ID = 26,
    DPFLTR_VIDEO_ID = 27,
    DPFLTR_SVCHOST_ID = 28,
    DPFLTR_VIDEOPRT_ID = 29,
    DPFLTR_TCPIP_ID = 30,
    DPFLTR_DMSYNTH_ID = 31,
    DPFLTR_NTOSPNP_ID = 32,
    DPFLTR_FASTFAT_ID = 33,
    DPFLTR_SAMSS_ID = 34,
    DPFLTR_PNPMGR_ID = 35,
    DPFLTR_NETAPI_ID = 36,
    DPFLTR_SCSERVER_ID = 37,
    DPFLTR_SCCLIENT_ID = 38,
    DPFLTR_SERIAL_ID = 39,
    DPFLTR_SERENUM_ID = 40,
    DPFLTR_UHCD_ID = 41,
    DPFLTR_RPCPROXY_ID = 42,
    DPFLTR_AUTOCHK_ID = 43,
    DPFLTR_DCOMSS_ID = 44,
    DPFLTR_UNIMODEM_ID = 45,
    DPFLTR_SIS_ID = 46,
    DPFLTR_FLTMGR_ID = 47,
    DPFLTR_WMICORE_ID = 48,
    DPFLTR_BURNENG_ID = 49,
    DPFLTR_IMAPI_ID = 50,
    DPFLTR_SXS_ID = 51,
    DPFLTR_FUSION_ID = 52,
    DPFLTR_IDLETASK_ID = 53,
    DPFLTR_SOFTPCI_ID = 54,
    DPFLTR_TAPE_ID = 55,
    DPFLTR_MCHGR_ID = 56,
    DPFLTR_IDEP_ID = 57,
    DPFLTR_PCIIDE_ID = 58,
    DPFLTR_FLOPPY_ID = 59,
    DPFLTR_FDC_ID = 60,
    DPFLTR_TERMSRV_ID = 61,
    DPFLTR_W32TIME_ID = 62,
    DPFLTR_PREFETCHER_ID = 63,
    DPFLTR_RSFILTER_ID = 64,
    DPFLTR_FCPORT_ID = 65,
    DPFLTR_PCI_ID = 66,
    DPFLTR_DMIO_ID = 67,
    DPFLTR_DMCONFIG_ID = 68,
    DPFLTR_DMADMIN_ID = 69,
    DPFLTR_WSOCKTRANSPORT_ID = 70,
    DPFLTR_VSS_ID = 71,
    DPFLTR_PNPMEM_ID = 72,
    DPFLTR_PROCESSOR_ID = 73,
    DPFLTR_DMSERVER_ID = 74,
    DPFLTR_SR_ID = 75,
    DPFLTR_INFINIBAND_ID = 76,
    DPFLTR_IHVDRIVER_ID = 77,
    DPFLTR_IHVVIDEO_ID = 78,
    DPFLTR_IHVAUDIO_ID = 79,
    DPFLTR_IHVNETWORK_ID = 80,
    DPFLTR_IHVSTREAMING_ID = 81,
    DPFLTR_IHVBUS_ID = 82,
    DPFLTR_HPS_ID = 83,
    DPFLTR_RTLTHREADPOOL_ID = 84,
    DPFLTR_LDR_ID = 85,
    DPFLTR_TCPIP6_ID = 86,
    DPFLTR_ISAPNP_ID = 87,
    DPFLTR_SHPC_ID = 88,
    DPFLTR_STORPORT_ID = 89,
    DPFLTR_STORMINIPORT_ID = 90,
    DPFLTR_PRINTSPOOLER_ID = 91,
    DPFLTR_VSSDYNDISK_ID = 92,
    DPFLTR_VERIFIER_ID = 93,
    DPFLTR_VDS_ID = 94,
    DPFLTR_VDSBAS_ID = 95,
    DPFLTR_VDSDYN_ID = 96,
    DPFLTR_VDSDYNDR_ID = 97,
    DPFLTR_VDSLDR_ID = 98,
    DPFLTR_VDSUTIL_ID = 99,
    DPFLTR_DFRGIFC_ID = 100,
    DPFLTR_DEFAULT_ID = 101,
    DPFLTR_MM_ID = 102,
    DPFLTR_DFSC_ID = 103,
    DPFLTR_WOW64_ID = 104,
    DPFLTR_ALPC_ID = 105,
    DPFLTR_WDI_ID = 106,
    DPFLTR_PERFLIB_ID = 107,
    DPFLTR_KTM_ID = 108,
    DPFLTR_IOSTRESS_ID = 109,
    DPFLTR_HEAP_ID = 110,
    DPFLTR_WHEA_ID = 111,
    DPFLTR_USERGDI_ID = 112,
    DPFLTR_MMCSS_ID = 113,
    DPFLTR_TPM_ID = 114,
    DPFLTR_THREADORDER_ID = 115,
    DPFLTR_ENVIRON_ID = 116,
    DPFLTR_EMS_ID = 117,
    DPFLTR_WDT_ID = 118,
    DPFLTR_FVEVOL_ID = 119,
    DPFLTR_NDIS_ID = 120,
    DPFLTR_NVCTRACE_ID = 121,
    DPFLTR_LUAFV_ID = 122,
    DPFLTR_APPCOMPAT_ID = 123,
    DPFLTR_USBSTOR_ID = 124,
    DPFLTR_SBP2PORT_ID = 125,
    DPFLTR_COVERAGE_ID = 126,
    DPFLTR_CACHEMGR_ID = 127,
    DPFLTR_MOUNTMGR_ID = 128,
    DPFLTR_CFR_ID = 129,
    DPFLTR_TXF_ID = 130,
    DPFLTR_KSECDD_ID = 131,
    DPFLTR_FLTREGRESS_ID = 132,
    DPFLTR_MPIO_ID = 133,
    DPFLTR_MSDSM_ID = 134,
    DPFLTR_UDFS_ID = 135,
    DPFLTR_PSHED_ID = 136,
    DPFLTR_STORVSP_ID = 137,
    DPFLTR_EXFAT_ID = 138,
    DPFLTR_ENDOFTABLE_ID
} DPFLTR_TYPE;
typedef GUID UOW, *PUOW;
typedef GUID CRM_PROTOCOL_ID, *PCRM_PROTOCOL_ID;
typedef ULONG NOTIFICATION_MASK;
typedef struct _TRANSACTION_NOTIFICATION {
    PVOID TransactionKey;
    ULONG TransactionNotification;
    LARGE_INTEGER TmVirtualClock;
    ULONG ArgumentLength;
} TRANSACTION_NOTIFICATION, *PTRANSACTION_NOTIFICATION;
typedef struct _TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT {
    GUID EnlistmentId;
    UOW UOW;
} TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT, *PTRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT;
typedef struct _TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT {
    GUID TmIdentity;
    ULONG Flags;
} TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT, *PTRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT;
typedef ULONG SAVEPOINT_ID, *PSAVEPOINT_ID;
typedef struct _TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT {
    SAVEPOINT_ID SavepointId;
} TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT, *PTRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT;
typedef struct _TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT {
    ULONG PropagationCookie;
    GUID UOW;
    GUID TmIdentity;
    ULONG BufferLength;
} TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT;
typedef struct _TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT {
    ULONG MarshalCookie;
    GUID UOW;
} TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT, *PTRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT;
typedef TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT TRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT;
typedef struct _KCRM_MARSHAL_HEADER {
    ULONG VersionMajor;
    ULONG VersionMinor;
    ULONG NumProtocols;
    ULONG Unused;
} KCRM_MARSHAL_HEADER, *PKCRM_MARSHAL_HEADER, * PRKCRM_MARSHAL_HEADER;
typedef struct _KCRM_TRANSACTION_BLOB {
    UOW UOW;
    GUID TmIdentity;
    ULONG IsolationLevel;
    ULONG IsolationFlags;
    ULONG Timeout;
    WCHAR Description[64];
} KCRM_TRANSACTION_BLOB, *PKCRM_TRANSACTION_BLOB, * PRKCRM_TRANSACTION_BLOB;
typedef struct _KCRM_PROTOCOL_BLOB {
    CRM_PROTOCOL_ID ProtocolId;
     ULONG StaticInfoLength;
    ULONG TransactionIdInfoLength;
    ULONG Unused1;
    ULONG Unused2;
} KCRM_PROTOCOL_BLOB, *PKCRM_PROTOCOL_BLOB, * PRKCRM_PROTOCOL_BLOB;
typedef enum _TRANSACTION_OUTCOME {
    TransactionOutcomeUndetermined = 1,
    TransactionOutcomeCommitted,
    TransactionOutcomeAborted,
} TRANSACTION_OUTCOME;
typedef enum _TRANSACTION_STATE {
    TransactionStateNormal = 1,
    TransactionStateIndoubt,
    TransactionStateCommittedNotify,
} TRANSACTION_STATE;
typedef struct _TRANSACTION_BASIC_INFORMATION {
    GUID TransactionId;
    ULONG State;
    ULONG Outcome;
} TRANSACTION_BASIC_INFORMATION, *PTRANSACTION_BASIC_INFORMATION;
typedef struct _TRANSACTIONMANAGER_BASIC_INFORMATION {
    GUID TmIdentity;
    LARGE_INTEGER VirtualClock;
} TRANSACTIONMANAGER_BASIC_INFORMATION, *PTRANSACTIONMANAGER_BASIC_INFORMATION;
typedef struct _TRANSACTIONMANAGER_LOG_INFORMATION {
    GUID LogIdentity;
} TRANSACTIONMANAGER_LOG_INFORMATION, *PTRANSACTIONMANAGER_LOG_INFORMATION;
typedef struct _TRANSACTIONMANAGER_LOGPATH_INFORMATION {
    ULONG LogPathLength;
     WCHAR LogPath[1];
} TRANSACTIONMANAGER_LOGPATH_INFORMATION, *PTRANSACTIONMANAGER_LOGPATH_INFORMATION;
typedef struct _TRANSACTIONMANAGER_RECOVERY_INFORMATION {
    ULONGLONG LastRecoveredLsn;
} TRANSACTIONMANAGER_RECOVERY_INFORMATION, *PTRANSACTIONMANAGER_RECOVERY_INFORMATION;
typedef struct _TRANSACTION_PROPERTIES_INFORMATION {
    ULONG IsolationLevel;
    ULONG IsolationFlags;
    LARGE_INTEGER Timeout;
    ULONG Outcome;
    ULONG DescriptionLength;
    WCHAR Description[1];
} TRANSACTION_PROPERTIES_INFORMATION, *PTRANSACTION_PROPERTIES_INFORMATION;
typedef struct _TRANSACTION_BIND_INFORMATION {
    HANDLE TmHandle;
} TRANSACTION_BIND_INFORMATION, *PTRANSACTION_BIND_INFORMATION;
typedef struct _TRANSACTION_ENLISTMENT_PAIR {
    GUID EnlistmentId;
    GUID ResourceManagerId;
} TRANSACTION_ENLISTMENT_PAIR, *PTRANSACTION_ENLISTMENT_PAIR;
typedef struct _TRANSACTION_ENLISTMENTS_INFORMATION {
    ULONG NumberOfEnlistments;
    TRANSACTION_ENLISTMENT_PAIR EnlistmentPair[1];
} TRANSACTION_ENLISTMENTS_INFORMATION, *PTRANSACTION_ENLISTMENTS_INFORMATION;
typedef struct _TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION {
    TRANSACTION_ENLISTMENT_PAIR SuperiorEnlistmentPair;
} TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION, *PTRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION;
typedef struct _RESOURCEMANAGER_BASIC_INFORMATION {
    GUID ResourceManagerId;
    ULONG DescriptionLength;
    WCHAR Description[1];
} RESOURCEMANAGER_BASIC_INFORMATION, *PRESOURCEMANAGER_BASIC_INFORMATION;
typedef struct _RESOURCEMANAGER_COMPLETION_INFORMATION {
    HANDLE IoCompletionPortHandle;
    ULONG_PTR CompletionKey;
} RESOURCEMANAGER_COMPLETION_INFORMATION, *PRESOURCEMANAGER_COMPLETION_INFORMATION;
typedef enum _TRANSACTION_INFORMATION_CLASS {
    TransactionBasicInformation,
    TransactionPropertiesInformation,
    TransactionEnlistmentInformation,
    TransactionSuperiorEnlistmentInformation
} TRANSACTION_INFORMATION_CLASS;
typedef enum _TRANSACTIONMANAGER_INFORMATION_CLASS {
    TransactionManagerBasicInformation,
    TransactionManagerLogInformation,
    TransactionManagerLogPathInformation,
    TransactionManagerRecoveryInformation = 4
} TRANSACTIONMANAGER_INFORMATION_CLASS;
typedef enum _RESOURCEMANAGER_INFORMATION_CLASS {
    ResourceManagerBasicInformation,
    ResourceManagerCompletionInformation,
} RESOURCEMANAGER_INFORMATION_CLASS;
typedef struct _ENLISTMENT_BASIC_INFORMATION {
    GUID EnlistmentId;
    GUID TransactionId;
    GUID ResourceManagerId;
} ENLISTMENT_BASIC_INFORMATION, *PENLISTMENT_BASIC_INFORMATION;
typedef struct _ENLISTMENT_CRM_INFORMATION {
    GUID CrmTransactionManagerId;
    GUID CrmResourceManagerId;
    GUID CrmEnlistmentId;
} ENLISTMENT_CRM_INFORMATION, *PENLISTMENT_CRM_INFORMATION;
typedef enum _ENLISTMENT_INFORMATION_CLASS {
    EnlistmentBasicInformation,
    EnlistmentRecoveryInformation,
    EnlistmentCrmInformation
} ENLISTMENT_INFORMATION_CLASS;
typedef struct _TRANSACTION_LIST_ENTRY {
    UOW UOW;
} TRANSACTION_LIST_ENTRY, *PTRANSACTION_LIST_ENTRY;
typedef struct _TRANSACTION_LIST_INFORMATION {
    ULONG NumberOfTransactions;
    TRANSACTION_LIST_ENTRY TransactionInformation[1];
} TRANSACTION_LIST_INFORMATION, *PTRANSACTION_LIST_INFORMATION;
typedef enum _KTMOBJECT_TYPE {
    KTMOBJECT_TRANSACTION,
    KTMOBJECT_TRANSACTION_MANAGER,
    KTMOBJECT_RESOURCE_MANAGER,
    KTMOBJECT_ENLISTMENT,
    KTMOBJECT_INVALID
} KTMOBJECT_TYPE, *PKTMOBJECT_TYPE;
typedef struct _KTMOBJECT_CURSOR {
    GUID LastQuery;
    ULONG ObjectIdCount;
    GUID ObjectIds[1];
} KTMOBJECT_CURSOR, *PKTMOBJECT_CURSOR;
__declspec(dllimport)
NTSTATUS
__stdcall
NtCreateTransactionManager (
     PHANDLE TmHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes ,
     PUNICODE_STRING LogFileName ,
     ULONG CreateOptions ,
     ULONG CommitStrength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtOpenTransactionManager (
     PHANDLE TmHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes ,
     PUNICODE_STRING LogFileName ,
     LPGUID TmIdentity ,
     ULONG OpenOptions
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtRenameTransactionManager (
     PUNICODE_STRING LogFileName,
     LPGUID ExistingTransactionManagerGuid
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtRollforwardTransactionManager (
     HANDLE TransactionManagerHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtRecoverTransactionManager (
     HANDLE TransactionManagerHandle
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtQueryInformationTransactionManager (
     HANDLE TransactionManagerHandle,
     TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
     PVOID TransactionManagerInformation,
     ULONG TransactionManagerInformationLength,
     PULONG ReturnLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtSetInformationTransactionManager (
     HANDLE TmHandle,
     TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
     PVOID TransactionManagerInformation,
     ULONG TransactionManagerInformationLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtEnumerateTransactionObject (
     HANDLE RootObjectHandle,
         KTMOBJECT_TYPE QueryType,
     PKTMOBJECT_CURSOR ObjectCursor,
         ULONG ObjectCursorLength,
        PULONG ReturnLength
    );
typedef NTSTATUS (__stdcall * PFN_NT_CREATE_TRANSACTION)(
     PHANDLE TransactionHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes ,
     LPGUID Uow ,
     HANDLE TmHandle ,
     ULONG CreateOptions ,
     ULONG IsolationLevel ,
     ULONG IsolationFlags ,
     PLARGE_INTEGER Timeout ,
     PUNICODE_STRING Description
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtCreateTransaction (
     PHANDLE TransactionHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes ,
     LPGUID Uow ,
     HANDLE TmHandle ,
     ULONG CreateOptions ,
     ULONG IsolationLevel ,
     ULONG IsolationFlags ,
     PLARGE_INTEGER Timeout ,
     PUNICODE_STRING Description
    );
typedef NTSTATUS (__stdcall *PFN_NT_OPEN_TRANSACTION)(
     PHANDLE TransactionHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
     LPGUID Uow ,
     HANDLE TmHandle
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtOpenTransaction (
     PHANDLE TransactionHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
     LPGUID Uow,
     HANDLE TmHandle
    );
typedef NTSTATUS (__stdcall * PFN_NT_QUERY_INFORMATION_TRANSACTION)(
     HANDLE TransactionHandle,
     TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
     PVOID TransactionInformation,
     ULONG TransactionInformationLength,
     PULONG ReturnLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtQueryInformationTransaction (
     HANDLE TransactionHandle,
     TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
     PVOID TransactionInformation,
     ULONG TransactionInformationLength,
     PULONG ReturnLength
    );
typedef NTSTATUS (__stdcall * PFN_NT_SET_INFORMATION_TRANSACTION)(
     HANDLE TransactionHandle,
     TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
     PVOID TransactionInformation,
     ULONG TransactionInformationLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtSetInformationTransaction (
     HANDLE TransactionHandle,
     TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
     PVOID TransactionInformation,
     ULONG TransactionInformationLength
    );
typedef NTSTATUS (__stdcall * PFN_NT_COMMIT_TRANSACTION)(
     HANDLE TransactionHandle,
     BOOLEAN Wait
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtCommitTransaction (
     HANDLE TransactionHandle,
     BOOLEAN Wait
    );
typedef NTSTATUS (__stdcall * PFN_NT_ROLLBACK_TRANSACTION)(
     HANDLE TransactionHandle,
     BOOLEAN Wait
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtRollbackTransaction (
     HANDLE TransactionHandle,
     BOOLEAN Wait
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtCreateEnlistment (
     PHANDLE EnlistmentHandle,
     ACCESS_MASK DesiredAccess,
     HANDLE ResourceManagerHandle,
     HANDLE TransactionHandle,
     POBJECT_ATTRIBUTES ObjectAttributes ,
     ULONG CreateOptions ,
     NOTIFICATION_MASK NotificationMask,
     PVOID EnlistmentKey
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtOpenEnlistment (
     PHANDLE EnlistmentHandle,
     ACCESS_MASK DesiredAccess,
     HANDLE ResourceManagerHandle,
     LPGUID EnlistmentGuid,
     POBJECT_ATTRIBUTES ObjectAttributes
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtQueryInformationEnlistment (
     HANDLE EnlistmentHandle,
     ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
     PVOID EnlistmentInformation,
     ULONG EnlistmentInformationLength,
     PULONG ReturnLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtSetInformationEnlistment (
     HANDLE EnlistmentHandle,
     ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
     PVOID EnlistmentInformation,
     ULONG EnlistmentInformationLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtRecoverEnlistment (
     HANDLE EnlistmentHandle,
     PVOID EnlistmentKey
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtPrePrepareEnlistment (
     HANDLE EnlistmentHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtPrepareEnlistment (
     HANDLE EnlistmentHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtCommitEnlistment (
     HANDLE EnlistmentHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtRollbackEnlistment (
     HANDLE EnlistmentHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtPrePrepareComplete (
     HANDLE EnlistmentHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtPrepareComplete (
     HANDLE EnlistmentHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtCommitComplete (
     HANDLE EnlistmentHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtReadOnlyEnlistment (
     HANDLE EnlistmentHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtRollbackComplete (
     HANDLE EnlistmentHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtSinglePhaseReject (
     HANDLE EnlistmentHandle,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtCreateResourceManager (
     PHANDLE ResourceManagerHandle,
     ACCESS_MASK DesiredAccess,
     HANDLE TmHandle,
     LPGUID RmGuid,
     POBJECT_ATTRIBUTES ObjectAttributes ,
     ULONG CreateOptions ,
     PUNICODE_STRING Description
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtOpenResourceManager (
     PHANDLE ResourceManagerHandle,
     ACCESS_MASK DesiredAccess,
     HANDLE TmHandle,
     LPGUID ResourceManagerGuid ,
     POBJECT_ATTRIBUTES ObjectAttributes
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtRecoverResourceManager (
     HANDLE ResourceManagerHandle
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtGetNotificationResourceManager (
     HANDLE ResourceManagerHandle,
     PTRANSACTION_NOTIFICATION TransactionNotification,
     ULONG NotificationLength,
     PLARGE_INTEGER Timeout ,
     PULONG ReturnLength,
     ULONG Asynchronous,
     ULONG_PTR AsynchronousContext
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtQueryInformationResourceManager (
     HANDLE ResourceManagerHandle,
     RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
     PVOID ResourceManagerInformation,
     ULONG ResourceManagerInformationLength,
     PULONG ReturnLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtSetInformationResourceManager (
     HANDLE ResourceManagerHandle,
     RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
     PVOID ResourceManagerInformation,
     ULONG ResourceManagerInformationLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtRegisterProtocolAddressInformation(
     HANDLE ResourceManager,
     PCRM_PROTOCOL_ID ProtocolId,
     ULONG ProtocolInformationSize,
     PVOID ProtocolInformation,
     ULONG CreateOptions
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtPropagationComplete(
      HANDLE ResourceManagerHandle,
      ULONG RequestCookie,
      ULONG BufferLength,
      PVOID Buffer
    );
__declspec(dllimport)
NTSTATUS
__stdcall
NtPropagationFailed(
      HANDLE ResourceManagerHandle,
      ULONG RequestCookie,
      NTSTATUS PropStatus
    );
extern ULONG NtGlobalFlag;
typedef enum _POOL_TYPE POOL_TYPE;
typedef
PVOID
(*PALLOCATE_FUNCTION) (
     POOL_TYPE PoolType,
     SIZE_T NumberOfBytes,
     ULONG Tag
    );
typedef
void
(*PFREE_FUNCTION) (
     PVOID Buffer
    );
typedef struct _LOOKASIDE_LIST_EX *PLOOKASIDE_LIST_EX;
typedef
PVOID
(*PALLOCATE_FUNCTION_EX) (
     POOL_TYPE PoolType,
     SIZE_T NumberOfBytes,
     ULONG Tag,
     PLOOKASIDE_LIST_EX Lookaside
    );
typedef
void
(*PFREE_FUNCTION_EX) (
     PVOID Buffer,
     PLOOKASIDE_LIST_EX Lookaside
    );
#pragma warning(push)
#pragma warning(disable:4324)
typedef struct _GENERAL_LOOKASIDE {
    union { SLIST_HEADER ListHead; SINGLE_LIST_ENTRY SingleListHead; } ; USHORT Depth; USHORT MaximumDepth; ULONG TotalAllocates; union { ULONG AllocateMisses; ULONG AllocateHits; } ; ULONG TotalFrees; union { ULONG FreeMisses; ULONG FreeHits; } ; POOL_TYPE Type; ULONG Tag; ULONG Size; union { PALLOCATE_FUNCTION_EX AllocateEx; PALLOCATE_FUNCTION Allocate; } ; union { PFREE_FUNCTION_EX FreeEx; PFREE_FUNCTION Free; } ; LIST_ENTRY ListEntry; ULONG LastTotalAllocates; union { ULONG LastAllocateMisses; ULONG LastAllocateHits; } ; ULONG Future[2];
} GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE;
#pragma warning(pop)
typedef struct _GENERAL_LOOKASIDE_POOL {
    union { SLIST_HEADER ListHead; SINGLE_LIST_ENTRY SingleListHead; } ; USHORT Depth; USHORT MaximumDepth; ULONG TotalAllocates; union { ULONG AllocateMisses; ULONG AllocateHits; } ; ULONG TotalFrees; union { ULONG FreeMisses; ULONG FreeHits; } ; POOL_TYPE Type; ULONG Tag; ULONG Size; union { PALLOCATE_FUNCTION_EX AllocateEx; PALLOCATE_FUNCTION Allocate; } ; union { PFREE_FUNCTION_EX FreeEx; PFREE_FUNCTION Free; } ; LIST_ENTRY ListEntry; ULONG LastTotalAllocates; union { ULONG LastAllocateMisses; ULONG LastAllocateHits; } ; ULONG Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL;
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE *)0)->TotalFrees))==((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE_POOL *)0)->TotalFrees)))?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE *)0)->Tag))==((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE_POOL *)0)->Tag)))?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE *)0)->Future))==((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE_POOL *)0)->Future)))?1:-1];
typedef CCHAR KPROCESSOR_MODE;
typedef enum _MODE {
    KernelMode,
    UserMode,
    MaximumMode
} MODE;
struct _KAPC;
typedef
void
(*PKNORMAL_ROUTINE) (
     PVOID NormalContext,
     PVOID SystemArgument1,
     PVOID SystemArgument2
    );
typedef
void
(*PKKERNEL_ROUTINE) (
     struct _KAPC *Apc,
      PKNORMAL_ROUTINE *NormalRoutine,
      PVOID *NormalContext,
      PVOID *SystemArgument1,
      PVOID *SystemArgument2
    );
typedef
void
(*PKRUNDOWN_ROUTINE) (
     struct _KAPC *Apc
    );
typedef
BOOLEAN
(*PKSYNCHRONIZE_ROUTINE) (
     PVOID SynchronizeContext
    );
typedef
BOOLEAN
(*PKTRANSFER_ROUTINE) (
    void
    );
typedef struct _KAPC {
    UCHAR Type;
    UCHAR SpareByte0;
    UCHAR Size;
    UCHAR SpareByte1;
    ULONG SpareLong0;
    struct _KTHREAD *Thread;
    LIST_ENTRY ApcListEntry;
    PKKERNEL_ROUTINE KernelRoutine;
    PKRUNDOWN_ROUTINE RundownRoutine;
    PKNORMAL_ROUTINE NormalRoutine;
    PVOID NormalContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    CCHAR ApcStateIndex;
    KPROCESSOR_MODE ApcMode;
    BOOLEAN Inserted;
} KAPC, *PKAPC, *PRKAPC;
struct _KDPC;
typedef
void
(*PKDEFERRED_ROUTINE) (
     struct _KDPC *Dpc,
     PVOID DeferredContext,
     PVOID SystemArgument1,
     PVOID SystemArgument2
    );
typedef enum _KDPC_IMPORTANCE {
    LowImportance,
    MediumImportance,
    HighImportance,
    MediumHighImportance
} KDPC_IMPORTANCE;
typedef struct _KDPC {
    UCHAR Type;
    UCHAR Importance;
    volatile USHORT Number;
    LIST_ENTRY DpcListEntry;
    PKDEFERRED_ROUTINE DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
     PVOID DpcData;
} KDPC, *PKDPC, *PRKDPC;
typedef PVOID PKIPI_CONTEXT;
typedef
void
(*PKIPI_WORKER)(
     PKIPI_CONTEXT PacketContext,
     PVOID Parameter1,
     PVOID Parameter2,
     PVOID Parameter3
    );
typedef struct _KIPI_COUNTS {
    ULONG Freeze;
    ULONG Packet;
    ULONG DPC;
    ULONG APC;
    ULONG FlushSingleTb;
    ULONG FlushMultipleTb;
    ULONG FlushEntireTb;
    ULONG GenericCall;
    ULONG ChangeColor;
    ULONG SweepDcache;
    ULONG SweepIcache;
    ULONG SweepIcacheRange;
    ULONG FlushIoBuffers;
    ULONG GratuitousDPC;
} KIPI_COUNTS, *PKIPI_COUNTS;
typedef struct _MDL {
    struct _MDL *Next;
    CSHORT Size;
    CSHORT MdlFlags;
    struct _EPROCESS *Process;
    PVOID MappedSystemVa;
    PVOID StartVa;
    ULONG ByteCount;
    ULONG ByteOffset;
} MDL, *PMDL;
typedef MDL *PMDLX;
typedef struct _DISPATCHER_HEADER {
    union {
        struct {
            UCHAR Type;
            union {
                UCHAR Abandoned;
                UCHAR Absolute;
                UCHAR NpxIrql;
                BOOLEAN Signalling;
            } ;
            union {
                UCHAR Size;
                UCHAR Hand;
            } ;
            union {
                UCHAR Inserted;
                BOOLEAN DebugActive;
                BOOLEAN DpcActive;
            } ;
        } ;
        volatile LONG Lock;
    } ;
    LONG SignalState;
    LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER;
typedef struct _KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT, *PRKEVENT;
typedef struct _KGATE {
    DISPATCHER_HEADER Header;
} KGATE, *PKGATE;
typedef char __C_ASSERT__[((1 << 9) == 512)?1:-1];
typedef char __C_ASSERT__[((512 & (512 - 1)) == 0)?1:-1];
typedef struct _KTIMER {
    DISPATCHER_HEADER Header;
    ULARGE_INTEGER DueTime;
    LIST_ENTRY TimerListEntry;
    struct _KDPC *Dpc;
    LONG Period;
} KTIMER, *PKTIMER, *PRKTIMER;
typedef enum _LOCK_OPERATION {
    IoReadAccess,
    IoWriteAccess,
    IoModifyAccess
} LOCK_OPERATION;
typedef ULONG PFN_COUNT;
typedef LONG SPFN_NUMBER, *PSPFN_NUMBER;
typedef ULONG PFN_NUMBER, *PPFN_NUMBER;
__declspec(dllimport)
void
__fastcall
KfLowerIrql (
     KIRQL NewIrql
    );
__declspec(dllimport)
KIRQL
__fastcall
KfRaiseIrql (
     KIRQL NewIrql
    );
__declspec(dllimport)
KIRQL
KeRaiseIrqlToDpcLevel (
    void
    );
__declspec(dllimport)
UCHAR
__stdcall
READ_REGISTER_UCHAR(
    PUCHAR Register
    );
__declspec(dllimport)
USHORT
__stdcall
READ_REGISTER_USHORT(
    PUSHORT Register
    );
__declspec(dllimport)
ULONG
__stdcall
READ_REGISTER_ULONG(
    PULONG Register
    );
__declspec(dllimport)
void
__stdcall
READ_REGISTER_BUFFER_UCHAR(
    PUCHAR Register,
    PUCHAR Buffer,
    ULONG Count
    );
__declspec(dllimport)
void
__stdcall
READ_REGISTER_BUFFER_USHORT(
    PUSHORT Register,
    PUSHORT Buffer,
    ULONG Count
    );
__declspec(dllimport)
void
__stdcall
READ_REGISTER_BUFFER_ULONG(
    PULONG Register,
    PULONG Buffer,
    ULONG Count
    );
__declspec(dllimport)
void
__stdcall
WRITE_REGISTER_UCHAR(
    PUCHAR Register,
    UCHAR Value
    );
__declspec(dllimport)
void
__stdcall
WRITE_REGISTER_USHORT(
    PUSHORT Register,
    USHORT Value
    );
__declspec(dllimport)
void
__stdcall
WRITE_REGISTER_ULONG(
    PULONG Register,
    ULONG Value
    );
__declspec(dllimport)
void
__stdcall
WRITE_REGISTER_BUFFER_UCHAR(
    PUCHAR Register,
    PUCHAR Buffer,
    ULONG Count
    );
__declspec(dllimport)
void
__stdcall
WRITE_REGISTER_BUFFER_USHORT(
    PUSHORT Register,
    PUSHORT Buffer,
    ULONG Count
    );
__declspec(dllimport)
void
__stdcall
WRITE_REGISTER_BUFFER_ULONG(
    PULONG Register,
    PULONG Buffer,
    ULONG Count
    );
__declspec(dllimport)
UCHAR
__stdcall
READ_PORT_UCHAR(
    PUCHAR Port
    );
__declspec(dllimport)
USHORT
__stdcall
READ_PORT_USHORT(
    PUSHORT Port
    );
__declspec(dllimport)
ULONG
__stdcall
READ_PORT_ULONG(
    PULONG Port
    );
__declspec(dllimport)
void
__stdcall
READ_PORT_BUFFER_UCHAR(
    PUCHAR Port,
    PUCHAR Buffer,
    ULONG Count
    );
__declspec(dllimport)
void
__stdcall
READ_PORT_BUFFER_USHORT(
    PUSHORT Port,
    PUSHORT Buffer,
    ULONG Count
    );
__declspec(dllimport)
void
__stdcall
READ_PORT_BUFFER_ULONG(
    PULONG Port,
    PULONG Buffer,
    ULONG Count
    );
__declspec(dllimport)
void
__stdcall
WRITE_PORT_UCHAR(
    PUCHAR Port,
    UCHAR Value
    );
__declspec(dllimport)
void
__stdcall
WRITE_PORT_USHORT(
    PUSHORT Port,
    USHORT Value
    );
__declspec(dllimport)
void
__stdcall
WRITE_PORT_ULONG(
    PULONG Port,
    ULONG Value
    );
__declspec(dllimport)
void
__stdcall
WRITE_PORT_BUFFER_UCHAR(
    PUCHAR Port,
    PUCHAR Buffer,
    ULONG Count
    );
__declspec(dllimport)
void
__stdcall
WRITE_PORT_BUFFER_USHORT(
    PUSHORT Port,
    PUSHORT Buffer,
    ULONG Count
    );
__declspec(dllimport)
void
__stdcall
WRITE_PORT_BUFFER_ULONG(
    PULONG Port,
    PULONG Buffer,
    ULONG Count
    );
#pragma deprecated(KeGetDcacheFillSize)
typedef struct _KFLOATING_SAVE {
    ULONG ControlWord;
    ULONG StatusWord;
    ULONG ErrorOffset;
    ULONG ErrorSelector;
    ULONG DataOffset;
    ULONG DataSelector;
    ULONG Cr0NpxState;
    ULONG Spare1;
} KFLOATING_SAVE, *PKFLOATING_SAVE;
typedef union _AMD_L1_CACHE_INFO {
    ULONG Ulong;
    struct {
        UCHAR LineSize;
        UCHAR LinesPerTag;
        UCHAR Associativity;
        UCHAR Size;
    };
} AMD_L1_CACHE_INFO, *PAMD_L1_CACHE_INFO;
typedef union _AMD_L2_CACHE_INFO {
    ULONG Ulong;
    struct {
        UCHAR LineSize;
        UCHAR LinesPerTag : 4;
        UCHAR Associativity : 4;
        USHORT Size;
    };
} AMD_L2_CACHE_INFO, *PAMD_L2_CACHE_INFO;
typedef enum _INTEL_CACHE_TYPE {
    IntelCacheNull,
    IntelCacheData,
    IntelCacheInstruction,
    IntelCacheUnified,
    IntelCacheRam,
    IntelCacheTrace
} INTEL_CACHE_TYPE;
typedef union INTEL_CACHE_INFO_EAX {
    ULONG Ulong;
    struct {
        INTEL_CACHE_TYPE Type : 5;
        ULONG Level : 3;
        ULONG SelfInitializing : 1;
        ULONG FullyAssociative : 1;
        ULONG Reserved : 4;
        ULONG ThreadsSharing : 12;
        ULONG ProcessorCores : 6;
    };
} INTEL_CACHE_INFO_EAX, *PINTEL_CACHE_INFO_EAX;
typedef union INTEL_CACHE_INFO_EBX {
    ULONG Ulong;
    struct {
        ULONG LineSize : 12;
        ULONG Partitions : 10;
        ULONG Associativity : 10;
    };
} INTEL_CACHE_INFO_EBX, *PINTEL_CACHE_INFO_EBX;
#pragma deprecated(ExInterlockedIncrementLong)
#pragma deprecated(ExInterlockedDecrementLong)
#pragma deprecated(ExInterlockedExchangeUlong)
LONG
__cdecl
_InterlockedExchange(
      LONG volatile *Target,
     LONG Value
    );
#pragma intrinsic(_InterlockedExchange)
LONG
__cdecl
_InterlockedIncrement(
     LONG volatile *Addend
    );
#pragma intrinsic(_InterlockedIncrement)
LONG
__cdecl
_InterlockedDecrement(
     LONG volatile *Addend
    );
#pragma intrinsic(_InterlockedDecrement)
LONG
__cdecl
_InterlockedExchangeAdd(
      LONG volatile *Addend,
     LONG Increment
    );
#pragma intrinsic(_InterlockedExchangeAdd)
LONG
__cdecl
_InterlockedCompareExchange (
      LONG volatile *Destination,
     LONG ExChange,
     LONG Comperand
    );
#pragma intrinsic(_InterlockedCompareExchange)
__declspec(dllimport)
LONGLONG
__fastcall
ExfInterlockedCompareExchange64 (
      LONGLONG volatile *Destination,
     PLONGLONG ExChange,
     PLONGLONG Comperand
    );
LONGLONG
__forceinline
InterlockedCompareExchange64_inline (
      LONGLONG volatile *Destination,
     LONGLONG ExChange,
     LONGLONG Comperand
    )
{
    return ExfInterlockedCompareExchange64(Destination, &ExChange, &Comperand);
}
LONGLONG
__cdecl
_InterlockedCompareExchange64 (
      LONGLONG volatile *Destination,
     LONGLONG ExChange,
     LONGLONG Comperand
    );
#pragma intrinsic(_InterlockedCompareExchange64)
__declspec(dllimport)
KIRQL
__stdcall
KeGetCurrentIrql(
    void
    );
void
_mm_clflush (
    void const *Address
    );
#pragma intrinsic(_mm_clflush)
void
_ReadWriteBarrier(
    void
    );
#pragma intrinsic(_ReadWriteBarrier)
#pragma warning( push )
#pragma warning( disable : 4793 )
__forceinline
void
KeMemoryBarrier (
    void
    )
{
    LONG Barrier;
    __asm {
        xchg Barrier, eax
    }
}
#pragma warning( pop )
__declspec(dllimport)
NTSTATUS
__stdcall
KeSaveFloatingPointState (
     PKFLOATING_SAVE FloatSave
    );
__declspec(dllimport)
NTSTATUS
__stdcall
KeRestoreFloatingPointState (
     PKFLOATING_SAVE FloatSave
    );
typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
    StandardDesign,
    NEC98x86,
    EndAlternatives
} ALTERNATIVE_ARCHITECTURE_TYPE;
typedef struct _EXCEPTION_RECORD {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    ULONG NumberParameters;
    ULONG_PTR ExceptionInformation[15];
    } EXCEPTION_RECORD;
typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;
typedef struct _EXCEPTION_RECORD32 {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    ULONG ExceptionRecord;
    ULONG ExceptionAddress;
    ULONG NumberParameters;
    ULONG ExceptionInformation[15];
} EXCEPTION_RECORD32, *PEXCEPTION_RECORD32;
typedef struct _EXCEPTION_RECORD64 {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    ULONG64 ExceptionRecord;
    ULONG64 ExceptionAddress;
    ULONG NumberParameters;
    ULONG __unusedAlignment;
    ULONG64 ExceptionInformation[15];
} EXCEPTION_RECORD64, *PEXCEPTION_RECORD64;
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;
typedef enum _KINTERRUPT_MODE {
    LevelSensitive,
    Latched
} KINTERRUPT_MODE;
typedef enum _KINTERRUPT_POLARITY {
    InterruptPolarityUnknown,
    InterruptActiveHigh,
    InterruptActiveLow
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;
typedef enum _KWAIT_REASON {
    Executive,
    FreePage,
    PageIn,
    PoolAllocation,
    DelayExecution,
    Suspended,
    UserRequest,
    WrExecutive,
    WrFreePage,
    WrPageIn,
    WrPoolAllocation,
    WrDelayExecution,
    WrSuspended,
    WrUserRequest,
    WrEventPair,
    WrQueue,
    WrLpcReceive,
    WrLpcReply,
    WrVirtualMemory,
    WrPageOut,
    WrRendezvous,
    Spare2,
    Spare3,
    Spare4,
    Spare5,
    WrCalloutStack,
    WrKernel,
    WrResource,
    WrPushLock,
    WrMutex,
    WrQuantumEnd,
    WrDispatchInt,
    WrPreempted,
    WrYieldExecution,
    WrFastMutex,
    WrGuardedMutex,
    WrRundown,
    MaximumWaitReason
} KWAIT_REASON;
typedef struct _KWAIT_BLOCK {
    LIST_ENTRY WaitListEntry;
    struct _KTHREAD *Thread;
    PVOID Object;
    struct _KWAIT_BLOCK *NextWaitBlock;
    USHORT WaitKey;
    UCHAR WaitType;
    UCHAR SpareByte;
} KWAIT_BLOCK, *PKWAIT_BLOCK, *PRKWAIT_BLOCK;
typedef
void
(*PKSTART_ROUTINE) (
     PVOID StartContext
    );
typedef struct _KDEVICE_QUEUE {
    CSHORT Type;
    CSHORT Size;
    LIST_ENTRY DeviceListHead;
    KSPIN_LOCK Lock;
    BOOLEAN Busy;
} KDEVICE_QUEUE, *PKDEVICE_QUEUE, *PRKDEVICE_QUEUE;
typedef struct _KDEVICE_QUEUE_ENTRY {
    LIST_ENTRY DeviceListEntry;
    ULONG SortKey;
    BOOLEAN Inserted;
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY, *PRKDEVICE_QUEUE_ENTRY;
typedef
BOOLEAN
KSERVICE_ROUTINE (
     struct _KINTERRUPT *Interrupt,
     PVOID ServiceContext
    );
typedef KSERVICE_ROUTINE *PKSERVICE_ROUTINE;
typedef
BOOLEAN
KMESSAGE_SERVICE_ROUTINE (
     struct _KINTERRUPT *Interrupt,
     PVOID ServiceContext,
     ULONG MessageID
    );
typedef KMESSAGE_SERVICE_ROUTINE *PKMESSAGE_SERVICE_ROUTINE;
typedef struct _KMUTANT {
    DISPATCHER_HEADER Header;
    LIST_ENTRY MutantListEntry;
    struct _KTHREAD *OwnerThread;
    BOOLEAN Abandoned;
    UCHAR ApcDisable;
} KMUTANT, *PKMUTANT, *PRKMUTANT, KMUTEX, *PKMUTEX, *PRKMUTEX;
typedef struct _KSEMAPHORE {
    DISPATCHER_HEADER Header;
    LONG Limit;
} KSEMAPHORE, *PKSEMAPHORE, *PRKSEMAPHORE;
__declspec(dllimport)
void
KeInitializeDpc (
     PRKDPC Dpc,
     PKDEFERRED_ROUTINE DeferredRoutine,
     PVOID DeferredContext
    );
__declspec(dllimport)
BOOLEAN
KeInsertQueueDpc (
     PRKDPC Dpc,
     PVOID SystemArgument1,
     PVOID SystemArgument2
    );
__declspec(dllimport)
BOOLEAN
KeRemoveQueueDpc (
     PRKDPC Dpc
    );
__declspec(dllimport)
void
KeSetImportanceDpc (
     PRKDPC Dpc,
     KDPC_IMPORTANCE Importance
    );
__declspec(dllimport)
void
KeSetTargetProcessorDpc (
     PRKDPC Dpc,
     CCHAR Number
    );
__declspec(dllimport)
void
KeFlushQueuedDpcs (
    void
    );
__declspec(dllimport)
void
KeInitializeDeviceQueue (
     PKDEVICE_QUEUE DeviceQueue
    );
__declspec(dllimport)
BOOLEAN
KeInsertDeviceQueue (
     PKDEVICE_QUEUE DeviceQueue,
     PKDEVICE_QUEUE_ENTRY DeviceQueueEntry
    );
__declspec(dllimport)
BOOLEAN
KeInsertByKeyDeviceQueue (
     PKDEVICE_QUEUE DeviceQueue,
     PKDEVICE_QUEUE_ENTRY DeviceQueueEntry,
     ULONG SortKey
    );
__declspec(dllimport)
PKDEVICE_QUEUE_ENTRY
KeRemoveDeviceQueue (
     PKDEVICE_QUEUE DeviceQueue
    );
__declspec(dllimport)
PKDEVICE_QUEUE_ENTRY
KeRemoveByKeyDeviceQueue (
     PKDEVICE_QUEUE DeviceQueue,
     ULONG SortKey
    );
__declspec(dllimport)
PKDEVICE_QUEUE_ENTRY
KeRemoveByKeyDeviceQueueIfBusy (
     PKDEVICE_QUEUE DeviceQueue,
     ULONG SortKey
    );
__declspec(dllimport)
BOOLEAN
KeRemoveEntryDeviceQueue (
     PKDEVICE_QUEUE DeviceQueue,
     PKDEVICE_QUEUE_ENTRY DeviceQueueEntry
    );
__declspec(dllimport)
BOOLEAN
KeSynchronizeExecution (
     PKINTERRUPT Interrupt,
     PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
     PVOID SynchronizeContext
    );
__declspec(dllimport)
KIRQL
KeAcquireInterruptSpinLock (
     PKINTERRUPT Interrupt
    );
__declspec(dllimport)
void
KeReleaseInterruptSpinLock (
     PKINTERRUPT Interrupt,
     KIRQL OldIrql
    );
__declspec(dllimport)
void
KeInitializeEvent (
     PRKEVENT Event,
     EVENT_TYPE Type,
     BOOLEAN State
    );
__declspec(dllimport)
void
KeClearEvent (
     PRKEVENT Event
    );
__declspec(dllimport)
LONG
KeReadStateEvent (
     PRKEVENT Event
    );
__declspec(dllimport)
LONG
KeResetEvent (
     PRKEVENT Event
    );
__declspec(dllimport)
LONG
KeSetEvent (
     PRKEVENT Event,
     KPRIORITY Increment,
     BOOLEAN Wait
    );
__declspec(dllimport)
void
KeInitializeMutex (
     PRKMUTEX Mutex,
     ULONG Level
    );
__declspec(dllimport)
LONG
KeReadStateMutex (
     PRKMUTEX Mutex
    );
__declspec(dllimport)
LONG
KeReleaseMutex (
     PRKMUTEX Mutex,
     BOOLEAN Wait
    );
__declspec(dllimport)
void
KeInitializeSemaphore (
     PRKSEMAPHORE Semaphore,
     LONG Count,
     LONG Limit
    );
__declspec(dllimport)
LONG
KeReadStateSemaphore (
     PRKSEMAPHORE Semaphore
    );
__declspec(dllimport)
LONG
KeReleaseSemaphore (
     PRKSEMAPHORE Semaphore,
     KPRIORITY Increment,
     LONG Adjustment,
     BOOLEAN Wait
    );
__declspec(dllimport)
NTSTATUS
KeDelayExecutionThread (
     KPROCESSOR_MODE WaitMode,
     BOOLEAN Alertable,
     PLARGE_INTEGER Interval
    );
__declspec(dllimport)
KPRIORITY
KeQueryPriorityThread (
     PKTHREAD Thread
    );
__declspec(dllimport)
ULONG
KeQueryRuntimeThread (
     PKTHREAD Thread,
     PULONG UserTime
    );
__declspec(dllimport)
void
KeRevertToUserAffinityThread (
    void
    );
__declspec(dllimport)
void
KeSetSystemAffinityThread (
     KAFFINITY Affinity
    );
__declspec(dllimport)
KPRIORITY
KeSetPriorityThread (
     PKTHREAD Thread,
     KPRIORITY Priority
    );
__declspec(dllimport)
void
KeEnterCriticalRegion (
    void
    );
__declspec(dllimport)
void
KeLeaveCriticalRegion (
    void
    );
__declspec(dllimport)
BOOLEAN
KeAreApcsDisabled (
    void
    );
__declspec(dllimport)
void
KeInitializeTimer (
     PKTIMER Timer
    );
__declspec(dllimport)
void
KeInitializeTimerEx (
     PKTIMER Timer,
     TIMER_TYPE Type
    );
__declspec(dllimport)
BOOLEAN
KeCancelTimer (
     PKTIMER
    );
__declspec(dllimport)
BOOLEAN
KeReadStateTimer (
     PKTIMER Timer
    );
__declspec(dllimport)
BOOLEAN
KeSetTimer (
     PKTIMER Timer,
     LARGE_INTEGER DueTime,
     PKDPC Dpc
    );
__declspec(dllimport)
BOOLEAN
KeSetTimerEx (
     PKTIMER Timer,
     LARGE_INTEGER DueTime,
     LONG Period,
     PKDPC Dpc
    );
__declspec(dllimport)
NTSTATUS
KeWaitForMultipleObjects (
     ULONG Count,
     PVOID Object[],
     WAIT_TYPE WaitType,
     KWAIT_REASON WaitReason,
     KPROCESSOR_MODE WaitMode,
     BOOLEAN Alertable,
     PLARGE_INTEGER Timeout,
     PKWAIT_BLOCK WaitBlockArray
    );
__declspec(dllimport)
NTSTATUS
KeWaitForSingleObject (
     PVOID Object,
     KWAIT_REASON WaitReason,
     KPROCESSOR_MODE WaitMode,
     BOOLEAN Alertable,
     PLARGE_INTEGER Timeout
    );
typedef
ULONG_PTR
(*PKIPI_BROADCAST_WORKER)(
     ULONG_PTR Argument
    );
__forceinline
void
__stdcall
KeInitializeSpinLock (
     PKSPIN_LOCK SpinLock
    )
{
    *SpinLock = 0;
}
__declspec(dllimport)
void
__fastcall
KefAcquireSpinLockAtDpcLevel (
     PKSPIN_LOCK SpinLock
    );
__declspec(dllimport)
void
__fastcall
KefReleaseSpinLockFromDpcLevel (
     PKSPIN_LOCK SpinLock
    );
__declspec(dllimport)
KIRQL
__fastcall
KfAcquireSpinLock (
     PKSPIN_LOCK SpinLock
    );
__declspec(dllimport)
void
__fastcall
KfReleaseSpinLock (
     PKSPIN_LOCK SpinLock,
     KIRQL NewIrql
    );
__declspec(dllimport)
void
__fastcall
KeAcquireInStackQueuedSpinLock (
     PKSPIN_LOCK SpinLock,
     PKLOCK_QUEUE_HANDLE LockHandle
    );
__declspec(dllimport)
void
__fastcall
KeReleaseInStackQueuedSpinLock (
     PKLOCK_QUEUE_HANDLE LockHandle
    );
__declspec(dllimport)
void
__fastcall
KeAcquireInStackQueuedSpinLockAtDpcLevel (
     PKSPIN_LOCK SpinLock,
     PKLOCK_QUEUE_HANDLE LockHandle
    );
__declspec(dllimport)
void
__fastcall
KeReleaseInStackQueuedSpinLockFromDpcLevel (
     PKLOCK_QUEUE_HANDLE LockHandle
    );
typedef struct _KDPC_WATCHDOG_INFORMATION {
    ULONG DpcTimeLimit;
    ULONG DpcTimeCount;
    ULONG DpcWatchdogLimit;
    ULONG DpcWatchdogCount;
    ULONG Reserved;
} KDPC_WATCHDOG_INFORMATION, *PKDPC_WATCHDOG_INFORMATION;
typedef enum _KBUGCHECK_BUFFER_DUMP_STATE {
    BufferEmpty,
    BufferInserted,
    BufferStarted,
    BufferFinished,
    BufferIncomplete
} KBUGCHECK_BUFFER_DUMP_STATE;
typedef
void
(*PKBUGCHECK_CALLBACK_ROUTINE) (
     PVOID Buffer,
     ULONG Length
    );
typedef struct _KBUGCHECK_CALLBACK_RECORD {
    LIST_ENTRY Entry;
    PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine;
     PVOID Buffer;
    ULONG Length;
    PUCHAR Component;
    ULONG_PTR Checksum;
    UCHAR State;
} KBUGCHECK_CALLBACK_RECORD, *PKBUGCHECK_CALLBACK_RECORD;
__declspec(dllimport)
BOOLEAN
KeDeregisterBugCheckCallback (
     PKBUGCHECK_CALLBACK_RECORD CallbackRecord
    );
__declspec(dllimport)
BOOLEAN
KeRegisterBugCheckCallback (
     PKBUGCHECK_CALLBACK_RECORD CallbackRecord,
     PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
     PVOID Buffer,
     ULONG Length,
     PUCHAR Component
    );
typedef enum _KBUGCHECK_CALLBACK_REASON {
    KbCallbackInvalid,
    KbCallbackReserved1,
    KbCallbackSecondaryDumpData,
    KbCallbackDumpIo,
    KbCallbackAddPages
} KBUGCHECK_CALLBACK_REASON;
typedef
void
(*PKBUGCHECK_REASON_CALLBACK_ROUTINE) (
     KBUGCHECK_CALLBACK_REASON Reason,
     struct _KBUGCHECK_REASON_CALLBACK_RECORD* Record,
      PVOID ReasonSpecificData,
     ULONG ReasonSpecificDataLength
    );
typedef struct _KBUGCHECK_REASON_CALLBACK_RECORD {
    LIST_ENTRY Entry;
    PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine;
    PUCHAR Component;
    ULONG_PTR Checksum;
    KBUGCHECK_CALLBACK_REASON Reason;
    UCHAR State;
} KBUGCHECK_REASON_CALLBACK_RECORD, *PKBUGCHECK_REASON_CALLBACK_RECORD;
typedef struct _KBUGCHECK_SECONDARY_DUMP_DATA {
     PVOID InBuffer;
     ULONG InBufferLength;
     ULONG MaximumAllowed;
     GUID Guid;
     PVOID OutBuffer;
     ULONG OutBufferLength;
} KBUGCHECK_SECONDARY_DUMP_DATA, *PKBUGCHECK_SECONDARY_DUMP_DATA;
typedef enum _KBUGCHECK_DUMP_IO_TYPE {
    KbDumpIoInvalid,
    KbDumpIoHeader,
    KbDumpIoBody,
    KbDumpIoSecondaryData,
    KbDumpIoComplete
} KBUGCHECK_DUMP_IO_TYPE;
typedef struct _KBUGCHECK_DUMP_IO {
     ULONG64 Offset;
     PVOID Buffer;
     ULONG BufferLength;
     KBUGCHECK_DUMP_IO_TYPE Type;
} KBUGCHECK_DUMP_IO, *PKBUGCHECK_DUMP_IO;
typedef struct _KBUGCHECK_ADD_PAGES {
     PVOID Context;
     ULONG Flags;
     ULONG Reserved;
     ULONG_PTR Address;
     ULONG_PTR Count;
} KBUGCHECK_ADD_PAGES, *PKBUGCHECK_ADD_PAGES;
__declspec(dllimport)
BOOLEAN
KeDeregisterBugCheckReasonCallback (
     PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord
    );
__declspec(dllimport)
BOOLEAN
KeRegisterBugCheckReasonCallback (
     PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
     PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
     KBUGCHECK_CALLBACK_REASON Reason,
     PUCHAR Component
    );
typedef
BOOLEAN
(*PNMI_CALLBACK)(
     PVOID Context,
     BOOLEAN Handled
    );
__declspec(dllimport)
__declspec(noreturn)
void
__stdcall
KeBugCheckEx(
     ULONG BugCheckCode,
     ULONG_PTR BugCheckParameter1,
     ULONG_PTR BugCheckParameter2,
     ULONG_PTR BugCheckParameter3,
     ULONG_PTR BugCheckParameter4
    );
__declspec(dllimport)
ULONGLONG
KeQueryInterruptTime (
    void
    );
__declspec(dllimport)
void
KeQuerySystemTime (
     PLARGE_INTEGER CurrentTime
    );
__declspec(dllimport)
ULONG
KeQueryTimeIncrement (
    void
    );
__declspec(dllimport)
ULONG
KeGetRecommendedSharedDataAlignment (
    void
    );
extern volatile KSYSTEM_TIME KeTickCount;
typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
} MEMORY_CACHING_TYPE_ORIG;
typedef enum _MEMORY_CACHING_TYPE {
    MmNonCached = 0,
    MmCached = 1,
    MmWriteCombined = MmFrameBufferCached,
    MmHardwareCoherentCached,
    MmNonCachedUnordered,
    MmUSWCCached,
    MmMaximumCacheType
} MEMORY_CACHING_TYPE;
typedef struct _KGUARDED_MUTEX {
    volatile LONG Count;
    PKTHREAD Owner;
    ULONG Contention;
    KGATE Gate;
    union {
        struct {
            SHORT KernelApcDisable;
            SHORT SpecialApcDisable;
        };
        ULONG CombinedApcDisable;
    };
} KGUARDED_MUTEX, *PKGUARDED_MUTEX;
typedef enum {
    KeProcessorAddStartNotify = 0,
    KeProcessorAddCompleteNotify,
    KeProcessorAddFailureNotify
} KE_PROCESSOR_CHANGE_NOTIFY_STATE;
typedef struct _KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT {
    KE_PROCESSOR_CHANGE_NOTIFY_STATE State;
    ULONG NtNumber;
    NTSTATUS Status;
} KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT, *PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT;
typedef
void
(*PPROCESSOR_CALLBACK_FUNCTION) (
     PVOID CallbackContext,
     PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
     PNTSTATUS OperationStatus
    );
extern PBOOLEAN KdDebuggerNotPresent;
extern PBOOLEAN KdDebuggerEnabled;
__declspec(dllimport)
NTSTATUS
KdDisableDebugger(
    void
    );
__declspec(dllimport)
NTSTATUS
KdEnableDebugger(
    void
    );
typedef enum _KD_OPTION {
    KD_OPTION_SET_BLOCK_ENABLE,
} KD_OPTION;
typedef enum _POOL_TYPE {
    NonPagedPool,
    PagedPool,
    NonPagedPoolMustSucceed,
    DontUseThisType,
    NonPagedPoolCacheAligned,
    PagedPoolCacheAligned,
    NonPagedPoolCacheAlignedMustS,
    MaxPoolType,
    NonPagedPoolSession = 32,
    PagedPoolSession = NonPagedPoolSession + 1,
    NonPagedPoolMustSucceedSession = PagedPoolSession + 1,
    DontUseThisTypeSession = NonPagedPoolMustSucceedSession + 1,
    NonPagedPoolCacheAlignedSession = DontUseThisTypeSession + 1,
    PagedPoolCacheAlignedSession = NonPagedPoolCacheAlignedSession + 1,
    NonPagedPoolCacheAlignedMustSSession = PagedPoolCacheAlignedSession + 1,
    } POOL_TYPE;
__declspec(deprecated)
__declspec(dllimport)
PVOID
ExAllocatePool(
     POOL_TYPE PoolType,
     SIZE_T NumberOfBytes
    );
__declspec(deprecated)
__declspec(dllimport)
PVOID
ExAllocatePoolWithQuota(
     POOL_TYPE PoolType,
     SIZE_T NumberOfBytes
    );
__declspec(dllimport)
PVOID
__stdcall
ExAllocatePoolWithTag(
     POOL_TYPE PoolType,
     SIZE_T NumberOfBytes,
     ULONG Tag
    );
typedef enum _EX_POOL_PRIORITY {
    LowPoolPriority,
    LowPoolPrioritySpecialPoolOverrun = 8,
    LowPoolPrioritySpecialPoolUnderrun = 9,
    NormalPoolPriority = 16,
    NormalPoolPrioritySpecialPoolOverrun = 24,
    NormalPoolPrioritySpecialPoolUnderrun = 25,
    HighPoolPriority = 32,
    HighPoolPrioritySpecialPoolOverrun = 40,
    HighPoolPrioritySpecialPoolUnderrun = 41
    } EX_POOL_PRIORITY;
__declspec(dllimport)
PVOID
__stdcall
ExAllocatePoolWithTagPriority(
     POOL_TYPE PoolType,
     SIZE_T NumberOfBytes,
     ULONG Tag,
     EX_POOL_PRIORITY Priority
    );
__declspec(dllimport)
PVOID
ExAllocatePoolWithQuotaTag(
     POOL_TYPE PoolType,
     SIZE_T NumberOfBytes,
     ULONG Tag
    );
__declspec(dllimport)
void
__stdcall
ExFreePool(
     PVOID P
    );
__declspec(dllimport)
void
ExFreePoolWithTag(
     PVOID P,
     ULONG Tag
    );
typedef struct _FAST_MUTEX {
    volatile LONG Count;
    PKTHREAD Owner;
    ULONG Contention;
    KEVENT Gate;
    ULONG OldIrql;
} FAST_MUTEX, *PFAST_MUTEX;
void
__forceinline
ExInitializeFastMutex (
     PFAST_MUTEX FastMutex
    )
{
    FastMutex->Count = 0x1;
    FastMutex->Owner = ((void *)0);
    FastMutex->Contention = 0;
    KeInitializeEvent(&FastMutex->Gate, SynchronizationEvent, 0);
    return;
}
__declspec(dllimport)
void
__fastcall
ExAcquireFastMutexUnsafe (
     PFAST_MUTEX FastMutex
    );
__declspec(dllimport)
void
__fastcall
ExReleaseFastMutexUnsafe (
     PFAST_MUTEX FastMutex
    );
__declspec(dllimport)
void
__fastcall
ExAcquireFastMutex (
     PFAST_MUTEX FastMutex
    );
__declspec(dllimport)
void
__fastcall
ExReleaseFastMutex (
     PFAST_MUTEX FastMutex
    );
__declspec(dllimport)
BOOLEAN
__fastcall
ExTryToAcquireFastMutex (
     PFAST_MUTEX FastMutex
    );
LONG
_InterlockedAddLargeStatistic (
     PLONGLONG Addend,
     ULONG Increment
    );
#pragma intrinsic (_InterlockedAddLargeStatistic)
__declspec(dllimport)
LARGE_INTEGER
ExInterlockedAddLargeInteger (
     PLARGE_INTEGER Addend,
     LARGE_INTEGER Increment,
     PKSPIN_LOCK Lock
    );
__declspec(dllimport)
ULONG
__fastcall
ExfInterlockedAddUlong (
     PULONG Addend,
     ULONG Increment,
     PKSPIN_LOCK Lock
    );
__declspec(dllimport)
PLIST_ENTRY
__fastcall
ExfInterlockedInsertHeadList (
     PLIST_ENTRY ListHead,
     PLIST_ENTRY ListEntry,
     PKSPIN_LOCK Lock
    );
__declspec(dllimport)
PLIST_ENTRY
__fastcall
ExfInterlockedInsertTailList (
     PLIST_ENTRY ListHead,
     PLIST_ENTRY ListEntry,
     PKSPIN_LOCK Lock
    );
__declspec(dllimport)
PLIST_ENTRY
__fastcall
ExfInterlockedRemoveHeadList (
     PLIST_ENTRY ListHead,
     PKSPIN_LOCK Lock
    );
__declspec(dllimport)
PSINGLE_LIST_ENTRY
__fastcall
ExfInterlockedPopEntryList (
     PSINGLE_LIST_ENTRY ListHead,
     PKSPIN_LOCK Lock
    );
__declspec(dllimport)
PSINGLE_LIST_ENTRY
__fastcall
ExfInterlockedPushEntryList (
     PSINGLE_LIST_ENTRY ListHead,
     PSINGLE_LIST_ENTRY ListEntry,
     PKSPIN_LOCK Lock
    );
__inline
void
InitializeSListHead (
     PSLIST_HEADER SListHead
    )
{
    memset((SListHead),0,(sizeof(SLIST_HEADER)));
    return;
}
PSINGLE_LIST_ENTRY
FirstEntrySList (
     const SLIST_HEADER *SListHead
    );
__declspec(dllimport)
PSINGLE_LIST_ENTRY
__fastcall
ExInterlockedFlushSList (
     PSLIST_HEADER ListHead
    );
__declspec(dllimport)
PSINGLE_LIST_ENTRY
__fastcall
InterlockedPopEntrySList (
     PSLIST_HEADER ListHead
    );
__declspec(dllimport)
PSINGLE_LIST_ENTRY
__fastcall
InterlockedPushEntrySList (
     PSLIST_HEADER ListHead,
     PSINGLE_LIST_ENTRY ListEntry
    );
typedef struct _LOOKASIDE_LIST_EX {
    GENERAL_LOOKASIDE_POOL L;
} LOOKASIDE_LIST_EX, *PLOOKASIDE_LIST_EX;
typedef struct _NPAGED_LOOKASIDE_LIST {
    GENERAL_LOOKASIDE L;
    KSPIN_LOCK Lock__ObsoleteButDoNotDelete;
} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST;
__declspec(dllimport)
void
ExInitializeNPagedLookasideList (
     PNPAGED_LOOKASIDE_LIST Lookaside,
     PALLOCATE_FUNCTION Allocate,
     PFREE_FUNCTION Free,
     ULONG Flags,
     SIZE_T Size,
     ULONG Tag,
     USHORT Depth
    );
__declspec(dllimport)
void
ExDeleteNPagedLookasideList (
     PNPAGED_LOOKASIDE_LIST Lookaside
    );
__inline
PVOID
ExAllocateFromNPagedLookasideList (
     PNPAGED_LOOKASIDE_LIST Lookaside
    )
{
    PVOID Entry;
    Lookaside->L.TotalAllocates += 1;
    Entry = InterlockedPopEntrySList(&Lookaside->L.ListHead);
    if (Entry == ((void *)0)) {
        Lookaside->L.AllocateMisses += 1;
        Entry = (Lookaside->L.Allocate)(Lookaside->L.Type,
                                        Lookaside->L.Size,
                                        Lookaside->L.Tag);
    }
    return Entry;
}
__inline
void
ExFreeToNPagedLookasideList (
     PNPAGED_LOOKASIDE_LIST Lookaside,
     PVOID Entry
    )
{
    Lookaside->L.TotalFrees += 1;
    if ((&Lookaside->L.ListHead)->Depth >= Lookaside->L.Depth) {
        Lookaside->L.FreeMisses += 1;
        (Lookaside->L.Free)(Entry);
    } else {
        InterlockedPushEntrySList(&Lookaside->L.ListHead, (PSINGLE_LIST_ENTRY)Entry);
    }
    return;
}
typedef struct _PAGED_LOOKASIDE_LIST {
    GENERAL_LOOKASIDE L;
    FAST_MUTEX Lock__ObsoleteButDoNotDelete;
} PAGED_LOOKASIDE_LIST, *PPAGED_LOOKASIDE_LIST;
__declspec(dllimport)
void
ExInitializePagedLookasideList (
     PPAGED_LOOKASIDE_LIST Lookaside,
     PALLOCATE_FUNCTION Allocate,
     PFREE_FUNCTION Free,
     ULONG Flags,
     SIZE_T Size,
     ULONG Tag,
     USHORT Depth
    );
__declspec(dllimport)
void
ExDeletePagedLookasideList (
     PPAGED_LOOKASIDE_LIST Lookaside
    );
__inline
PVOID
ExAllocateFromPagedLookasideList (
     PPAGED_LOOKASIDE_LIST Lookaside
    )
{
    PVOID Entry;
    Lookaside->L.TotalAllocates += 1;
    Entry = InterlockedPopEntrySList(&Lookaside->L.ListHead);
    if (Entry == ((void *)0)) {
        Lookaside->L.AllocateMisses += 1;
        Entry = (Lookaside->L.Allocate)(Lookaside->L.Type,
                                        Lookaside->L.Size,
                                        Lookaside->L.Tag);
    }
    return Entry;
}
__inline
void
ExFreeToPagedLookasideList (
     PPAGED_LOOKASIDE_LIST Lookaside,
     PVOID Entry
    )
{
    Lookaside->L.TotalFrees += 1;
    if ((&Lookaside->L.ListHead)->Depth >= Lookaside->L.Depth) {
        Lookaside->L.FreeMisses += 1;
        (Lookaside->L.Free)(Entry);
    } else {
        InterlockedPushEntrySList(&Lookaside->L.ListHead,
                                  (PSINGLE_LIST_ENTRY)Entry);
    }
    return;
}
__declspec(dllimport)
void
__stdcall
ProbeForRead (
       void *Address,
     SIZE_T Length,
     ULONG Alignment
    );
__declspec(dllimport)
__declspec(noreturn)
void
__stdcall
ExRaiseStatus (
     NTSTATUS Status
    );
__declspec(dllimport)
void
__stdcall
ProbeForWrite (
       PVOID Address,
     SIZE_T Length,
     ULONG Alignment
    );
typedef enum _WORK_QUEUE_TYPE {
    CriticalWorkQueue,
    DelayedWorkQueue,
    HyperCriticalWorkQueue,
    MaximumWorkQueue
} WORK_QUEUE_TYPE;
typedef
void
(*PWORKER_THREAD_ROUTINE)(
     PVOID Parameter
    );
typedef struct _WORK_QUEUE_ITEM {
    LIST_ENTRY List;
    PWORKER_THREAD_ROUTINE WorkerRoutine;
     PVOID Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM;
#pragma deprecated(ExInitializeWorkItem)
__declspec(deprecated)
__declspec(dllimport)
void
ExQueueWorkItem(
     PWORK_QUEUE_ITEM WorkItem,
     WORK_QUEUE_TYPE QueueType
    );
__declspec(dllimport)
BOOLEAN
ExIsProcessorFeaturePresent(
     ULONG ProcessorFeature
    );
typedef ULONG_PTR ERESOURCE_THREAD;
typedef ERESOURCE_THREAD *PERESOURCE_THREAD;
typedef struct _OWNER_ENTRY {
    ERESOURCE_THREAD OwnerThread;
    union {
        LONG OwnerCount;
        ULONG TableSize;
    };
} OWNER_ENTRY, *POWNER_ENTRY;
typedef struct _ERESOURCE {
    LIST_ENTRY SystemResourcesList;
    POWNER_ENTRY OwnerTable;
    SHORT ActiveCount;
    USHORT Flag;
     PKSEMAPHORE SharedWaiters;
     PKEVENT ExclusiveWaiters;
    OWNER_ENTRY OwnerEntry;
    ULONG ActiveEntries;
    ULONG ContentionCount;
    ULONG NumberOfSharedWaiters;
    ULONG NumberOfExclusiveWaiters;
    union {
        PVOID Address;
        ULONG_PTR CreatorBackTraceIndex;
    };
    KSPIN_LOCK SpinLock;
} ERESOURCE, *PERESOURCE;
typedef struct _RESOURCE_HASH_ENTRY {
    LIST_ENTRY ListEntry;
    PVOID Address;
    ULONG ContentionCount;
    ULONG Number;
} RESOURCE_HASH_ENTRY, *PRESOURCE_HASH_ENTRY;
typedef struct _RESOURCE_PERFORMANCE_DATA {
    ULONG ActiveResourceCount;
    ULONG TotalResourceCount;
    ULONG ExclusiveAcquire;
    ULONG SharedFirstLevel;
    ULONG SharedSecondLevel;
    ULONG StarveFirstLevel;
    ULONG StarveSecondLevel;
    ULONG WaitForExclusive;
    ULONG OwnerTableExpands;
    ULONG MaximumTableExpand;
    LIST_ENTRY HashTable[64];
} RESOURCE_PERFORMANCE_DATA, *PRESOURCE_PERFORMANCE_DATA;
__declspec(dllimport)
NTSTATUS
ExInitializeResourceLite (
     PERESOURCE Resource
    );
__declspec(dllimport)
NTSTATUS
ExReinitializeResourceLite (
     PERESOURCE Resource
    );
__declspec(dllimport)
BOOLEAN
ExAcquireResourceSharedLite (
     PERESOURCE Resource,
     BOOLEAN Wait
    );
__declspec(dllimport)
BOOLEAN
ExAcquireResourceExclusiveLite (
     PERESOURCE Resource,
     BOOLEAN Wait
    );
__declspec(dllimport)
BOOLEAN
ExAcquireSharedStarveExclusive(
     PERESOURCE Resource,
     BOOLEAN Wait
    );
__declspec(dllimport)
BOOLEAN
ExAcquireSharedWaitForExclusive(
     PERESOURCE Resource,
     BOOLEAN Wait
    );
#pragma deprecated(ExReleaseResource)
__declspec(dllimport)
void
__fastcall
ExReleaseResourceLite(
     PERESOURCE Resource
    );
__declspec(dllimport)
void
ExReleaseResourceForThreadLite(
     PERESOURCE Resource,
     ERESOURCE_THREAD ResourceThreadId
    );
__declspec(dllimport)
void
ExSetResourceOwnerPointer(
     PERESOURCE Resource,
     PVOID OwnerPointer
    );
__declspec(dllimport)
void
ExConvertExclusiveToSharedLite(
     PERESOURCE Resource
    );
__declspec(dllimport)
NTSTATUS
ExDeleteResourceLite (
     PERESOURCE Resource
    );
__declspec(dllimport)
ULONG
ExGetExclusiveWaiterCount (
     PERESOURCE Resource
    );
__declspec(dllimport)
ULONG
ExGetSharedWaiterCount (
     PERESOURCE Resource
    );
__declspec(dllimport)
BOOLEAN
ExIsResourceAcquiredExclusiveLite (
     PERESOURCE Resource
    );
__declspec(dllimport)
ULONG
ExIsResourceAcquiredSharedLite (
     PERESOURCE Resource
    );
typedef struct _EX_RUNDOWN_REF {
    union {
         ULONG_PTR Count;
         PVOID Ptr;
    };
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF;
typedef struct _EX_RUNDOWN_REF_CACHE_AWARE *PEX_RUNDOWN_REF_CACHE_AWARE;
__declspec(dllimport)
KPROCESSOR_MODE
ExGetPreviousMode(
    void
    );
__declspec(dllimport)
ULONG
ExSetTimerResolution (
     ULONG DesiredTime,
     BOOLEAN SetResolution
    );
__declspec(dllimport)
void
ExSystemTimeToLocalTime (
     PLARGE_INTEGER SystemTime,
     PLARGE_INTEGER LocalTime
    );
__declspec(dllimport)
void
ExLocalTimeToSystemTime (
     PLARGE_INTEGER LocalTime,
     PLARGE_INTEGER SystemTime
    );
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;
typedef void (*PCALLBACK_FUNCTION ) (
     PVOID CallbackContext,
     PVOID Argument1,
     PVOID Argument2
    );
__declspec(dllimport)
NTSTATUS
ExCreateCallback (
     PCALLBACK_OBJECT *CallbackObject,
     POBJECT_ATTRIBUTES ObjectAttributes,
     BOOLEAN Create,
     BOOLEAN AllowMultipleCallbacks
    );
__declspec(dllimport)
PVOID
ExRegisterCallback (
     PCALLBACK_OBJECT CallbackObject,
     PCALLBACK_FUNCTION CallbackFunction,
     PVOID CallbackContext
    );
__declspec(dllimport)
void
ExUnregisterCallback (
     PVOID CallbackRegistration
    );
__declspec(dllimport)
void
ExNotifyCallback (
     PVOID CallbackObject,
     PVOID Argument1,
     PVOID Argument2
    );
__declspec(dllimport)
BOOLEAN
ExVerifySuite(
     SUITE_TYPE SuiteType
    );
__declspec(dllimport)
void
__fastcall
ExInitializeRundownProtection (
      PEX_RUNDOWN_REF RunRef
     );
__declspec(dllimport)
void
__fastcall
ExReInitializeRundownProtection (
      PEX_RUNDOWN_REF RunRef
     );
__declspec(dllimport)
BOOLEAN
__fastcall
ExAcquireRundownProtection (
      PEX_RUNDOWN_REF RunRef
     );
__declspec(dllimport)
BOOLEAN
__fastcall
ExAcquireRundownProtectionEx (
      PEX_RUNDOWN_REF RunRef,
      ULONG Count
     );
__declspec(dllimport)
void
__fastcall
ExReleaseRundownProtection (
      PEX_RUNDOWN_REF RunRef
     );
__declspec(dllimport)
void
__fastcall
ExReleaseRundownProtectionEx (
      PEX_RUNDOWN_REF RunRef,
      ULONG Count
     );
__declspec(dllimport)
void
__fastcall
ExRundownCompleted (
      PEX_RUNDOWN_REF RunRef
     );
__declspec(dllimport)
void
__fastcall
ExWaitForRundownProtectionRelease (
      PEX_RUNDOWN_REF RunRef
     );
typedef NTSTATUS (*PEX_CALLBACK_FUNCTION ) (
     PVOID CallbackContext,
     PVOID Argument1,
     PVOID Argument2
    );
typedef enum _REG_NOTIFY_CLASS {
    RegNtDeleteKey,
    RegNtPreDeleteKey = RegNtDeleteKey,
    RegNtSetValueKey,
    RegNtPreSetValueKey = RegNtSetValueKey,
    RegNtDeleteValueKey,
    RegNtPreDeleteValueKey = RegNtDeleteValueKey,
    RegNtSetInformationKey,
    RegNtPreSetInformationKey = RegNtSetInformationKey,
    RegNtRenameKey,
    RegNtPreRenameKey = RegNtRenameKey,
    RegNtEnumerateKey,
    RegNtPreEnumerateKey = RegNtEnumerateKey,
    RegNtEnumerateValueKey,
    RegNtPreEnumerateValueKey = RegNtEnumerateValueKey,
    RegNtQueryKey,
    RegNtPreQueryKey = RegNtQueryKey,
    RegNtQueryValueKey,
    RegNtPreQueryValueKey = RegNtQueryValueKey,
    RegNtQueryMultipleValueKey,
    RegNtPreQueryMultipleValueKey = RegNtQueryMultipleValueKey,
    RegNtPreCreateKey,
    RegNtPostCreateKey,
    RegNtPreOpenKey,
    RegNtPostOpenKey,
    RegNtKeyHandleClose,
    RegNtPreKeyHandleClose = RegNtKeyHandleClose,
    RegNtPostDeleteKey,
    RegNtPostSetValueKey,
    RegNtPostDeleteValueKey,
    RegNtPostSetInformationKey,
    RegNtPostRenameKey,
    RegNtPostEnumerateKey,
    RegNtPostEnumerateValueKey,
    RegNtPostQueryKey,
    RegNtPostQueryValueKey,
    RegNtPostQueryMultipleValueKey,
    RegNtPostKeyHandleClose,
    RegNtPreCreateKeyEx,
    RegNtPostCreateKeyEx,
    RegNtPreOpenKeyEx,
    RegNtPostOpenKeyEx,
    RegNtPreFlushKey,
    RegNtPostFlushKey,
    RegNtPreLoadKey,
    RegNtPostLoadKey,
    RegNtPreUnLoadKey,
    RegNtPostUnLoadKey,
    RegNtPreQueryKeySecurity,
    RegNtPostQueryKeySecurity,
    RegNtPreSetKeySecurity,
    RegNtPostSetKeySecurity,
    RegNtCallbackObjectContextCleanup,
    MaxRegNtNotifyClass
} REG_NOTIFY_CLASS;
typedef struct _REG_DELETE_KEY_INFORMATION {
    PVOID Object;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_DELETE_KEY_INFORMATION, *PREG_DELETE_KEY_INFORMATION
;
typedef struct _REG_SET_VALUE_KEY_INFORMATION {
    PVOID Object;
    PUNICODE_STRING ValueName;
    ULONG TitleIndex;
    ULONG Type;
    PVOID Data;
    ULONG DataSize;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_SET_VALUE_KEY_INFORMATION, *PREG_SET_VALUE_KEY_INFORMATION;
typedef struct _REG_DELETE_VALUE_KEY_INFORMATION {
    PVOID Object;
    PUNICODE_STRING ValueName;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_DELETE_VALUE_KEY_INFORMATION, *PREG_DELETE_VALUE_KEY_INFORMATION;
typedef struct _REG_SET_INFORMATION_KEY_INFORMATION {
    PVOID Object;
    KEY_SET_INFORMATION_CLASS KeySetInformationClass;
    PVOID KeySetInformation;
    ULONG KeySetInformationLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_SET_INFORMATION_KEY_INFORMATION, *PREG_SET_INFORMATION_KEY_INFORMATION;
typedef struct _REG_ENUMERATE_KEY_INFORMATION {
    PVOID Object;
    ULONG Index;
    KEY_INFORMATION_CLASS KeyInformationClass;
    PVOID KeyInformation;
    ULONG Length;
    PULONG ResultLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_ENUMERATE_KEY_INFORMATION, *PREG_ENUMERATE_KEY_INFORMATION;
typedef struct _REG_ENUMERATE_VALUE_KEY_INFORMATION {
    PVOID Object;
    ULONG Index;
    KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass;
    PVOID KeyValueInformation;
    ULONG Length;
    PULONG ResultLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_ENUMERATE_VALUE_KEY_INFORMATION, *PREG_ENUMERATE_VALUE_KEY_INFORMATION;
typedef struct _REG_QUERY_KEY_INFORMATION {
    PVOID Object;
    KEY_INFORMATION_CLASS KeyInformationClass;
    PVOID KeyInformation;
    ULONG Length;
    PULONG ResultLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_QUERY_KEY_INFORMATION, *PREG_QUERY_KEY_INFORMATION;
typedef struct _REG_QUERY_VALUE_KEY_INFORMATION {
    PVOID Object;
    PUNICODE_STRING ValueName;
    KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass;
    PVOID KeyValueInformation;
    ULONG Length;
    PULONG ResultLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_QUERY_VALUE_KEY_INFORMATION, *PREG_QUERY_VALUE_KEY_INFORMATION;
typedef struct _REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION {
    PVOID Object;
    PKEY_VALUE_ENTRY ValueEntries;
    ULONG EntryCount;
    PVOID ValueBuffer;
    PULONG BufferLength;
    PULONG RequiredBufferLength;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION, *PREG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION;
typedef struct _REG_RENAME_KEY_INFORMATION {
    PVOID Object;
    PUNICODE_STRING NewName;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_RENAME_KEY_INFORMATION, *PREG_RENAME_KEY_INFORMATION;
typedef struct _REG_KEY_HANDLE_CLOSE_INFORMATION {
    PVOID Object;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_KEY_HANDLE_CLOSE_INFORMATION, *PREG_KEY_HANDLE_CLOSE_INFORMATION;
typedef struct _REG_CREATE_KEY_INFORMATION {
    PUNICODE_STRING CompleteName;
    PVOID RootObject;
    PVOID ObjectType;
    ULONG CreateOptions;
    PUNICODE_STRING Class;
    PVOID SecurityDescriptor;
    PVOID SecurityQualityOfService;
    ACCESS_MASK DesiredAccess;
    ACCESS_MASK GrantedAccess;
    PULONG Disposition;
    PVOID *ResultObject;
    PVOID CallContext;
    PVOID RootObjectContext;
    PVOID Transaction;
    PVOID Reserved;
} REG_CREATE_KEY_INFORMATION, REG_OPEN_KEY_INFORMATION,*PREG_CREATE_KEY_INFORMATION, *PREG_OPEN_KEY_INFORMATION;
typedef struct _REG_POST_OPERATION_INFORMATION {
    PVOID Object;
    NTSTATUS Status;
    PVOID PreInformation;
    NTSTATUS ReturnStatus;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_POST_OPERATION_INFORMATION,*PREG_POST_OPERATION_INFORMATION;
typedef struct _REG_PRE_CREATE_KEY_INFORMATION {
    PUNICODE_STRING CompleteName;
} REG_PRE_CREATE_KEY_INFORMATION, REG_PRE_OPEN_KEY_INFORMATION,*PREG_PRE_CREATE_KEY_INFORMATION, *PREG_PRE_OPEN_KEY_INFORMATION;;
typedef struct _REG_POST_CREATE_KEY_INFORMATION {
    PUNICODE_STRING CompleteName;
    PVOID Object;
    NTSTATUS Status;
} REG_POST_CREATE_KEY_INFORMATION,REG_POST_OPEN_KEY_INFORMATION, *PREG_POST_CREATE_KEY_INFORMATION, *PREG_POST_OPEN_KEY_INFORMATION;
NTSTATUS
CmRegisterCallback( PEX_CALLBACK_FUNCTION Function,
                    PVOID Context,
                       PLARGE_INTEGER Cookie
                    );
NTSTATUS
CmUnRegisterCallback( LARGE_INTEGER Cookie);
extern PBOOLEAN Mm64BitPhysicalAddress;
extern PVOID MmBadPointer;
#pragma deprecated(COMPUTE_PAGES_SPANNED)
typedef enum _MM_SYSTEM_SIZE {
    MmSmallSystem,
    MmMediumSystem,
    MmLargeSystem
} MM_SYSTEMSIZE;
__declspec(dllimport)
MM_SYSTEMSIZE
MmQuerySystemSize (
    void
    );
__declspec(dllimport)
NTSTATUS
MmIsVerifierEnabled (
     PULONG VerifierFlags
    );
__declspec(dllimport)
NTSTATUS
MmAddVerifierThunks (
     PVOID ThunkBuffer,
     ULONG ThunkBufferSize
    );
__declspec(dllimport)
void
MmProbeAndLockProcessPages (
     PMDL MemoryDescriptorList,
     PEPROCESS Process,
     KPROCESSOR_MODE AccessMode,
     LOCK_OPERATION Operation
    );
__declspec(dllimport)
void
MmProbeAndLockPages (
     PMDLX MemoryDescriptorList,
     KPROCESSOR_MODE AccessMode,
     LOCK_OPERATION Operation
    );
__declspec(dllimport)
void
MmUnlockPages (
     PMDLX MemoryDescriptorList
    );
__declspec(dllimport)
void
MmBuildMdlForNonPagedPool (
     PMDLX MemoryDescriptorList
    );
__declspec(deprecated)
__declspec(dllimport)
PVOID
MmMapLockedPages (
     PMDL MemoryDescriptorList,
     KPROCESSOR_MODE AccessMode
    );
__declspec(dllimport)
PVOID
MmGetSystemRoutineAddress (
     PUNICODE_STRING SystemRoutineName
    );
__declspec(dllimport)
NTSTATUS
MmAdvanceMdl (
     PMDLX Mdl,
     ULONG NumberOfBytes
    );
__declspec(dllimport)
NTSTATUS
MmProtectMdlSystemAddress (
     PMDLX MemoryDescriptorList,
     ULONG NewProtect
    );
typedef enum _MM_PAGE_PRIORITY {
    LowPagePriority,
    NormalPagePriority = 16,
    HighPagePriority = 32
} MM_PAGE_PRIORITY;
__declspec(dllimport)
PVOID
MmMapLockedPagesSpecifyCache (
      PMDLX MemoryDescriptorList,
      KPROCESSOR_MODE AccessMode,
      MEMORY_CACHING_TYPE CacheType,
      PVOID BaseAddress,
      ULONG BugCheckOnFailure,
      MM_PAGE_PRIORITY Priority
     );
__declspec(dllimport)
void
MmUnmapLockedPages (
     PVOID BaseAddress,
     PMDL MemoryDescriptorList
    );
__declspec(dllimport)
 PVOID
MmAllocateMappingAddress (
      SIZE_T NumberOfBytes,
      ULONG PoolTag
     );
__declspec(dllimport)
void
MmFreeMappingAddress (
      PVOID BaseAddress,
      ULONG PoolTag
     );
__declspec(dllimport)
PVOID
MmMapLockedPagesWithReservedMapping (
     PVOID MappingAddress,
     ULONG PoolTag,
     PMDLX MemoryDescriptorList,
     MEMORY_CACHING_TYPE CacheType
    );
__declspec(dllimport)
void
MmUnmapReservedMapping (
      PVOID BaseAddress,
      ULONG PoolTag,
      PMDLX MemoryDescriptorList
     );
__declspec(dllimport)
PMDL
MmAllocatePagesForMdl (
     PHYSICAL_ADDRESS LowAddress,
     PHYSICAL_ADDRESS HighAddress,
     PHYSICAL_ADDRESS SkipBytes,
     SIZE_T TotalBytes
    );
__declspec(dllimport)
void
MmFreePagesFromMdl (
     PMDLX MemoryDescriptorList
    );
__declspec(dllimport)
 PVOID
MmMapIoSpace (
     PHYSICAL_ADDRESS PhysicalAddress,
     SIZE_T NumberOfBytes,
     MEMORY_CACHING_TYPE CacheType
    );
__declspec(dllimport)
void
MmUnmapIoSpace (
     PVOID BaseAddress,
     SIZE_T NumberOfBytes
    );
__declspec(dllimport)
SIZE_T
MmSizeOfMdl (
     PVOID Base,
     SIZE_T Length
    );
__declspec(deprecated)
__declspec(dllimport)
PMDL
MmCreateMdl (
     PMDL MemoryDescriptorList,
     PVOID Base,
     SIZE_T Length
    );
__declspec(dllimport)
PVOID
MmLockPagableDataSection (
     PVOID AddressWithinSection
    );
__declspec(dllimport)
void
MmResetDriverPaging (
     PVOID AddressWithinSection
    );
__declspec(dllimport)
PVOID
MmPageEntireDriver (
     PVOID AddressWithinSection
    );
__declspec(dllimport)
void
MmUnlockPagableImageSection (
     PVOID ImageSectionHandle
    );
#pragma deprecated(MmGetSystemAddressForMdl)
typedef NTSTATUS (*PMM_DLL_INITIALIZE) (
     PUNICODE_STRING RegistryPath
    );
typedef NTSTATUS (*PMM_DLL_UNLOAD) (
    void
    );
struct _DRIVER_OBJECT;
__declspec(dllimport)
LOGICAL
MmIsDriverVerifying (
     struct _DRIVER_OBJECT *DriverObject
    );
typedef enum _SECURITY_OPERATION_CODE {
    SetSecurityDescriptor,
    QuerySecurityDescriptor,
    DeleteSecurityDescriptor,
    AssignSecurityDescriptor
    } SECURITY_OPERATION_CODE, *PSECURITY_OPERATION_CODE;
typedef struct _SECURITY_SUBJECT_CONTEXT {
    PACCESS_TOKEN ClientToken;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    PACCESS_TOKEN PrimaryToken;
    PVOID ProcessAuditId;
    } SECURITY_SUBJECT_CONTEXT, *PSECURITY_SUBJECT_CONTEXT;
typedef struct _INITIAL_PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    LUID_AND_ATTRIBUTES Privilege[3];
    } INITIAL_PRIVILEGE_SET, * PINITIAL_PRIVILEGE_SET;
typedef struct _ACCESS_STATE {
   LUID OperationID;
   BOOLEAN SecurityEvaluated;
   BOOLEAN GenerateAudit;
   BOOLEAN GenerateOnClose;
   BOOLEAN PrivilegesAllocated;
   ULONG Flags;
   ACCESS_MASK RemainingDesiredAccess;
   ACCESS_MASK PreviouslyGrantedAccess;
   ACCESS_MASK OriginalDesiredAccess;
   SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
   PSECURITY_DESCRIPTOR SecurityDescriptor;
   PVOID AuxData;
   union {
      INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
      PRIVILEGE_SET PrivilegeSet;
      } Privileges;
   BOOLEAN AuditPrivileges;
   UNICODE_STRING ObjectName;
   UNICODE_STRING ObjectTypeName;
   } ACCESS_STATE, *PACCESS_STATE;
__declspec(dllimport)
void
SeCaptureSubjectContext (
     PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
__declspec(dllimport)
void
SeLockSubjectContext(
     PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
__declspec(dllimport)
void
SeUnlockSubjectContext(
     PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
__declspec(dllimport)
void
SeReleaseSubjectContext (
     PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
__declspec(dllimport)
NTSTATUS
SeAssignSecurity (
     PSECURITY_DESCRIPTOR ParentDescriptor,
     PSECURITY_DESCRIPTOR ExplicitDescriptor,
     PSECURITY_DESCRIPTOR *NewDescriptor,
     BOOLEAN IsDirectoryObject,
     PSECURITY_SUBJECT_CONTEXT SubjectContext,
     PGENERIC_MAPPING GenericMapping,
     POOL_TYPE PoolType
    );
__declspec(dllimport)
NTSTATUS
SeAssignSecurityEx (
     PSECURITY_DESCRIPTOR ParentDescriptor,
     PSECURITY_DESCRIPTOR ExplicitDescriptor,
     PSECURITY_DESCRIPTOR *NewDescriptor,
     GUID *ObjectType,
     BOOLEAN IsDirectoryObject,
     ULONG AutoInheritFlags,
     PSECURITY_SUBJECT_CONTEXT SubjectContext,
     PGENERIC_MAPPING GenericMapping,
     POOL_TYPE PoolType
    );
__declspec(dllimport)
NTSTATUS
SeDeassignSecurity (
     PSECURITY_DESCRIPTOR *SecurityDescriptor
    );
__declspec(dllimport)
ULONG
SeObjectCreateSaclAccessBits(
     PSECURITY_DESCRIPTOR SecurityDescriptor
    );
__declspec(dllimport)
BOOLEAN
SeAccessCheck (
     PSECURITY_DESCRIPTOR SecurityDescriptor,
     PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
     BOOLEAN SubjectContextLocked,
     ACCESS_MASK DesiredAccess,
     ACCESS_MASK PreviouslyGrantedAccess,
     PPRIVILEGE_SET *Privileges,
     PGENERIC_MAPPING GenericMapping,
     KPROCESSOR_MODE AccessMode,
     PACCESS_MASK GrantedAccess,
     PNTSTATUS AccessStatus
    );
__declspec(dllimport)
BOOLEAN
SeValidSecurityDescriptor(
     ULONG Length,
     PSECURITY_DESCRIPTOR SecurityDescriptor
    );
__forceinline
PETHREAD
PsGetCurrentThread (
    void
    )
{
    return (PETHREAD)KeGetCurrentThread();
}
__declspec(dllimport)
NTSTATUS
PsCreateSystemThread(
     PHANDLE ThreadHandle,
     ULONG DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
      HANDLE ProcessHandle,
     PCLIENT_ID ClientId,
     PKSTART_ROUTINE StartRoutine,
     PVOID StartContext
    );
__declspec(dllimport)
NTSTATUS
PsTerminateSystemThread(
     NTSTATUS ExitStatus
    );
__declspec(dllimport)
NTSTATUS
PsWrapApcWow64Thread (
     PVOID *ApcContext,
     PVOID *ApcRoutine);
typedef enum _CREATE_FILE_TYPE {
    CreateFileTypeNone,
    CreateFileTypeNamedPipe,
    CreateFileTypeMailslot
} CREATE_FILE_TYPE;
struct _DEVICE_DESCRIPTION;
struct _DEVICE_OBJECT;
struct _DMA_ADAPTER;
struct _DRIVER_OBJECT;
struct _DRIVE_LAYOUT_INFORMATION;
struct _DISK_PARTITION;
struct _FILE_OBJECT;
struct __declspec(align(8)) _IRP;
struct _SCSI_REQUEST_BLOCK;
struct _SCATTER_GATHER_LIST;
typedef
void
IO_DPC_ROUTINE (
     PKDPC Dpc,
     struct _DEVICE_OBJECT *DeviceObject,
     struct _IRP *Irp,
     PVOID Context
    );
typedef IO_DPC_ROUTINE *PIO_DPC_ROUTINE;
typedef
void
IO_TIMER_ROUTINE (
     struct _DEVICE_OBJECT *DeviceObject,
     PVOID Context
    );
typedef IO_TIMER_ROUTINE *PIO_TIMER_ROUTINE;
typedef
NTSTATUS
DRIVER_INITIALIZE (
     struct _DRIVER_OBJECT *DriverObject,
     PUNICODE_STRING RegistryPath
    );
typedef DRIVER_INITIALIZE *PDRIVER_INITIALIZE;
typedef
void
DRIVER_CANCEL (
     struct _DEVICE_OBJECT *DeviceObject,
     struct _IRP *Irp
    );
typedef DRIVER_CANCEL *PDRIVER_CANCEL;
typedef
NTSTATUS
DRIVER_DISPATCH (
     struct _DEVICE_OBJECT *DeviceObject,
     struct _IRP *Irp
    );
typedef DRIVER_DISPATCH *PDRIVER_DISPATCH;
typedef
void
DRIVER_STARTIO (
     struct _DEVICE_OBJECT *DeviceObject,
     struct _IRP *Irp
    );
typedef DRIVER_STARTIO *PDRIVER_STARTIO;
typedef
void
DRIVER_UNLOAD (
     struct _DRIVER_OBJECT *DriverObject
    );
typedef DRIVER_UNLOAD *PDRIVER_UNLOAD;
typedef
NTSTATUS
DRIVER_ADD_DEVICE (
     struct _DRIVER_OBJECT *DriverObject,
     struct _DEVICE_OBJECT *PhysicalDeviceObject
    );
typedef DRIVER_ADD_DEVICE *PDRIVER_ADD_DEVICE;
typedef
BOOLEAN
FAST_IO_CHECK_IF_POSSIBLE (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     ULONG Length,
     BOOLEAN Wait,
     ULONG LockKey,
     BOOLEAN CheckForReadOperation,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_CHECK_IF_POSSIBLE *PFAST_IO_CHECK_IF_POSSIBLE;
typedef
BOOLEAN
FAST_IO_READ (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     ULONG Length,
     BOOLEAN Wait,
     ULONG LockKey,
     PVOID Buffer,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_READ *PFAST_IO_READ;
typedef
BOOLEAN
FAST_IO_WRITE (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     ULONG Length,
     BOOLEAN Wait,
     ULONG LockKey,
     PVOID Buffer,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_WRITE *PFAST_IO_WRITE;
typedef
BOOLEAN
FAST_IO_QUERY_BASIC_INFO (
     struct _FILE_OBJECT *FileObject,
     BOOLEAN Wait,
     PFILE_BASIC_INFORMATION Buffer,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_QUERY_BASIC_INFO *PFAST_IO_QUERY_BASIC_INFO;
typedef
BOOLEAN
FAST_IO_QUERY_STANDARD_INFO (
     struct _FILE_OBJECT *FileObject,
     BOOLEAN Wait,
     PFILE_STANDARD_INFORMATION Buffer,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_QUERY_STANDARD_INFO *PFAST_IO_QUERY_STANDARD_INFO;
typedef
BOOLEAN
FAST_IO_LOCK (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     PLARGE_INTEGER Length,
     PEPROCESS ProcessId,
     ULONG Key,
     BOOLEAN FailImmediately,
     BOOLEAN ExclusiveLock,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_LOCK *PFAST_IO_LOCK;
typedef
BOOLEAN
FAST_IO_UNLOCK_SINGLE (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     PLARGE_INTEGER Length,
     PEPROCESS ProcessId,
     ULONG Key,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_UNLOCK_SINGLE *PFAST_IO_UNLOCK_SINGLE;
typedef
BOOLEAN
FAST_IO_UNLOCK_ALL (
     struct _FILE_OBJECT *FileObject,
     PEPROCESS ProcessId,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_UNLOCK_ALL *PFAST_IO_UNLOCK_ALL;
typedef
BOOLEAN
FAST_IO_UNLOCK_ALL_BY_KEY (
     struct _FILE_OBJECT *FileObject,
     PVOID ProcessId,
     ULONG Key,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_UNLOCK_ALL_BY_KEY *PFAST_IO_UNLOCK_ALL_BY_KEY;
typedef
BOOLEAN
FAST_IO_DEVICE_CONTROL (
     struct _FILE_OBJECT *FileObject,
     BOOLEAN Wait,
     PVOID InputBuffer,
     ULONG InputBufferLength,
     PVOID OutputBuffer,
     ULONG OutputBufferLength,
     ULONG IoControlCode,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_DEVICE_CONTROL *PFAST_IO_DEVICE_CONTROL;
typedef
void
FAST_IO_ACQUIRE_FILE (
     struct _FILE_OBJECT *FileObject
    );
typedef FAST_IO_ACQUIRE_FILE *PFAST_IO_ACQUIRE_FILE;
typedef
void
FAST_IO_RELEASE_FILE (
     struct _FILE_OBJECT *FileObject
    );
typedef FAST_IO_RELEASE_FILE *PFAST_IO_RELEASE_FILE;
typedef
void
FAST_IO_DETACH_DEVICE (
     struct _DEVICE_OBJECT *SourceDevice,
     struct _DEVICE_OBJECT *TargetDevice
    );
typedef FAST_IO_DETACH_DEVICE *PFAST_IO_DETACH_DEVICE;
typedef
BOOLEAN
FAST_IO_QUERY_NETWORK_OPEN_INFO (
     struct _FILE_OBJECT *FileObject,
     BOOLEAN Wait,
     struct _FILE_NETWORK_OPEN_INFORMATION *Buffer,
     struct _IO_STATUS_BLOCK *IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_QUERY_NETWORK_OPEN_INFO *PFAST_IO_QUERY_NETWORK_OPEN_INFO;
typedef
BOOLEAN
FAST_IO_MDL_READ (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     ULONG Length,
     ULONG LockKey,
     PMDL *MdlChain,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_MDL_READ *PFAST_IO_MDL_READ;
typedef
BOOLEAN
FAST_IO_MDL_READ_COMPLETE (
     struct _FILE_OBJECT *FileObject,
     PMDL MdlChain,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_MDL_READ_COMPLETE *PFAST_IO_MDL_READ_COMPLETE;
typedef
BOOLEAN
FAST_IO_PREPARE_MDL_WRITE (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     ULONG Length,
     ULONG LockKey,
     PMDL *MdlChain,
     PIO_STATUS_BLOCK IoStatus,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_PREPARE_MDL_WRITE *PFAST_IO_PREPARE_MDL_WRITE;
typedef
BOOLEAN
FAST_IO_MDL_WRITE_COMPLETE (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     PMDL MdlChain,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_MDL_WRITE_COMPLETE *PFAST_IO_MDL_WRITE_COMPLETE;
typedef
NTSTATUS
FAST_IO_ACQUIRE_FOR_MOD_WRITE (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER EndingOffset,
     struct _ERESOURCE **ResourceToRelease,
     struct _DEVICE_OBJECT *DeviceObject
             );
typedef FAST_IO_ACQUIRE_FOR_MOD_WRITE *PFAST_IO_ACQUIRE_FOR_MOD_WRITE;
typedef
NTSTATUS
FAST_IO_RELEASE_FOR_MOD_WRITE (
     struct _FILE_OBJECT *FileObject,
     struct _ERESOURCE *ResourceToRelease,
     struct _DEVICE_OBJECT *DeviceObject
             );
typedef FAST_IO_RELEASE_FOR_MOD_WRITE *PFAST_IO_RELEASE_FOR_MOD_WRITE;
typedef
NTSTATUS
FAST_IO_ACQUIRE_FOR_CCFLUSH (
     struct _FILE_OBJECT *FileObject,
     struct _DEVICE_OBJECT *DeviceObject
             );
typedef FAST_IO_ACQUIRE_FOR_CCFLUSH *PFAST_IO_ACQUIRE_FOR_CCFLUSH;
typedef
NTSTATUS
FAST_IO_RELEASE_FOR_CCFLUSH (
     struct _FILE_OBJECT *FileObject,
     struct _DEVICE_OBJECT *DeviceObject
             );
typedef FAST_IO_RELEASE_FOR_CCFLUSH *PFAST_IO_RELEASE_FOR_CCFLUSH;
typedef
BOOLEAN
FAST_IO_READ_COMPRESSED (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     ULONG Length,
     ULONG LockKey,
     PVOID Buffer,
     PMDL *MdlChain,
     PIO_STATUS_BLOCK IoStatus,
     struct _COMPRESSED_DATA_INFO *CompressedDataInfo,
     ULONG CompressedDataInfoLength,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_READ_COMPRESSED *PFAST_IO_READ_COMPRESSED;
typedef
BOOLEAN
FAST_IO_WRITE_COMPRESSED (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     ULONG Length,
     ULONG LockKey,
     PVOID Buffer,
     PMDL *MdlChain,
     PIO_STATUS_BLOCK IoStatus,
     struct _COMPRESSED_DATA_INFO *CompressedDataInfo,
     ULONG CompressedDataInfoLength,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_WRITE_COMPRESSED *PFAST_IO_WRITE_COMPRESSED;
typedef
BOOLEAN
FAST_IO_MDL_READ_COMPLETE_COMPRESSED (
     struct _FILE_OBJECT *FileObject,
     PMDL MdlChain,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_MDL_READ_COMPLETE_COMPRESSED *PFAST_IO_MDL_READ_COMPLETE_COMPRESSED;
typedef
BOOLEAN
FAST_IO_MDL_WRITE_COMPLETE_COMPRESSED (
     struct _FILE_OBJECT *FileObject,
     PLARGE_INTEGER FileOffset,
     PMDL MdlChain,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_MDL_WRITE_COMPLETE_COMPRESSED *PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED;
typedef
BOOLEAN
FAST_IO_QUERY_OPEN (
     struct _IRP *Irp,
     PFILE_NETWORK_OPEN_INFORMATION NetworkInformation,
     struct _DEVICE_OBJECT *DeviceObject
    );
typedef FAST_IO_QUERY_OPEN *PFAST_IO_QUERY_OPEN;
typedef struct _FAST_IO_DISPATCH {
    ULONG SizeOfFastIoDispatch;
    PFAST_IO_CHECK_IF_POSSIBLE FastIoCheckIfPossible;
    PFAST_IO_READ FastIoRead;
    PFAST_IO_WRITE FastIoWrite;
    PFAST_IO_QUERY_BASIC_INFO FastIoQueryBasicInfo;
    PFAST_IO_QUERY_STANDARD_INFO FastIoQueryStandardInfo;
    PFAST_IO_LOCK FastIoLock;
    PFAST_IO_UNLOCK_SINGLE FastIoUnlockSingle;
    PFAST_IO_UNLOCK_ALL FastIoUnlockAll;
    PFAST_IO_UNLOCK_ALL_BY_KEY FastIoUnlockAllByKey;
    PFAST_IO_DEVICE_CONTROL FastIoDeviceControl;
    PFAST_IO_ACQUIRE_FILE AcquireFileForNtCreateSection;
    PFAST_IO_RELEASE_FILE ReleaseFileForNtCreateSection;
    PFAST_IO_DETACH_DEVICE FastIoDetachDevice;
    PFAST_IO_QUERY_NETWORK_OPEN_INFO FastIoQueryNetworkOpenInfo;
    PFAST_IO_ACQUIRE_FOR_MOD_WRITE AcquireForModWrite;
    PFAST_IO_MDL_READ MdlRead;
    PFAST_IO_MDL_READ_COMPLETE MdlReadComplete;
    PFAST_IO_PREPARE_MDL_WRITE PrepareMdlWrite;
    PFAST_IO_MDL_WRITE_COMPLETE MdlWriteComplete;
    PFAST_IO_READ_COMPRESSED FastIoReadCompressed;
    PFAST_IO_WRITE_COMPRESSED FastIoWriteCompressed;
    PFAST_IO_MDL_READ_COMPLETE_COMPRESSED MdlReadCompleteCompressed;
    PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED MdlWriteCompleteCompressed;
    PFAST_IO_QUERY_OPEN FastIoQueryOpen;
    PFAST_IO_RELEASE_FOR_MOD_WRITE ReleaseForModWrite;
    PFAST_IO_ACQUIRE_FOR_CCFLUSH AcquireForCcFlush;
    PFAST_IO_RELEASE_FOR_CCFLUSH ReleaseForCcFlush;
} FAST_IO_DISPATCH, *PFAST_IO_DISPATCH;
typedef enum _IO_ALLOCATION_ACTION {
    KeepObject = 1,
    DeallocateObject,
    DeallocateObjectKeepRegisters
} IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;
typedef
IO_ALLOCATION_ACTION
(*PDRIVER_CONTROL) (
     struct _DEVICE_OBJECT *DeviceObject,
     struct _IRP *Irp,
     PVOID MapRegisterBase,
     PVOID Context
    );
typedef struct _IO_SECURITY_CONTEXT {
    PSECURITY_QUALITY_OF_SERVICE SecurityQos;
    PACCESS_STATE AccessState;
    ACCESS_MASK DesiredAccess;
    ULONG FullCreateOptions;
} IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT;
typedef struct _VPB {
    CSHORT Type;
    CSHORT Size;
    USHORT Flags;
    USHORT VolumeLabelLength;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _DEVICE_OBJECT *RealDevice;
    ULONG SerialNumber;
    ULONG ReferenceCount;
} VPB, *PVPB;
typedef struct _ADAPTER_OBJECT *PADAPTER_OBJECT;
typedef struct _WAIT_CONTEXT_BLOCK {
    KDEVICE_QUEUE_ENTRY WaitQueueEntry;
    PDRIVER_CONTROL DeviceRoutine;
    PVOID DeviceContext;
    ULONG NumberOfMapRegisters;
    PVOID DeviceObject;
    PVOID CurrentIrp;
    PKDPC BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK;
#pragma warning(push)
#pragma warning(disable:4324)
typedef struct __declspec(align(8)) _DEVICE_OBJECT {
    CSHORT Type;
    USHORT Size;
    LONG ReferenceCount;
    struct _DRIVER_OBJECT *DriverObject;
    struct _DEVICE_OBJECT *NextDevice;
    struct _DEVICE_OBJECT *AttachedDevice;
    struct _IRP *CurrentIrp;
    PIO_TIMER Timer;
    ULONG Flags;
    ULONG Characteristics;
     PVPB Vpb;
    PVOID DeviceExtension;
    ULONG DeviceType;
    CCHAR StackSize;
    union {
        LIST_ENTRY ListEntry;
        WAIT_CONTEXT_BLOCK Wcb;
    } Queue;
    ULONG AlignmentRequirement;
    KDEVICE_QUEUE DeviceQueue;
    KDPC Dpc;
    ULONG ActiveThreadCount;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
    KEVENT DeviceLock;
    USHORT SectorSize;
    USHORT Spare1;
    struct _DEVOBJ_EXTENSION *DeviceObjectExtension;
    PVOID Reserved;
} DEVICE_OBJECT;
typedef struct _DEVICE_OBJECT *PDEVICE_OBJECT;
#pragma warning(pop)
struct _DEVICE_OBJECT_POWER_EXTENSION;
typedef struct _DEVOBJ_EXTENSION {
    CSHORT Type;
    USHORT Size;
    PDEVICE_OBJECT DeviceObject;
} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION;
typedef struct _DRIVER_EXTENSION {
    struct _DRIVER_OBJECT *DriverObject;
    PDRIVER_ADD_DEVICE AddDevice;
    ULONG Count;
    UNICODE_STRING ServiceKeyName;
} DRIVER_EXTENSION, *PDRIVER_EXTENSION;
typedef struct _DRIVER_OBJECT {
    CSHORT Type;
    CSHORT Size;
    PDEVICE_OBJECT DeviceObject;
    ULONG Flags;
    PVOID DriverStart;
    ULONG DriverSize;
    PVOID DriverSection;
    PDRIVER_EXTENSION DriverExtension;
    UNICODE_STRING DriverName;
    PUNICODE_STRING HardwareDatabase;
    PFAST_IO_DISPATCH FastIoDispatch;
    PDRIVER_INITIALIZE DriverInit;
    PDRIVER_STARTIO DriverStartIo;
    PDRIVER_UNLOAD DriverUnload;
    PDRIVER_DISPATCH MajorFunction[0x1b + 1];
} DRIVER_OBJECT;
typedef struct _DRIVER_OBJECT *PDRIVER_OBJECT;
typedef struct _SECTION_OBJECT_POINTERS {
    PVOID DataSectionObject;
    PVOID SharedCacheMap;
    PVOID ImageSectionObject;
} SECTION_OBJECT_POINTERS;
typedef SECTION_OBJECT_POINTERS *PSECTION_OBJECT_POINTERS;
typedef struct _IO_COMPLETION_CONTEXT {
    PVOID Port;
    PVOID Key;
} IO_COMPLETION_CONTEXT, *PIO_COMPLETION_CONTEXT;
typedef struct _FILE_OBJECT {
    CSHORT Type;
    CSHORT Size;
    PDEVICE_OBJECT DeviceObject;
    PVPB Vpb;
    PVOID FsContext;
    PVOID FsContext2;
    PSECTION_OBJECT_POINTERS SectionObjectPointer;
    PVOID PrivateCacheMap;
    NTSTATUS FinalStatus;
    struct _FILE_OBJECT *RelatedFileObject;
    BOOLEAN LockOperation;
    BOOLEAN DeletePending;
    BOOLEAN ReadAccess;
    BOOLEAN WriteAccess;
    BOOLEAN DeleteAccess;
    BOOLEAN SharedRead;
    BOOLEAN SharedWrite;
    BOOLEAN SharedDelete;
    ULONG Flags;
    UNICODE_STRING FileName;
    LARGE_INTEGER CurrentByteOffset;
     ULONG Waiters;
     ULONG Busy;
    PVOID LastLock;
    KEVENT Lock;
    KEVENT Event;
     PIO_COMPLETION_CONTEXT CompletionContext;
    KSPIN_LOCK IrpListLock;
    LIST_ENTRY IrpList;
     PVOID FileObjectExtension;
} FILE_OBJECT;
typedef struct _FILE_OBJECT *PFILE_OBJECT;
typedef struct __declspec(align(8)) _IRP {
    CSHORT Type;
    USHORT Size;
    PMDL MdlAddress;
    ULONG Flags;
    union {
        struct _IRP *MasterIrp;
         LONG IrpCount;
        PVOID SystemBuffer;
    } AssociatedIrp;
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    KPROCESSOR_MODE RequestorMode;
    BOOLEAN PendingReturned;
    CHAR StackCount;
    CHAR CurrentLocation;
    BOOLEAN Cancel;
    KIRQL CancelIrql;
    CCHAR ApcEnvironment;
    UCHAR AllocationFlags;
    PIO_STATUS_BLOCK UserIosb;
    PKEVENT UserEvent;
    union {
        struct {
            union {
                PIO_APC_ROUTINE UserApcRoutine;
                PVOID IssuingProcess;
            };
            PVOID UserApcContext;
        } AsynchronousParameters;
        LARGE_INTEGER AllocationSize;
    } Overlay;
     PDRIVER_CANCEL CancelRoutine;
    PVOID UserBuffer;
    union {
        struct {
            union {
                KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
                struct {
                    PVOID DriverContext[4];
                } ;
            } ;
            PETHREAD Thread;
            PCHAR AuxiliaryBuffer;
            struct {
                LIST_ENTRY ListEntry;
                union {
                    struct _IO_STACK_LOCATION *CurrentStackLocation;
                    ULONG PacketType;
                };
            };
            PFILE_OBJECT OriginalFileObject;
        } Overlay;
        KAPC Apc;
        PVOID CompletionKey;
    } Tail;
} IRP, *PIRP;
typedef
NTSTATUS
IO_COMPLETION_ROUTINE (
     PDEVICE_OBJECT DeviceObject,
     PIRP Irp,
     PVOID Context
    );
typedef IO_COMPLETION_ROUTINE *PIO_COMPLETION_ROUTINE;
typedef enum _DEVICE_RELATION_TYPE {
    BusRelations,
    EjectionRelations,
    PowerRelations,
    RemovalRelations,
    TargetDeviceRelation,
    SingleBusRelations
} DEVICE_RELATION_TYPE, *PDEVICE_RELATION_TYPE;
typedef struct _DEVICE_RELATIONS {
    ULONG Count;
    PDEVICE_OBJECT Objects[1];
} DEVICE_RELATIONS, *PDEVICE_RELATIONS;
typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
    DeviceUsageTypeUndefined,
    DeviceUsageTypePaging,
    DeviceUsageTypeHibernation,
    DeviceUsageTypeDumpFile
} DEVICE_USAGE_NOTIFICATION_TYPE;
typedef struct _INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
} INTERFACE, *PINTERFACE;
typedef struct _DEVICE_CAPABILITIES {
    USHORT Size;
    USHORT Version;
    ULONG DeviceD1:1;
    ULONG DeviceD2:1;
    ULONG LockSupported:1;
    ULONG EjectSupported:1;
    ULONG Removable:1;
    ULONG DockDevice:1;
    ULONG UniqueID:1;
    ULONG SilentInstall:1;
    ULONG RawDeviceOK:1;
    ULONG SurpriseRemovalOK:1;
    ULONG WakeFromD0:1;
    ULONG WakeFromD1:1;
    ULONG WakeFromD2:1;
    ULONG WakeFromD3:1;
    ULONG HardwareDisabled:1;
    ULONG NonDynamic:1;
    ULONG WarmEjectSupported:1;
    ULONG NoDisplayInUI:1;
    ULONG Reserved:14;
    ULONG Address;
    ULONG UINumber;
    DEVICE_POWER_STATE DeviceState[7];
    SYSTEM_POWER_STATE SystemWake;
    DEVICE_POWER_STATE DeviceWake;
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;
} DEVICE_CAPABILITIES, *PDEVICE_CAPABILITIES;
typedef struct _POWER_SEQUENCE {
    ULONG SequenceD1;
    ULONG SequenceD2;
    ULONG SequenceD3;
} POWER_SEQUENCE, *PPOWER_SEQUENCE;
typedef enum {
    BusQueryDeviceID = 0,
    BusQueryHardwareIDs = 1,
    BusQueryCompatibleIDs = 2,
    BusQueryInstanceID = 3,
    BusQueryDeviceSerialNumber = 4
} BUS_QUERY_ID_TYPE, *PBUS_QUERY_ID_TYPE;
typedef ULONG PNP_DEVICE_STATE, *PPNP_DEVICE_STATE;
typedef enum {
    DeviceTextDescription = 0,
    DeviceTextLocationInformation = 1
} DEVICE_TEXT_TYPE, *PDEVICE_TEXT_TYPE;
#pragma warning(disable:4103)
#pragma pack(push,4)
#pragma warning(push)
#pragma warning(disable:4324)
typedef struct _IO_STACK_LOCATION {
    UCHAR MajorFunction;
    UCHAR MinorFunction;
    UCHAR Flags;
    UCHAR Control;
    union {
        struct {
            PIO_SECURITY_CONTEXT SecurityContext;
            ULONG Options;
            USHORT FileAttributes;
            USHORT ShareAccess;
            ULONG EaLength;
        } Create;
        struct {
            ULONG Length;
            ULONG Key;
            LARGE_INTEGER ByteOffset;
        } Read;
        struct {
            ULONG Length;
            ULONG Key;
            LARGE_INTEGER ByteOffset;
        } Write;
        struct {
            ULONG Length;
            PUNICODE_STRING FileName;
            FILE_INFORMATION_CLASS FileInformationClass;
            ULONG FileIndex;
        } QueryDirectory;
        struct {
            ULONG Length;
            ULONG CompletionFilter;
        } NotifyDirectory;
        struct {
            ULONG Length;
            FILE_INFORMATION_CLASS FileInformationClass;
        } QueryFile;
        struct {
            ULONG Length;
            FILE_INFORMATION_CLASS FileInformationClass;
            PFILE_OBJECT FileObject;
            union {
                struct {
                    BOOLEAN ReplaceIfExists;
                    BOOLEAN AdvanceOnly;
                };
                ULONG ClusterCount;
                HANDLE DeleteHandle;
            };
        } SetFile;
        struct {
            ULONG Length;
            PVOID EaList;
            ULONG EaListLength;
            ULONG EaIndex;
        } QueryEa;
        struct {
            ULONG Length;
        } SetEa;
        struct {
            ULONG Length;
            FS_INFORMATION_CLASS FsInformationClass;
        } QueryVolume;
        struct {
            ULONG Length;
            FS_INFORMATION_CLASS FsInformationClass;
        } SetVolume;
        struct {
            ULONG OutputBufferLength;
            ULONG InputBufferLength;
            ULONG FsControlCode;
            PVOID Type3InputBuffer;
        } FileSystemControl;
        struct {
            PLARGE_INTEGER Length;
            ULONG Key;
            LARGE_INTEGER ByteOffset;
        } LockControl;
        struct {
            ULONG OutputBufferLength;
            ULONG InputBufferLength;
            ULONG IoControlCode;
            PVOID Type3InputBuffer;
        } DeviceIoControl;
        struct {
            SECURITY_INFORMATION SecurityInformation;
            ULONG Length;
        } QuerySecurity;
        struct {
            SECURITY_INFORMATION SecurityInformation;
            PSECURITY_DESCRIPTOR SecurityDescriptor;
        } SetSecurity;
        struct {
            PVPB Vpb;
            PDEVICE_OBJECT DeviceObject;
        } MountVolume;
        struct {
            PVPB Vpb;
            PDEVICE_OBJECT DeviceObject;
        } VerifyVolume;
        struct {
            struct _SCSI_REQUEST_BLOCK *Srb;
        } Scsi;
        struct {
            ULONG Length;
            PSID StartSid;
            PFILE_GET_QUOTA_INFORMATION SidList;
            ULONG SidListLength;
        } QueryQuota;
        struct {
            ULONG Length;
        } SetQuota;
        struct {
            DEVICE_RELATION_TYPE Type;
        } QueryDeviceRelations;
        struct {
            const GUID *InterfaceType;
            USHORT Size;
            USHORT Version;
            PINTERFACE Interface;
            PVOID InterfaceSpecificData;
        } QueryInterface;
        struct {
            PDEVICE_CAPABILITIES Capabilities;
        } DeviceCapabilities;
        struct {
            PIO_RESOURCE_REQUIREMENTS_LIST IoResourceRequirementList;
        } FilterResourceRequirements;
        struct {
            ULONG WhichSpace;
            PVOID Buffer;
            ULONG Offset;
            ULONG Length;
        } ReadWriteConfig;
        struct {
            BOOLEAN Lock;
        } SetLock;
        struct {
            BUS_QUERY_ID_TYPE IdType;
        } QueryId;
        struct {
            DEVICE_TEXT_TYPE DeviceTextType;
            LCID LocaleId;
        } QueryDeviceText;
        struct {
            BOOLEAN InPath;
            BOOLEAN Reserved[3];
            DEVICE_USAGE_NOTIFICATION_TYPE Type;
        } UsageNotification;
        struct {
            SYSTEM_POWER_STATE PowerState;
        } WaitWake;
        struct {
            PPOWER_SEQUENCE PowerSequence;
        } PowerSequence;
        struct {
            ULONG SystemContext;
            POWER_STATE_TYPE Type;
            POWER_STATE State;
            POWER_ACTION ShutdownType;
        } Power;
        struct {
            PCM_RESOURCE_LIST AllocatedResources;
            PCM_RESOURCE_LIST AllocatedResourcesTranslated;
        } StartDevice;
        struct {
            ULONG_PTR ProviderId;
            PVOID DataPath;
            ULONG BufferSize;
            PVOID Buffer;
        } WMI;
        struct {
            PVOID Argument1;
            PVOID Argument2;
            PVOID Argument3;
            PVOID Argument4;
        } Others;
    } Parameters;
    PDEVICE_OBJECT DeviceObject;
    PFILE_OBJECT FileObject;
    PIO_COMPLETION_ROUTINE CompletionRoutine;
    PVOID Context;
} IO_STACK_LOCATION, *PIO_STACK_LOCATION;
#pragma warning(pop)
#pragma warning(disable:4103)
#pragma pack(pop)
typedef struct _SHARE_ACCESS {
    ULONG OpenCount;
    ULONG Readers;
    ULONG Writers;
    ULONG Deleters;
    ULONG SharedRead;
    ULONG SharedWrite;
    ULONG SharedDelete;
} SHARE_ACCESS, *PSHARE_ACCESS;
__declspec(dllimport)
void
IoAcquireCancelSpinLock(
     PKIRQL Irql
    );
__declspec(dllimport)
NTSTATUS
IoAllocateDriverObjectExtension(
      PDRIVER_OBJECT DriverObject,
      PVOID ClientIdentificationAddress,
      ULONG DriverObjectExtensionSize,
     PVOID *DriverObjectExtension
    );
__declspec(dllimport)
PVOID
IoAllocateErrorLogEntry(
     PVOID IoObject,
     UCHAR EntrySize
    );
__declspec(dllimport)
PIRP
IoAllocateIrp(
     CCHAR StackSize,
     BOOLEAN ChargeQuota
    );
__declspec(dllimport)
PMDL
IoAllocateMdl(
     PVOID VirtualAddress,
     ULONG Length,
     BOOLEAN SecondaryBuffer,
     BOOLEAN ChargeQuota,
     PIRP Irp
    );
typedef enum _IO_PAGING_PRIORITY {
    IoPagingPriorityInvalid,
    IoPagingPriorityNormal,
    IoPagingPriorityHigh,
    IoPagingPriorityReserved1,
    IoPagingPriorityReserved2
} IO_PAGING_PRIORITY;
__declspec(dllimport)
NTSTATUS
IoAttachDevice(
      PDEVICE_OBJECT SourceDevice,
      PUNICODE_STRING TargetDevice,
     PDEVICE_OBJECT *AttachedDevice
    );
__declspec(dllimport)
PDEVICE_OBJECT
IoAttachDeviceToDeviceStack(
     PDEVICE_OBJECT SourceDevice,
     PDEVICE_OBJECT TargetDevice
    );
__declspec(dllimport)
PIRP
IoBuildAsynchronousFsdRequest(
     ULONG MajorFunction,
     PDEVICE_OBJECT DeviceObject,
     PVOID Buffer,
     ULONG Length,
     PLARGE_INTEGER StartingOffset,
     PIO_STATUS_BLOCK IoStatusBlock
    );
__declspec(dllimport)
PIRP
IoBuildDeviceIoControlRequest(
      ULONG IoControlCode,
      PDEVICE_OBJECT DeviceObject,
      PVOID InputBuffer,
      ULONG InputBufferLength,
     PVOID OutputBuffer,
     ULONG OutputBufferLength,
     BOOLEAN InternalDeviceIoControl,
     PKEVENT Event,
     PIO_STATUS_BLOCK IoStatusBlock
    );
__declspec(dllimport)
void
IoBuildPartialMdl(
     PMDL SourceMdl,
     PMDL TargetMdl,
     PVOID VirtualAddress,
     ULONG Length
    );
typedef struct _BOOTDISK_INFORMATION {
    LONGLONG BootPartitionOffset;
    LONGLONG SystemPartitionOffset;
    ULONG BootDeviceSignature;
    ULONG SystemDeviceSignature;
} BOOTDISK_INFORMATION, *PBOOTDISK_INFORMATION;
typedef struct _BOOTDISK_INFORMATION_EX {
    LONGLONG BootPartitionOffset;
    LONGLONG SystemPartitionOffset;
    ULONG BootDeviceSignature;
    ULONG SystemDeviceSignature;
    GUID BootDeviceGuid;
    GUID SystemDeviceGuid;
    BOOLEAN BootDeviceIsGpt;
    BOOLEAN SystemDeviceIsGpt;
} BOOTDISK_INFORMATION_EX, *PBOOTDISK_INFORMATION_EX;
__declspec(dllimport)
NTSTATUS
IoGetBootDiskInformation(
     PBOOTDISK_INFORMATION BootDiskInformation,
     ULONG Size
    );
__declspec(dllimport)
PIRP
IoBuildSynchronousFsdRequest(
      ULONG MajorFunction,
      PDEVICE_OBJECT DeviceObject,
     PVOID Buffer,
     ULONG Length,
     PLARGE_INTEGER StartingOffset,
      PKEVENT Event,
     PIO_STATUS_BLOCK IoStatusBlock
    );
__declspec(dllimport)
NTSTATUS
__fastcall
IofCallDriver(
     PDEVICE_OBJECT DeviceObject,
     PIRP Irp
    );
__declspec(dllimport)
BOOLEAN
IoCancelIrp(
     PIRP Irp
    );
__declspec(dllimport)
NTSTATUS
IoCheckShareAccess(
     ACCESS_MASK DesiredAccess,
     ULONG DesiredShareAccess,
     PFILE_OBJECT FileObject,
     PSHARE_ACCESS ShareAccess,
     BOOLEAN Update
    );
typedef enum _IO_COMPLETION_ROUTINE_RESULT {
    ContinueCompletion = ((NTSTATUS)0x00000000L),
    StopCompletion = ((NTSTATUS)0xC0000016L)
} IO_COMPLETION_ROUTINE_RESULT, *PIO_COMPLETION_ROUTINE_RESULT;
__declspec(dllimport)
void
__fastcall
IofCompleteRequest(
     PIRP Irp,
     CCHAR PriorityBoost
    );
__declspec(dllimport)
NTSTATUS
IoConnectInterrupt(
     PKINTERRUPT *InterruptObject,
      PKSERVICE_ROUTINE ServiceRoutine,
     PVOID ServiceContext,
     PKSPIN_LOCK SpinLock,
      ULONG Vector,
      KIRQL Irql,
      KIRQL SynchronizeIrql,
      KINTERRUPT_MODE InterruptMode,
      BOOLEAN ShareVector,
      KAFFINITY ProcessorEnableMask,
      BOOLEAN FloatingSave
    );
typedef struct _IO_INTERRUPT_MESSAGE_INFO_ENTRY {
    PHYSICAL_ADDRESS MessageAddress;
    KAFFINITY TargetProcessorSet;
    PKINTERRUPT InterruptObject;
    ULONG MessageData;
    ULONG Vector;
    KIRQL Irql;
    KINTERRUPT_MODE Mode;
    KINTERRUPT_POLARITY Polarity;
} IO_INTERRUPT_MESSAGE_INFO_ENTRY, *PIO_INTERRUPT_MESSAGE_INFO_ENTRY;
typedef struct _IO_INTERRUPT_MESSAGE_INFO {
    KIRQL UnifiedIrql;
    ULONG MessageCount;
    IO_INTERRUPT_MESSAGE_INFO_ENTRY MessageInfo[1];
} IO_INTERRUPT_MESSAGE_INFO, *PIO_INTERRUPT_MESSAGE_INFO;
typedef struct _IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS {
     PDEVICE_OBJECT PhysicalDeviceObject;
     PKINTERRUPT *InterruptObject;
     PKSERVICE_ROUTINE ServiceRoutine;
     PVOID ServiceContext;
     PKSPIN_LOCK SpinLock ;
     KIRQL SynchronizeIrql;
     BOOLEAN FloatingSave;
     BOOLEAN ShareVector;
     ULONG Vector;
     KIRQL Irql;
     KINTERRUPT_MODE InterruptMode;
     KAFFINITY ProcessorEnableMask;
} IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS,
  *PIO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS;
typedef struct _IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS {
     PDEVICE_OBJECT PhysicalDeviceObject;
     PKINTERRUPT *InterruptObject;
     PKSERVICE_ROUTINE ServiceRoutine;
     PVOID ServiceContext;
     PKSPIN_LOCK SpinLock ;
     KIRQL SynchronizeIrql ;
     BOOLEAN FloatingSave;
} IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS,
  *PIO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS;
typedef struct _IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS {
     PDEVICE_OBJECT PhysicalDeviceObject;
    union {
         PVOID *Generic;
         PIO_INTERRUPT_MESSAGE_INFO *InterruptMessageTable;
         PKINTERRUPT *InterruptObject;
    } ConnectionContext;
     PKMESSAGE_SERVICE_ROUTINE MessageServiceRoutine;
     PVOID ServiceContext;
     PKSPIN_LOCK SpinLock ;
     KIRQL SynchronizeIrql ;
     BOOLEAN FloatingSave;
     PKSERVICE_ROUTINE FallBackServiceRoutine ;
} IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS,
  *PIO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS;
typedef struct _IO_CONNECT_INTERRUPT_PARAMETERS {
      ULONG Version;
    union {
        IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS FullySpecified;
        IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS LineBased;
        IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS MessageBased;
    };
} IO_CONNECT_INTERRUPT_PARAMETERS, *PIO_CONNECT_INTERRUPT_PARAMETERS;
__declspec(dllimport)
NTSTATUS
IoCreateDevice(
      PDRIVER_OBJECT DriverObject,
      ULONG DeviceExtensionSize,
     PUNICODE_STRING DeviceName,
      ULONG DeviceType,
      ULONG DeviceCharacteristics,
      BOOLEAN Exclusive,
     PDEVICE_OBJECT *DeviceObject
    );
__declspec(dllimport)
BOOLEAN
IoIsWdmVersionAvailable(
     UCHAR MajorVersion,
     UCHAR MinorVersion
    );
__declspec(dllimport)
NTSTATUS
IoCreateFile(
     PHANDLE FileHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
     PIO_STATUS_BLOCK IoStatusBlock,
     PLARGE_INTEGER AllocationSize,
      ULONG FileAttributes,
      ULONG ShareAccess,
      ULONG Disposition,
      ULONG CreateOptions,
     PVOID EaBuffer,
      ULONG EaLength,
      CREATE_FILE_TYPE CreateFileType,
     PVOID InternalParameters,
      ULONG Options
    );
__declspec(dllimport)
PKEVENT
IoCreateNotificationEvent(
      PUNICODE_STRING EventName,
     PHANDLE EventHandle
    );
__declspec(dllimport)
NTSTATUS
IoCreateSymbolicLink(
     PUNICODE_STRING SymbolicLinkName,
     PUNICODE_STRING DeviceName
    );
__declspec(dllimport)
PKEVENT
IoCreateSynchronizationEvent(
      PUNICODE_STRING EventName,
     PHANDLE EventHandle
    );
__declspec(dllimport)
NTSTATUS
IoCreateUnprotectedSymbolicLink(
     PUNICODE_STRING SymbolicLinkName,
     PUNICODE_STRING DeviceName
    );
__declspec(dllimport)
void
IoDeleteDevice(
     PDEVICE_OBJECT DeviceObject
    );
__declspec(dllimport)
NTSTATUS
IoDeleteSymbolicLink(
     PUNICODE_STRING SymbolicLinkName
    );
__declspec(dllimport)
void
IoDetachDevice(
     PDEVICE_OBJECT TargetDevice
    );
__declspec(dllimport)
void
IoDisconnectInterrupt(
     PKINTERRUPT InterruptObject
    );
typedef struct _IO_DISCONNECT_INTERRUPT_PARAMETERS {
     ULONG Version;
    union {
         PVOID Generic;
         PKINTERRUPT InterruptObject;
         PIO_INTERRUPT_MESSAGE_INFO InterruptMessageTable;
    } ConnectionContext;
} IO_DISCONNECT_INTERRUPT_PARAMETERS, *PIO_DISCONNECT_INTERRUPT_PARAMETERS;
__declspec(dllimport)
void
IoFreeIrp(
     PIRP Irp
    );
__declspec(dllimport)
void
IoFreeMdl(
    PMDL Mdl
    );
__declspec(dllimport)
PDEVICE_OBJECT
IoGetAttachedDeviceReference(
     PDEVICE_OBJECT DeviceObject
    );
__declspec(dllimport)
PVOID
IoGetDriverObjectExtension(
     PDRIVER_OBJECT DriverObject,
     PVOID ClientIdentificationAddress
    );
__declspec(dllimport)
PEPROCESS
IoGetCurrentProcess(
    void
    );
__declspec(dllimport)
NTSTATUS
IoGetDeviceObjectPointer(
      PUNICODE_STRING ObjectName,
      ACCESS_MASK DesiredAccess,
     PFILE_OBJECT *FileObject,
     PDEVICE_OBJECT *DeviceObject
    );
__declspec(dllimport)
struct _DMA_ADAPTER *
IoGetDmaAdapter(
     PDEVICE_OBJECT PhysicalDeviceObject,
     struct _DEVICE_DESCRIPTION *DeviceDescription,
     PULONG NumberOfMapRegisters
    );
__declspec(dllimport)
BOOLEAN
IoForwardIrpSynchronously(
     PDEVICE_OBJECT DeviceObject,
     PIRP Irp
    );
__declspec(dllimport)
PVOID
IoGetInitialStack(
    void
    );
__declspec(dllimport)
void
IoGetStackLimits (
     PULONG_PTR LowLimit,
     PULONG_PTR HighLimit
    );
__forceinline
ULONG_PTR
IoGetRemainingStackSize (
    void
    )
{
    ULONG_PTR Top;
    ULONG_PTR Bottom;
    IoGetStackLimits( &Bottom, &Top );
    return((ULONG_PTR)(&Top) - Bottom );
}
__declspec(dllimport)
PDEVICE_OBJECT
IoGetRelatedDeviceObject(
     PFILE_OBJECT FileObject
    );
__declspec(dllimport)
PIRP
IoGetTopLevelIrp(
    void
    );
__declspec(dllimport)
void
IoInitializeIrp(
     PIRP Irp,
     USHORT PacketSize,
     CCHAR StackSize
    );
__declspec(dllimport)
NTSTATUS
IoInitializeTimer(
     PDEVICE_OBJECT DeviceObject,
     PIO_TIMER_ROUTINE TimerRoutine,
     PVOID Context
    );
__declspec(dllimport)
void
IoReuseIrp(
     PIRP Irp,
     NTSTATUS Iostatus
    );
__declspec(dllimport)
NTSTATUS
IoRegisterShutdownNotification(
     PDEVICE_OBJECT DeviceObject
    );
__declspec(dllimport)
NTSTATUS
IoRegisterLastChanceShutdownNotification(
     PDEVICE_OBJECT DeviceObject
    );
__declspec(dllimport)
void
IoReleaseCancelSpinLock(
     KIRQL Irql
    );
__declspec(dllimport)
void
IoRemoveShareAccess(
     PFILE_OBJECT FileObject,
     PSHARE_ACCESS ShareAccess
    );
__forceinline
void
IoSetCompletionRoutine(
     PIRP Irp,
     PIO_COMPLETION_ROUTINE CompletionRoutine,
     PVOID Context,
     BOOLEAN InvokeOnSuccess,
     BOOLEAN InvokeOnError,
     BOOLEAN InvokeOnCancel
    )
{
    PIO_STACK_LOCATION irpSp;
    ((!((InvokeOnSuccess || InvokeOnError || InvokeOnCancel) ? (CompletionRoutine != ((void *)0)) : 1)) ? (RtlAssert( "(InvokeOnSuccess || InvokeOnError || InvokeOnCancel) ? (CompletionRoutine != NULL) : TRUE", "C:\\WinDDK\\6001.18001\\inc\\ddk\\wdm.h", 21031, ((void *)0) ),0) : 1);
    irpSp = ( (Irp)->Tail.Overlay.CurrentStackLocation - 1 );
    irpSp->CompletionRoutine = CompletionRoutine;
    irpSp->Context = Context;
    irpSp->Control = 0;
    if (InvokeOnSuccess) {
        irpSp->Control = 0x40;
    }
    if (InvokeOnError) {
        irpSp->Control |= 0x80;
    }
    if (InvokeOnCancel) {
        irpSp->Control |= 0x20;
    }
}
__declspec(dllimport)
NTSTATUS
IoSetCompletionRoutineEx(
     PDEVICE_OBJECT DeviceObject,
     PIRP Irp,
     PIO_COMPLETION_ROUTINE CompletionRoutine,
     PVOID Context,
     BOOLEAN InvokeOnSuccess,
     BOOLEAN InvokeOnError,
     BOOLEAN InvokeOnCancel
    );
__declspec(dllimport)
void
IoSetShareAccess(
      ACCESS_MASK DesiredAccess,
      ULONG DesiredShareAccess,
     PFILE_OBJECT FileObject,
     PSHARE_ACCESS ShareAccess
    );
__declspec(dllimport)
void
IoSetTopLevelIrp(
     PIRP Irp
    );
typedef struct _IO_REMOVE_LOCK_TRACKING_BLOCK * PIO_REMOVE_LOCK_TRACKING_BLOCK;
typedef struct _IO_REMOVE_LOCK_COMMON_BLOCK {
    BOOLEAN Removed;
    BOOLEAN Reserved [3];
     LONG IoCount;
    KEVENT RemoveEvent;
} IO_REMOVE_LOCK_COMMON_BLOCK;
typedef struct _IO_REMOVE_LOCK_DBG_BLOCK {
    LONG Signature;
    ULONG HighWatermark;
    LONGLONG MaxLockedTicks;
    LONG AllocateTag;
    LIST_ENTRY LockList;
    KSPIN_LOCK Spin;
     LONG LowMemoryCount;
    ULONG Reserved1[4];
    PVOID Reserved2;
    PIO_REMOVE_LOCK_TRACKING_BLOCK Blocks;
} IO_REMOVE_LOCK_DBG_BLOCK;
typedef struct _IO_REMOVE_LOCK {
    IO_REMOVE_LOCK_COMMON_BLOCK Common;
    IO_REMOVE_LOCK_DBG_BLOCK Dbg;
} IO_REMOVE_LOCK, *PIO_REMOVE_LOCK;
__declspec(dllimport)
void
__stdcall
IoInitializeRemoveLockEx(
     PIO_REMOVE_LOCK Lock,
     ULONG AllocateTag,
     ULONG MaxLockedMinutes,
     ULONG HighWatermark,
     ULONG RemlockSize
    );
__declspec(dllimport)
NTSTATUS
__stdcall
IoAcquireRemoveLockEx (
     PIO_REMOVE_LOCK RemoveLock,
     PVOID Tag,
     PCSTR File,
     ULONG Line,
     ULONG RemlockSize
    );
__declspec(dllimport)
void
__stdcall
IoReleaseRemoveLockEx(
     PIO_REMOVE_LOCK RemoveLock,
     PVOID Tag,
     ULONG RemlockSize
    );
__declspec(dllimport)
void
__stdcall
IoReleaseRemoveLockAndWaitEx(
     PIO_REMOVE_LOCK RemoveLock,
     PVOID Tag,
     ULONG RemlockSize
    );
__declspec(dllimport)
void
IoStartNextPacket(
     PDEVICE_OBJECT DeviceObject,
     BOOLEAN Cancelable
    );
__declspec(dllimport)
void
IoStartNextPacketByKey(
     PDEVICE_OBJECT DeviceObject,
     BOOLEAN Cancelable,
     ULONG Key
    );
__declspec(dllimport)
void
IoStartPacket(
     PDEVICE_OBJECT DeviceObject,
     PIRP Irp,
     PULONG Key,
     PDRIVER_CANCEL CancelFunction
    );
void
IoSetStartIoAttributes(
     PDEVICE_OBJECT DeviceObject,
     BOOLEAN DeferredStartIo,
     BOOLEAN NonCancelable
    );
__declspec(dllimport)
void
IoStartTimer(
     PDEVICE_OBJECT DeviceObject
    );
__declspec(dllimport)
void
IoStopTimer(
     PDEVICE_OBJECT DeviceObject
    );
__declspec(dllimport)
void
IoUnregisterShutdownNotification(
     PDEVICE_OBJECT DeviceObject
    );
__declspec(dllimport)
void
IoUpdateShareAccess(
     PFILE_OBJECT FileObject,
     PSHARE_ACCESS ShareAccess
    );
__declspec(dllimport)
void
IoWriteErrorLogEntry(
     PVOID ElEntry
    );
typedef struct _IO_WORKITEM *PIO_WORKITEM;
typedef
void
IO_WORKITEM_ROUTINE (
     PDEVICE_OBJECT DeviceObject,
     PVOID Context
    );
typedef IO_WORKITEM_ROUTINE *PIO_WORKITEM_ROUTINE;
typedef
void
IO_WORKITEM_ROUTINE_EX (
     PVOID IoObject,
     PVOID Context,
     PIO_WORKITEM IoWorkItem
    );
typedef IO_WORKITEM_ROUTINE_EX *PIO_WORKITEM_ROUTINE_EX;
__declspec(dllimport)
PIO_WORKITEM
IoAllocateWorkItem(
     PDEVICE_OBJECT DeviceObject
    );
__declspec(dllimport)
void
IoFreeWorkItem(
     PIO_WORKITEM IoWorkItem
    );
__declspec(dllimport)
void
IoQueueWorkItem(
     PIO_WORKITEM IoWorkItem,
     PIO_WORKITEM_ROUTINE WorkerRoutine,
     WORK_QUEUE_TYPE QueueType,
     PVOID Context
    );
__declspec(dllimport)
NTSTATUS
IoWMIRegistrationControl(
     PDEVICE_OBJECT DeviceObject,
     ULONG Action
);
__declspec(dllimport)
NTSTATUS
IoWMIAllocateInstanceIds(
     GUID *Guid,
     ULONG InstanceCount,
     ULONG *FirstInstanceId
    );
__declspec(dllimport)
NTSTATUS
IoWMISuggestInstanceName(
     PDEVICE_OBJECT PhysicalDeviceObject,
     PUNICODE_STRING SymbolicLinkName,
     BOOLEAN CombineNames,
     PUNICODE_STRING SuggestedInstanceName
    );
__declspec(dllimport)
NTSTATUS
IoWMIWriteEvent(
     PVOID WnodeEventItem
    );
__declspec(dllimport)
NTSTATUS
IoWMIOpenBlock(
     GUID *DataBlockGuid,
     ULONG DesiredAccess,
     PVOID *DataBlockObject
    );
__declspec(dllimport)
NTSTATUS
IoWMIQueryAllData(
     PVOID DataBlockObject,
     ULONG *InOutBufferSize,
      PVOID OutBuffer
    );
__declspec(dllimport)
NTSTATUS
IoWMIQueryAllDataMultiple(
     PVOID *DataBlockObjectList,
     ULONG ObjectCount,
     ULONG *InOutBufferSize,
      PVOID OutBuffer
    );
__declspec(dllimport)
NTSTATUS
IoWMIQuerySingleInstance(
     PVOID DataBlockObject,
     PUNICODE_STRING InstanceName,
     ULONG *InOutBufferSize,
      PVOID OutBuffer
    );
__declspec(dllimport)
NTSTATUS
IoWMIQuerySingleInstanceMultiple(
     PVOID *DataBlockObjectList,
     PUNICODE_STRING InstanceNames,
     ULONG ObjectCount,
     ULONG *InOutBufferSize,
      PVOID OutBuffer
    );
__declspec(dllimport)
NTSTATUS
IoWMISetSingleInstance(
     PVOID DataBlockObject,
     PUNICODE_STRING InstanceName,
     ULONG Version,
     ULONG ValueBufferSize,
     PVOID ValueBuffer
    );
__declspec(dllimport)
NTSTATUS
IoWMISetSingleItem(
     PVOID DataBlockObject,
     PUNICODE_STRING InstanceName,
     ULONG DataItemId,
     ULONG Version,
     ULONG ValueBufferSize,
     PVOID ValueBuffer
    );
__declspec(dllimport)
NTSTATUS
IoWMIExecuteMethod(
     PVOID DataBlockObject,
     PUNICODE_STRING InstanceName,
     ULONG MethodId,
     ULONG InBufferSize,
     PULONG OutBufferSize,
     PUCHAR InOutBuffer
    );
typedef void (*WMI_NOTIFICATION_CALLBACK)(
    PVOID Wnode,
    PVOID Context
    );
__declspec(dllimport)
NTSTATUS
IoWMISetNotificationCallback(
     PVOID Object,
     WMI_NOTIFICATION_CALLBACK Callback,
     PVOID Context
    );
__declspec(dllimport)
NTSTATUS
IoWMIHandleToInstanceName(
     PVOID DataBlockObject,
     HANDLE FileHandle,
     PUNICODE_STRING InstanceName
    );
__declspec(dllimport)
NTSTATUS
IoWMIDeviceObjectToInstanceName(
     PVOID DataBlockObject,
     PDEVICE_OBJECT DeviceObject,
     PUNICODE_STRING InstanceName
    );
__declspec(dllimport)
void
IoFreeErrorLogEntry(
     PVOID ElEntry
    );
typedef struct _IO_CSQ IO_CSQ, *PIO_CSQ;
typedef struct _IO_CSQ_IRP_CONTEXT {
    ULONG Type;
    PIRP Irp;
    PIO_CSQ Csq;
} IO_CSQ_IRP_CONTEXT, *PIO_CSQ_IRP_CONTEXT;
typedef void
(*PIO_CSQ_INSERT_IRP)(
     struct _IO_CSQ *Csq,
     PIRP Irp
    );
typedef NTSTATUS
(*PIO_CSQ_INSERT_IRP_EX)(
     struct _IO_CSQ *Csq,
     PIRP Irp,
      PVOID InsertContext
    );
typedef void
(*PIO_CSQ_REMOVE_IRP)(
      PIO_CSQ Csq,
      PIRP Irp
    );
typedef PIRP
(*PIO_CSQ_PEEK_NEXT_IRP)(
      PIO_CSQ Csq,
      PIRP Irp,
      PVOID PeekContext
    );
typedef void
(*PIO_CSQ_ACQUIRE_LOCK)(
       PIO_CSQ Csq,
      PKIRQL Irql
     );
typedef void
(*PIO_CSQ_RELEASE_LOCK)(
      PIO_CSQ Csq,
      KIRQL Irql
     );
typedef void
(*PIO_CSQ_COMPLETE_CANCELED_IRP)(
      PIO_CSQ Csq,
      PIRP Irp
    );
typedef struct _IO_CSQ {
    ULONG Type;
    PIO_CSQ_INSERT_IRP CsqInsertIrp;
    PIO_CSQ_REMOVE_IRP CsqRemoveIrp;
    PIO_CSQ_PEEK_NEXT_IRP CsqPeekNextIrp;
    PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock;
    PIO_CSQ_RELEASE_LOCK CsqReleaseLock;
    PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp;
    PVOID ReservePointer;
} IO_CSQ, *PIO_CSQ;
__declspec(dllimport)
NTSTATUS
IoCsqInitialize(
     PIO_CSQ Csq,
     PIO_CSQ_INSERT_IRP CsqInsertIrp,
     PIO_CSQ_REMOVE_IRP CsqRemoveIrp,
     PIO_CSQ_PEEK_NEXT_IRP CsqPeekNextIrp,
     PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock,
     PIO_CSQ_RELEASE_LOCK CsqReleaseLock,
     PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp
    );
__declspec(dllimport)
void
IoCsqInsertIrp(
     PIO_CSQ Csq,
     PIRP Irp,
     PIO_CSQ_IRP_CONTEXT Context
    );
__declspec(dllimport)
PIRP
IoCsqRemoveNextIrp(
         PIO_CSQ Csq,
     PVOID PeekContext
    );
__declspec(dllimport)
PIRP
IoCsqRemoveIrp(
     PIO_CSQ Csq,
     PIO_CSQ_IRP_CONTEXT Context
    );
__declspec(dllimport)
NTSTATUS
IoValidateDeviceIoControlAccess(
     PIRP Irp,
     ULONG RequiredAccess
    );
typedef enum _IO_ACCESS_TYPE {
    ReadAccess,
    WriteAccess,
    ModifyAccess
} IO_ACCESS_TYPE;
typedef enum _IO_ACCESS_MODE {
    SequentialAccess,
    RandomAccess
} IO_ACCESS_MODE;
typedef struct _ETW_TRACE_SESSION_SETTINGS {
    ULONG Version;
    ULONG BufferSize;
    ULONG MinimumBuffers;
    ULONG MaximumBuffers;
    ULONG LoggerMode;
    ULONG FlushTimer;
    ULONG FlushThreshold;
    ULONG ClockType;
} ETW_TRACE_SESSION_SETTINGS, *PETW_TRACE_SESSION_SETTINGS;
typedef enum _TRACE_INFORMATION_CLASS {
    TraceIdClass,
    TraceHandleClass,
    TraceEnableFlagsClass,
    TraceEnableLevelClass,
    GlobalLoggerHandleClass,
    EventLoggerHandleClass,
    AllLoggerHandlesClass,
    TraceHandleByNameClass,
    LoggerEventsLostClass,
    TraceSessionSettingsClass,
    MaxTraceInformationClass
} TRACE_INFORMATION_CLASS;
__declspec(dllimport)
NTSTATUS
WmiQueryTraceInformation(
     TRACE_INFORMATION_CLASS TraceInformationClass,
     PVOID TraceInformation,
     ULONG TraceInformationLength,
     PULONG RequiredLength,
     PVOID Buffer
    );
       
typedef ULONGLONG REGHANDLE, *PREGHANDLE;
typedef struct _EVENT_DATA_DESCRIPTOR {
    ULONGLONG Ptr;
    ULONG Size;
    ULONG Reserved;
} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR;
typedef struct _EVENT_DESCRIPTOR {
    USHORT Id;
    UCHAR Version;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    USHORT Task;
    ULONGLONG Keyword;
} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR;
typedef const EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;
typedef struct _EVENT_FILTER_DESCRIPTOR {
    ULONGLONG Ptr;
    ULONG Size;
    ULONG Type;
} EVENT_FILTER_DESCRIPTOR, *PEVENT_FILTER_DESCRIPTOR;
__forceinline
void
EventDataDescCreate(
     PEVENT_DATA_DESCRIPTOR EventDataDescriptor,
      const void* DataPtr,
      ULONG DataSize
    )
{
    EventDataDescriptor->Ptr = (ULONGLONG) DataPtr;
    EventDataDescriptor->Size = DataSize;
    EventDataDescriptor->Reserved = 0;
}
__forceinline
void
EventDescCreate(
     PEVENT_DESCRIPTOR EventDescriptor,
      USHORT Id,
      UCHAR Version,
      UCHAR Channel,
      UCHAR Level,
      USHORT Task,
      UCHAR Opcode,
      ULONGLONG Keyword
    )
{
    EventDescriptor->Id = Id;
    EventDescriptor->Version = Version;
    EventDescriptor->Channel = Channel;
    EventDescriptor->Level = Level;
    EventDescriptor->Task = Task;
    EventDescriptor->Opcode = Opcode;
    EventDescriptor->Keyword = Keyword;
}
__forceinline
void
EventDescZero(
     PEVENT_DESCRIPTOR EventDescriptor
    )
{
    memset(EventDescriptor, 0, sizeof(EVENT_DESCRIPTOR));
}
__forceinline
USHORT
EventDescGetId(
     PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Id);
}
__forceinline
UCHAR
EventDescGetVersion(
     PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Version);
}
__forceinline
USHORT
EventDescGetTask(
     PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Task);
}
__forceinline
UCHAR
EventDescGetOpcode(
     PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Opcode);
}
__forceinline
UCHAR
EventDescGetChannel(
     PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Channel);
}
__forceinline
UCHAR
EventDescGetLevel(
     PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Level);
}
__forceinline
ULONGLONG
EventDescGetKeyword(
     PCEVENT_DESCRIPTOR EventDescriptor
    )
{
    return (EventDescriptor->Keyword);
}
__forceinline
PEVENT_DESCRIPTOR
EventDescSetId(
     PEVENT_DESCRIPTOR EventDescriptor,
     USHORT Id
    )
{
    EventDescriptor->Id = Id;
    return (EventDescriptor);
}
__forceinline
PEVENT_DESCRIPTOR
EventDescSetVersion(
     PEVENT_DESCRIPTOR EventDescriptor,
     UCHAR Version
    )
{
    EventDescriptor->Version = Version;
    return (EventDescriptor);
}
__forceinline
PEVENT_DESCRIPTOR
EventDescSetTask(
     PEVENT_DESCRIPTOR EventDescriptor,
     USHORT Task
    )
{
    EventDescriptor->Task = Task;
    return (EventDescriptor);
}
__forceinline
PEVENT_DESCRIPTOR
EventDescSetOpcode(
     PEVENT_DESCRIPTOR EventDescriptor,
     UCHAR Opcode
    )
{
    EventDescriptor->Opcode = Opcode;
    return (EventDescriptor);
}
__forceinline
PEVENT_DESCRIPTOR
EventDescSetLevel(
     PEVENT_DESCRIPTOR EventDescriptor,
     UCHAR Level
    )
{
    EventDescriptor->Level = Level;
    return (EventDescriptor);
}
__forceinline
PEVENT_DESCRIPTOR
EventDescSetChannel(
     PEVENT_DESCRIPTOR EventDescriptor,
     UCHAR Channel
    )
{
    EventDescriptor->Channel = Channel;
    return (EventDescriptor);
}
__forceinline
PEVENT_DESCRIPTOR
EventDescSetKeyword(
     PEVENT_DESCRIPTOR EventDescriptor,
     ULONGLONG Keyword
    )
{
    EventDescriptor->Keyword = Keyword;
    return (EventDescriptor);
}
__forceinline
PEVENT_DESCRIPTOR
EventDescOrKeyword(
     PEVENT_DESCRIPTOR EventDescriptor,
     ULONGLONG Keyword
    )
{
    EventDescriptor->Keyword |= Keyword;
    return (EventDescriptor);
}
typedef
void
(__stdcall *PETWENABLECALLBACK) (
     LPCGUID SourceId,
     ULONG IsEnabled,
     UCHAR Level,
     ULONGLONG MatchAnyKeyword,
     ULONGLONG MatchAllKeyword,
     PEVENT_FILTER_DESCRIPTOR FilterData,
     PVOID CallbackContext
    );
typedef enum {
    DevicePropertyDeviceDescription,
    DevicePropertyHardwareID,
    DevicePropertyCompatibleIDs,
    DevicePropertyBootConfiguration,
    DevicePropertyBootConfigurationTranslated,
    DevicePropertyClassName,
    DevicePropertyClassGuid,
    DevicePropertyDriverKeyName,
    DevicePropertyManufacturer,
    DevicePropertyFriendlyName,
    DevicePropertyLocationInformation,
    DevicePropertyPhysicalDeviceObjectName,
    DevicePropertyBusTypeGuid,
    DevicePropertyLegacyBusType,
    DevicePropertyBusNumber,
    DevicePropertyEnumeratorName,
    DevicePropertyAddress,
    DevicePropertyUINumber,
    DevicePropertyInstallState,
    DevicePropertyRemovalPolicy,
    DevicePropertyResourceRequirements,
    DevicePropertyAllocatedResources
} DEVICE_REGISTRY_PROPERTY;
typedef BOOLEAN (*PTRANSLATE_BUS_ADDRESS)(
     PVOID Context,
     PHYSICAL_ADDRESS BusAddress,
     ULONG Length,
     PULONG AddressSpace,
     PPHYSICAL_ADDRESS TranslatedAddress
    );
typedef struct _DMA_ADAPTER *(*PGET_DMA_ADAPTER)(
     PVOID Context,
     struct _DEVICE_DESCRIPTION *DeviceDescriptor,
     PULONG NumberOfMapRegisters
    );
typedef ULONG (*PGET_SET_DEVICE_DATA)(
     PVOID Context,
     ULONG DataType,
     PVOID Buffer,
     ULONG Offset,
     ULONG Length
    );
typedef enum _DEVICE_INSTALL_STATE {
    InstallStateInstalled,
    InstallStateNeedsReinstall,
    InstallStateFailedInstall,
    InstallStateFinishInstall
} DEVICE_INSTALL_STATE, *PDEVICE_INSTALL_STATE;
typedef struct _PNP_BUS_INFORMATION {
    GUID BusTypeGuid;
    INTERFACE_TYPE LegacyBusType;
    ULONG BusNumber;
} PNP_BUS_INFORMATION, *PPNP_BUS_INFORMATION;
typedef struct _LEGACY_BUS_INFORMATION {
    GUID BusTypeGuid;
    INTERFACE_TYPE LegacyBusType;
    ULONG BusNumber;
} LEGACY_BUS_INFORMATION, *PLEGACY_BUS_INFORMATION;
typedef enum _DEVICE_REMOVAL_POLICY {
    RemovalPolicyExpectNoRemoval = 1,
    RemovalPolicyExpectOrderlyRemoval = 2,
    RemovalPolicyExpectSurpriseRemoval = 3
} DEVICE_REMOVAL_POLICY, *PDEVICE_REMOVAL_POLICY;
typedef struct _BUS_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PTRANSLATE_BUS_ADDRESS TranslateBusAddress;
    PGET_DMA_ADAPTER GetDmaAdapter;
    PGET_SET_DEVICE_DATA SetBusData;
    PGET_SET_DEVICE_DATA GetBusData;
} BUS_INTERFACE_STANDARD, *PBUS_INTERFACE_STANDARD;
typedef
void
(*PREENUMERATE_SELF)(
     PVOID Context
    );
typedef struct _REENUMERATE_SELF_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PREENUMERATE_SELF SurpriseRemoveAndReenumerateSelf;
} REENUMERATE_SELF_INTERFACE_STANDARD, *PREENUMERATE_SELF_INTERFACE_STANDARD;
typedef BOOLEAN (* PGPE_SERVICE_ROUTINE) (
                            PVOID,
                            PVOID);
typedef NTSTATUS (* PGPE_CONNECT_VECTOR) (
                            PDEVICE_OBJECT,
                            ULONG,
                            KINTERRUPT_MODE,
                            BOOLEAN,
                            PGPE_SERVICE_ROUTINE,
                            PVOID,
                            PVOID);
typedef NTSTATUS (* PGPE_DISCONNECT_VECTOR) (
                            PVOID);
typedef NTSTATUS (* PGPE_ENABLE_EVENT) (
                            PDEVICE_OBJECT,
                            PVOID);
typedef NTSTATUS (* PGPE_DISABLE_EVENT) (
                            PDEVICE_OBJECT,
                            PVOID);
typedef NTSTATUS (* PGPE_CLEAR_STATUS) (
                            PDEVICE_OBJECT,
                            PVOID);
typedef void (* PDEVICE_NOTIFY_CALLBACK) (
                            PVOID,
                            ULONG);
typedef NTSTATUS (* PREGISTER_FOR_DEVICE_NOTIFICATIONS) (
                            PDEVICE_OBJECT,
                            PDEVICE_NOTIFY_CALLBACK,
                            PVOID);
typedef void (* PUNREGISTER_FOR_DEVICE_NOTIFICATIONS) (
                            PDEVICE_OBJECT,
                            PDEVICE_NOTIFY_CALLBACK);
typedef struct _ACPI_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PGPE_CONNECT_VECTOR GpeConnectVector;
    PGPE_DISCONNECT_VECTOR GpeDisconnectVector;
    PGPE_ENABLE_EVENT GpeEnableEvent;
    PGPE_DISABLE_EVENT GpeDisableEvent;
    PGPE_CLEAR_STATUS GpeClearStatus;
    PREGISTER_FOR_DEVICE_NOTIFICATIONS RegisterForDeviceNotifications;
    PUNREGISTER_FOR_DEVICE_NOTIFICATIONS UnregisterForDeviceNotifications;
} ACPI_INTERFACE_STANDARD, *PACPI_INTERFACE_STANDARD;
typedef
BOOLEAN
(*PGPE_SERVICE_ROUTINE2) (
    PVOID ObjectContext,
    PVOID ServiceContext
    );
typedef
NTSTATUS
(*PGPE_CONNECT_VECTOR2) (
    PVOID Context,
    ULONG GpeNumber,
    KINTERRUPT_MODE Mode,
    BOOLEAN Shareable,
    PGPE_SERVICE_ROUTINE ServiceRoutine,
    PVOID ServiceContext,
    PVOID *ObjectContext
    );
typedef
NTSTATUS
(*PGPE_DISCONNECT_VECTOR2) (
    PVOID Context,
    PVOID ObjectContext
    );
typedef
NTSTATUS
(*PGPE_ENABLE_EVENT2) (
    PVOID Context,
    PVOID ObjectContext
    );
typedef
NTSTATUS
(*PGPE_DISABLE_EVENT2) (
    PVOID Context,
    PVOID ObjectContext
    );
typedef
NTSTATUS
(*PGPE_CLEAR_STATUS2) (
    PVOID Context,
    PVOID ObjectContext
    );
typedef
void
(*PDEVICE_NOTIFY_CALLBACK2) (
    PVOID NotificationContext,
    ULONG NotifyCode
    );
typedef
NTSTATUS
(*PREGISTER_FOR_DEVICE_NOTIFICATIONS2) (
    PVOID Context,
    PDEVICE_NOTIFY_CALLBACK2 NotificationHandler,
    PVOID NotificationContext
    );
typedef
void
(*PUNREGISTER_FOR_DEVICE_NOTIFICATIONS2) (
    PVOID Context
    );
typedef struct {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PGPE_CONNECT_VECTOR2 GpeConnectVector;
    PGPE_DISCONNECT_VECTOR2 GpeDisconnectVector;
    PGPE_ENABLE_EVENT2 GpeEnableEvent;
    PGPE_DISABLE_EVENT2 GpeDisableEvent;
    PGPE_CLEAR_STATUS2 GpeClearStatus;
    PREGISTER_FOR_DEVICE_NOTIFICATIONS2 RegisterForDeviceNotifications;
    PUNREGISTER_FOR_DEVICE_NOTIFICATIONS2 UnregisterForDeviceNotifications;
} ACPI_INTERFACE_STANDARD2, *PACPI_INTERFACE_STANDARD2;
__declspec(dllimport)
void
IoInvalidateDeviceRelations(
     PDEVICE_OBJECT DeviceObject,
     DEVICE_RELATION_TYPE Type
    );
__declspec(dllimport)
void
IoRequestDeviceEject(
     PDEVICE_OBJECT PhysicalDeviceObject
    );
typedef void (*PIO_DEVICE_EJECT_CALLBACK)(
     NTSTATUS Status,
     PVOID Context
    );
__declspec(dllimport)
NTSTATUS
IoGetDeviceProperty(
     PDEVICE_OBJECT DeviceObject,
     DEVICE_REGISTRY_PROPERTY DeviceProperty,
     ULONG BufferLength,
     PVOID PropertyBuffer,
     PULONG ResultLength
    );
__declspec(dllimport)
NTSTATUS
IoOpenDeviceRegistryKey(
     PDEVICE_OBJECT DeviceObject,
     ULONG DevInstKeyType,
     ACCESS_MASK DesiredAccess,
     PHANDLE DevInstRegKey
    );
__declspec(dllimport)
NTSTATUS
__stdcall
IoRegisterDeviceInterface(
     PDEVICE_OBJECT PhysicalDeviceObject,
     const GUID *InterfaceClassGuid,
     PUNICODE_STRING ReferenceString,
     PUNICODE_STRING SymbolicLinkName
    );
__declspec(dllimport)
NTSTATUS
IoOpenDeviceInterfaceRegistryKey(
     PUNICODE_STRING SymbolicLinkName,
     ACCESS_MASK DesiredAccess,
     PHANDLE DeviceInterfaceKey
    );
__declspec(dllimport)
NTSTATUS
IoSetDeviceInterfaceState(
     PUNICODE_STRING SymbolicLinkName,
     BOOLEAN Enable
    );
__declspec(dllimport)
NTSTATUS
__stdcall
IoGetDeviceInterfaces(
     const GUID *InterfaceClassGuid,
     PDEVICE_OBJECT PhysicalDeviceObject,
     ULONG Flags,
     PWSTR *SymbolicLinkList
    );
__declspec(dllimport)
NTSTATUS
__stdcall
IoGetDeviceInterfaceAlias(
     PUNICODE_STRING SymbolicLinkName,
     const GUID *AliasInterfaceClassGuid,
     PUNICODE_STRING AliasSymbolicLinkName
    );
typedef enum _IO_NOTIFICATION_EVENT_CATEGORY {
    EventCategoryReserved,
    EventCategoryHardwareProfileChange,
    EventCategoryDeviceInterfaceChange,
    EventCategoryTargetDeviceChange
} IO_NOTIFICATION_EVENT_CATEGORY;
typedef
NTSTATUS
(*PDRIVER_NOTIFICATION_CALLBACK_ROUTINE) (
     PVOID NotificationStructure,
     PVOID Context
);
__declspec(dllimport)
NTSTATUS
IoRegisterPlugPlayNotification(
     IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
     ULONG EventCategoryFlags,
     PVOID EventCategoryData,
     PDRIVER_OBJECT DriverObject,
     PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
     PVOID Context,
     PVOID *NotificationEntry
    );
__declspec(dllimport)
NTSTATUS
IoUnregisterPlugPlayNotification(
     PVOID NotificationEntry
    );
__declspec(dllimport)
NTSTATUS
IoReportTargetDeviceChange(
     PDEVICE_OBJECT PhysicalDeviceObject,
     PVOID NotificationStructure
    );
typedef
void
(*PDEVICE_CHANGE_COMPLETE_CALLBACK)(
     PVOID Context
    );
__declspec(dllimport)
void
IoInvalidateDeviceState(
     PDEVICE_OBJECT PhysicalDeviceObject
    );
__declspec(dllimport)
NTSTATUS
IoReportTargetDeviceChangeAsynchronous(
     PDEVICE_OBJECT PhysicalDeviceObject,
     PVOID NotificationStructure,
     PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
     PVOID Context
    );
typedef struct _PLUGPLAY_NOTIFICATION_HEADER {
    USHORT Version;
    USHORT Size;
    GUID Event;
} PLUGPLAY_NOTIFICATION_HEADER, *PPLUGPLAY_NOTIFICATION_HEADER;
typedef struct _HWPROFILE_CHANGE_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
} HWPROFILE_CHANGE_NOTIFICATION, *PHWPROFILE_CHANGE_NOTIFICATION;
typedef struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    GUID InterfaceClassGuid;
    PUNICODE_STRING SymbolicLinkName;
} DEVICE_INTERFACE_CHANGE_NOTIFICATION, *PDEVICE_INTERFACE_CHANGE_NOTIFICATION;
typedef struct _TARGET_DEVICE_REMOVAL_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    PFILE_OBJECT FileObject;
} TARGET_DEVICE_REMOVAL_NOTIFICATION, *PTARGET_DEVICE_REMOVAL_NOTIFICATION;
typedef struct _TARGET_DEVICE_CUSTOM_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    PFILE_OBJECT FileObject;
    LONG NameBufferOffset;
    UCHAR CustomDataBuffer[1];
} TARGET_DEVICE_CUSTOM_NOTIFICATION, *PTARGET_DEVICE_CUSTOM_NOTIFICATION;
typedef struct _PNP_REPLACE_DRIVER_INTERFACE *PPNP_REPLACE_DRIVER_INTERFACE;
typedef
NTSTATUS
(*PREPLACE_DRIVER_INIT) (
     PPNP_REPLACE_DRIVER_INTERFACE Interface,
     PVOID Unused
    );
typedef
NTSTATUS
(*PREPLACE_MAP_MEMORY) (
        PHYSICAL_ADDRESS TargetPhysicalAddress,
        PHYSICAL_ADDRESS SparePhysicalAddress,
     PLARGE_INTEGER NumberOfBytes,
     PVOID *TargetAddress,
     PVOID *SpareAddress
    );
typedef struct _PNP_REPLACE_MEMORY_LIST {
    ULONG AllocatedCount;
    ULONG Count;
    ULONGLONG TotalLength;
    struct {
        PHYSICAL_ADDRESS Address;
        ULONGLONG Length;
    } Ranges[1];
} PNP_REPLACE_MEMORY_LIST, *PPNP_REPLACE_MEMORY_LIST;
typedef struct _PNP_REPLACE_PROCESSOR_LIST {
    KAFFINITY AffinityMask;
    ULONG AllocatedCount;
    ULONG Count;
    ULONG ApicIds[1];
} PNP_REPLACE_PROCESSOR_LIST, *PPNP_REPLACE_PROCESSOR_LIST;
typedef struct _PNP_REPLACE_PARAMETERS {
    ULONG Size;
    ULONG Version;
    ULONG64 Target;
    ULONG64 Spare;
    PPNP_REPLACE_PROCESSOR_LIST TargetProcessors;
    PPNP_REPLACE_PROCESSOR_LIST SpareProcessors;
    PPNP_REPLACE_MEMORY_LIST TargetMemory;
    PPNP_REPLACE_MEMORY_LIST SpareMemory;
    PREPLACE_MAP_MEMORY MapMemory;
} PNP_REPLACE_PARAMETERS, *PPNP_REPLACE_PARAMETERS;
typedef
void
(*PREPLACE_UNLOAD) (
    void
    );
typedef
NTSTATUS
(*PREPLACE_BEGIN) (
     PPNP_REPLACE_PARAMETERS Parameters,
     PVOID *Context
);
typedef
NTSTATUS
(*PREPLACE_END) (
     PVOID Context
    );
typedef
NTSTATUS
(*PREPLACE_MIRROR_PHYSICAL_MEMORY) (
     PVOID Context,
     PHYSICAL_ADDRESS PhysicalAddress,
     LARGE_INTEGER ByteCount
    );
typedef
NTSTATUS
(*PREPLACE_SET_PROCESSOR_ID) (
     PVOID Context,
     ULONG ApicId,
     BOOLEAN Target
    );
typedef
NTSTATUS
(*PREPLACE_SWAP) (
     PVOID Context
    );
typedef
NTSTATUS
(*PREPLACE_INITIATE_HARDWARE_MIRROR) (
     PVOID Context
    );
typedef
NTSTATUS
(*PREPLACE_MIRROR_PLATFORM_MEMORY) (
     PVOID Context
    );
typedef
NTSTATUS
(*PREPLACE_GET_MEMORY_DESTINATION) (
     PVOID Context,
     PHYSICAL_ADDRESS SourceAddress,
     PPHYSICAL_ADDRESS DestinationAddress
    );
typedef struct _PNP_REPLACE_DRIVER_INTERFACE {
    ULONG Size;
    ULONG Version;
    ULONG Flags;
    PREPLACE_UNLOAD Unload;
    PREPLACE_BEGIN BeginReplace;
    PREPLACE_END EndReplace;
    PREPLACE_MIRROR_PHYSICAL_MEMORY MirrorPhysicalMemory;
    PREPLACE_SET_PROCESSOR_ID SetProcessorId;
    PREPLACE_SWAP Swap;
    PREPLACE_INITIATE_HARDWARE_MIRROR InitiateHardwareMirror;
    PREPLACE_MIRROR_PLATFORM_MEMORY MirrorPlatformMemory;
    PREPLACE_GET_MEMORY_DESTINATION GetMemoryDestination;
} PNP_REPLACE_DRIVER_INTERFACE, *PPNP_REPLACE_DRIVER_INTERFACE;
typedef struct _DEVICE_DESCRIPTION {
    ULONG Version;
    BOOLEAN Master;
    BOOLEAN ScatterGather;
    BOOLEAN DemandMode;
    BOOLEAN AutoInitialize;
    BOOLEAN Dma32BitAddresses;
    BOOLEAN IgnoreCount;
    BOOLEAN Reserved1;
    BOOLEAN Dma64BitAddresses;
    ULONG BusNumber;
    ULONG DmaChannel;
    INTERFACE_TYPE InterfaceType;
    DMA_WIDTH DmaWidth;
    DMA_SPEED DmaSpeed;
    ULONG MaximumLength;
    ULONG DmaPort;
} DEVICE_DESCRIPTION, *PDEVICE_DESCRIPTION;
__declspec(dllimport)
void
KeFlushWriteBuffer (
    void
    );
__declspec(dllimport)
LARGE_INTEGER
KeQueryPerformanceCounter (
    PLARGE_INTEGER PerformanceFrequency
   );
__declspec(dllimport)
void
KeStallExecutionProcessor (
     ULONG MicroSeconds
    );
typedef struct _SCATTER_GATHER_ELEMENT {
    PHYSICAL_ADDRESS Address;
    ULONG Length;
    ULONG_PTR Reserved;
} SCATTER_GATHER_ELEMENT, *PSCATTER_GATHER_ELEMENT;
#pragma warning(push)
#pragma warning(disable:4200)
typedef struct _SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG_PTR Reserved;
    SCATTER_GATHER_ELEMENT Elements[];
} SCATTER_GATHER_LIST, *PSCATTER_GATHER_LIST;
#pragma warning(pop)
typedef struct _DMA_OPERATIONS *PDMA_OPERATIONS;
typedef struct _DMA_ADAPTER {
    USHORT Version;
    USHORT Size;
    PDMA_OPERATIONS DmaOperations;
} DMA_ADAPTER, *PDMA_ADAPTER;
typedef void (*PPUT_DMA_ADAPTER)(
    PDMA_ADAPTER DmaAdapter
    );
typedef PVOID (*PALLOCATE_COMMON_BUFFER)(
     PDMA_ADAPTER DmaAdapter,
     ULONG Length,
     PPHYSICAL_ADDRESS LogicalAddress,
     BOOLEAN CacheEnabled
    );
typedef void (*PFREE_COMMON_BUFFER)(
     PDMA_ADAPTER DmaAdapter,
     ULONG Length,
     PHYSICAL_ADDRESS LogicalAddress,
     PVOID VirtualAddress,
     BOOLEAN CacheEnabled
    );
typedef NTSTATUS (*PALLOCATE_ADAPTER_CHANNEL)(
     PDMA_ADAPTER DmaAdapter,
     PDEVICE_OBJECT DeviceObject,
     ULONG NumberOfMapRegisters,
     PDRIVER_CONTROL ExecutionRoutine,
     PVOID Context
    );
typedef BOOLEAN (*PFLUSH_ADAPTER_BUFFERS)(
     PDMA_ADAPTER DmaAdapter,
     PMDL Mdl,
     PVOID MapRegisterBase,
     PVOID CurrentVa,
     ULONG Length,
     BOOLEAN WriteToDevice
    );
typedef void (*PFREE_ADAPTER_CHANNEL)(
     PDMA_ADAPTER DmaAdapter
    );
typedef void (*PFREE_MAP_REGISTERS)(
     PDMA_ADAPTER DmaAdapter,
    PVOID MapRegisterBase,
    ULONG NumberOfMapRegisters
    );
typedef PHYSICAL_ADDRESS (*PMAP_TRANSFER)(
     PDMA_ADAPTER DmaAdapter,
     PMDL Mdl,
     PVOID MapRegisterBase,
     PVOID CurrentVa,
     PULONG Length,
     BOOLEAN WriteToDevice
    );
typedef ULONG (*PGET_DMA_ALIGNMENT)(
     PDMA_ADAPTER DmaAdapter
    );
typedef ULONG (*PREAD_DMA_COUNTER)(
     PDMA_ADAPTER DmaAdapter
    );
typedef void
(*PDRIVER_LIST_CONTROL)(
     struct _DEVICE_OBJECT *DeviceObject,
     struct _IRP *Irp,
     PSCATTER_GATHER_LIST ScatterGather,
     PVOID Context
    );
typedef NTSTATUS
(*PGET_SCATTER_GATHER_LIST)(
     PDMA_ADAPTER DmaAdapter,
     PDEVICE_OBJECT DeviceObject,
     PMDL Mdl,
     PVOID CurrentVa,
     ULONG Length,
     PDRIVER_LIST_CONTROL ExecutionRoutine,
     PVOID Context,
     BOOLEAN WriteToDevice
    );
typedef void
(*PPUT_SCATTER_GATHER_LIST)(
     PDMA_ADAPTER DmaAdapter,
     PSCATTER_GATHER_LIST ScatterGather,
     BOOLEAN WriteToDevice
    );
typedef NTSTATUS
(*PCALCULATE_SCATTER_GATHER_LIST_SIZE)(
      PDMA_ADAPTER DmaAdapter,
       PMDL Mdl,
      PVOID CurrentVa,
      ULONG Length,
      PULONG ScatterGatherListSize,
       PULONG pNumberOfMapRegisters
     );
typedef NTSTATUS
(*PBUILD_SCATTER_GATHER_LIST)(
      PDMA_ADAPTER DmaAdapter,
      PDEVICE_OBJECT DeviceObject,
      PMDL Mdl,
      PVOID CurrentVa,
      ULONG Length,
      PDRIVER_LIST_CONTROL ExecutionRoutine,
      PVOID Context,
      BOOLEAN WriteToDevice,
      PVOID ScatterGatherBuffer,
      ULONG ScatterGatherLength
     );
typedef NTSTATUS
(*PBUILD_MDL_FROM_SCATTER_GATHER_LIST)(
     PDMA_ADAPTER DmaAdapter,
     PSCATTER_GATHER_LIST ScatterGather,
     PMDL OriginalMdl,
     PMDL *TargetMdl
    );
typedef struct _DMA_OPERATIONS {
    ULONG Size;
    PPUT_DMA_ADAPTER PutDmaAdapter;
    PALLOCATE_COMMON_BUFFER AllocateCommonBuffer;
    PFREE_COMMON_BUFFER FreeCommonBuffer;
    PALLOCATE_ADAPTER_CHANNEL AllocateAdapterChannel;
    PFLUSH_ADAPTER_BUFFERS FlushAdapterBuffers;
    PFREE_ADAPTER_CHANNEL FreeAdapterChannel;
    PFREE_MAP_REGISTERS FreeMapRegisters;
    PMAP_TRANSFER MapTransfer;
    PGET_DMA_ALIGNMENT GetDmaAlignment;
    PREAD_DMA_COUNTER ReadDmaCounter;
    PGET_SCATTER_GATHER_LIST GetScatterGatherList;
    PPUT_SCATTER_GATHER_LIST PutScatterGatherList;
    PCALCULATE_SCATTER_GATHER_LIST_SIZE CalculateScatterGatherList;
    PBUILD_SCATTER_GATHER_LIST BuildScatterGatherList;
    PBUILD_MDL_FROM_SCATTER_GATHER_LIST BuildMdlFromScatterGatherList;
} DMA_OPERATIONS;
__declspec(dllimport)
void
PoSetSystemState (
     EXECUTION_STATE Flags
    );
__declspec(dllimport)
PVOID
PoRegisterSystemState (
     PVOID StateHandle,
     EXECUTION_STATE Flags
    );
typedef
void
(*PREQUEST_POWER_COMPLETE) (
     PDEVICE_OBJECT DeviceObject,
     UCHAR MinorFunction,
     POWER_STATE PowerState,
     PVOID Context,
     PIO_STATUS_BLOCK IoStatus
    );
__declspec(dllimport)
NTSTATUS
PoRequestPowerIrp (
     PDEVICE_OBJECT DeviceObject,
     UCHAR MinorFunction,
     POWER_STATE PowerState,
     PREQUEST_POWER_COMPLETE CompletionFunction,
     PVOID Context,
     PIRP *Irp
    );
__declspec(dllimport)
void
PoUnregisterSystemState (
     PVOID StateHandle
    );
__declspec(dllimport)
POWER_STATE
PoSetPowerState (
     PDEVICE_OBJECT DeviceObject,
     POWER_STATE_TYPE Type,
     POWER_STATE State
    );
__declspec(dllimport)
NTSTATUS
PoCallDriver (
     PDEVICE_OBJECT DeviceObject,
     PIRP Irp
    );
__declspec(dllimport)
void
PoStartNextPowerIrp(
     PIRP Irp
    );
__declspec(dllimport)
PULONG
PoRegisterDeviceForIdleDetection (
     PDEVICE_OBJECT DeviceObject,
     ULONG ConservationIdleTime,
     ULONG PerformanceIdleTime,
     DEVICE_POWER_STATE State
    );
typedef NTSTATUS (*PPOWER_SETTING_CALLBACK) (
     LPCGUID SettingGuid,
     PVOID Value,
     ULONG ValueLength,
     PVOID Context
);
typedef struct _OBJECT_HANDLE_INFORMATION {
    ULONG HandleAttributes;
    ACCESS_MASK GrantedAccess;
} OBJECT_HANDLE_INFORMATION, *POBJECT_HANDLE_INFORMATION;
__declspec(dllimport)
NTSTATUS
ObReferenceObjectByHandle(
     HANDLE Handle,
     ACCESS_MASK DesiredAccess,
     POBJECT_TYPE ObjectType,
     KPROCESSOR_MODE AccessMode,
     PVOID *Object,
     POBJECT_HANDLE_INFORMATION HandleInformation
    );
__declspec(dllimport)
LONG_PTR
__fastcall
ObfReferenceObject(
     PVOID Object
    );
__declspec(dllimport)
NTSTATUS
ObReferenceObjectByPointer(
     PVOID Object,
     ACCESS_MASK DesiredAccess,
     POBJECT_TYPE ObjectType,
     KPROCESSOR_MODE AccessMode
    );
__declspec(dllimport)
LONG_PTR
__fastcall
ObfDereferenceObject(
     PVOID Object
    );
__declspec(dllimport)
NTSTATUS
ObGetObjectSecurity(
     PVOID Object,
     PSECURITY_DESCRIPTOR *SecurityDescriptor,
     PBOOLEAN MemoryAllocated
    );
__declspec(dllimport)
void
ObReleaseObjectSecurity(
     PSECURITY_DESCRIPTOR SecurityDescriptor,
     BOOLEAN MemoryAllocated
    );
typedef ULONG OB_OPERATION;
typedef struct _OB_PRE_CREATE_HANDLE_INFORMATION {
     ACCESS_MASK DesiredAccess;
     ACCESS_MASK OriginalDesiredAccess;
} OB_PRE_CREATE_HANDLE_INFORMATION, *POB_PRE_CREATE_HANDLE_INFORMATION;
typedef struct _OB_PRE_DUPLICATE_HANDLE_INFORMATION {
     ACCESS_MASK DesiredAccess;
     ACCESS_MASK OriginalDesiredAccess;
     PVOID SourceProcess;
     PVOID TargetProcess;
} OB_PRE_DUPLICATE_HANDLE_INFORMATION, * POB_PRE_DUPLICATE_HANDLE_INFORMATION;
typedef union _OB_PRE_OPERATION_PARAMETERS {
     OB_PRE_CREATE_HANDLE_INFORMATION CreateHandleInformation;
     OB_PRE_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;
} OB_PRE_OPERATION_PARAMETERS, *POB_PRE_OPERATION_PARAMETERS;
typedef struct _OB_PRE_OPERATION_INFORMATION {
     OB_OPERATION Operation;
    union {
         ULONG Flags;
        struct {
             ULONG KernelHandle:1;
             ULONG Reserved:31;
        };
    };
     PVOID Object;
     POBJECT_TYPE ObjectType;
     PVOID CallContext;
     POB_PRE_OPERATION_PARAMETERS Parameters;
} OB_PRE_OPERATION_INFORMATION, *POB_PRE_OPERATION_INFORMATION;
typedef struct _OB_POST_CREATE_HANDLE_INFORMATION {
     ACCESS_MASK GrantedAccess;
} OB_POST_CREATE_HANDLE_INFORMATION, *POB_POST_CREATE_HANDLE_INFORMATION;
typedef struct _OB_POST_DUPLICATE_HANDLE_INFORMATION {
     ACCESS_MASK GrantedAccess;
} OB_POST_DUPLICATE_HANDLE_INFORMATION, * POB_POST_DUPLICATE_HANDLE_INFORMATION;
typedef union _OB_POST_OPERATION_PARAMETERS {
     OB_POST_CREATE_HANDLE_INFORMATION CreateHandleInformation;
     OB_POST_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;
} OB_POST_OPERATION_PARAMETERS, *POB_POST_OPERATION_PARAMETERS;
typedef struct _OB_POST_OPERATION_INFORMATION {
     OB_OPERATION Operation;
    union {
         ULONG Flags;
        struct {
             ULONG KernelHandle:1;
             ULONG Reserved:31;
        };
    };
     PVOID Object;
     POBJECT_TYPE ObjectType;
     PVOID CallContext;
     NTSTATUS ReturnStatus;
     POB_POST_OPERATION_PARAMETERS Parameters;
} OB_POST_OPERATION_INFORMATION,*POB_POST_OPERATION_INFORMATION;
typedef enum _OB_PREOP_CALLBACK_STATUS {
    OB_PREOP_SUCCESS
} OB_PREOP_CALLBACK_STATUS, *POB_PREOP_CALLBACK_STATUS;
typedef OB_PREOP_CALLBACK_STATUS
(*POB_PRE_OPERATION_CALLBACK) (
     PVOID RegistrationContext,
     POB_PRE_OPERATION_INFORMATION OperationInformation
    );
typedef void
(*POB_POST_OPERATION_CALLBACK) (
     PVOID RegistrationContext,
     POB_POST_OPERATION_INFORMATION OperationInformation
    );
typedef struct _OB_OPERATION_REGISTRATION {
     POBJECT_TYPE *ObjectType;
     OB_OPERATION Operations;
     POB_PRE_OPERATION_CALLBACK PreOperation;
     POB_POST_OPERATION_CALLBACK PostOperation;
} OB_OPERATION_REGISTRATION, *POB_OPERATION_REGISTRATION;
typedef struct _OB_CALLBACK_REGISTRATION {
     USHORT Version;
     USHORT OperationRegistrationCount;
     UNICODE_STRING Altitude;
     PVOID RegistrationContext;
     OB_OPERATION_REGISTRATION *OperationRegistration;
} OB_CALLBACK_REGISTRATION, *POB_CALLBACK_REGISTRATION;
typedef struct _PCI_SLOT_NUMBER {
    union {
        struct {
            ULONG DeviceNumber:5;
            ULONG FunctionNumber:3;
            ULONG Reserved:24;
        } bits;
        ULONG AsULONG;
    } u;
} PCI_SLOT_NUMBER, *PPCI_SLOT_NUMBER;
typedef struct _PCI_COMMON_HEADER {
    USHORT VendorID;
    USHORT DeviceID;
    USHORT Command;
    USHORT Status;
    UCHAR RevisionID;
    UCHAR ProgIf;
    UCHAR SubClass;
    UCHAR BaseClass;
    UCHAR CacheLineSize;
    UCHAR LatencyTimer;
    UCHAR HeaderType;
    UCHAR BIST;
    union {
        struct _PCI_HEADER_TYPE_0 {
            ULONG BaseAddresses[6];
            ULONG CIS;
            USHORT SubVendorID;
            USHORT SubSystemID;
            ULONG ROMBaseAddress;
            UCHAR CapabilitiesPtr;
            UCHAR Reserved1[3];
            ULONG Reserved2;
            UCHAR InterruptLine;
            UCHAR InterruptPin;
            UCHAR MinimumGrant;
            UCHAR MaximumLatency;
        } type0;
        struct _PCI_HEADER_TYPE_1 {
            ULONG BaseAddresses[2];
            UCHAR PrimaryBus;
            UCHAR SecondaryBus;
            UCHAR SubordinateBus;
            UCHAR SecondaryLatency;
            UCHAR IOBase;
            UCHAR IOLimit;
            USHORT SecondaryStatus;
            USHORT MemoryBase;
            USHORT MemoryLimit;
            USHORT PrefetchBase;
            USHORT PrefetchLimit;
            ULONG PrefetchBaseUpper32;
            ULONG PrefetchLimitUpper32;
            USHORT IOBaseUpper16;
            USHORT IOLimitUpper16;
            UCHAR CapabilitiesPtr;
            UCHAR Reserved1[3];
            ULONG ROMBaseAddress;
            UCHAR InterruptLine;
            UCHAR InterruptPin;
            USHORT BridgeControl;
        } type1;
        struct _PCI_HEADER_TYPE_2 {
            ULONG SocketRegistersBaseAddress;
            UCHAR CapabilitiesPtr;
            UCHAR Reserved;
            USHORT SecondaryStatus;
            UCHAR PrimaryBus;
            UCHAR SecondaryBus;
            UCHAR SubordinateBus;
            UCHAR SecondaryLatency;
            struct {
                ULONG Base;
                ULONG Limit;
            } Range[5-1];
            UCHAR InterruptLine;
            UCHAR InterruptPin;
            USHORT BridgeControl;
        } type2;
    } u;
} PCI_COMMON_HEADER, *PPCI_COMMON_HEADER;
typedef struct _PCI_COMMON_CONFIG {
    PCI_COMMON_HEADER ;
    UCHAR DeviceSpecific[192];
} PCI_COMMON_CONFIG, *PPCI_COMMON_CONFIG;
typedef struct _PCI_CAPABILITIES_HEADER {
    UCHAR CapabilityID;
    UCHAR Next;
} PCI_CAPABILITIES_HEADER, *PPCI_CAPABILITIES_HEADER;
typedef struct _PCI_PMC {
    UCHAR Version:3;
    UCHAR PMEClock:1;
    UCHAR Rsvd1:1;
    UCHAR DeviceSpecificInitialization:1;
    UCHAR Rsvd2:2;
    struct _PM_SUPPORT {
        UCHAR Rsvd2:1;
        UCHAR D1:1;
        UCHAR D2:1;
        UCHAR PMED0:1;
        UCHAR PMED1:1;
        UCHAR PMED2:1;
        UCHAR PMED3Hot:1;
        UCHAR PMED3Cold:1;
    } Support;
} PCI_PMC, *PPCI_PMC;
typedef struct _PCI_PMCSR {
    USHORT PowerState:2;
    USHORT Rsvd1:6;
    USHORT PMEEnable:1;
    USHORT DataSelect:4;
    USHORT DataScale:2;
    USHORT PMEStatus:1;
} PCI_PMCSR, *PPCI_PMCSR;
typedef struct _PCI_PMCSR_BSE {
    UCHAR Rsvd1:6;
    UCHAR D3HotSupportsStopClock:1;
    UCHAR BusPowerClockControlEnabled:1;
} PCI_PMCSR_BSE, *PPCI_PMCSR_BSE;
typedef struct _PCI_PM_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    union {
        PCI_PMC Capabilities;
        USHORT AsUSHORT;
    } PMC;
    union {
        PCI_PMCSR ControlStatus;
        USHORT AsUSHORT;
    } PMCSR;
    union {
        PCI_PMCSR_BSE BridgeSupport;
        UCHAR AsUCHAR;
    } PMCSR_BSE;
    UCHAR Data;
} PCI_PM_CAPABILITY, *PPCI_PM_CAPABILITY;
typedef struct {
    PCI_CAPABILITIES_HEADER Header;
    union {
        struct {
            USHORT DataParityErrorRecoveryEnable:1;
            USHORT EnableRelaxedOrdering:1;
            USHORT MaxMemoryReadByteCount:2;
            USHORT MaxOutstandingSplitTransactions:3;
            USHORT Reserved:9;
        } bits;
        USHORT AsUSHORT;
    } Command;
    union {
        struct {
            ULONG FunctionNumber:3;
            ULONG DeviceNumber:5;
            ULONG BusNumber:8;
            ULONG Device64Bit:1;
            ULONG Capable133MHz:1;
            ULONG SplitCompletionDiscarded:1;
            ULONG UnexpectedSplitCompletion:1;
            ULONG DeviceComplexity:1;
            ULONG DesignedMaxMemoryReadByteCount:2;
            ULONG DesignedMaxOutstandingSplitTransactions:3;
            ULONG DesignedMaxCumulativeReadSize:3;
            ULONG ReceivedSplitCompletionErrorMessage:1;
            ULONG CapablePCIX266:1;
            ULONG CapablePCIX533:1;
        } bits;
        ULONG AsULONG;
    } Status;
} PCI_X_CAPABILITY, *PPCI_X_CAPABILITY;
typedef struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER {
    USHORT CapabilityID;
    USHORT Version:4;
    USHORT Next:12;
} PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER, *PPCI_EXPRESS_ENHANCED_CAPABILITY_HEADER;
typedef struct _PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    ULONG LowSerialNumber;
    ULONG HighSerialNumber;
} PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY, *PPCI_EXPRESS_SERIAL_NUMBER_CAPABILITY;
typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS {
    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG Reserved3:11;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS;
typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK {
    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG Reserved3:11;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_MASK;
typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY {
    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG Reserved3:11;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY;
typedef union _PCI_EXPRESS_CORRECTABLE_ERROR_STATUS {
    struct {
        ULONG ReceiverError:1;
        ULONG Reserved1:5;
        ULONG BadTLP:1;
        ULONG BadDLLP:1;
        ULONG ReplayNumRollover:1;
        ULONG Reserved2:3;
        ULONG ReplayTimerTimeout:1;
        ULONG AdvisoryNonFatalError:1;
        ULONG Reserved3:18;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_CORRECTABLE_ERROR_STATUS, *PPCI_CORRECTABLE_ERROR_STATUS;
typedef union _PCI_EXPRESS_CORRECTABLE_ERROR_MASK {
    struct {
        ULONG ReceiverError:1;
        ULONG Reserved1:5;
        ULONG BadTLP:1;
        ULONG BadDLLP:1;
        ULONG ReplayNumRollover:1;
        ULONG Reserved2:3;
        ULONG ReplayTimerTimeout:1;
        ULONG AdvisoryNonFatalError:1;
        ULONG Reserved3:18;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_CORRECTABLE_ERROR_MASK, *PPCI_CORRECTABLE_ERROR_MASK;
typedef union _PCI_EXPRESS_AER_CAPABILITIES {
    struct {
        ULONG FirstErrorPointer:5;
        ULONG ECRCGenerationCapable:1;
        ULONG ECRCGenerationEnable:1;
        ULONG ECRCCheckCapable:1;
        ULONG ECRCCheckEnable:1;
        ULONG Reserved:23;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_AER_CAPABILITIES, *PPCI_EXPRESS_AER_CAPABILITIES;
typedef union _PCI_EXPRESS_ROOT_ERROR_COMMAND {
    struct {
        ULONG CorrectableErrorReportingEnable:1;
        ULONG NonFatalErrorReportingEnable:1;
        ULONG FatalErrorReportingEnable:1;
        ULONG Reserved:29;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_ROOT_ERROR_COMMAND, *PPCI_EXPRESS_ROOT_ERROR_COMMAND;
typedef union _PCI_EXPRESS_ROOT_ERROR_STATUS {
    struct {
        ULONG CorrectableErrorReceived:1;
        ULONG MultipleCorrectableErrorsReceived:1;
        ULONG UncorrectableErrorReceived:1;
        ULONG MultipleUncorrectableErrorsReceived:1;
        ULONG FirstUncorrectableFatal:1;
        ULONG NonFatalErrorMessagesReceived:1;
        ULONG FatalErrorMessagesReceived:1;
        ULONG Reserved:20;
        ULONG AdvancedErrorInterruptMessageNumber:5;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_ROOT_ERROR_STATUS, *PPCI_EXPRESS_ROOT_ERROR_STATUS;
typedef union _PCI_EXPRESS_ERROR_SOURCE_ID {
    struct {
        USHORT CorrectableSourceIdFun:3;
        USHORT CorrectableSourceIdDev:5;
        USHORT CorrectableSourceIdBus:8;
        USHORT UncorrectableSourceIdFun:3;
        USHORT UncorrectableSourceIdDev:5;
        USHORT UncorrectableSourceIdBus:8;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_ERROR_SOURCE_ID, *PPCI_EXPRESS_ERROR_SOURCE_ID;
typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS {
    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS;
typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK {
    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK;
typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY {
    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY;
typedef union _PCI_EXPRESS_SEC_AER_CAPABILITIES {
    struct {
        ULONG SecondaryUncorrectableFirstErrorPtr:5;
        ULONG Reserved:27;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_SEC_AER_CAPABILITIES, *PPCI_EXPRESS_SEC_AER_CAPABILITIES;
typedef struct _PCI_EXPRESS_AER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;
    PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;
    ULONG SecHeaderLog[4];
} PCI_EXPRESS_AER_CAPABILITY, *PPCI_EXPRESS_AER_CAPABILITY;
typedef struct _PCI_EXPRESS_ROOTPORT_AER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_ROOT_ERROR_COMMAND RootErrorCommand;
    PCI_EXPRESS_ROOT_ERROR_STATUS RootErrorStatus;
    PCI_EXPRESS_ERROR_SOURCE_ID ErrorSourceId;
} PCI_EXPRESS_ROOTPORT_AER_CAPABILITY, *PPCI_EXPRESS_ROOTPORT_AER_CAPABILITY;
typedef struct _PCI_EXPRESS_BRIDGE_AER_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;
    PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;
    ULONG SecHeaderLog[4];
} PCI_EXPRESS_BRIDGE_AER_CAPABILITY, *PPCI_EXPRESS_BRIDGE_AER_CAPABILITY;
typedef struct _PCI_DEVICE_PRESENCE_PARAMETERS {
    ULONG Size;
    ULONG Flags;
    USHORT VendorID;
    USHORT DeviceID;
    UCHAR RevisionID;
    USHORT SubVendorID;
    USHORT SubSystemID;
    UCHAR BaseClass;
    UCHAR SubClass;
    UCHAR ProgIf;
} PCI_DEVICE_PRESENCE_PARAMETERS, *PPCI_DEVICE_PRESENCE_PARAMETERS;
typedef
BOOLEAN
(*PPCI_IS_DEVICE_PRESENT) (
     USHORT VendorID,
     USHORT DeviceID,
     UCHAR RevisionID,
     USHORT SubVendorID,
     USHORT SubSystemID,
     ULONG Flags
);
typedef
BOOLEAN
(*PPCI_IS_DEVICE_PRESENT_EX) (
     PVOID Context,
     PPCI_DEVICE_PRESENCE_PARAMETERS Parameters
    );
typedef struct _PCI_DEVICE_PRESENT_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_IS_DEVICE_PRESENT IsDevicePresent;
    PPCI_IS_DEVICE_PRESENT_EX IsDevicePresentEx;
} PCI_DEVICE_PRESENT_INTERFACE, *PPCI_DEVICE_PRESENT_INTERFACE;
typedef
NTSTATUS
(*PPCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE) (
     PVOID Context
    );
typedef
NTSTATUS
(*PPCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE) (
     PVOID Context
    );
typedef struct _PCI_EXPRESS_LINK_QUIESCENT_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE PciExpressEnterLinkQuiescentMode;
    PPCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE PciExpressExitLinkQuiescentMode;
} PCI_EXPRESS_LINK_QUIESCENT_INTERFACE, *PPCI_EXPRESS_LINK_QUIESCENT_INTERFACE;
typedef
ULONG
(*PPCI_EXPRESS_ROOT_PORT_READ_CONFIG_SPACE) (
     PVOID Context,
     PVOID Buffer,
     ULONG Offset,
     ULONG Length
    );
typedef
ULONG
(*PPCI_EXPRESS_ROOT_PORT_WRITE_CONFIG_SPACE) (
     PVOID Context,
     PVOID Buffer,
     ULONG Offset,
     ULONG Length
    );
typedef struct _PCI_EXPRESS_ROOT_PORT_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_EXPRESS_ROOT_PORT_READ_CONFIG_SPACE ReadConfigSpace;
    PPCI_EXPRESS_ROOT_PORT_WRITE_CONFIG_SPACE WriteConfigSpace;
} PCI_EXPRESS_ROOT_PORT_INTERFACE, *PPCI_EXPRESS_ROOT_PORT_INTERFACE;
typedef
NTSTATUS
(*PPCI_MSIX_SET_ENTRY) (
     PVOID Context,
     ULONG TableEntry,
     ULONG MessageNumber
    );
typedef
NTSTATUS
(*PPCI_MSIX_MASKUNMASK_ENTRY) (
     PVOID Context,
     ULONG TableEntry
    );
typedef struct _PCI_MSIX_TABLE_CONFIG_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_MSIX_SET_ENTRY SetTableEntry;
    PPCI_MSIX_MASKUNMASK_ENTRY MaskTableEntry;
    PPCI_MSIX_MASKUNMASK_ENTRY UnmaskTableEntry;
} PCI_MSIX_TABLE_CONFIG_INTERFACE, *PPCI_MSIX_TABLE_CONFIG_INTERFACE;
__declspec(dllimport)
NTSTATUS
__stdcall
ZwCreateFile(
     PHANDLE FileHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
     PIO_STATUS_BLOCK IoStatusBlock,
     PLARGE_INTEGER AllocationSize,
     ULONG FileAttributes,
     ULONG ShareAccess,
     ULONG CreateDisposition,
     ULONG CreateOptions,
     PVOID EaBuffer,
     ULONG EaLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwOpenFile(
     PHANDLE FileHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
     PIO_STATUS_BLOCK IoStatusBlock,
     ULONG ShareAccess,
     ULONG OpenOptions
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwLoadDriver(
     PUNICODE_STRING DriverServiceName
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwUnloadDriver(
     PUNICODE_STRING DriverServiceName
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwQueryInformationFile(
     HANDLE FileHandle,
     PIO_STATUS_BLOCK IoStatusBlock,
     PVOID FileInformation,
     ULONG Length,
     FILE_INFORMATION_CLASS FileInformationClass
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwSetInformationFile(
     HANDLE FileHandle,
     PIO_STATUS_BLOCK IoStatusBlock,
     PVOID FileInformation,
     ULONG Length,
     FILE_INFORMATION_CLASS FileInformationClass
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwReadFile(
     HANDLE FileHandle,
     HANDLE Event,
     PIO_APC_ROUTINE ApcRoutine,
     PVOID ApcContext,
     PIO_STATUS_BLOCK IoStatusBlock,
     PVOID Buffer,
     ULONG Length,
     PLARGE_INTEGER ByteOffset,
     PULONG Key
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwWriteFile(
     HANDLE FileHandle,
     HANDLE Event,
     PIO_APC_ROUTINE ApcRoutine,
     PVOID ApcContext,
     PIO_STATUS_BLOCK IoStatusBlock,
     PVOID Buffer,
     ULONG Length,
     PLARGE_INTEGER ByteOffset,
     PULONG Key
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwClose(
     HANDLE Handle
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwCreateDirectoryObject(
     PHANDLE DirectoryHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwMakeTemporaryObject(
     HANDLE Handle
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwCreateSection (
     PHANDLE SectionHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
     PLARGE_INTEGER MaximumSize,
     ULONG SectionPageProtection,
     ULONG AllocationAttributes,
     HANDLE FileHandle
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwOpenSection(
     PHANDLE SectionHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwMapViewOfSection(
     HANDLE SectionHandle,
     HANDLE ProcessHandle,
     PVOID *BaseAddress,
     ULONG_PTR ZeroBits,
     SIZE_T CommitSize,
     PLARGE_INTEGER SectionOffset,
     PSIZE_T ViewSize,
     SECTION_INHERIT InheritDisposition,
     ULONG AllocationType,
     ULONG Win32Protect
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwUnmapViewOfSection(
     HANDLE ProcessHandle,
     PVOID BaseAddress
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwCreateKey(
     PHANDLE KeyHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
     ULONG TitleIndex,
     PUNICODE_STRING Class,
     ULONG CreateOptions,
     PULONG Disposition
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwOpenKey(
     PHANDLE KeyHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwDeleteKey(
     HANDLE KeyHandle
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwDeleteValueKey(
     HANDLE KeyHandle,
     PUNICODE_STRING ValueName
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwEnumerateKey(
     HANDLE KeyHandle,
     ULONG Index,
     KEY_INFORMATION_CLASS KeyInformationClass,
     PVOID KeyInformation,
     ULONG Length,
     PULONG ResultLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwEnumerateValueKey(
     HANDLE KeyHandle,
     ULONG Index,
     KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
     PVOID KeyValueInformation,
     ULONG Length,
     PULONG ResultLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwFlushKey(
     HANDLE KeyHandle
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwQueryKey(
     HANDLE KeyHandle,
     KEY_INFORMATION_CLASS KeyInformationClass,
     PVOID KeyInformation,
     ULONG Length,
     PULONG ResultLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwQueryValueKey(
     HANDLE KeyHandle,
     PUNICODE_STRING ValueName,
     KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
     PVOID KeyValueInformation,
     ULONG Length,
     PULONG ResultLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwSetValueKey(
     HANDLE KeyHandle,
     PUNICODE_STRING ValueName,
     ULONG TitleIndex,
     ULONG Type,
     PVOID Data,
     ULONG DataSize
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwOpenSymbolicLinkObject(
     PHANDLE LinkHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwQuerySymbolicLinkObject(
     HANDLE LinkHandle,
     PUNICODE_STRING LinkTarget,
     PULONG ReturnedLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwOpenEvent (
     PHANDLE EventHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes
    );
typedef
enum {
    STATE_FALSE,
    STATE_UNKNOWN,
    STATE_TRUE
} EM_RULE_STATE, *PEM_RULE_STATE;
typedef struct _EM_ENTRY_DATA {
    PVOID Data;
    ULONG DataLength;
} EM_ENTRY_DATA, *PEM_ENTRY_DATA;
typedef
EM_RULE_STATE
(*EM_CALLBACK_FUNC) (
     EM_ENTRY_DATA **InputEntries,
     ULONG NumberofEntries,
     LPCSTR *InputStrings,
     ULONG NumberofStrings,
     PULONG InputNumerics,
     ULONG NumberofNumerics,
     PVOID Context
    );
typedef
void
(*EM_LAZYENTRY_CALLBACK) (
     LPCGUID EntryGuid,
     PVOID Context
    );
typedef struct _EM_ENTRY_REGISTRATION {
    LPCGUID EntryGuid;
    EM_LAZYENTRY_CALLBACK LazyEntryCallback;
    PVOID LazyCallbackContext;
} EM_ENTRY_REGISTRATION, *PEM_ENTRY_REGISTRATION;
typedef struct _EM_CALLBACK_REGISTRATION {
    LPCGUID CallbackGuid;
    EM_CALLBACK_FUNC CallbackFunction;
    PVOID Context;
} EM_CALLBACK_REGISTRATION, *PEM_CALLBACK_REGISTRATION;
typedef
void
(*EM_RULE_STATE_NOTIFY) (
     EM_RULE_STATE State,
     LPCGUID RuleId,
     PVOID Context
    );
typedef struct _EM_CLIENT_NOTIFICATION_REGISTRATION {
    LPCGUID RuleId;
    EM_RULE_STATE_NOTIFY RuleNotifyCallback;
    PVOID Context;
} EM_CLIENT_NOTIFICATION_REGISTRATION, *PEM_CLIENT_NOTIFICATION_REGISTRATION;
NTSTATUS
EmProviderRegister(
     PDRIVER_OBJECT DriverObject,
     PEM_ENTRY_REGISTRATION EntryRegistration,
     ULONG NumberOfEntry,
     PEM_CALLBACK_REGISTRATION CallbackRegistration,
     ULONG NumberOfCallback,
     PVOID *ProviderHandle
    );
void
EmProviderDeregister(
     PVOID ProviderHandle
    );
NTSTATUS
EmProviderRegisterEntry(
     PVOID ProviderHandle,
     LPCGUID EntryId,
     PEM_ENTRY_DATA EntryData,
     PVOID *EntryHandle
    );
void
EmProviderDeregisterEntry(
     PVOID EntryHandle
    );
NTSTATUS
EmClientRuleEvaluate(
     LPCGUID RuleId,
     EM_ENTRY_DATA **InputEntries,
     ULONG NumberOfEntries,
     PEM_RULE_STATE State
    );
NTSTATUS
EmClientRuleRegisterNotification(
     PDRIVER_OBJECT DriverObject,
     PEM_CLIENT_NOTIFICATION_REGISTRATION RuleNotificationsRegistration,
     ULONG NumberOfNotificatoinRegistration,
     PVOID *NotificationHandle
    );
void
EmClientRuleDeregisterNotification(
     PVOID NotificationHandle
    );
NTSTATUS
EmClientQueryRuleState(
     LPCGUID RuleId,
     PEM_RULE_STATE State
    );
typedef struct _KTRANSACTION KTRANSACTION, *PKTRANSACTION, * PRKTRANSACTION;
typedef struct _KENLISTMENT KENLISTMENT, *PKENLISTMENT, * PRKENLISTMENT;
typedef struct _KRESOURCEMANAGER KRESOURCEMANAGER, *PKRESOURCEMANAGER, * PRKRESOURCEMANAGER;
typedef struct _KTM KTM, *PKTM, * PRKTM;
typedef GUID UOW, *PUOW;
typedef GUID *PGUID;
typedef
NTSTATUS
(__stdcall *PTM_RM_NOTIFICATION) (
         PKENLISTMENT EnlistmentObject,
         PVOID RMContext,
         PVOID TransactionContext,
         ULONG TransactionNotification,
      PLARGE_INTEGER TmVirtualClock,
         ULONG ArgumentLength,
         PVOID Argument
    );
typedef GUID KCRM_PROTOCOL_ID, *PKCRM_PROTOCOL_ID;
typedef
NTSTATUS
(__stdcall *PTM_PROPAGATE_ROUTINE) (
     PVOID PropagationCookie,
     PVOID CallbackData,
     NTSTATUS PropagationStatus,
     GUID TransactionGuid
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmInitializeTransactionManager (
     PRKTM TransactionManager,
     PCUNICODE_STRING LogFileName,
     PGUID TmId,
     ULONG CreateOptions
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmRenameTransactionManager (
     PUNICODE_STRING LogFileName,
     LPGUID ExistingTransactionManagerGuid
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmRecoverTransactionManager (
     PKTM Tm,
     PLARGE_INTEGER TargetVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmCommitTransaction (
     PKTRANSACTION Transaction,
     BOOLEAN Wait
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmRollbackTransaction (
     PKTRANSACTION Transaction,
     BOOLEAN Wait
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmCreateEnlistment (
     PHANDLE EnlistmentHandle,
     KPROCESSOR_MODE PreviousMode,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
     PRKRESOURCEMANAGER ResourceManager,
     PKTRANSACTION Transaction,
     ULONG CreateOptions ,
     NOTIFICATION_MASK NotificationMask,
     PVOID EnlistmentKey
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmRecoverEnlistment (
     PKENLISTMENT Enlistment,
     PVOID EnlistmentKey
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmPrePrepareEnlistment (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmPrepareEnlistment (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmCommitEnlistment (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmRollbackEnlistment (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmPrePrepareComplete (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmPrepareComplete (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmReadOnlyEnlistment (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmCommitComplete (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmRollbackComplete (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmReferenceEnlistmentKey (
     PKENLISTMENT Enlistment,
     PVOID *Key
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmDereferenceEnlistmentKey (
     PKENLISTMENT Enlistment,
     BOOLEAN *LastReference
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmSinglePhaseReject (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmRequestOutcomeEnlistment (
     PKENLISTMENT Enlistment,
     PLARGE_INTEGER TmVirtualClock
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmEnableCallbacks (
     PKRESOURCEMANAGER ResourceManager,
     PTM_RM_NOTIFICATION CallbackRoutine,
     PVOID RMKey
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmRecoverResourceManager (
     PKRESOURCEMANAGER ResourceManager
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmRegisterProtocolAddressInformation(
     PKRESOURCEMANAGER ResourceManager,
     PKCRM_PROTOCOL_ID ProtocolId,
     ULONG ProtocolInformationSize,
     PVOID ProtocolInformation
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmPropagationComplete(
      PKRESOURCEMANAGER ResourceManager,
      ULONG RequestCookie,
      ULONG BufferLength,
      PVOID Buffer
    );
__declspec(dllimport)
NTSTATUS
__stdcall
TmPropagationFailed(
      PKRESOURCEMANAGER ResourceManager,
      ULONG RequestCookie,
      NTSTATUS Status
    );
__declspec(dllimport)
void
__stdcall
TmGetTransactionId(
      PKTRANSACTION Transaction,
     PUOW TransactionId
    );
__declspec(dllimport)
BOOLEAN
__stdcall
TmIsTransactionActive (
      PKTRANSACTION Transaction
    );
extern POBJECT_TYPE *IoFileObjectType;
extern POBJECT_TYPE *ExEventObjectType;
extern POBJECT_TYPE *ExSemaphoreObjectType;
extern POBJECT_TYPE *TmTransactionManagerObjectType;
extern POBJECT_TYPE *TmResourceManagerObjectType;
extern POBJECT_TYPE *TmEnlistmentObjectType;
extern POBJECT_TYPE *TmTransactionObjectType;
extern POBJECT_TYPE *PsProcessType;
extern POBJECT_TYPE *PsThreadType;
#pragma warning(pop)
typedef struct _BUS_HANDLER *PBUS_HANDLER;
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;
typedef struct _DEVICE_HANDLER_OBJECT *PDEVICE_HANDLER_OBJECT;
typedef struct _EPROCESS *PEPROCESS;
typedef struct _ETHREAD *PETHREAD;
typedef struct _IO_TIMER *PIO_TIMER;
typedef struct _KINTERRUPT *PKINTERRUPT;
typedef struct _KTHREAD *PKTHREAD, *PRKTHREAD;
typedef struct _OBJECT_TYPE *POBJECT_TYPE;
typedef struct _PEB *PPEB;
typedef struct _IMAGE_NT_HEADERS *PIMAGE_NT_HEADERS32;
typedef struct _IMAGE_NT_HEADERS64 *PIMAGE_NT_HEADERS64;
typedef PIMAGE_NT_HEADERS32 PIMAGE_NT_HEADERS;
extern __declspec(dllimport) CCHAR KeNumberProcessors;
#pragma warning(push)
#pragma warning(disable:4164)
#pragma function(_enable)
#pragma function(_disable)
#pragma warning(pop)
#pragma warning( push )
#pragma warning( disable : 4793 )
__forceinline
void
MemoryBarrier (
    void
    )
{
    LONG Barrier;
    __asm {
        xchg Barrier, eax
    }
}
#pragma warning( pop )
ULONG64
__readpmc (
     ULONG Counter
    );
#pragma intrinsic(__readpmc)
ULONG64
__rdtsc (
    void
    );
#pragma intrinsic(__rdtsc)
typedef struct _FLOATING_SAVE_AREA {
    ULONG ControlWord;
    ULONG StatusWord;
    ULONG TagWord;
    ULONG ErrorOffset;
    ULONG ErrorSelector;
    ULONG DataOffset;
    ULONG DataSelector;
    UCHAR RegisterArea[80];
    ULONG Cr0NpxState;
} FLOATING_SAVE_AREA;
typedef FLOATING_SAVE_AREA *PFLOATING_SAVE_AREA;
typedef struct _CONTEXT {
    ULONG ContextFlags;
    ULONG Dr0;
    ULONG Dr1;
    ULONG Dr2;
    ULONG Dr3;
    ULONG Dr6;
    ULONG Dr7;
    FLOATING_SAVE_AREA FloatSave;
    ULONG SegGs;
    ULONG SegFs;
    ULONG SegEs;
    ULONG SegDs;
    ULONG Edi;
    ULONG Esi;
    ULONG Ebx;
    ULONG Edx;
    ULONG Ecx;
    ULONG Eax;
    ULONG Ebp;
    ULONG Eip;
    ULONG SegCs;
    ULONG EFlags;
    ULONG Esp;
    ULONG SegSs;
    UCHAR ExtendedRegisters[512];
} CONTEXT;
typedef CONTEXT *PCONTEXT;
typedef enum {
    WinNullSid = 0,
    WinWorldSid = 1,
    WinLocalSid = 2,
    WinCreatorOwnerSid = 3,
    WinCreatorGroupSid = 4,
    WinCreatorOwnerServerSid = 5,
    WinCreatorGroupServerSid = 6,
    WinNtAuthoritySid = 7,
    WinDialupSid = 8,
    WinNetworkSid = 9,
    WinBatchSid = 10,
    WinInteractiveSid = 11,
    WinServiceSid = 12,
    WinAnonymousSid = 13,
    WinProxySid = 14,
    WinEnterpriseControllersSid = 15,
    WinSelfSid = 16,
    WinAuthenticatedUserSid = 17,
    WinRestrictedCodeSid = 18,
    WinTerminalServerSid = 19,
    WinRemoteLogonIdSid = 20,
    WinLogonIdsSid = 21,
    WinLocalSystemSid = 22,
    WinLocalServiceSid = 23,
    WinNetworkServiceSid = 24,
    WinBuiltinDomainSid = 25,
    WinBuiltinAdministratorsSid = 26,
    WinBuiltinUsersSid = 27,
    WinBuiltinGuestsSid = 28,
    WinBuiltinPowerUsersSid = 29,
    WinBuiltinAccountOperatorsSid = 30,
    WinBuiltinSystemOperatorsSid = 31,
    WinBuiltinPrintOperatorsSid = 32,
    WinBuiltinBackupOperatorsSid = 33,
    WinBuiltinReplicatorSid = 34,
    WinBuiltinPreWindows2000CompatibleAccessSid = 35,
    WinBuiltinRemoteDesktopUsersSid = 36,
    WinBuiltinNetworkConfigurationOperatorsSid = 37,
    WinAccountAdministratorSid = 38,
    WinAccountGuestSid = 39,
    WinAccountKrbtgtSid = 40,
    WinAccountDomainAdminsSid = 41,
    WinAccountDomainUsersSid = 42,
    WinAccountDomainGuestsSid = 43,
    WinAccountComputersSid = 44,
    WinAccountControllersSid = 45,
    WinAccountCertAdminsSid = 46,
    WinAccountSchemaAdminsSid = 47,
    WinAccountEnterpriseAdminsSid = 48,
    WinAccountPolicyAdminsSid = 49,
    WinAccountRasAndIasServersSid = 50,
    WinNTLMAuthenticationSid = 51,
    WinDigestAuthenticationSid = 52,
    WinSChannelAuthenticationSid = 53,
    WinThisOrganizationSid = 54,
    WinOtherOrganizationSid = 55,
    WinBuiltinIncomingForestTrustBuildersSid = 56,
    WinBuiltinPerfMonitoringUsersSid = 57,
    WinBuiltinPerfLoggingUsersSid = 58,
    WinBuiltinAuthorizationAccessSid = 59,
    WinBuiltinTerminalServerLicenseServersSid = 60,
    WinBuiltinDCOMUsersSid = 61,
    WinBuiltinIUsersSid = 62,
    WinIUserSid = 63,
    WinBuiltinCryptoOperatorsSid = 64,
    WinUntrustedLabelSid = 65,
    WinLowLabelSid = 66,
    WinMediumLabelSid = 67,
    WinHighLabelSid = 68,
    WinSystemLabelSid = 69,
    WinWriteRestrictedCodeSid = 70,
    WinCreatorOwnerRightsSid = 71,
    WinCacheablePrincipalsGroupSid = 72,
    WinNonCacheablePrincipalsGroupSid = 73,
    WinEnterpriseReadonlyControllersSid = 74,
    WinAccountReadonlyControllersSid = 75,
    WinBuiltinEventLogReadersGroup = 76,
    WinNewEnterpriseReadonlyControllersSid = 77,
    WinBuiltinCertSvcDComAccessGroup = 78,
} WELL_KNOWN_SID_TYPE;
typedef union _RTL_RUN_ONCE {
    PVOID Ptr;
} RTL_RUN_ONCE, *PRTL_RUN_ONCE;
typedef
ULONG
(__stdcall *PRTL_RUN_ONCE_INIT_FN) (
     PRTL_RUN_ONCE RunOnce,
     PVOID Parameter,
     PVOID *Context
    );
PVOID
_ReturnAddress (
    void
    );
#pragma intrinsic(_ReturnAddress)
__declspec(dllimport)
void
__stdcall
RtlGetCallersAddress(
     PVOID *CallersAddress,
     PVOID *CallersCaller
    );
typedef ULONG (__stdcall * PRTL_WALK_FRAME_CHAIN)(
     PVOID *Callers,
     ULONG Count,
     ULONG Flags
    );
__declspec(dllimport)
ULONG
__stdcall
RtlWalkFrameChain (
     PVOID *Callers,
     ULONG Count,
     ULONG Flags
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlCharToInteger (
    PCSZ String,
    ULONG Base,
    PULONG Value
    );
__declspec(dllimport)
void
__stdcall
RtlCopyString(
    PSTRING DestinationString,
    const STRING * SourceString
    );
__declspec(dllimport)
CHAR
__stdcall
RtlUpperChar (
    CHAR Character
    );
__declspec(dllimport)
LONG
__stdcall
RtlCompareString(
    const STRING * String1,
    const STRING * String2,
    BOOLEAN CaseInSensitive
    );
__declspec(dllimport)
BOOLEAN
__stdcall
RtlEqualString(
    const STRING * String1,
    const STRING * String2,
    BOOLEAN CaseInSensitive
    );
__declspec(dllimport)
void
__stdcall
RtlUpperString(
    PSTRING DestinationString,
    const STRING * SourceString
    );
__declspec(dllimport)
BOOLEAN
__stdcall
RtlPrefixUnicodeString(
     PCUNICODE_STRING String1,
     PCUNICODE_STRING String2,
     BOOLEAN CaseInSensitive
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlUpcaseUnicodeString(
     PUNICODE_STRING DestinationString,
     PCUNICODE_STRING SourceString,
     BOOLEAN AllocateDestinationString
    );
__declspec(deprecated)
__declspec(dllimport)
LARGE_INTEGER
__stdcall
RtlLargeIntegerDivide (
    LARGE_INTEGER Dividend,
    LARGE_INTEGER Divisor,
    PLARGE_INTEGER Remainder
    );
__forceinline
LUID
__stdcall
RtlConvertLongToLuid(
    LONG Long
    )
{
    LUID TempLuid;
    LARGE_INTEGER TempLi;
    TempLi.QuadPart = Long;
    TempLuid.LowPart = TempLi.u.LowPart;
    TempLuid.HighPart = TempLi.u.HighPart;
    return(TempLuid);
}
__forceinline
LUID
__stdcall
RtlConvertUlongToLuid(
    ULONG Ulong
    )
{
    LUID TempLuid;
    TempLuid.LowPart = Ulong;
    TempLuid.HighPart = 0;
    return(TempLuid);
}
__declspec(dllimport)
void
__stdcall
RtlMapGenericMask(
    PACCESS_MASK AccessMask,
    PGENERIC_MAPPING GenericMapping
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlVolumeDeviceToDosName(
      PVOID VolumeDeviceObject,
     PUNICODE_STRING DosName
    );
typedef struct _OSVERSIONINFOA {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    CHAR szCSDVersion[ 128 ];
} OSVERSIONINFOA, *POSVERSIONINFOA, *LPOSVERSIONINFOA;
typedef struct _OSVERSIONINFOW {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    WCHAR szCSDVersion[ 128 ];
} OSVERSIONINFOW, *POSVERSIONINFOW, *LPOSVERSIONINFOW, RTL_OSVERSIONINFOW, *PRTL_OSVERSIONINFOW;
typedef OSVERSIONINFOA OSVERSIONINFO;
typedef POSVERSIONINFOA POSVERSIONINFO;
typedef LPOSVERSIONINFOA LPOSVERSIONINFO;
typedef struct _OSVERSIONINFOEXA {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    CHAR szCSDVersion[ 128 ];
    USHORT wServicePackMajor;
    USHORT wServicePackMinor;
    USHORT wSuiteMask;
    UCHAR wProductType;
    UCHAR wReserved;
} OSVERSIONINFOEXA, *POSVERSIONINFOEXA, *LPOSVERSIONINFOEXA;
typedef struct _OSVERSIONINFOEXW {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    WCHAR szCSDVersion[ 128 ];
    USHORT wServicePackMajor;
    USHORT wServicePackMinor;
    USHORT wSuiteMask;
    UCHAR wProductType;
    UCHAR wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW, *LPOSVERSIONINFOEXW, RTL_OSVERSIONINFOEXW, *PRTL_OSVERSIONINFOEXW;
typedef OSVERSIONINFOEXA OSVERSIONINFOEX;
typedef POSVERSIONINFOEXA POSVERSIONINFOEX;
typedef LPOSVERSIONINFOEXA LPOSVERSIONINFOEX;
__declspec(dllimport)
ULONGLONG
__stdcall
VerSetConditionMask(
          ULONGLONG ConditionMask,
          ULONG TypeMask,
          UCHAR Condition
        );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlGetVersion(
     PRTL_OSVERSIONINFOW lpVersionInformation
    );
__declspec(dllimport)
NTSTATUS
__stdcall
RtlVerifyVersionInfo(
     PRTL_OSVERSIONINFOEXW VersionInfo,
     ULONG TypeMask,
     ULONGLONG ConditionMask
    );
__declspec(dllimport)
ULONG
__stdcall
DbgPrompt (
     PCCH Prompt,
     PCH Response,
     ULONG Length
    );
typedef struct _FILE_ALIGNMENT_INFORMATION {
    ULONG AlignmentRequirement;
} FILE_ALIGNMENT_INFORMATION, *PFILE_ALIGNMENT_INFORMATION;
typedef struct _FILE_NAME_INFORMATION {
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NAME_INFORMATION, *PFILE_NAME_INFORMATION;
typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION {
    ULONG FileAttributes;
    ULONG ReparseTag;
} FILE_ATTRIBUTE_TAG_INFORMATION, *PFILE_ATTRIBUTE_TAG_INFORMATION;
typedef struct _FILE_DISPOSITION_INFORMATION {
    BOOLEAN DeleteFile;
} FILE_DISPOSITION_INFORMATION, *PFILE_DISPOSITION_INFORMATION;
typedef struct _FILE_END_OF_FILE_INFORMATION {
    LARGE_INTEGER EndOfFile;
} FILE_END_OF_FILE_INFORMATION, *PFILE_END_OF_FILE_INFORMATION;
typedef struct _FILE_VALID_DATA_LENGTH_INFORMATION {
    LARGE_INTEGER ValidDataLength;
} FILE_VALID_DATA_LENGTH_INFORMATION, *PFILE_VALID_DATA_LENGTH_INFORMATION;
typedef struct _FILE_FS_LABEL_INFORMATION {
    ULONG VolumeLabelLength;
    WCHAR VolumeLabel[1];
} FILE_FS_LABEL_INFORMATION, *PFILE_FS_LABEL_INFORMATION;
typedef struct _FILE_FS_VOLUME_INFORMATION {
    LARGE_INTEGER VolumeCreationTime;
    ULONG VolumeSerialNumber;
    ULONG VolumeLabelLength;
    BOOLEAN SupportsObjects;
    WCHAR VolumeLabel[1];
} FILE_FS_VOLUME_INFORMATION, *PFILE_FS_VOLUME_INFORMATION;
typedef struct _FILE_FS_SIZE_INFORMATION {
    LARGE_INTEGER TotalAllocationUnits;
    LARGE_INTEGER AvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_SIZE_INFORMATION, *PFILE_FS_SIZE_INFORMATION;
typedef struct _FILE_FS_FULL_SIZE_INFORMATION {
    LARGE_INTEGER TotalAllocationUnits;
    LARGE_INTEGER CallerAvailableAllocationUnits;
    LARGE_INTEGER ActualAvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_FULL_SIZE_INFORMATION, *PFILE_FS_FULL_SIZE_INFORMATION;
typedef struct _FILE_FS_OBJECTID_INFORMATION {
    UCHAR ObjectId[16];
    UCHAR ExtendedInfo[48];
} FILE_FS_OBJECTID_INFORMATION, *PFILE_FS_OBJECTID_INFORMATION;
typedef union _FILE_SEGMENT_ELEMENT {
    PVOID64 Buffer;
    ULONGLONG Alignment;
}FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;
typedef enum _BUS_DATA_TYPE {
    ConfigurationSpaceUndefined = -1,
    Cmos,
    EisaConfiguration,
    Pos,
    CbusConfiguration,
    PCIConfiguration,
    VMEConfiguration,
    NuBusConfiguration,
    PCMCIAConfiguration,
    MPIConfiguration,
    MPSAConfiguration,
    PNPISAConfiguration,
    SgiInternalConfiguration,
    MaximumBusDataType
} BUS_DATA_TYPE, *PBUS_DATA_TYPE;
typedef struct _KEY_NAME_INFORMATION {
    ULONG NameLength;
    WCHAR Name[1];
} KEY_NAME_INFORMATION, *PKEY_NAME_INFORMATION;
typedef struct _KEY_CACHED_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG TitleIndex;
    ULONG SubKeys;
    ULONG MaxNameLen;
    ULONG Values;
    ULONG MaxValueNameLen;
    ULONG MaxValueDataLen;
    ULONG NameLength;
} KEY_CACHED_INFORMATION, *PKEY_CACHED_INFORMATION;
typedef struct _KEY_FLAGS_INFORMATION {
    ULONG Wow64Flags;
    ULONG KeyFlags;
    ULONG ControlFlags;
} KEY_FLAGS_INFORMATION, *PKEY_FLAGS_INFORMATION;
typedef struct _KEY_VIRTUALIZATION_INFORMATION {
    ULONG VirtualizationCandidate : 1;
    ULONG VirtualizationEnabled : 1;
    ULONG VirtualTarget : 1;
    ULONG VirtualStore : 1;
    ULONG VirtualSource : 1;
    ULONG Reserved : 27;
} KEY_VIRTUALIZATION_INFORMATION, *PKEY_VIRTUALIZATION_INFORMATION;
typedef struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    PVOID StackBase;
    PVOID StackLimit;
    PVOID SubSystemTib;
    union {
        PVOID FiberData;
        ULONG Version;
    };
    PVOID ArbitraryUserPointer;
    struct _NT_TIB *Self;
} NT_TIB;
typedef NT_TIB *PNT_TIB;
typedef struct _NT_TIB32 {
    ULONG ExceptionList;
    ULONG StackBase;
    ULONG StackLimit;
    ULONG SubSystemTib;
    union {
        ULONG FiberData;
        ULONG Version;
    };
    ULONG ArbitraryUserPointer;
    ULONG Self;
} NT_TIB32, *PNT_TIB32;
typedef struct _NT_TIB64 {
    ULONG64 ExceptionList;
    ULONG64 StackBase;
    ULONG64 StackLimit;
    ULONG64 SubSystemTib;
    union {
        ULONG64 FiberData;
        ULONG Version;
    };
    ULONG64 ArbitraryUserPointer;
    ULONG64 Self;
} NT_TIB64, *PNT_TIB64;
typedef enum _PROCESSINFOCLASS {
    ProcessBasicInformation,
    ProcessQuotaLimits,
    ProcessIoCounters,
    ProcessVmCounters,
    ProcessTimes,
    ProcessBasePriority,
    ProcessRaisePriority,
    ProcessDebugPort,
    ProcessExceptionPort,
    ProcessAccessToken,
    ProcessLdtInformation,
    ProcessLdtSize,
    ProcessDefaultHardErrorMode,
    ProcessIoPortHandlers,
    ProcessPooledUsageAndLimits,
    ProcessWorkingSetWatch,
    ProcessUserModeIOPL,
    ProcessEnableAlignmentFaultFixup,
    ProcessPriorityClass,
    ProcessWx86Information,
    ProcessHandleCount,
    ProcessAffinityMask,
    ProcessPriorityBoost,
    ProcessDeviceMap,
    ProcessSessionInformation,
    ProcessForegroundInformation,
    ProcessWow64Information,
    ProcessImageFileName,
    ProcessLUIDDeviceMapsEnabled,
    ProcessBreakOnTermination,
    ProcessDebugObjectHandle,
    ProcessDebugFlags,
    ProcessHandleTracing,
    ProcessIoPriority,
    ProcessExecuteFlags,
    ProcessTlsInformation,
    ProcessCookie,
    ProcessImageInformation,
    ProcessCycleTime,
    ProcessPagePriority,
    ProcessInstrumentationCallback,
    ProcessThreadStackAllocation,
    ProcessWorkingSetWatchEx,
    ProcessImageFileNameWin32,
    ProcessImageFileMapping,
    ProcessAffinityUpdateMode,
    ProcessMemoryAllocationMode,
    MaxProcessInfoClass
} PROCESSINFOCLASS;
typedef enum _THREADINFOCLASS {
    ThreadBasicInformation,
    ThreadTimes,
    ThreadPriority,
    ThreadBasePriority,
    ThreadAffinityMask,
    ThreadImpersonationToken,
    ThreadDescriptorTableEntry,
    ThreadEnableAlignmentFaultFixup,
    ThreadEventPair_Reusable,
    ThreadQuerySetWin32StartAddress,
    ThreadZeroTlsCell,
    ThreadPerformanceCount,
    ThreadAmILastThread,
    ThreadIdealProcessor,
    ThreadPriorityBoost,
    ThreadSetTlsArrayAddress,
    ThreadIsIoPending,
    ThreadHideFromDebugger,
    ThreadBreakOnTermination,
    ThreadSwitchLegacyState,
    ThreadIsTerminated,
    ThreadLastSystemCall,
    ThreadIoPriority,
    ThreadCycleTime,
    ThreadPagePriority,
    ThreadActualBasePriority,
    ThreadTebInformation,
    ThreadCSwitchMon,
    ThreadCSwitchPmu,
    MaxThreadInfoClass
} THREADINFOCLASS;
typedef struct _PAGE_PRIORITY_INFORMATION {
    ULONG PagePriority;
} PAGE_PRIORITY_INFORMATION, *PPAGE_PRIORITY_INFORMATION;
typedef struct _PROCESS_WS_WATCH_INFORMATION {
    PVOID FaultingPc;
    PVOID FaultingVa;
} PROCESS_WS_WATCH_INFORMATION, *PPROCESS_WS_WATCH_INFORMATION;
typedef struct _PROCESS_BASIC_INFORMATION {
    NTSTATUS ExitStatus;
    PPEB PebBaseAddress;
    ULONG_PTR AffinityMask;
    KPRIORITY BasePriority;
    ULONG_PTR UniqueProcessId;
    ULONG_PTR InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION,*PPROCESS_BASIC_INFORMATION;
typedef struct _PROCESS_EXTENDED_BASIC_INFORMATION {
    SIZE_T Size;
    PROCESS_BASIC_INFORMATION BasicInfo;
    union {
        ULONG Flags;
        struct {
            ULONG IsProtectedProcess : 1;
            ULONG IsWow64Process : 1;
            ULONG IsProcessDeleting : 1;
            ULONG IsCrossSessionCreate : 1;
            ULONG SpareBits : 28;
        } ;
    } ;
} PROCESS_EXTENDED_BASIC_INFORMATION, *PPROCESS_EXTENDED_BASIC_INFORMATION;
typedef struct _PROCESS_DEVICEMAP_INFORMATION {
    union {
        struct {
            HANDLE DirectoryHandle;
        } Set;
        struct {
            ULONG DriveMap;
            UCHAR DriveType[ 32 ];
        } Query;
    } ;
} PROCESS_DEVICEMAP_INFORMATION, *PPROCESS_DEVICEMAP_INFORMATION;
typedef struct _PROCESS_DEVICEMAP_INFORMATION_EX {
    union {
        struct {
            HANDLE DirectoryHandle;
        } Set;
        struct {
            ULONG DriveMap;
            UCHAR DriveType[ 32 ];
        } Query;
    } ;
    ULONG Flags;
} PROCESS_DEVICEMAP_INFORMATION_EX, *PPROCESS_DEVICEMAP_INFORMATION_EX;
typedef struct _PROCESS_SESSION_INFORMATION {
    ULONG SessionId;
} PROCESS_SESSION_INFORMATION, *PPROCESS_SESSION_INFORMATION;
typedef struct _PROCESS_HANDLE_TRACING_ENABLE {
    ULONG Flags;
} PROCESS_HANDLE_TRACING_ENABLE, *PPROCESS_HANDLE_TRACING_ENABLE;
typedef struct _PROCESS_HANDLE_TRACING_ENABLE_EX {
    ULONG Flags;
    ULONG TotalSlots;
} PROCESS_HANDLE_TRACING_ENABLE_EX, *PPROCESS_HANDLE_TRACING_ENABLE_EX;
typedef struct _PROCESS_HANDLE_TRACING_ENTRY {
    HANDLE Handle;
    CLIENT_ID ClientId;
    ULONG Type;
    PVOID Stacks[16];
} PROCESS_HANDLE_TRACING_ENTRY, *PPROCESS_HANDLE_TRACING_ENTRY;
typedef struct _PROCESS_HANDLE_TRACING_QUERY {
    HANDLE Handle;
    ULONG TotalTraces;
    PROCESS_HANDLE_TRACING_ENTRY HandleTrace[1];
} PROCESS_HANDLE_TRACING_QUERY, *PPROCESS_HANDLE_TRACING_QUERY;
typedef struct _QUOTA_LIMITS {
    SIZE_T PagedPoolLimit;
    SIZE_T NonPagedPoolLimit;
    SIZE_T MinimumWorkingSetSize;
    SIZE_T MaximumWorkingSetSize;
    SIZE_T PagefileLimit;
    LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS, *PQUOTA_LIMITS;
typedef union _RATE_QUOTA_LIMIT {
    ULONG RateData;
    struct {
        ULONG RatePercent : 7;
        ULONG Reserved0 : 25;
    } ;
} RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT;
typedef struct _QUOTA_LIMITS_EX {
    SIZE_T PagedPoolLimit;
    SIZE_T NonPagedPoolLimit;
    SIZE_T MinimumWorkingSetSize;
    SIZE_T MaximumWorkingSetSize;
    SIZE_T PagefileLimit;
    LARGE_INTEGER TimeLimit;
    SIZE_T WorkingSetLimit;
    SIZE_T Reserved2;
    SIZE_T Reserved3;
    SIZE_T Reserved4;
    ULONG Flags;
    RATE_QUOTA_LIMIT CpuRateLimit;
} QUOTA_LIMITS_EX, *PQUOTA_LIMITS_EX;
typedef struct _IO_COUNTERS {
    ULONGLONG ReadOperationCount;
    ULONGLONG WriteOperationCount;
    ULONGLONG OtherOperationCount;
    ULONGLONG ReadTransferCount;
    ULONGLONG WriteTransferCount;
    ULONGLONG OtherTransferCount;
} IO_COUNTERS;
typedef IO_COUNTERS *PIO_COUNTERS;
typedef struct _VM_COUNTERS {
    SIZE_T PeakVirtualSize;
    SIZE_T VirtualSize;
    ULONG PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
} VM_COUNTERS;
typedef VM_COUNTERS *PVM_COUNTERS;
typedef struct _VM_COUNTERS_EX {
    SIZE_T PeakVirtualSize;
    SIZE_T VirtualSize;
    ULONG PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
    SIZE_T PrivateUsage;
} VM_COUNTERS_EX;
typedef VM_COUNTERS_EX *PVM_COUNTERS_EX;
typedef struct _POOLED_USAGE_AND_LIMITS {
    SIZE_T PeakPagedPoolUsage;
    SIZE_T PagedPoolUsage;
    SIZE_T PagedPoolLimit;
    SIZE_T PeakNonPagedPoolUsage;
    SIZE_T NonPagedPoolUsage;
    SIZE_T NonPagedPoolLimit;
    SIZE_T PeakPagefileUsage;
    SIZE_T PagefileUsage;
    SIZE_T PagefileLimit;
} POOLED_USAGE_AND_LIMITS;
typedef POOLED_USAGE_AND_LIMITS *PPOOLED_USAGE_AND_LIMITS;
typedef struct _PROCESS_ACCESS_TOKEN {
    HANDLE Token;
    HANDLE Thread;
} PROCESS_ACCESS_TOKEN, *PPROCESS_ACCESS_TOKEN;
typedef struct _PROCESS_EXCEPTION_PORT {
     HANDLE ExceptionPortHandle;
      ULONG StateFlags;
} PROCESS_EXCEPTION_PORT, *PPROCESS_EXCEPTION_PORT;
typedef struct _KERNEL_USER_TIMES {
    LARGE_INTEGER CreateTime;
    LARGE_INTEGER ExitTime;
    LARGE_INTEGER KernelTime;
    LARGE_INTEGER UserTime;
} KERNEL_USER_TIMES;
typedef KERNEL_USER_TIMES *PKERNEL_USER_TIMES;
 __declspec(dllimport)
NTSTATUS
__stdcall
NtOpenProcess (
     PHANDLE ProcessHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
     PCLIENT_ID ClientId
    );
 __declspec(dllimport)
NTSTATUS
__stdcall
NtQueryInformationProcess (
     HANDLE ProcessHandle,
     PROCESSINFOCLASS ProcessInformationClass,
     PVOID ProcessInformation,
     ULONG ProcessInformationLength,
     PULONG ReturnLength
    );
__declspec(dllimport)
KIRQL
KeRaiseIrqlToDpcLevel (
    void
    );
__declspec(dllimport)
KIRQL
KeRaiseIrqlToSynchLevel (
    void
    );
typedef struct _KPCR {
    union {
        NT_TIB NtTib;
        struct {
            struct _EXCEPTION_REGISTRATION_RECORD *Used_ExceptionList;
            PVOID Used_StackBase;
            PVOID Spare2;
            PVOID TssCopy;
            ULONG ContextSwitches;
            KAFFINITY SetMemberCopy;
            PVOID Used_Self;
        };
    };
    struct _KPCR *SelfPcr;
    struct _KPRCB *Prcb;
    KIRQL Irql;
    ULONG IRR;
    ULONG IrrActive;
    ULONG IDR;
    PVOID KdVersionBlock;
    struct _KIDTENTRY *IDT;
    struct _KGDTENTRY *GDT;
    struct _KTSS *TSS;
    USHORT MajorVersion;
    USHORT MinorVersion;
    KAFFINITY SetMember;
    ULONG StallScaleFactor;
    UCHAR SpareUnused;
    UCHAR Number;
    UCHAR Spare0;
    UCHAR SecondLevelCacheAssociativity;
    ULONG VdmAlert;
    ULONG KernelReserved[14];
    ULONG SecondLevelCacheSize;
    ULONG HalReserved[16];
} KPCR, *PKPCR;
extern __declspec(dllimport) PVOID MmHighestUserAddress;
extern __declspec(dllimport) PVOID MmSystemRangeStart;
extern __declspec(dllimport) ULONG MmUserProbeAddress;
typedef enum _INTERLOCKED_RESULT {
    ResultNegative = ((0x8000 & ~0x4000) & (0x8000 | 0x4000)),
    ResultZero = ((~0x8000 & 0x4000) & (0x8000 | 0x4000)),
    ResultPositive = ((~0x8000 & ~0x4000) & (0x8000 | 0x4000))
} INTERLOCKED_RESULT;
__declspec(dllimport)
INTERLOCKED_RESULT
__fastcall
Exfi386InterlockedIncrementLong (
     LONG volatile *Addend
    );
__declspec(dllimport)
INTERLOCKED_RESULT
__fastcall
Exfi386InterlockedDecrementLong (
     LONG volatile *Addend
    );
__declspec(dllimport)
ULONG
__fastcall
Exfi386InterlockedExchangeUlong (
     ULONG volatile *Target,
     ULONG Value
    );
LONG
_InterlockedOr (
      LONG volatile *Target,
     LONG Set
    );
#pragma intrinsic(_InterlockedOr)
LONG
_InterlockedAnd (
      LONG volatile *Target,
     LONG Set
    );
#pragma intrinsic(_InterlockedAnd)
LONG
_InterlockedXor (
      LONG volatile *Target,
     LONG Set
    );
#pragma intrinsic(_InterlockedXor)
__forceinline
LONGLONG
_InterlockedAnd64 (
      LONGLONG volatile *Destination,
     LONGLONG Value
    )
{
    LONGLONG Old;
    do {
        Old = *Destination;
    } while (_InterlockedCompareExchange64(Destination,
                                          Old & Value,
                                          Old) != Old);
    return Old;
}
LONGLONG
__forceinline
_InterlockedOr64 (
      LONGLONG volatile *Destination,
     LONGLONG Value
    )
{
    LONGLONG Old;
    do {
        Old = *Destination;
    } while (_InterlockedCompareExchange64(Destination,
                                          Old | Value,
                                          Old) != Old);
    return Old;
}
__forceinline
LONGLONG
_InterlockedXor64 (
      LONGLONG volatile *Destination,
     LONGLONG Value
    )
{
    LONGLONG Old;
    do {
        Old = *Destination;
    } while (_InterlockedCompareExchange64(Destination,
                                          Old ^ Value,
                                          Old) != Old);
    return Old;
}
LONGLONG
__forceinline
_InterlockedIncrement64 (
      LONGLONG volatile *Addend
    )
{
    LONGLONG Old;
    do {
        Old = *Addend;
    } while (_InterlockedCompareExchange64(Addend,
                                          Old + 1,
                                          Old) != Old);
    return Old + 1;
}
__forceinline
LONGLONG
_InterlockedDecrement64 (
      LONGLONG volatile *Addend
    )
{
    LONGLONG Old;
    do {
        Old = *Addend;
    } while (_InterlockedCompareExchange64(Addend,
                                          Old - 1,
                                          Old) != Old);
    return Old - 1;
}
__forceinline
LONGLONG
_InterlockedExchange64 (
      LONGLONG volatile *Target,
     LONGLONG Value
    )
{
    LONGLONG Old;
    do {
        Old = *Target;
    } while (_InterlockedCompareExchange64(Target,
                                          Value,
                                          Old) != Old);
    return Old;
}
__forceinline
LONGLONG
_InterlockedExchangeAdd64 (
      LONGLONG volatile *Addend,
     LONGLONG Value
    )
{
    LONGLONG Old;
    do {
        Old = *Addend;
    } while (_InterlockedCompareExchange64(Addend,
                                          Old + Value,
                                          Old) != Old);
    return Old;
}
#pragma warning(push)
#pragma warning(disable:4035)
__forceinline
ULONG
__stdcall
KeGetCurrentProcessorNumber(void)
{
    return (ULONG) __readfsbyte (((LONG)(LONG_PTR)&(((KPCR *)0)->Number)));
}
#pragma warning(pop)
typedef enum _SYSTEM_FIRMWARE_TABLE_ACTION {
    SystemFirmwareTable_Enumerate,
    SystemFirmwareTable_Get
} SYSTEM_FIRMWARE_TABLE_ACTION;
typedef struct _SYSTEM_FIRMWARE_TABLE_INFORMATION {
    ULONG ProviderSignature;
    SYSTEM_FIRMWARE_TABLE_ACTION Action;
    ULONG TableID;
    ULONG TableBufferLength;
    UCHAR TableBuffer[1];
} SYSTEM_FIRMWARE_TABLE_INFORMATION, *PSYSTEM_FIRMWARE_TABLE_INFORMATION;
typedef NTSTATUS (__cdecl *PFNFTH)(PSYSTEM_FIRMWARE_TABLE_INFORMATION);
typedef struct _SYSTEM_FIRMWARE_TABLE_HANDLER {
    ULONG ProviderSignature;
    BOOLEAN Register;
    PFNFTH FirmwareTableHandler;
    PVOID DriverObject;
} SYSTEM_FIRMWARE_TABLE_HANDLER, *PSYSTEM_FIRMWARE_TABLE_HANDLER;
typedef
void
(*PTIMER_APC_ROUTINE) (
     PVOID TimerContext,
     ULONG TimerLowValue,
     LONG TimerHighValue
    );
typedef ULONG_PTR (*PDRIVER_VERIFIER_THUNK_ROUTINE) (
     PVOID Context
    );
typedef struct _DRIVER_VERIFIER_THUNK_PAIRS {
    PDRIVER_VERIFIER_THUNK_ROUTINE PristineRoutine;
    PDRIVER_VERIFIER_THUNK_ROUTINE NewRoutine;
} DRIVER_VERIFIER_THUNK_PAIRS, *PDRIVER_VERIFIER_THUNK_PAIRS;
typedef struct _KUSER_SHARED_DATA {
    ULONG TickCountLowDeprecated;
    ULONG TickCountMultiplier;
    volatile KSYSTEM_TIME InterruptTime;
    volatile KSYSTEM_TIME SystemTime;
    volatile KSYSTEM_TIME TimeZoneBias;
    USHORT ImageNumberLow;
    USHORT ImageNumberHigh;
    WCHAR NtSystemRoot[260];
    ULONG MaxStackTraceDepth;
    ULONG CryptoExponent;
    ULONG TimeZoneId;
    ULONG LargePageMinimum;
    ULONG Reserved2[7];
    NT_PRODUCT_TYPE NtProductType;
    BOOLEAN ProductTypeIsValid;
    ULONG NtMajorVersion;
    ULONG NtMinorVersion;
    BOOLEAN ProcessorFeatures[64];
    ULONG Reserved1;
    ULONG Reserved3;
    volatile ULONG TimeSlip;
    ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
    LARGE_INTEGER SystemExpirationDate;
    ULONG SuiteMask;
    BOOLEAN KdDebuggerEnabled;
    UCHAR NXSupportPolicy;
    volatile ULONG ActiveConsoleId;
    volatile ULONG DismountCount;
    ULONG ComPlusPackage;
    ULONG LastSystemRITEventTickCount;
    ULONG NumberOfPhysicalPages;
    BOOLEAN SafeBootMode;
    union {
        ULONG SharedDataFlags;
        struct {
            ULONG DbgErrorPortPresent : 1;
            ULONG DbgElevationEnabled : 1;
            ULONG DbgVirtEnabled : 1;
            ULONG DbgInstallerDetectEnabled : 1;
            ULONG DbgSystemDllRelocated : 1;
            ULONG DbgDynProcessorEnabled : 1;
            ULONG DbgSEHValidationEnabled : 1;
            ULONG SpareBits : 25;
        } ;
    } ;
    ULONGLONG TestRetInstruction;
    ULONG SystemCall;
    ULONG SystemCallReturn;
    ULONGLONG SystemCallPad[3];
    union {
        volatile KSYSTEM_TIME TickCount;
        volatile ULONG64 TickCountQuad;
    } ;
    ULONG Cookie;
    LONGLONG ConsoleSessionForegroundProcessId;
    ULONG Wow64SharedInformation[16];
    USHORT UserModeGlobalLogger[8];
    ULONG HeapTracingPid[2];
    ULONG CritSecTracingPid[2];
    ULONG ImageFileExecutionOptions;
    ULONG LangGenerationCount;
    union {
        ULONGLONG AffinityPad;
        KAFFINITY ActiveProcessorAffinity;
    } ;
    volatile ULONG64 InterruptTimeBias;
} KUSER_SHARED_DATA, *PKUSER_SHARED_DATA;
typedef char __C_ASSERT__[(sizeof(KUSER_SHARED_DATA) == 0x3B8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TickCountLowDeprecated)) == 0x0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TickCountMultiplier)) == 0x4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->InterruptTime)) == 0x08)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SystemTime)) == 0x014)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TimeZoneBias)) == 0x020)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ImageNumberLow)) == 0x02c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ImageNumberHigh)) == 0x02e)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NtSystemRoot)) == 0x030)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->MaxStackTraceDepth)) == 0x238)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->CryptoExponent)) == 0x23c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TimeZoneId)) == 0x240)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->LargePageMinimum)) == 0x244)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Reserved2)) == 0x248)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NtProductType)) == 0x264)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ProductTypeIsValid)) == 0x268)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NtMajorVersion)) == 0x26c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NtMinorVersion)) == 0x270)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ProcessorFeatures)) == 0x274)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Reserved1)) == 0x2b4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Reserved3)) == 0x2b8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TimeSlip)) == 0x2bc)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->AlternativeArchitecture)) == 0x2c0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SystemExpirationDate)) == 0x2c8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SuiteMask)) == 0x2d0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->KdDebuggerEnabled)) == 0x2d4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NXSupportPolicy)) == 0x2d5)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ActiveConsoleId)) == 0x2d8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->DismountCount)) == 0x2dc)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ComPlusPackage)) == 0x2e0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->LastSystemRITEventTickCount)) == 0x2e4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NumberOfPhysicalPages)) == 0x2e8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SafeBootMode)) == 0x2ec)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SharedDataFlags)) == 0x2f0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TestRetInstruction)) == 0x2f8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SystemCall)) == 0x300)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SystemCallReturn)) == 0x304)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SystemCallPad)) == 0x308)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TickCount)) == 0x320)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TickCountQuad)) == 0x320)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Cookie)) == 0x330)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ConsoleSessionForegroundProcessId)) == 0x338)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Wow64SharedInformation)) == 0x340)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->UserModeGlobalLogger)) == 0x380)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->HeapTracingPid)) == 0x390)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->CritSecTracingPid)) == 0x398)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ImageFileExecutionOptions)) == 0x3a0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->LangGenerationCount)) == 0x3a4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->InterruptTimeBias)) == 0x3b0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->UserModeGlobalLogger)) == 0x380)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->HeapTracingPid)) == 0x390)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->CritSecTracingPid)) == 0x398)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ImageFileExecutionOptions)) == 0x3a0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->LangGenerationCount)) == 0x3a4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->AffinityPad)) == 0x3a8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ActiveProcessorAffinity)) == 0x3a8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->InterruptTimeBias)) == 0x3b0)?1:-1];
typedef struct _CM_PCCARD_DEVICE_DATA {
    UCHAR Flags;
    UCHAR ErrorCode;
    USHORT Reserved;
    ULONG BusData;
    ULONG DeviceId;
    ULONG LegacyBaseAddress;
    UCHAR IRQMap[16];
} CM_PCCARD_DEVICE_DATA, *PCM_PCCARD_DEVICE_DATA;
typedef enum _CONFIGURATION_TYPE {
    ArcSystem,
    CentralProcessor,
    FloatingPointProcessor,
    PrimaryIcache,
    PrimaryDcache,
    SecondaryIcache,
    SecondaryDcache,
    SecondaryCache,
    EisaAdapter,
    TcAdapter,
    ScsiAdapter,
    DtiAdapter,
    MultiFunctionAdapter,
    DiskController,
    TapeController,
    CdromController,
    WormController,
    SerialController,
    NetworkController,
    DisplayController,
    ParallelController,
    PointerController,
    KeyboardController,
    AudioController,
    OtherController,
    DiskPeripheral,
    FloppyDiskPeripheral,
    TapePeripheral,
    ModemPeripheral,
    MonitorPeripheral,
    PrinterPeripheral,
    PointerPeripheral,
    KeyboardPeripheral,
    TerminalPeripheral,
    OtherPeripheral,
    LinePeripheral,
    NetworkPeripheral,
    SystemMemory,
    DockingInformation,
    RealModeIrqRoutingTable,
    RealModePCIEnumeration,
    MaximumType
} CONFIGURATION_TYPE, *PCONFIGURATION_TYPE;
__declspec(dllimport)
void
KeSetImportanceDpc (
     PRKDPC Dpc,
     KDPC_IMPORTANCE Importance
    );
__declspec(dllimport)
void
KeSetTargetProcessorDpc (
     PRKDPC Dpc,
     CCHAR Number
    );
__declspec(dllimport)
LONG
KePulseEvent (
     PRKEVENT Event,
     KPRIORITY Increment,
     BOOLEAN Wait
    );
typedef
void
(__stdcall *PEXPAND_STACK_CALLOUT) (
     PVOID Parameter
    );
__declspec(dllimport)
LONG
KeSetBasePriorityThread (
     PKTHREAD Thread,
     LONG Increment
    );
__declspec(dllimport)
void
KeEnterCriticalRegion (
    void
    );
__declspec(dllimport)
void
KeLeaveCriticalRegion (
    void
    );
__declspec(dllimport)
BOOLEAN
KeAreApcsDisabled (
    void
    );
__declspec(dllimport)
__declspec(noreturn)
void
__stdcall
KeBugCheck (
     ULONG BugCheckCode
    );
__declspec(dllimport)
void
__fastcall
KeInvalidateRangeAllCaches (
     PVOID BaseAddress,
     ULONG Length
    );
__declspec(dllimport)
KAFFINITY
KeQueryActiveProcessors (
    void
    );
__declspec(dllimport)
__declspec(noreturn)
void
ExRaiseDatatypeMisalignment (
    void
    );
__declspec(dllimport)
__declspec(noreturn)
void
ExRaiseAccessViolation (
    void
    );
typedef struct _ZONE_SEGMENT_HEADER {
    SINGLE_LIST_ENTRY SegmentList;
    PVOID Reserved;
} ZONE_SEGMENT_HEADER, *PZONE_SEGMENT_HEADER;
typedef struct _ZONE_HEADER {
    SINGLE_LIST_ENTRY FreeList;
    SINGLE_LIST_ENTRY SegmentList;
    ULONG BlockSize;
    ULONG TotalSegmentSize;
} ZONE_HEADER, *PZONE_HEADER;
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
ExInitializeZone(
     PZONE_HEADER Zone,
     ULONG BlockSize,
     PVOID InitialSegment,
     ULONG InitialSegmentSize
    );
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
ExExtendZone(
     PZONE_HEADER Zone,
     PVOID Segment,
     ULONG SegmentSize
    );
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
ExInterlockedExtendZone(
     PZONE_HEADER Zone,
     PVOID Segment,
     ULONG SegmentSize,
     PKSPIN_LOCK Lock
    );
#pragma deprecated(ExAllocateFromZone)
#pragma deprecated(ExFreeToZone)
#pragma deprecated(ExIsFullZone)
#pragma deprecated(ExInterlockedAllocateFromZone)
#pragma deprecated(ExInterlockedFreeToZone)
#pragma deprecated(ExIsObjectInFirstZoneSegment)
#pragma deprecated(ExInitializeResource)
#pragma deprecated(ExAcquireResourceShared)
#pragma deprecated(ExAcquireResourceExclusive)
#pragma deprecated(ExReleaseResourceForThread)
#pragma deprecated(ExConvertExclusiveToShared)
#pragma deprecated(ExDeleteResource)
#pragma deprecated(ExIsResourceAcquiredExclusive)
#pragma deprecated(ExIsResourceAcquiredShared)
#pragma deprecated(ExIsResourceAcquired)
typedef GUID UUID;
__declspec(dllimport)
NTSTATUS
ExUuidCreate(
     UUID *Uuid
    );
__declspec(dllimport)
BOOLEAN
MmIsThisAnNtAsSystem (
    void
    );
__declspec(dllimport)
NTSTATUS
MmMapUserAddressesToPage (
     PVOID BaseAddress,
     SIZE_T NumberOfBytes,
     PVOID PageAddress
    );
typedef struct _PHYSICAL_MEMORY_RANGE {
    PHYSICAL_ADDRESS BaseAddress;
    LARGE_INTEGER NumberOfBytes;
} PHYSICAL_MEMORY_RANGE, *PPHYSICAL_MEMORY_RANGE;
__declspec(dllimport)
NTSTATUS
MmAddPhysicalMemory (
     PPHYSICAL_ADDRESS StartAddress,
     PLARGE_INTEGER NumberOfBytes
    );
typedef NTSTATUS (*PMM_ROTATE_COPY_CALLBACK_FUNCTION) (
     PMDL DestinationMdl,
     PMDL SourceMdl,
     PVOID Context
    );
typedef enum _MM_ROTATE_DIRECTION {
    MmToFrameBuffer,
    MmToFrameBufferNoCopy,
    MmToRegularMemory,
    MmToRegularMemoryNoCopy,
    MmMaximumRotateDirection
} MM_ROTATE_DIRECTION, *PMM_ROTATE_DIRECTION;
__declspec(dllimport)
NTSTATUS
MmRemovePhysicalMemory (
     PPHYSICAL_ADDRESS StartAddress,
     PLARGE_INTEGER NumberOfBytes
    );
__declspec(dllimport)
PPHYSICAL_MEMORY_RANGE
MmGetPhysicalMemoryRanges (
    void
    );
__declspec(dllimport)
 PVOID
MmMapVideoDisplay (
     PHYSICAL_ADDRESS PhysicalAddress,
     SIZE_T NumberOfBytes,
     MEMORY_CACHING_TYPE CacheType
     );
__declspec(dllimport)
void
MmUnmapVideoDisplay (
      PVOID BaseAddress,
      SIZE_T NumberOfBytes
     );
__declspec(dllimport)
PHYSICAL_ADDRESS
MmGetPhysicalAddress (
     PVOID BaseAddress
    );
__declspec(dllimport)
PVOID
MmGetVirtualForPhysical (
     PHYSICAL_ADDRESS PhysicalAddress
    );
__declspec(dllimport)
 PVOID
MmAllocateContiguousMemory (
     SIZE_T NumberOfBytes,
     PHYSICAL_ADDRESS HighestAcceptableAddress
    );
__declspec(dllimport)
 PVOID
MmAllocateContiguousMemorySpecifyCache (
     SIZE_T NumberOfBytes,
     PHYSICAL_ADDRESS LowestAcceptableAddress,
     PHYSICAL_ADDRESS HighestAcceptableAddress,
     PHYSICAL_ADDRESS BoundaryAddressMultiple,
     MEMORY_CACHING_TYPE CacheType
    );
typedef ULONG NODE_REQUIREMENT;
__declspec(dllimport)
 PVOID
MmAllocateContiguousMemorySpecifyCacheNode (
     SIZE_T NumberOfBytes,
     PHYSICAL_ADDRESS LowestAcceptableAddress,
     PHYSICAL_ADDRESS HighestAcceptableAddress,
     PHYSICAL_ADDRESS BoundaryAddressMultiple,
     MEMORY_CACHING_TYPE CacheType,
     NODE_REQUIREMENT PreferredNode
    );
__declspec(dllimport)
void
MmFreeContiguousMemory (
     PVOID BaseAddress
    );
__declspec(dllimport)
void
MmFreeContiguousMemorySpecifyCache (
     PVOID BaseAddress,
     SIZE_T NumberOfBytes,
     MEMORY_CACHING_TYPE CacheType
    );
__declspec(dllimport)
 PVOID
MmAllocateNonCachedMemory (
     SIZE_T NumberOfBytes
    );
__declspec(dllimport)
void
MmFreeNonCachedMemory (
     PVOID BaseAddress,
     SIZE_T NumberOfBytes
    );
__declspec(dllimport)
BOOLEAN
MmIsAddressValid (
     PVOID VirtualAddress
    );
__declspec(deprecated)
__declspec(dllimport)
BOOLEAN
MmIsNonPagedSystemAddressValid (
     PVOID VirtualAddress
    );
__declspec(dllimport)
void
MmLockPagableSectionByHandle (
     PVOID ImageSectionHandle
    );
__declspec(dllimport)
HANDLE
MmSecureVirtualMemory (
       PVOID Address,
       SIZE_T Size,
     ULONG ProbeMode
    );
__declspec(dllimport)
void
MmUnsecureVirtualMemory (
     HANDLE SecureHandle
    );
__declspec(dllimport)
NTSTATUS
MmMapViewInSystemSpace (
     PVOID Section,
     PVOID *MappedBase,
     PSIZE_T ViewSize
    );
__declspec(dllimport)
NTSTATUS
MmUnmapViewInSystemSpace (
     PVOID MappedBase
    );
__declspec(dllimport)
NTSTATUS
MmMapViewInSessionSpace (
     PVOID Section,
     PVOID *MappedBase,
     PSIZE_T ViewSize
    );
__declspec(dllimport)
NTSTATUS
MmUnmapViewInSessionSpace (
     PVOID MappedBase
    );
__declspec(dllimport)
BOOLEAN
SeSinglePrivilegeCheck(
     LUID PrivilegeValue,
     KPROCESSOR_MODE PreviousMode
    );
extern __declspec(dllimport) PEPROCESS PsInitialSystemProcess;
typedef
void
(*PCREATE_PROCESS_NOTIFY_ROUTINE)(
     HANDLE ParentId,
     HANDLE ProcessId,
     BOOLEAN Create
    );
__declspec(dllimport)
NTSTATUS
PsSetCreateProcessNotifyRoutine(
     PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine,
     BOOLEAN Remove
    );
typedef struct _PS_CREATE_NOTIFY_INFO {
     SIZE_T Size;
    union {
         ULONG Flags;
        struct {
             ULONG FileOpenNameAvailable : 1;
             ULONG Reserved : 31;
        };
    };
     HANDLE ParentProcessId;
     CLIENT_ID CreatingThreadId;
     struct _FILE_OBJECT *FileObject;
     PCUNICODE_STRING ImageFileName;
     PCUNICODE_STRING CommandLine;
     NTSTATUS CreationStatus;
} PS_CREATE_NOTIFY_INFO, *PPS_CREATE_NOTIFY_INFO;
typedef
void
(*PCREATE_PROCESS_NOTIFY_ROUTINE_EX) (
     PEPROCESS Process,
     HANDLE ProcessId,
     PPS_CREATE_NOTIFY_INFO CreateInfo
    );
typedef
void
(*PCREATE_THREAD_NOTIFY_ROUTINE)(
     HANDLE ProcessId,
     HANDLE ThreadId,
     BOOLEAN Create
    );
__declspec(dllimport)
NTSTATUS
PsSetCreateThreadNotifyRoutine(
     PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine
    );
__declspec(dllimport)
NTSTATUS
PsRemoveCreateThreadNotifyRoutine (
     PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine
    );
typedef struct _IMAGE_INFO {
    union {
        ULONG Properties;
        struct {
            ULONG ImageAddressingMode : 8;
            ULONG SystemModeImage : 1;
            ULONG ImageMappedToAllPids : 1;
            ULONG ExtendedInfoPresent : 1;
            ULONG Reserved : 21;
        };
    };
    PVOID ImageBase;
    ULONG ImageSelector;
    SIZE_T ImageSize;
    ULONG ImageSectionNumber;
} IMAGE_INFO, *PIMAGE_INFO;
typedef struct _IMAGE_INFO_EX {
    SIZE_T Size;
    IMAGE_INFO ImageInfo;
    struct _FILE_OBJECT *FileObject;
} IMAGE_INFO_EX, *PIMAGE_INFO_EX;
typedef
void
(*PLOAD_IMAGE_NOTIFY_ROUTINE)(
     PUNICODE_STRING FullImageName,
     HANDLE ProcessId,
     PIMAGE_INFO ImageInfo
    );
__declspec(dllimport)
NTSTATUS
PsSetLoadImageNotifyRoutine(
     PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine
    );
__declspec(dllimport)
NTSTATUS
PsRemoveLoadImageNotifyRoutine(
     PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine
    );
__declspec(dllimport)
HANDLE
PsGetCurrentProcessId(
    void
    );
__declspec(dllimport)
HANDLE
PsGetCurrentThreadId(
    void
    );
__declspec(dllimport)
BOOLEAN
PsGetVersion(
     PULONG MajorVersion,
     PULONG MinorVersion,
     PULONG BuildNumber,
     PUNICODE_STRING CSDVersion
    );
__declspec(dllimport)
LONGLONG
PsGetProcessCreateTimeQuadPart(
     PEPROCESS Process
    );
__declspec(dllimport)
HANDLE
PsGetProcessId(
     PEPROCESS Process
    );
__declspec(dllimport)
HANDLE
PsGetThreadId(
     PETHREAD Thread
     );
typedef NTSTATUS (*PIO_QUERY_DEVICE_ROUTINE)(
     PVOID Context,
     PUNICODE_STRING PathName,
     INTERFACE_TYPE BusType,
     ULONG BusNumber,
     PKEY_VALUE_FULL_INFORMATION *BusInformation,
     CONFIGURATION_TYPE ControllerType,
     ULONG ControllerNumber,
     PKEY_VALUE_FULL_INFORMATION *ControllerInformation,
     CONFIGURATION_TYPE PeripheralType,
     ULONG PeripheralNumber,
     PKEY_VALUE_FULL_INFORMATION *PeripheralInformation
    );
typedef enum _IO_QUERY_DEVICE_DATA_FORMAT {
    IoQueryDeviceIdentifier = 0,
    IoQueryDeviceConfigurationData,
    IoQueryDeviceComponentInformation,
    IoQueryDeviceMaxData
} IO_QUERY_DEVICE_DATA_FORMAT, *PIO_QUERY_DEVICE_DATA_FORMAT;
typedef
void
DRIVER_REINITIALIZE (
     struct _DRIVER_OBJECT *DriverObject,
     PVOID Context,
     ULONG Count
    );
typedef DRIVER_REINITIALIZE *PDRIVER_REINITIALIZE;
typedef struct _CONTROLLER_OBJECT {
    CSHORT Type;
    CSHORT Size;
    PVOID ControllerExtension;
    KDEVICE_QUEUE DeviceWaitQueue;
    ULONG Spare1;
    LARGE_INTEGER Spare2;
} CONTROLLER_OBJECT, *PCONTROLLER_OBJECT;
typedef struct _CONFIGURATION_INFORMATION {
    ULONG DiskCount;
    ULONG FloppyCount;
    ULONG CdRomCount;
    ULONG TapeCount;
    ULONG ScsiPortCount;
    ULONG SerialCount;
    ULONG ParallelCount;
    BOOLEAN AtDiskPrimaryAddressClaimed;
    BOOLEAN AtDiskSecondaryAddressClaimed;
    ULONG Version;
    ULONG MediumChangerCount;
} CONFIGURATION_INFORMATION, *PCONFIGURATION_INFORMATION;
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
IoAllocateAdapterChannel(
     PADAPTER_OBJECT AdapterObject,
     PDEVICE_OBJECT DeviceObject,
     ULONG NumberOfMapRegisters,
     PDRIVER_CONTROL ExecutionRoutine,
     PVOID Context
    );
__declspec(dllimport)
void
IoAllocateController(
     PCONTROLLER_OBJECT ControllerObject,
     PDEVICE_OBJECT DeviceObject,
     PDRIVER_CONTROL ExecutionRoutine,
     PVOID Context
    );
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
IoAssignResources (
     PUNICODE_STRING RegistryPath,
     PUNICODE_STRING DriverClassName,
     PDRIVER_OBJECT DriverObject,
     PDEVICE_OBJECT DeviceObject,
     PIO_RESOURCE_REQUIREMENTS_LIST RequestedResources,
     PCM_RESOURCE_LIST *AllocatedResources
    );
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
IoAttachDeviceByPointer(
     PDEVICE_OBJECT SourceDevice,
     PDEVICE_OBJECT TargetDevice
    );
__declspec(dllimport)
PCONTROLLER_OBJECT
IoCreateController(
     ULONG Size
    );
__declspec(dllimport)
void
IoDeleteController(
     PCONTROLLER_OBJECT ControllerObject
    );
__declspec(dllimport)
void
IoFreeController(
     PCONTROLLER_OBJECT ControllerObject
    );
__declspec(dllimport)
PCONFIGURATION_INFORMATION
IoGetConfigurationInformation( void );
__declspec(dllimport)
PDEVICE_OBJECT
IoGetDeviceToVerify(
     PETHREAD Thread
    );
__declspec(dllimport)
PGENERIC_MAPPING
IoGetFileObjectGenericMapping(
    void
    );
__declspec(dllimport)
void
IoCancelFileOpen(
     PDEVICE_OBJECT DeviceObject,
     PFILE_OBJECT FileObject
    );
__declspec(dllimport)
PIRP
IoMakeAssociatedIrp(
     PIRP Irp,
     CCHAR StackSize
    );
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
IoQueryDeviceDescription(
     PINTERFACE_TYPE BusType,
     PULONG BusNumber,
     PCONFIGURATION_TYPE ControllerType,
     PULONG ControllerNumber,
     PCONFIGURATION_TYPE PeripheralType,
     PULONG PeripheralNumber,
     PIO_QUERY_DEVICE_ROUTINE CalloutRoutine,
     PVOID Context
    );
__declspec(dllimport)
void
IoRaiseHardError(
     PIRP Irp,
     PVPB Vpb,
     PDEVICE_OBJECT RealDeviceObject
    );
__declspec(dllimport)
BOOLEAN
IoRaiseInformationalHardError(
     NTSTATUS ErrorStatus,
     PUNICODE_STRING String,
     PKTHREAD Thread
    );
__declspec(dllimport)
BOOLEAN
IoSetThreadHardErrorMode(
     BOOLEAN EnableHardErrors
    );
__declspec(dllimport)
void
IoRegisterBootDriverReinitialization(
     PDRIVER_OBJECT DriverObject,
     PDRIVER_REINITIALIZE DriverReinitializationRoutine,
     PVOID Context
    );
__declspec(dllimport)
void
IoRegisterDriverReinitialization(
     PDRIVER_OBJECT DriverObject,
     PDRIVER_REINITIALIZE DriverReinitializationRoutine,
     PVOID Context
    );
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
IoReportResourceUsage(
     PUNICODE_STRING DriverClassName,
      PDRIVER_OBJECT DriverObject,
     PCM_RESOURCE_LIST DriverList,
     ULONG DriverListSize,
      PDEVICE_OBJECT DeviceObject,
     PCM_RESOURCE_LIST DeviceList,
     ULONG DeviceListSize,
      BOOLEAN OverrideConflict,
     PBOOLEAN ConflictDetected
    );
__declspec(dllimport)
void
IoSetHardErrorOrVerifyDevice(
     PIRP Irp,
     PDEVICE_OBJECT DeviceObject
    );
__declspec(dllimport)
void
__fastcall
HalExamineMBR(
     PDEVICE_OBJECT DeviceObject,
     ULONG SectorSize,
     ULONG MBRTypeIdentifier,
     PVOID *Buffer
    );
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
__fastcall
IoReadPartitionTable(
      PDEVICE_OBJECT DeviceObject,
      ULONG SectorSize,
      BOOLEAN ReturnRecognizedPartitions,
     struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer
    );
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
__fastcall
IoSetPartitionInformation(
     PDEVICE_OBJECT DeviceObject,
     ULONG SectorSize,
     ULONG PartitionNumber,
     ULONG PartitionType
    );
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
__fastcall
IoWritePartitionTable(
     PDEVICE_OBJECT DeviceObject,
     ULONG SectorSize,
     ULONG SectorsPerTrack,
     ULONG NumberOfHeads,
     struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer
    );
__declspec(dllimport)
NTSTATUS
IoCreateDisk(
     PDEVICE_OBJECT DeviceObject,
     struct _CREATE_DISK* Disk
    );
__declspec(dllimport)
NTSTATUS
IoReadPartitionTableEx(
     PDEVICE_OBJECT DeviceObject,
     struct _DRIVE_LAYOUT_INFORMATION_EX** DriveLayout
    );
__declspec(dllimport)
NTSTATUS
IoWritePartitionTableEx(
     PDEVICE_OBJECT DeviceObject,
     struct _DRIVE_LAYOUT_INFORMATION_EX* DriveLayout
    );
__declspec(dllimport)
NTSTATUS
IoSetPartitionInformationEx(
     PDEVICE_OBJECT DeviceObject,
     ULONG PartitionNumber,
     struct _SET_PARTITION_INFORMATION_EX* PartitionInfo
    );
__declspec(dllimport)
NTSTATUS
IoVerifyPartitionTable(
     PDEVICE_OBJECT DeviceObject,
     BOOLEAN FixErrors
    );
typedef struct _DISK_SIGNATURE {
    ULONG PartitionStyle;
    union {
        struct {
            ULONG Signature;
            ULONG CheckSum;
        } Mbr;
        struct {
            GUID DiskId;
        } Gpt;
    };
} DISK_SIGNATURE, *PDISK_SIGNATURE;
__declspec(dllimport)
NTSTATUS
IoReadDiskSignature(
      PDEVICE_OBJECT DeviceObject,
      ULONG BytesPerSector,
     PDISK_SIGNATURE Signature
    );
__declspec(dllimport)
NTSTATUS
IoVolumeDeviceToDosName(
      PVOID VolumeDeviceObject,
     PUNICODE_STRING DosName
    );
__declspec(dllimport)
NTSTATUS
IoSetSystemPartition(
     PUNICODE_STRING VolumeNameString
    );
__declspec(dllimport)
NTSTATUS
IoCreateFileSpecifyDeviceObjectHint(
     PHANDLE FileHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
     PIO_STATUS_BLOCK IoStatusBlock,
     PLARGE_INTEGER AllocationSize,
      ULONG FileAttributes,
      ULONG ShareAccess,
      ULONG Disposition,
      ULONG CreateOptions,
     PVOID EaBuffer,
      ULONG EaLength,
      CREATE_FILE_TYPE CreateFileType,
     PVOID InternalParameters,
      ULONG Options,
     PVOID DeviceObject
    );
typedef struct _TXN_PARAMETER_BLOCK {
    USHORT Length;
    USHORT TxFsContext;
    PVOID TransactionObject;
} TXN_PARAMETER_BLOCK, *PTXN_PARAMETER_BLOCK;
typedef struct _IO_DRIVER_CREATE_CONTEXT {
    CSHORT Size;
    struct _ECP_LIST *ExtraCreateParameter;
    PVOID DeviceObjectHint;
    PTXN_PARAMETER_BLOCK TxnParameters;
} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT;
void
__forceinline
IoInitializeDriverCreateContext(
    PIO_DRIVER_CREATE_CONTEXT DriverContext
    )
{
    memset((DriverContext),0,(sizeof(IO_DRIVER_CREATE_CONTEXT)));
    DriverContext->Size = sizeof(IO_DRIVER_CREATE_CONTEXT);
}
__declspec(dllimport)
NTSTATUS
IoAttachDeviceToDeviceStackSafe(
      PDEVICE_OBJECT SourceDevice,
      PDEVICE_OBJECT TargetDevice,
     PDEVICE_OBJECT *AttachedToDeviceObject
    );
__declspec(dllimport)
BOOLEAN
IoIsFileOriginRemote(
     PFILE_OBJECT FileObject
    );
__declspec(dllimport)
NTSTATUS
IoSetFileOrigin(
     PFILE_OBJECT FileObject,
     BOOLEAN Remote
    );
typedef struct _AGP_TARGET_BUS_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PGET_SET_DEVICE_DATA SetBusData;
    PGET_SET_DEVICE_DATA GetBusData;
    UCHAR CapabilityID;
} AGP_TARGET_BUS_INTERFACE_STANDARD, *PAGP_TARGET_BUS_INTERFACE_STANDARD;
__declspec(dllimport)
NTSTATUS
IoReportDetectedDevice(
     PDRIVER_OBJECT DriverObject,
     INTERFACE_TYPE LegacyBusType,
     ULONG BusNumber,
     ULONG SlotNumber,
     PCM_RESOURCE_LIST ResourceList,
     PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
     BOOLEAN ResourceAssigned,
     PDEVICE_OBJECT *DeviceObject
    );
typedef
NTSTATUS
(*PGET_LOCATION_STRING) (
     PVOID Context,
     PWCHAR *LocationStrings
    );
typedef struct _PNP_LOCATION_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PGET_LOCATION_STRING GetLocationString;
} PNP_LOCATION_INTERFACE, *PPNP_LOCATION_INTERFACE;
typedef enum _ARBITER_ACTION {
    ArbiterActionTestAllocation,
    ArbiterActionRetestAllocation,
    ArbiterActionCommitAllocation,
    ArbiterActionRollbackAllocation,
    ArbiterActionQueryAllocatedResources,
    ArbiterActionWriteReservedResources,
    ArbiterActionQueryConflict,
    ArbiterActionQueryArbitrate,
    ArbiterActionAddReserved,
    ArbiterActionBootAllocation
} ARBITER_ACTION, *PARBITER_ACTION;
typedef struct _ARBITER_CONFLICT_INFO {
    PDEVICE_OBJECT OwningObject;
    ULONGLONG Start;
    ULONGLONG End;
} ARBITER_CONFLICT_INFO, *PARBITER_CONFLICT_INFO;
typedef struct _ARBITER_TEST_ALLOCATION_PARAMETERS {
      PLIST_ENTRY ArbitrationList;
     ULONG AllocateFromCount;
     PCM_PARTIAL_RESOURCE_DESCRIPTOR AllocateFrom;
} ARBITER_TEST_ALLOCATION_PARAMETERS, *PARBITER_TEST_ALLOCATION_PARAMETERS;
typedef struct _ARBITER_RETEST_ALLOCATION_PARAMETERS {
      PLIST_ENTRY ArbitrationList;
     ULONG AllocateFromCount;
     PCM_PARTIAL_RESOURCE_DESCRIPTOR AllocateFrom;
} ARBITER_RETEST_ALLOCATION_PARAMETERS, *PARBITER_RETEST_ALLOCATION_PARAMETERS;
typedef struct _ARBITER_BOOT_ALLOCATION_PARAMETERS {
      PLIST_ENTRY ArbitrationList;
} ARBITER_BOOT_ALLOCATION_PARAMETERS, *PARBITER_BOOT_ALLOCATION_PARAMETERS;
typedef struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS {
     PCM_PARTIAL_RESOURCE_LIST *AllocatedResources;
} ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS, *PARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS;
typedef struct _ARBITER_QUERY_CONFLICT_PARAMETERS {
     PDEVICE_OBJECT PhysicalDeviceObject;
     PIO_RESOURCE_DESCRIPTOR ConflictingResource;
     PULONG ConflictCount;
     PARBITER_CONFLICT_INFO *Conflicts;
} ARBITER_QUERY_CONFLICT_PARAMETERS, *PARBITER_QUERY_CONFLICT_PARAMETERS;
typedef struct _ARBITER_QUERY_ARBITRATE_PARAMETERS {
     PLIST_ENTRY ArbitrationList;
} ARBITER_QUERY_ARBITRATE_PARAMETERS, *PARBITER_QUERY_ARBITRATE_PARAMETERS;
typedef struct _ARBITER_ADD_RESERVED_PARAMETERS {
     PDEVICE_OBJECT ReserveDevice;
} ARBITER_ADD_RESERVED_PARAMETERS, *PARBITER_ADD_RESERVED_PARAMETERS;
typedef struct _ARBITER_PARAMETERS {
    union {
        ARBITER_TEST_ALLOCATION_PARAMETERS TestAllocation;
        ARBITER_RETEST_ALLOCATION_PARAMETERS RetestAllocation;
        ARBITER_BOOT_ALLOCATION_PARAMETERS BootAllocation;
        ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS QueryAllocatedResources;
        ARBITER_QUERY_CONFLICT_PARAMETERS QueryConflict;
        ARBITER_QUERY_ARBITRATE_PARAMETERS QueryArbitrate;
        ARBITER_ADD_RESERVED_PARAMETERS AddReserved;
    } Parameters;
} ARBITER_PARAMETERS, *PARBITER_PARAMETERS;
typedef enum _ARBITER_REQUEST_SOURCE {
    ArbiterRequestUndefined = -1,
    ArbiterRequestLegacyReported,
    ArbiterRequestHalReported,
    ArbiterRequestLegacyAssigned,
    ArbiterRequestPnpDetected,
    ArbiterRequestPnpEnumerated
} ARBITER_REQUEST_SOURCE;
typedef enum _ARBITER_RESULT {
    ArbiterResultUndefined = -1,
    ArbiterResultSuccess,
    ArbiterResultExternalConflict,
    ArbiterResultNullRequest
} ARBITER_RESULT;
__declspec(dllimport)
NTSTATUS
IoReportResourceForDetection(
     PDRIVER_OBJECT DriverObject,
     PCM_RESOURCE_LIST DriverList,
     ULONG DriverListSize,
     PDEVICE_OBJECT DeviceObject,
     PCM_RESOURCE_LIST DeviceList,
     ULONG DeviceListSize,
     PBOOLEAN ConflictDetected
    );
typedef struct _ARBITER_LIST_ENTRY {
    LIST_ENTRY ListEntry;
    ULONG AlternativeCount;
    PIO_RESOURCE_DESCRIPTOR Alternatives;
    PDEVICE_OBJECT PhysicalDeviceObject;
    ARBITER_REQUEST_SOURCE RequestSource;
    ULONG Flags;
    LONG_PTR WorkSpace;
    INTERFACE_TYPE InterfaceType;
    ULONG SlotNumber;
    ULONG BusNumber;
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Assignment;
    PIO_RESOURCE_DESCRIPTOR SelectedAlternative;
    ARBITER_RESULT Result;
} ARBITER_LIST_ENTRY, *PARBITER_LIST_ENTRY;
typedef
NTSTATUS
(*PARBITER_HANDLER) (
     PVOID Context,
     ARBITER_ACTION Action,
     PARBITER_PARAMETERS Parameters
    );
typedef struct _ARBITER_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PARBITER_HANDLER ArbiterHandler;
    ULONG Flags;
} ARBITER_INTERFACE, *PARBITER_INTERFACE;
typedef enum _RESOURCE_TRANSLATION_DIRECTION {
    TranslateChildToParent,
    TranslateParentToChild
} RESOURCE_TRANSLATION_DIRECTION;
typedef
NTSTATUS
(*PTRANSLATE_RESOURCE_HANDLER)(
     PVOID Context,
     PCM_PARTIAL_RESOURCE_DESCRIPTOR Source,
     RESOURCE_TRANSLATION_DIRECTION Direction,
     ULONG AlternativesCount,
     IO_RESOURCE_DESCRIPTOR Alternatives[],
     PDEVICE_OBJECT PhysicalDeviceObject,
     PCM_PARTIAL_RESOURCE_DESCRIPTOR Target
);
typedef
NTSTATUS
(*PTRANSLATE_RESOURCE_REQUIREMENTS_HANDLER)(
     PVOID Context,
     PIO_RESOURCE_DESCRIPTOR Source,
     PDEVICE_OBJECT PhysicalDeviceObject,
     PULONG TargetCount,
     PIO_RESOURCE_DESCRIPTOR *Target
);
typedef struct _TRANSLATOR_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PTRANSLATE_RESOURCE_HANDLER TranslateResources;
    PTRANSLATE_RESOURCE_REQUIREMENTS_HANDLER TranslateResourceRequirements;
} TRANSLATOR_INTERFACE, *PTRANSLATOR_INTERFACE;
typedef
BOOLEAN
(*PHAL_RESET_DISPLAY_PARAMETERS) (
     ULONG Columns,
     ULONG Rows
    );
__declspec(deprecated)
__declspec(dllimport)
void
HalAcquireDisplayOwnership (
     PHAL_RESET_DISPLAY_PARAMETERS ResetDisplayParameters
    );
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
HalAssignSlotResources (
     PUNICODE_STRING RegistryPath,
     PUNICODE_STRING DriverClassName ,
     PDRIVER_OBJECT DriverObject,
     PDEVICE_OBJECT DeviceObject,
     INTERFACE_TYPE BusType,
     ULONG BusNumber,
     ULONG SlotNumber,
     PCM_RESOURCE_LIST *AllocatedResources
    );
__declspec(deprecated)
__declspec(dllimport)
ULONG
HalGetInterruptVector (
     INTERFACE_TYPE InterfaceType,
     ULONG BusNumber,
     ULONG BusInterruptLevel,
     ULONG BusInterruptVector,
     PKIRQL Irql,
     PKAFFINITY Affinity
    );
__declspec(deprecated)
__declspec(dllimport)
ULONG
HalSetBusData (
     BUS_DATA_TYPE BusDataType,
     ULONG BusNumber,
     ULONG SlotNumber,
     PVOID Buffer,
     ULONG Length
    );
__declspec(deprecated)
__declspec(dllimport)
ULONG
HalSetBusDataByOffset (
     BUS_DATA_TYPE BusDataType,
     ULONG BusNumber,
     ULONG SlotNumber,
     PVOID Buffer,
     ULONG Offset,
     ULONG Length
    );
__declspec(deprecated)
__declspec(dllimport)
BOOLEAN
HalTranslateBusAddress (
     INTERFACE_TYPE InterfaceType,
     ULONG BusNumber,
     PHYSICAL_ADDRESS BusAddress,
     PULONG AddressSpace,
     PPHYSICAL_ADDRESS TranslatedAddress
    );
__declspec(dllimport)
PVOID
HalAllocateCrashDumpRegisters (
     PADAPTER_OBJECT AdapterObject,
     PULONG NumberOfMapRegisters
    );
__declspec(deprecated)
__declspec(dllimport)
ULONG
HalGetBusData (
     BUS_DATA_TYPE BusDataType,
     ULONG BusNumber,
     ULONG SlotNumber,
     PVOID Buffer,
     ULONG Length
    );
__declspec(deprecated)
__declspec(dllimport)
ULONG
HalGetBusDataByOffset (
     BUS_DATA_TYPE BusDataType,
     ULONG BusNumber,
     ULONG SlotNumber,
     PVOID Buffer,
     ULONG Offset,
     ULONG Length
    );
__declspec(deprecated)
__declspec(dllimport)
PADAPTER_OBJECT
HalGetAdapter (
     PDEVICE_DESCRIPTION DeviceDescription,
     PULONG NumberOfMapRegisters
    );
__declspec(deprecated)
__declspec(dllimport)
BOOLEAN
HalMakeBeep(
     ULONG Frequency
    );
typedef
PBUS_HANDLER
(__fastcall *pHalHandlerForBus) (
     INTERFACE_TYPE InterfaceType,
     ULONG BusNumber
    );
typedef
void
(__fastcall *pHalReferenceBusHandler) (
     PBUS_HANDLER BusHandler
    );
typedef enum _HAL_QUERY_INFORMATION_CLASS {
    HalInstalledBusInformation,
    HalProfileSourceInformation,
    HalInformationClassUnused1,
    HalPowerInformation,
    HalProcessorSpeedInformation,
    HalCallbackInformation,
    HalMapRegisterInformation,
    HalMcaLogInformation,
    HalFrameBufferCachingInformation,
    HalDisplayBiosInformation,
    HalProcessorFeatureInformation,
    HalNumaTopologyInterface,
    HalErrorInformation,
    HalCmcLogInformation,
    HalCpeLogInformation,
    HalQueryMcaInterface,
    HalQueryAMLIIllegalIOPortAddresses,
    HalQueryMaxHotPlugMemoryAddress,
    HalPartitionIpiInterface,
    HalPlatformInformation,
    HalQueryProfileSourceList,
    HalInitLogInformation,
    HalFrequencyInformation,
    HalProcessorBrandString
} HAL_QUERY_INFORMATION_CLASS, *PHAL_QUERY_INFORMATION_CLASS;
typedef enum _HAL_SET_INFORMATION_CLASS {
    HalProfileSourceInterval,
    HalProfileSourceInterruptHandler,
    HalMcaRegisterDriver,
    HalKernelErrorHandler,
    HalCmcRegisterDriver,
    HalCpeRegisterDriver,
    HalMcaLog,
    HalCmcLog,
    HalCpeLog,
    HalGenerateCmcInterrupt,
    HalProfileSourceTimerHandler,
    HalEnlightenment,
    HalProfileDpgoSourceInterruptHandler
} HAL_SET_INFORMATION_CLASS, *PHAL_SET_INFORMATION_CLASS;
typedef
NTSTATUS
(*pHalQuerySystemInformation)(
     HAL_QUERY_INFORMATION_CLASS InformationClass,
     ULONG BufferSize,
     PVOID Buffer,
     PULONG ReturnedLength
    );
typedef
NTSTATUS
(*pHalSetSystemInformation)(
     HAL_SET_INFORMATION_CLASS InformationClass,
     ULONG BufferSize,
     PVOID Buffer
    );
typedef
void
(__fastcall *pHalExamineMBR)(
     PDEVICE_OBJECT DeviceObject,
     ULONG SectorSize,
     ULONG MBRTypeIdentifier,
     PVOID *Buffer
    );
typedef
void
(__fastcall *pHalIoAssignDriveLetters)(
     struct _LOADER_PARAMETER_BLOCK *LoaderBlock,
     PSTRING NtDeviceName,
     PUCHAR NtSystemPath,
     PSTRING NtSystemPathString
    );
typedef
NTSTATUS
(__fastcall *pHalIoReadPartitionTable)(
     PDEVICE_OBJECT DeviceObject,
     ULONG SectorSize,
     BOOLEAN ReturnRecognizedPartitions,
     struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer
    );
typedef
NTSTATUS
(__fastcall *pHalIoSetPartitionInformation)(
     PDEVICE_OBJECT DeviceObject,
     ULONG SectorSize,
     ULONG PartitionNumber,
     ULONG PartitionType
    );
typedef
NTSTATUS
(__fastcall *pHalIoWritePartitionTable)(
     PDEVICE_OBJECT DeviceObject,
     ULONG SectorSize,
     ULONG SectorsPerTrack,
     ULONG NumberOfHeads,
     struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer
    );
typedef
NTSTATUS
(*pHalQueryBusSlots)(
     PBUS_HANDLER BusHandler,
     ULONG BufferSize,
     PULONG SlotNumbers,
     PULONG ReturnedLength
    );
typedef
NTSTATUS
(*pHalInitPnpDriver)(
    void
    );
typedef struct _PM_DISPATCH_TABLE {
    ULONG Signature;
    ULONG Version;
    PVOID Function[1];
} PM_DISPATCH_TABLE, *PPM_DISPATCH_TABLE;
typedef
NTSTATUS
(*pHalInitPowerManagement)(
     PPM_DISPATCH_TABLE PmDriverDispatchTable,
     PPM_DISPATCH_TABLE *PmHalDispatchTable
    );
typedef
struct _DMA_ADAPTER *
(*pHalGetDmaAdapter)(
     PVOID Context,
     struct _DEVICE_DESCRIPTION *DeviceDescriptor,
     PULONG NumberOfMapRegisters
    );
typedef
NTSTATUS
(*pHalGetInterruptTranslator)(
     INTERFACE_TYPE ParentInterfaceType,
     ULONG ParentBusNumber,
     INTERFACE_TYPE BridgeInterfaceType,
     USHORT Size,
     USHORT Version,
     PTRANSLATOR_INTERFACE Translator,
     PULONG BridgeBusNumber
    );
typedef
BOOLEAN
(*pHalTranslateBusAddress)(
     INTERFACE_TYPE InterfaceType,
     ULONG BusNumber,
     PHYSICAL_ADDRESS BusAddress,
     PULONG AddressSpace,
     PPHYSICAL_ADDRESS TranslatedAddress
    );
typedef
NTSTATUS
(*pHalAssignSlotResources) (
     PUNICODE_STRING RegistryPath,
     PUNICODE_STRING DriverClassName ,
     PDRIVER_OBJECT DriverObject,
     PDEVICE_OBJECT DeviceObject,
     INTERFACE_TYPE BusType,
     ULONG BusNumber,
     ULONG SlotNumber,
     PCM_RESOURCE_LIST *AllocatedResources
    );
typedef
void
(*pHalHaltSystem) (
    void
    );
typedef
BOOLEAN
(*pHalResetDisplay) (
    void
    );
typedef struct _MAP_REGISTER_ENTRY {
    PVOID MapRegister;
    BOOLEAN WriteToDevice;
} MAP_REGISTER_ENTRY, *PMAP_REGISTER_ENTRY;
typedef
UCHAR
(*pHalVectorToIDTEntry) (
    ULONG Vector
);
typedef
BOOLEAN
(*pHalFindBusAddressTranslation) (
     PHYSICAL_ADDRESS BusAddress,
     PULONG AddressSpace,
     PPHYSICAL_ADDRESS TranslatedAddress,
     PULONG_PTR Context,
     BOOLEAN NextBus
    );
typedef
NTSTATUS
(*pHalStartMirroring)(
    void
    );
typedef
NTSTATUS
(*pHalEndMirroring)(
     ULONG PassNumber
    );
typedef
NTSTATUS
(*pHalMirrorPhysicalMemory)(
     PHYSICAL_ADDRESS PhysicalAddress,
     LARGE_INTEGER NumberOfBytes
    );
typedef
NTSTATUS
(*pHalMirrorVerify)(
     PHYSICAL_ADDRESS PhysicalAddress,
     LARGE_INTEGER NumberOfBytes
    );
typedef struct {
    UCHAR Type;
    BOOLEAN Valid;
    UCHAR Reserved[2];
    PUCHAR TranslatedAddress;
    ULONG Length;
} DEBUG_DEVICE_ADDRESS, *PDEBUG_DEVICE_ADDRESS;
typedef struct {
    PHYSICAL_ADDRESS Start;
    PHYSICAL_ADDRESS MaxEnd;
    PVOID VirtualAddress;
    ULONG Length;
    BOOLEAN Cached;
    BOOLEAN Aligned;
} DEBUG_MEMORY_REQUIREMENTS, *PDEBUG_MEMORY_REQUIREMENTS;
typedef struct {
    ULONG Bus;
    USHORT Segment;
    ULONG Slot;
    USHORT VendorID;
    USHORT DeviceID;
    UCHAR BaseClass;
    UCHAR SubClass;
    UCHAR ProgIf;
    BOOLEAN Initialized;
    BOOLEAN Configured;
    DEBUG_DEVICE_ADDRESS BaseAddress[6];
    DEBUG_MEMORY_REQUIREMENTS Memory;
} DEBUG_DEVICE_DESCRIPTOR, *PDEBUG_DEVICE_DESCRIPTOR;
typedef
NTSTATUS
(*pKdSetupPciDeviceForDebugging)(
         PVOID LoaderBlock,
     PDEBUG_DEVICE_DESCRIPTOR PciDevice
);
typedef
NTSTATUS
(*pKdReleasePciDeviceForDebugging)(
     PDEBUG_DEVICE_DESCRIPTOR PciDevice
);
typedef
PVOID
(*pKdGetAcpiTablePhase0)(
     struct _LOADER_PARAMETER_BLOCK *LoaderBlock,
     ULONG Signature
    );
typedef
void
(*pKdCheckPowerButton)(
    void
    );
typedef
void
(*pHalEndOfBoot)(
    void
    );
typedef
ULONG
(*pHalGetInterruptVector)(
     INTERFACE_TYPE InterfaceType,
     ULONG BusNumber,
     ULONG BusInterruptLevel,
     ULONG BusInterruptVector,
     PKIRQL Irql,
     PKAFFINITY Affinity
    );
typedef
NTSTATUS
(*pHalGetVectorInput)(
     ULONG Vector,
     KAFFINITY Affinity,
     PULONG Input,
     PKINTERRUPT_POLARITY Polarity
    );
typedef
PVOID
(*pKdMapPhysicalMemory64)(
     PHYSICAL_ADDRESS PhysicalAddress,
     ULONG NumberPages,
     BOOLEAN FlushCurrentTLB
    );
typedef
void
(*pKdUnmapVirtualAddress)(
     PVOID VirtualAddress,
     ULONG NumberPages,
     BOOLEAN FlushCurrentTLB
    );
typedef
ULONG
(*pKdGetPciDataByOffset)(
     ULONG BusNumber,
     ULONG SlotNumber,
     PVOID Buffer,
     ULONG Offset,
     ULONG Length
    );
typedef
ULONG
(*pKdSetPciDataByOffset)(
     ULONG BusNumber,
     ULONG SlotNumber,
     PVOID Buffer,
     ULONG Offset,
     ULONG Length
    );
typedef
NTSTATUS
(*pHalLoadMicrocode)(
     PVOID ImageHandle
    );
typedef
NTSTATUS
(*pHalUnloadMicrocode)(
    void
    );
typedef
NTSTATUS
(*pHalPostMicrocodeUpdate)(
    void
    );
typedef
NTSTATUS
(*pHalAllocateMessageTarget)(
     PDEVICE_OBJECT Owner,
     KAFFINITY ProcessorSet,
     ULONG NumberOfIdtEntries,
     KINTERRUPT_MODE Mode,
     BOOLEAN ShareVector,
     PULONG Vector,
     PKIRQL Irql,
     PULONG IdtEntry
    );
typedef
void
(*pHalFreeMessageTarget)(
     PDEVICE_OBJECT Owner,
     ULONG Vector,
     KAFFINITY ProcessorSet
    );
typedef
PVOID
(*pHalGetAcpiTable)(
     ULONG Signature,
     PCSTR OemId,
     PCSTR OemTableId
    );
typedef
void
(*PCI_ERROR_HANDLER_CALLBACK)(
    void
    );
typedef
void
(*pHalSetPciErrorHandlerCallback)(
     PCI_ERROR_HANDLER_CALLBACK Callback
    );
typedef struct {
    ULONG Version;
    pHalQuerySystemInformation HalQuerySystemInformation;
    pHalSetSystemInformation HalSetSystemInformation;
    pHalQueryBusSlots HalQueryBusSlots;
    ULONG Spare1;
    pHalExamineMBR HalExamineMBR;
    pHalIoAssignDriveLetters HalIoAssignDriveLetters;
    pHalIoReadPartitionTable HalIoReadPartitionTable;
    pHalIoSetPartitionInformation HalIoSetPartitionInformation;
    pHalIoWritePartitionTable HalIoWritePartitionTable;
    pHalHandlerForBus HalReferenceHandlerForBus;
    pHalReferenceBusHandler HalReferenceBusHandler;
    pHalReferenceBusHandler HalDereferenceBusHandler;
    pHalInitPnpDriver HalInitPnpDriver;
    pHalInitPowerManagement HalInitPowerManagement;
    pHalGetDmaAdapter HalGetDmaAdapter;
    pHalGetInterruptTranslator HalGetInterruptTranslator;
    pHalStartMirroring HalStartMirroring;
    pHalEndMirroring HalEndMirroring;
    pHalMirrorPhysicalMemory HalMirrorPhysicalMemory;
    pHalEndOfBoot HalEndOfBoot;
    pHalMirrorVerify HalMirrorVerify;
    pHalGetAcpiTable HalGetCachedAcpiTable;
    pHalSetPciErrorHandlerCallback HalSetPciErrorHandlerCallback;
} HAL_DISPATCH, *PHAL_DISPATCH;
extern PHAL_DISPATCH HalDispatchTable;
typedef struct _HAL_BUS_INFORMATION{
    INTERFACE_TYPE BusType;
    BUS_DATA_TYPE ConfigurationType;
    ULONG BusNumber;
    ULONG Reserved;
} HAL_BUS_INFORMATION, *PHAL_BUS_INFORMATION;
typedef struct _HAL_PROFILE_SOURCE_INFORMATION {
    KPROFILE_SOURCE Source;
    BOOLEAN Supported;
    ULONG Interval;
} HAL_PROFILE_SOURCE_INFORMATION, *PHAL_PROFILE_SOURCE_INFORMATION;
typedef struct _HAL_PROFILE_SOURCE_INFORMATION_EX {
    KPROFILE_SOURCE Source;
    BOOLEAN Supported;
    ULONG_PTR Interval;
    ULONG_PTR DefInterval;
    ULONG_PTR MaxInterval;
    ULONG_PTR MinInterval;
} HAL_PROFILE_SOURCE_INFORMATION_EX, *PHAL_PROFILE_SOURCE_INFORMATION_EX;
typedef struct _HAL_PROFILE_SOURCE_INTERVAL {
    KPROFILE_SOURCE Source;
    ULONG_PTR Interval;
} HAL_PROFILE_SOURCE_INTERVAL, *PHAL_PROFILE_SOURCE_INTERVAL;
typedef struct _HAL_PROFILE_SOURCE_LIST {
    KPROFILE_SOURCE Source;
    PWSTR Description;
} HAL_PROFILE_SOURCE_LIST, *PHAL_PROFILE_SOURCE_LIST;
typedef enum _HAL_DISPLAY_BIOS_INFORMATION {
    HalDisplayInt10Bios,
    HalDisplayEmulatedBios,
    HalDisplayNoBios
} HAL_DISPLAY_BIOS_INFORMATION, *PHAL_DISPLAY_BIOS_INFORMATION;
typedef struct _HAL_POWER_INFORMATION {
    ULONG TBD;
} HAL_POWER_INFORMATION, *PHAL_POWER_INFORMATION;
typedef struct _HAL_PROCESSOR_SPEED_INFO {
    ULONG ProcessorSpeed;
} HAL_PROCESSOR_SPEED_INFORMATION, *PHAL_PROCESSOR_SPEED_INFORMATION;
typedef struct _HAL_CALLBACKS {
    PCALLBACK_OBJECT SetSystemInformation;
    PCALLBACK_OBJECT BusCheck;
} HAL_CALLBACKS, *PHAL_CALLBACKS;
typedef struct _HAL_PROCESSOR_FEATURE {
    ULONG UsableFeatureBits;
} HAL_PROCESSOR_FEATURE;
typedef
NTSTATUS
(*PHALIOREADWRITEHANDLER)(
          BOOLEAN fRead,
          ULONG dwAddr,
          ULONG dwSize,
      PULONG pdwData
    );
typedef struct _HAL_AMLI_BAD_IO_ADDRESS_LIST
{
    ULONG BadAddrBegin;
    ULONG BadAddrSize;
    ULONG OSVersionTrigger;
    PHALIOREADWRITEHANDLER IOHandler;
} HAL_AMLI_BAD_IO_ADDRESS_LIST, *PHAL_AMLI_BAD_IO_ADDRESS_LIST;
typedef
void
(*PHALMCAINTERFACELOCK)(
    void
    );
typedef
void
(*PHALMCAINTERFACEUNLOCK)(
    void
    );
typedef
NTSTATUS
(*PHALMCAINTERFACEREADREGISTER)(
         UCHAR BankNumber,
     PVOID Exception
    );
typedef struct _HAL_MCA_INTERFACE {
    PHALMCAINTERFACELOCK Lock;
    PHALMCAINTERFACEUNLOCK Unlock;
    PHALMCAINTERFACEREADREGISTER ReadRegister;
} HAL_MCA_INTERFACE;
typedef enum {
    ApicDestinationModePhysical = 1,
    ApicDestinationModeLogicalFlat,
    ApicDestinationModeLogicalClustered,
    ApicDestinationModeUnknown
} HAL_APIC_DESTINATION_MODE, *PHAL_APIC_DESTINATION_MODE;
typedef
void
(*PDRIVER_EXCPTN_CALLBACK) (
     PVOID Context,
     PMCA_EXCEPTION BankLog
);
typedef PDRIVER_EXCPTN_CALLBACK PDRIVER_MCA_EXCEPTION_CALLBACK;
typedef struct _MCA_DRIVER_INFO {
    PDRIVER_MCA_EXCEPTION_CALLBACK ExceptionCallback;
    PKDEFERRED_ROUTINE DpcCallback;
    PVOID DeviceContext;
} MCA_DRIVER_INFO, *PMCA_DRIVER_INFO;
typedef struct _HAL_ERROR_INFO {
    ULONG Version;
    ULONG InitMaxSize;
    ULONG McaMaxSize;
    ULONG McaPreviousEventsCount;
    ULONG McaCorrectedEventsCount;
    ULONG McaKernelDeliveryFails;
    ULONG McaDriverDpcQueueFails;
    ULONG McaReserved;
    ULONG CmcMaxSize;
    ULONG CmcPollingInterval;
    ULONG CmcInterruptsCount;
    ULONG CmcKernelDeliveryFails;
    ULONG CmcDriverDpcQueueFails;
    ULONG CmcGetStateFails;
    ULONG CmcClearStateFails;
    ULONG CmcReserved;
    ULONGLONG CmcLogId;
    ULONG CpeMaxSize;
    ULONG CpePollingInterval;
    ULONG CpeInterruptsCount;
    ULONG CpeKernelDeliveryFails;
    ULONG CpeDriverDpcQueueFails;
    ULONG CpeGetStateFails;
    ULONG CpeClearStateFails;
    ULONG CpeInterruptSources;
    ULONGLONG CpeLogId;
    ULONGLONG KernelReserved[4];
} HAL_ERROR_INFO, *PHAL_ERROR_INFO;
typedef
void
(*PDRIVER_CMC_EXCEPTION_CALLBACK) (
     PVOID Context,
     PCMC_EXCEPTION CmcLog
);
typedef
void
(*PDRIVER_CPE_EXCEPTION_CALLBACK) (
     PVOID Context,
     PCPE_EXCEPTION CmcLog
);
typedef struct _CMC_DRIVER_INFO {
    PDRIVER_CMC_EXCEPTION_CALLBACK ExceptionCallback;
    PKDEFERRED_ROUTINE DpcCallback;
    PVOID DeviceContext;
} CMC_DRIVER_INFO, *PCMC_DRIVER_INFO;
typedef struct _CPE_DRIVER_INFO {
    PDRIVER_CPE_EXCEPTION_CALLBACK ExceptionCallback;
    PKDEFERRED_ROUTINE DpcCallback;
    PVOID DeviceContext;
} CPE_DRIVER_INFO, *PCPE_DRIVER_INFO;
typedef struct _HAL_PLATFORM_INFORMATION {
    ULONG PlatformFlags;
} HAL_PLATFORM_INFORMATION, *PHAL_PLATFORM_INFORMATION;
__declspec(deprecated)
__declspec(dllimport)
NTSTATUS
HalAllocateAdapterChannel(
     PADAPTER_OBJECT AdapterObject,
     PWAIT_CONTEXT_BLOCK Wcb,
     ULONG NumberOfMapRegisters,
     PDRIVER_CONTROL ExecutionRoutine
    );
__declspec(deprecated)
__declspec(dllimport)
PVOID
HalAllocateCommonBuffer(
     PADAPTER_OBJECT AdapterObject,
     ULONG Length,
     PPHYSICAL_ADDRESS LogicalAddress,
     BOOLEAN CacheEnabled
    );
__declspec(deprecated)
__declspec(dllimport)
void
HalFreeCommonBuffer(
     PADAPTER_OBJECT AdapterObject,
     ULONG Length,
     PHYSICAL_ADDRESS LogicalAddress,
     PVOID VirtualAddress,
     BOOLEAN CacheEnabled
    );
__declspec(deprecated)
__declspec(dllimport)
ULONG
HalReadDmaCounter(
     PADAPTER_OBJECT AdapterObject
    );
__declspec(deprecated)
__declspec(dllimport)
BOOLEAN
IoFlushAdapterBuffers(
     PADAPTER_OBJECT AdapterObject,
     PMDL Mdl,
     PVOID MapRegisterBase,
     PVOID CurrentVa,
     ULONG Length,
     BOOLEAN WriteToDevice
    );
__declspec(deprecated)
__declspec(dllimport)
void
IoFreeAdapterChannel(
     PADAPTER_OBJECT AdapterObject
    );
__declspec(deprecated)
__declspec(dllimport)
void
IoFreeMapRegisters(
    PADAPTER_OBJECT AdapterObject,
    PVOID MapRegisterBase,
    ULONG NumberOfMapRegisters
   );
__declspec(deprecated)
__declspec(dllimport)
PHYSICAL_ADDRESS
IoMapTransfer(
     PADAPTER_OBJECT AdapterObject,
     PMDL Mdl,
     PVOID MapRegisterBase,
     PVOID CurrentVa,
     PULONG Length,
     BOOLEAN WriteToDevice
    );
__declspec(deprecated)
NTSTATUS
HalGetScatterGatherList (
     PADAPTER_OBJECT DmaAdapter,
     PDEVICE_OBJECT DeviceObject,
     PMDL Mdl,
     PVOID CurrentVa,
     ULONG Length,
     PDRIVER_LIST_CONTROL ExecutionRoutine,
     PVOID Context,
     BOOLEAN WriteToDevice
    );
__declspec(deprecated)
void
HalPutScatterGatherList (
     PADAPTER_OBJECT DmaAdapter,
     PSCATTER_GATHER_LIST ScatterGather,
     BOOLEAN WriteToDevice
    );
__declspec(deprecated)
void
HalPutDmaAdapter(
     PADAPTER_OBJECT DmaAdapter
    );
__declspec(dllimport)
void
HalBugCheckSystem(
     PVOID ErrorRecord
    );
__declspec(dllimport)
void
PoSetSystemState (
     EXECUTION_STATE Flags
    );
__declspec(dllimport)
PVOID
PoRegisterSystemState (
     PVOID StateHandle,
     EXECUTION_STATE Flags
    );
typedef
void
(*PREQUEST_POWER_COMPLETE) (
     PDEVICE_OBJECT DeviceObject,
     UCHAR MinorFunction,
     POWER_STATE PowerState,
     PVOID Context,
     PIO_STATUS_BLOCK IoStatus
    );
__declspec(dllimport)
NTSTATUS
PoRequestPowerIrp (
     PDEVICE_OBJECT DeviceObject,
     UCHAR MinorFunction,
     POWER_STATE PowerState,
     PREQUEST_POWER_COMPLETE CompletionFunction,
     PVOID Context,
     PIRP *Irp
    );
__declspec(dllimport)
void
PoUnregisterSystemState (
     PVOID StateHandle
    );
__declspec(dllimport)
POWER_STATE
PoSetPowerState (
     PDEVICE_OBJECT DeviceObject,
     POWER_STATE_TYPE Type,
     POWER_STATE State
    );
__declspec(dllimport)
NTSTATUS
PoCallDriver (
     PDEVICE_OBJECT DeviceObject,
     PIRP Irp
    );
__declspec(dllimport)
void
PoStartNextPowerIrp(
     PIRP Irp
    );
__declspec(dllimport)
PULONG
PoRegisterDeviceForIdleDetection (
     PDEVICE_OBJECT DeviceObject,
     ULONG ConservationIdleTime,
     ULONG PerformanceIdleTime,
     DEVICE_POWER_STATE State
    );
typedef NTSTATUS (*PPOWER_SETTING_CALLBACK) (
     LPCGUID SettingGuid,
     PVOID Value,
     ULONG ValueLength,
     PVOID Context
);
__declspec(dllimport)
BOOLEAN
FsRtlIsTotalDeviceFailure(
     NTSTATUS Status
    );
typedef struct _PCI_AGP_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    USHORT Minor:4;
    USHORT Major:4;
    USHORT Rsvd1:8;
    struct _PCI_AGP_STATUS {
        ULONG Rate:3;
        ULONG Agp3Mode:1;
        ULONG FastWrite:1;
        ULONG FourGB:1;
        ULONG HostTransDisable:1;
        ULONG Gart64:1;
        ULONG ITA_Coherent:1;
        ULONG SideBandAddressing:1;
        ULONG CalibrationCycle:3;
        ULONG AsyncRequestSize:3;
        ULONG Rsvd1:1;
        ULONG Isoch:1;
        ULONG Rsvd2:6;
        ULONG RequestQueueDepthMaximum:8;
    } AGPStatus;
    struct _PCI_AGP_COMMAND {
        ULONG Rate:3;
        ULONG Rsvd1:1;
        ULONG FastWriteEnable:1;
        ULONG FourGBEnable:1;
        ULONG Rsvd2:1;
        ULONG Gart64:1;
        ULONG AGPEnable:1;
        ULONG SBAEnable:1;
        ULONG CalibrationCycle:3;
        ULONG AsyncReqSize:3;
        ULONG Rsvd3:8;
        ULONG RequestQueueDepth:8;
    } AGPCommand;
} PCI_AGP_CAPABILITY, *PPCI_AGP_CAPABILITY;
typedef enum _EXTENDED_AGP_REGISTER {
    IsochStatus,
    AgpControl,
    ApertureSize,
    AperturePageSize,
    GartLow,
    GartHigh,
    IsochCommand
} EXTENDED_AGP_REGISTER, *PEXTENDED_AGP_REGISTER;
typedef struct _PCI_AGP_ISOCH_STATUS {
    ULONG ErrorCode: 2;
    ULONG Rsvd1: 1;
    ULONG Isoch_L: 3;
    ULONG Isoch_Y: 2;
    ULONG Isoch_N: 8;
    ULONG Rsvd2: 16;
} PCI_AGP_ISOCH_STATUS, *PPCI_AGP_ISOCH_STATUS;
typedef struct _PCI_AGP_CONTROL {
    ULONG Rsvd1: 7;
    ULONG GTLB_Enable: 1;
    ULONG AP_Enable: 1;
    ULONG CAL_Disable: 1;
    ULONG Rsvd2: 22;
} PCI_AGP_CONTROL, *PPCI_AGP_CONTROL;
typedef struct _PCI_AGP_APERTURE_PAGE_SIZE {
    USHORT PageSizeMask: 11;
    USHORT Rsvd1: 1;
    USHORT PageSizeSelect: 4;
} PCI_AGP_APERTURE_PAGE_SIZE, *PPCI_AGP_APERTURE_PAGE_SIZE;
typedef struct _PCI_AGP_ISOCH_COMMAND {
    USHORT Rsvd1: 6;
    USHORT Isoch_Y: 2;
    USHORT Isoch_N: 8;
} PCI_AGP_ISOCH_COMMAND, *PPCI_AGP_ISOCH_COMMAND;
typedef struct PCI_AGP_EXTENDED_CAPABILITY {
    PCI_AGP_ISOCH_STATUS IsochStatus;
    PCI_AGP_CONTROL AgpControl;
    USHORT ApertureSize;
    PCI_AGP_APERTURE_PAGE_SIZE AperturePageSize;
    ULONG GartLow;
    ULONG GartHigh;
    PCI_AGP_ISOCH_COMMAND IsochCommand;
} PCI_AGP_EXTENDED_CAPABILITY, *PPCI_AGP_EXTENDED_CAPABILITY;
typedef struct _PCIX_BRIDGE_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    union {
        struct {
            USHORT Bus64Bit:1;
            USHORT Bus133MHzCapable:1;
            USHORT SplitCompletionDiscarded:1;
            USHORT UnexpectedSplitCompletion:1;
            USHORT SplitCompletionOverrun:1;
            USHORT SplitRequestDelayed:1;
            USHORT BusModeFrequency:4;
            USHORT Rsvd:2;
            USHORT Version:2;
            USHORT Bus266MHzCapable:1;
            USHORT Bus533MHzCapable:1;
        } ;
        USHORT AsUSHORT;
    } SecondaryStatus;
    union {
        struct {
            ULONG FunctionNumber:3;
            ULONG DeviceNumber:5;
            ULONG BusNumber:8;
            ULONG Device64Bit:1;
            ULONG Device133MHzCapable:1;
            ULONG SplitCompletionDiscarded:1;
            ULONG UnexpectedSplitCompletion:1;
            ULONG SplitCompletionOverrun:1;
            ULONG SplitRequestDelayed:1;
            ULONG Rsvd:7;
            ULONG DIMCapable:1;
            ULONG Device266MHzCapable:1;
            ULONG Device533MHzCapable:1;
        } ;
        ULONG AsULONG;
    } BridgeStatus;
    USHORT UpstreamSplitTransactionCapacity;
    USHORT UpstreamSplitTransactionLimit;
    USHORT DownstreamSplitTransactionCapacity;
    USHORT DownstreamSplitTransactionLimit;
    union {
        struct {
            ULONG SelectSecondaryRegisters:1;
            ULONG ErrorPresentInOtherBank:1;
            ULONG AdditionalCorrectableError:1;
            ULONG AdditionalUncorrectableError:1;
            ULONG ErrorPhase:3;
            ULONG ErrorCorrected:1;
            ULONG Syndrome:8;
            ULONG ErrorFirstCommand:4;
            ULONG ErrorSecondCommand:4;
            ULONG ErrorUpperAttributes:4;
            ULONG ControlUpdateEnable:1;
            ULONG Rsvd:1;
            ULONG DisableSingleBitCorrection:1;
            ULONG EccMode:1;
        } ;
        ULONG AsULONG;
    } EccControlStatus;
    ULONG EccFirstAddress;
    ULONG EccSecondAddress;
    ULONG EccAttribute;
} PCIX_BRIDGE_CAPABILITY, *PPCIX_BRIDGE_CAPABILITY;
typedef struct _PCI_SUBSYSTEM_IDS_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    USHORT Reserved;
    USHORT SubVendorID;
    USHORT SubSystemID;
} PCI_SUBSYSTEM_IDS_CAPABILITY, *PPCI_SUBSYSTEM_IDS_CAPABILITY;
typedef struct _PCI_ROOT_BUS_OSC_SUPPORT_FIELD {
    union {
        struct {
            ULONG ExtendedConfigOpRegions:1;
            ULONG ActiveStatePowerManagement:1;
            ULONG ClockPowerManagement:1;
            ULONG SegmentGroups:1;
            ULONG MessageSignaledInterrupts:1;
            ULONG WindowsHardwareErrorArchitecture:1;
            ULONG Reserved:26;
        } ;
        ULONG AsULONG;
    } u;
} PCI_ROOT_BUS_OSC_SUPPORT_FIELD, *PPCI_ROOT_BUS_OSC_SUPPORT_FIELD;
typedef struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD {
    union {
        struct {
            ULONG ExpressNativeHotPlug:1;
            ULONG ShpcNativeHotPlug:1;
            ULONG ExpressNativePME:1;
            ULONG ExpressAdvancedErrorReporting:1;
            ULONG ExpressCapabilityStructure:1;
            ULONG Reserved:27;
        } ;
        ULONG AsULONG;
    } u;
} PCI_ROOT_BUS_OSC_CONTROL_FIELD, *PPCI_ROOT_BUS_OSC_CONTROL_FIELD;
typedef enum _PCI_HARDWARE_INTERFACE {
    PciConventional,
    PciXMode1,
    PciXMode2,
    PciExpress
} PCI_HARDWARE_INTERFACE, *PPCI_HARDWARE_INTERFACE;
typedef enum {
    BusWidth32Bits,
    BusWidth64Bits
} PCI_BUS_WIDTH;
typedef struct _PCI_ROOT_BUS_HARDWARE_CAPABILITY {
    PCI_HARDWARE_INTERFACE SecondaryInterface;
    struct {
        BOOLEAN BusCapabilitiesFound;
        ULONG CurrentSpeedAndMode;
        ULONG SupportedSpeedsAndModes;
        BOOLEAN DeviceIDMessagingCapable;
        PCI_BUS_WIDTH SecondaryBusWidth;
    } ;
    PCI_ROOT_BUS_OSC_SUPPORT_FIELD OscFeatureSupport;
    PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlRequest;
    PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlGranted;
} PCI_ROOT_BUS_HARDWARE_CAPABILITY, *PPCI_ROOT_BUS_HARDWARE_CAPABILITY;
typedef union _PCI_EXPRESS_CAPABILITIES_REGISTER {
    struct {
        USHORT CapabilityVersion:4;
        USHORT DeviceType:4;
        USHORT SlotImplemented:1;
        USHORT InterruptMessageNumber:5;
        USHORT Rsvd:2;
    } ;
    USHORT AsUSHORT;
} PCI_EXPRESS_CAPABILITIES_REGISTER, *PPCI_EXPRESS_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER {
    struct {
        ULONG MaxPayloadSizeSupported:3;
        ULONG PhantomFunctionsSupported:2;
        ULONG ExtendedTagSupported:1;
        ULONG L0sAcceptableLatency:3;
        ULONG L1AcceptableLatency:3;
        ULONG Undefined:3;
        ULONG RoleBasedErrorReporting:1;
        ULONG Rsvd1:2;
        ULONG CapturedSlotPowerLimit:8;
        ULONG CapturedSlotPowerLimitScale:2;
        ULONG Rsvd2:4;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER, *PPCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_CONTROL_REGISTER {
    struct {
        USHORT CorrectableErrorEnable:1;
        USHORT NonFatalErrorEnable:1;
        USHORT FatalErrorEnable:1;
        USHORT UnsupportedRequestErrorEnable:1;
        USHORT EnableRelaxedOrder:1;
        USHORT MaxPayloadSize:3;
        USHORT ExtendedTagEnable:1;
        USHORT PhantomFunctionsEnable:1;
        USHORT AuxPowerEnable:1;
        USHORT NoSnoopEnable:1;
        USHORT MaxReadRequestSize:3;
        USHORT BridgeConfigRetryEnable:1;
    } ;
    USHORT AsUSHORT;
} PCI_EXPRESS_DEVICE_CONTROL_REGISTER, *PPCI_EXPRESS_DEVICE_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_DEVICE_STATUS_REGISTER {
    struct {
        USHORT CorrectableErrorDetected:1;
        USHORT NonFatalErrorDetected:1;
        USHORT FatalErrorDetected:1;
        USHORT UnsupportedRequestDetected:1;
        USHORT AuxPowerDetected:1;
        USHORT TransactionsPending:1;
        USHORT Rsvd:10;
    } ;
    USHORT AsUSHORT;
} PCI_EXPRESS_DEVICE_STATUS_REGISTER, *PPCI_EXPRESS_DEVICE_STATUS_REGISTER;
typedef union _PCI_EXPRESS_LINK_CAPABILITIES_REGISTER {
    struct {
        ULONG MaximumLinkSpeed:4;
        ULONG MaximumLinkWidth:6;
        ULONG ActiveStatePMSupport:2;
        ULONG L0sExitLatency:3;
        ULONG L1ExitLatency:3;
        ULONG ClockPowerManagement:1;
        ULONG SurpriseDownErrorReportingCapable:1;
        ULONG DataLinkLayerActiveReportingCapable:1;
        ULONG Rsvd:3;
        ULONG PortNumber:8;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_LINK_CAPABILITIES_REGISTER, *PPCI_EXPRESS_LINK_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_LINK_CONTROL_REGISTER {
    struct {
        USHORT ActiveStatePMControl:2;
        USHORT Rsvd1:1;
        USHORT ReadCompletionBoundary:1;
        USHORT LinkDisable:1;
        USHORT RetrainLink:1;
        USHORT CommonClockConfig:1;
        USHORT ExtendedSynch:1;
        USHORT EnableClockPowerManagement:1;
        USHORT Rsvd2:7;
    } ;
    USHORT AsUSHORT;
} PCI_EXPRESS_LINK_CONTROL_REGISTER, *PPCI_EXPRESS_LINK_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_LINK_STATUS_REGISTER {
    struct {
        USHORT LinkSpeed:4;
        USHORT LinkWidth:6;
        USHORT Undefined:1;
        USHORT LinkTraining:1;
        USHORT SlotClockConfig:1;
        USHORT DataLinkLayerActive:1;
        USHORT Rsvd:2;
    } ;
    USHORT AsUSHORT;
} PCI_EXPRESS_LINK_STATUS_REGISTER, *PPCI_EXPRESS_LINK_STATUS_REGISTER;
typedef union _PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER {
    struct {
        ULONG AttentionButtonPresent:1;
        ULONG PowerControllerPresent:1;
        ULONG MRLSensorPresent:1;
        ULONG AttentionIndicatorPresent:1;
        ULONG PowerIndicatorPresent:1;
        ULONG HotPlugSurprise:1;
        ULONG HotPlugCapable:1;
        ULONG SlotPowerLimit:8;
        ULONG SlotPowerLimitScale:2;
        ULONG ElectromechanicalLockPresent:1;
        ULONG NoCommandCompletedSupport:1;
        ULONG PhysicalSlotNumber:13;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER, *PPCI_EXPRESS_SLOT_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_SLOT_CONTROL_REGISTER {
    struct {
        USHORT AttentionButtonEnable:1;
        USHORT PowerFaultDetectEnable:1;
        USHORT MRLSensorEnable:1;
        USHORT PresenceDetectEnable:1;
        USHORT CommandCompletedEnable:1;
        USHORT HotPlugInterruptEnable:1;
        USHORT AttentionIndicatorControl:2;
        USHORT PowerIndicatorControl:2;
        USHORT PowerControllerControl:1;
        USHORT ElectromechanicalLockControl:1;
        USHORT DataLinkStateChangeEnable:1;
        USHORT Rsvd:3;
    } ;
    USHORT AsUSHORT;
} PCI_EXPRESS_SLOT_CONTROL_REGISTER, *PPCI_EXPRESS_SLOT_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_SLOT_STATUS_REGISTER {
    struct {
        USHORT AttentionButtonPressed:1;
        USHORT PowerFaultDetected:1;
        USHORT MRLSensorChanged:1;
        USHORT PresenceDetectChanged:1;
        USHORT CommandCompleted:1;
        USHORT MRLSensorState:1;
        USHORT PresenceDetectState:1;
        USHORT ElectromechanicalLockEngaged:1;
        USHORT DataLinkStateChanged:1;
        USHORT Rsvd:7;
    } ;
    USHORT AsUSHORT;
} PCI_EXPRESS_SLOT_STATUS_REGISTER, *PPCI_EXPRESS_SLOT_STATUS_REGISTER;
typedef union _PCI_EXPRESS_ROOT_CONTROL_REGISTER {
    struct {
        USHORT CorrectableSerrEnable:1;
        USHORT NonFatalSerrEnable:1;
        USHORT FatalSerrEnable:1;
        USHORT PMEInterruptEnable:1;
        USHORT CRSSoftwareVisibilityEnable:1;
        USHORT Rsvd:11;
    } ;
    USHORT AsUSHORT;
} PCI_EXPRESS_ROOT_CONTROL_REGISTER, *PPCI_EXPRESS_ROOT_CONTROL_REGISTER;
typedef union _PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER {
    struct {
        USHORT CRSSoftwareVisibility:1;
        USHORT Rsvd:15;
    } ;
    USHORT AsUSHORT;
} PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER, *PPCI_EXPRESS_ROOT_CAPABILITIES_REGISTER;
typedef union _PCI_EXPRESS_ROOT_STATUS_REGISTER {
    struct {
        ULONG PMERequestorId:16;
        ULONG PMEStatus:1;
        ULONG PMEPending:1;
        ULONG Rsvd:14;
    } ;
    ULONG AsULONG;
} PCI_EXPRESS_ROOT_STATUS_REGISTER, *PPCI_EXPRESS_ROOT_STATUS_REGISTER;
typedef struct _PCI_EXPRESS_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    PCI_EXPRESS_CAPABILITIES_REGISTER ExpressCapabilities;
    PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER DeviceCapabilities;
    PCI_EXPRESS_DEVICE_CONTROL_REGISTER DeviceControl;
    PCI_EXPRESS_DEVICE_STATUS_REGISTER DeviceStatus;
    PCI_EXPRESS_LINK_CAPABILITIES_REGISTER LinkCapabilities;
    PCI_EXPRESS_LINK_CONTROL_REGISTER LinkControl;
    PCI_EXPRESS_LINK_STATUS_REGISTER LinkStatus;
    PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER SlotCapabilities;
    PCI_EXPRESS_SLOT_CONTROL_REGISTER SlotControl;
    PCI_EXPRESS_SLOT_STATUS_REGISTER SlotStatus;
    PCI_EXPRESS_ROOT_CONTROL_REGISTER RootControl;
    PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER RootCapabilities;
    PCI_EXPRESS_ROOT_STATUS_REGISTER RootStatus;
} PCI_EXPRESS_CAPABILITY, *PPCI_EXPRESS_CAPABILITY;
typedef enum {
    MRLClosed = 0,
    MRLOpen
} PCI_EXPRESS_MRL_STATE;
typedef enum {
    SlotEmpty = 0,
    CardPresent
} PCI_EXPRESS_CARD_PRESENCE;
typedef enum {
    IndicatorOn = 1,
    IndicatorBlink,
    IndicatorOff
} PCI_EXPRESS_INDICATOR_STATE;
typedef enum {
    PowerOn = 0,
    PowerOff
} PCI_EXPRESS_POWER_STATE;
typedef enum {
    L0sEntrySupport = 1,
    L0sAndL1EntrySupport = 3
} PCI_EXPRESS_ASPM_SUPPORT;
typedef enum {
    L0sAndL1EntryDisabled,
    L0sEntryEnabled,
    L1EntryEnabled,
    L0sAndL1EntryEnabled
} PCI_EXPRESS_ASPM_CONTROL;
typedef enum {
    L0s_Below64ns = 0,
    L0s_64ns_128ns,
    L0s_128ns_256ns,
    L0s_256ns_512ns,
    L0s_512ns_1us,
    L0s_1us_2us,
    L0s_2us_4us,
    L0s_Above4us
} PCI_EXPRESS_L0s_EXIT_LATENCY;
typedef enum {
    L1_Below1us = 0,
    L1_1us_2us,
    L1_2us_4us,
    L1_4us_8us,
    L1_8us_16us,
    L1_16us_32us,
    L1_32us_64us,
    L1_Above64us
} PCI_EXPRESS_L1_EXIT_LATENCY;
typedef enum {
    PciExpressEndpoint = 0,
    PciExpressLegacyEndpoint,
    PciExpressRootPort = 4,
    PciExpressUpstreamSwitchPort,
    PciExpressDownstreamSwitchPort,
    PciExpressToPciXBridge,
    PciXToExpressBridge,
    PciExpressRootComplexIntegratedEndpoint,
    PciExpressRootComplexEventCollector
} PCI_EXPRESS_DEVICE_TYPE;
typedef enum {
    MaxPayload128Bytes = 0,
    MaxPayload256Bytes,
    MaxPayload512Bytes,
    MaxPayload1024Bytes,
    MaxPayload2048Bytes,
    MaxPayload4096Bytes
} PCI_EXPRESS_MAX_PAYLOAD_SIZE;
typedef union _PCI_EXPRESS_PME_REQUESTOR_ID {
    struct {
        USHORT FunctionNumber:3;
        USHORT DeviceNumber:5;
        USHORT BusNumber:8;
    } ;
    USHORT AsUSHORT;
} PCI_EXPRESS_PME_REQUESTOR_ID, *PPCI_EXPRESS_PME_REQUESTOR_ID;
typedef void
(*PciPin2Line) (
     struct _BUS_HANDLER *BusHandler,
     struct _BUS_HANDLER *RootHandler,
     PCI_SLOT_NUMBER SlotNumber,
     PPCI_COMMON_CONFIG PciData
    );
typedef void
(*PciLine2Pin) (
     struct _BUS_HANDLER *BusHandler,
     struct _BUS_HANDLER *RootHandler,
     PCI_SLOT_NUMBER SlotNumber,
     PPCI_COMMON_CONFIG PciNewData,
     PPCI_COMMON_CONFIG PciOldData
    );
typedef void
(*PciReadWriteConfig) (
     struct _BUS_HANDLER *BusHandler,
     PCI_SLOT_NUMBER Slot,
     PVOID Buffer,
     ULONG Offset,
     ULONG Length
    );
typedef struct _PCIBUSDATA {
    ULONG Tag;
    ULONG Version;
    PciReadWriteConfig ReadConfig;
    PciReadWriteConfig WriteConfig;
    PciPin2Line Pin2Line;
    PciLine2Pin Line2Pin;
    PCI_SLOT_NUMBER ParentSlot;
    PVOID Reserved[4];
} PCIBUSDATA, *PPCIBUSDATA;
typedef ULONG (*PCI_READ_WRITE_CONFIG)(
     PVOID Context,
     ULONG BusOffset,
     ULONG Slot,
     PVOID Buffer,
     ULONG Offset,
     ULONG Length
    );
typedef void (*PCI_PIN_TO_LINE)(
     PVOID Context,
     PPCI_COMMON_CONFIG PciData
    );
typedef void (*PCI_LINE_TO_PIN)(
     PVOID Context,
     PPCI_COMMON_CONFIG PciNewData,
     PPCI_COMMON_CONFIG PciOldData
    );
typedef void (*PCI_ROOT_BUS_CAPABILITY) (
     PVOID Context,
     PPCI_ROOT_BUS_HARDWARE_CAPABILITY HardwareCapability
    );
typedef void (*PCI_EXPRESS_WAKE_CONTROL) (
     PVOID Context,
     BOOLEAN EnableWake
    );
typedef struct _PCI_BUS_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PCI_READ_WRITE_CONFIG ReadConfig;
    PCI_READ_WRITE_CONFIG WriteConfig;
    PCI_PIN_TO_LINE PinToLine;
    PCI_LINE_TO_PIN LineToPin;
    PCI_ROOT_BUS_CAPABILITY RootBusCapability;
    PCI_EXPRESS_WAKE_CONTROL ExpressWakeControl;
} PCI_BUS_INTERFACE_STANDARD, *PPCI_BUS_INTERFACE_STANDARD;
__declspec(dllimport)
NTSTATUS
__stdcall
ZwSetInformationThread (
     HANDLE ThreadHandle,
     THREADINFOCLASS ThreadInformationClass,
     PVOID ThreadInformation,
     ULONG ThreadInformationLength
    );
NTSTATUS
ZwCreateTimer (
     PHANDLE TimerHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
     TIMER_TYPE TimerType
    );
NTSTATUS
ZwOpenTimer (
     PHANDLE TimerHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSTATUS
ZwCancelTimer (
     HANDLE TimerHandle,
     PBOOLEAN CurrentState
    );
NTSTATUS
ZwSetTimer (
     HANDLE TimerHandle,
     PLARGE_INTEGER DueTime,
     PTIMER_APC_ROUTINE TimerApcRoutine,
     PVOID TimerContext,
     BOOLEAN ResumeTimer,
     LONG Period,
     PBOOLEAN PreviousState
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwQueryVolumeInformationFile(
     HANDLE FileHandle,
     PIO_STATUS_BLOCK IoStatusBlock,
     PVOID FsInformation,
     ULONG Length,
     FS_INFORMATION_CLASS FsInformationClass
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwDeviceIoControlFile(
     HANDLE FileHandle,
     HANDLE Event,
     PIO_APC_ROUTINE ApcRoutine,
     PVOID ApcContext,
     PIO_STATUS_BLOCK IoStatusBlock,
     ULONG IoControlCode,
     PVOID InputBuffer,
     ULONG InputBufferLength,
     PVOID OutputBuffer,
     ULONG OutputBufferLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwDisplayString(
     PUNICODE_STRING String
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwPowerInformation(
     POWER_INFORMATION_LEVEL InformationLevel,
     PVOID InputBuffer,
     ULONG InputBufferLength,
     PVOID OutputBuffer,
     ULONG OutputBufferLength
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwAllocateLocallyUniqueId(
     PLUID Luid
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwTerminateProcess (
     HANDLE ProcessHandle,
     NTSTATUS ExitStatus
    );
__declspec(dllimport)
NTSTATUS
__stdcall
ZwOpenProcess (
     PHANDLE ProcessHandle,
     ACCESS_MASK DesiredAccess,
     POBJECT_ATTRIBUTES ObjectAttributes,
     PCLIENT_ID ClientId
    );
extern const GUID WHEA_RECORD_CREATOR_GUID;
extern const GUID CMC_NOTIFY_TYPE_GUID;
extern const GUID CPE_NOTIFY_TYPE_GUID;
extern const GUID MCE_NOTIFY_TYPE_GUID;
extern const GUID PCIe_NOTIFY_TYPE_GUID;
extern const GUID INIT_NOTIFY_TYPE_GUID;
extern const GUID NMI_NOTIFY_TYPE_GUID;
extern const GUID BOOT_NOTIFY_TYPE_GUID;
extern const GUID GENERIC_NOTIFY_TYPE_GUID;
extern const GUID PROCESSOR_GENERIC_SECTION_GUID;
extern const GUID X86_PROCESSOR_SPECIFIC_SECTION_GUID;
extern const GUID IPF_PROCESSOR_SPECIFIC_SECTION_GUID;
extern const GUID X64_PROCESSOR_SPECIFIC_SECTION_GUID;
extern const GUID PLATFORM_MEMORY_SECTION_GUID;
extern const GUID PCIEXPRESS_SECTION_GUID;
extern const GUID PCIX_BUS_SECTION_GUID;
extern const GUID PCIX_COMPONENT_SECTION_GUID;
extern const GUID NMI_SECTION_GUID;
extern const GUID GENERIC_SECTION_GUID;
extern const GUID WHEA_PACKET_SECTION_GUID;
extern const GUID PLATFORM_CACHE_SECTION_GUID;
extern const GUID IPF_SAL_RECORD_REFERENCE_SECTION_GUID;
extern const GUID WHEA_CACHECHECK_GUID;
extern const GUID WHEA_TLBCHECK_GUID;
extern const GUID WHEA_BUSCHECK_GUID;
extern const GUID WHEA_MSCHECK_GUID;
typedef enum _WHEA_ERROR_SOURCE_TYPE {
    WheaErrSrcTypeMCE = 0x00,
    WheaErrSrcTypeCMC = 0x01,
    WheaErrSrcTypeCPE = 0x02,
    WheaErrSrcTypeNMI = 0x03,
    WheaErrSrcTypePCIe = 0x04,
    WheaErrSrcTypeGeneric = 0x05,
    WheaErrSrcTypeINIT = 0x06,
    WheaErrSrcTypeBOOT = 0x07,
    WheaErrSrcTypeSCIGeneric= 0x08,
    WheaErrSrcTypeIPFMCA = 0x09,
    WheaErrSrcTypeIPFCMC = 0x0a,
    WheaErrSrcTypeIPFCPE = 0x0b,
    WheaErrSrcTypeMax = 0x0c
} WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;
typedef enum _WHEA_RAW_DATA_FORMAT {
    WheaRawDataFormatIPFSalRecord = 0x00,
    WheaRawDataFormatIA32MCA,
    WheaRawDataFormatIntel64MCA,
    WheaRawDataFormatAMD64MCA,
    WheaRawDataFormatMemory,
    WheaRawDataFormatPCIExpress,
    WheaRawDataFormatNMIPort,
    WheaRawDataFormatPCIXBus,
    WheaRawDataFormatPCIXDevice,
    WheaRawDataFormatGeneric,
    WheaRawDataFormatMax
} WHEA_RAW_DATA_FORMAT, *PWHEA_RAW_DATA_FORMAT;
typedef enum _WHEA_ERROR_SOURCE_STATE {
    WheaErrSrcStateStopped = 0x01,
    WheaErrSrcStateStarted = 0x02
} WHEA_ERROR_SOURCE_STATE, *PWHEA_ERROR_SOURCE_STATE;
#pragma warning(disable:4103)
#pragma pack(push,1)
typedef union _WHEA_NOTIFICATION_FLAGS {
    struct {
        USHORT PollIntervalRW:1;
        USHORT SwitchToPollingThresholdRW:1;
        USHORT SwitchToPollingWindowRW:1;
        USHORT ErrorThresholdRW:1;
        USHORT ErrorThresholdWindowRW:1;
        USHORT Reserved:11;
    } ;
    USHORT AsUSHORT;
} WHEA_NOTIFICATION_FLAGS, *PWHEA_NOTIFICATION_FLAGS;
typedef union _XPF_MC_BANK_FLAGS {
    struct {
        UCHAR ClearOnInitializationRW:1;
        UCHAR ControlDataRW:1;
        UCHAR Reserved:6;
    } ;
    UCHAR AsUCHAR;
} XPF_MC_BANK_FLAGS, *PXPF_MC_BANK_FLAGS;
typedef union _XPF_MCE_FLAGS {
    struct {
        ULONG MCG_CapabilityRW:1;
        ULONG MCG_GlobalControlRW:1;
        ULONG Reserved:30;
    } ;
    ULONG AsULONG;
} XPF_MCE_FLAGS, *PXPF_MCE_FLAGS;
typedef union _AER_ROOTPORT_DESCRIPTOR_FLAGS {
    struct {
        USHORT UncorrectableErrorMaskRW:1;
        USHORT UncorrectableErrorSeverityRW:1;
        USHORT CorrectableErrorMaskRW:1;
        USHORT AdvancedCapsAndControlRW:1;
        USHORT RootErrorCommandRW:1;
        USHORT Reserved:11;
    } ;
    USHORT AsUSHORT;
} AER_ROOTPORT_DESCRIPTOR_FLAGS, *PAER_ROOTPORT_DESCRIPTOR_FLAGS;
typedef union _AER_ENDPOINT_DESCRIPTOR_FLAGS {
    struct {
        USHORT UncorrectableErrorMaskRW:1;
        USHORT UncorrectableErrorSeverityRW:1;
        USHORT CorrectableErrorMaskRW:1;
        USHORT AdvancedCapsAndControlRW:1;
        USHORT Reserved:12;
    } ;
    USHORT AsUSHORT;
} AER_ENDPOINT_DESCRIPTOR_FLAGS, *PAER_ENDPOINT_DESCRIPTOR_FLAGS;
typedef union _AER_BRIDGE_DESCRIPTOR_FLAGS {
    struct {
        USHORT UncorrectableErrorMaskRW:1;
        USHORT UncorrectableErrorSeverityRW:1;
        USHORT CorrectableErrorMaskRW:1;
        USHORT AdvancedCapsAndControlRW:1;
        USHORT SecondaryUncorrectableErrorMaskRW:1;
        USHORT SecondaryUncorrectableErrorSevRW:1;
        USHORT SecondaryCapsAndControlRW:1;
        USHORT Reserved:9;
    } ;
    USHORT AsUSHORT;
} AER_BRIDGE_DESCRIPTOR_FLAGS, *PAER_BRIDGE_DESCRIPTOR_FLAGS;
typedef struct _WHEA_NOTIFICATION_DESCRIPTOR {
    UCHAR Type;
    UCHAR Length;
    WHEA_NOTIFICATION_FLAGS Flags;
    union {
        struct {
            ULONG PollInterval;
        } Polled;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Interrupt;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } LocalInterrupt;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Sci;
        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Nmi;
    } u;
} WHEA_NOTIFICATION_DESCRIPTOR, *PWHEA_NOTIFICATION_DESCRIPTOR;
typedef struct _WHEA_XPF_MC_BANK_DESCRIPTOR {
    UCHAR BankNumber;
    BOOLEAN ClearOnInitialization;
    UCHAR StatusDataFormat;
    XPF_MC_BANK_FLAGS Flags;
    ULONG ControlMsr;
    ULONG StatusMsr;
    ULONG AddressMsr;
    ULONG MiscMsr;
    ULONGLONG ControlData;
} WHEA_XPF_MC_BANK_DESCRIPTOR, *PWHEA_XPF_MC_BANK_DESCRIPTOR;
typedef struct _WHEA_XPF_MCE_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR NumberOfBanks;
    XPF_MCE_FLAGS Flags;
    ULONGLONG MCG_Capability;
    ULONGLONG MCG_GlobalControl;
    WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];
} WHEA_XPF_MCE_DESCRIPTOR, *PWHEA_XPF_MCE_DESCRIPTOR;
typedef struct _WHEA_XPF_CMC_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR NumberOfBanks;
    ULONG Reserved;
    WHEA_NOTIFICATION_DESCRIPTOR Notify;
    WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];
} WHEA_XPF_CMC_DESCRIPTOR, *PWHEA_XPF_CMC_DESCRIPTOR;
typedef struct _WHEA_PCI_SLOT_NUMBER {
    union {
        struct {
            ULONG DeviceNumber:5;
            ULONG FunctionNumber:3;
            ULONG Reserved:24;
        } bits;
        ULONG AsULONG;
    } u;
} WHEA_PCI_SLOT_NUMBER, *PWHEA_PCI_SLOT_NUMBER;
typedef struct _WHEA_XPF_NMI_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
} WHEA_XPF_NMI_DESCRIPTOR, *PWHEA_XPF_NMI_DESCRIPTOR;
typedef struct _WHEA_AER_ROOTPORT_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    ULONG BusNumber;
    WHEA_PCI_SLOT_NUMBER Slot;
    USHORT DeviceControl;
    AER_ROOTPORT_DESCRIPTOR_FLAGS Flags;
    ULONG UncorrectableErrorMask;
    ULONG UncorrectableErrorSeverity;
    ULONG CorrectableErrorMask;
    ULONG AdvancedCapsAndControl;
    ULONG RootErrorCommand;
} WHEA_AER_ROOTPORT_DESCRIPTOR, *PWHEA_AER_ROOTPORT_DESCRIPTOR;
typedef struct _WHEA_AER_ENDPOINT_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    ULONG BusNumber;
    WHEA_PCI_SLOT_NUMBER Slot;
    USHORT DeviceControl;
    AER_ENDPOINT_DESCRIPTOR_FLAGS Flags;
    ULONG UncorrectableErrorMask;
    ULONG UncorrectableErrorSeverity;
    ULONG CorrectableErrorMask;
    ULONG AdvancedCapsAndControl;
} WHEA_AER_ENDPOINT_DESCRIPTOR, *PWHEA_AER_ENDPOINT_DESCRIPTOR;
typedef struct _WHEA_AER_BRIDGE_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    ULONG BusNumber;
    WHEA_PCI_SLOT_NUMBER Slot;
    USHORT DeviceControl;
    AER_BRIDGE_DESCRIPTOR_FLAGS Flags;
    ULONG UncorrectableErrorMask;
    ULONG UncorrectableErrorSeverity;
    ULONG CorrectableErrorMask;
    ULONG AdvancedCapsAndControl;
    ULONG SecondaryUncorrectableErrorMask;
    ULONG SecondaryUncorrectableErrorSev;
    ULONG SecondaryCapsAndControl;
} WHEA_AER_BRIDGE_DESCRIPTOR, *PWHEA_AER_BRIDGE_DESCRIPTOR;
typedef struct _WHEA_GENERIC_ERROR_DESCRIPTOR {
    USHORT Type;
    UCHAR Reserved;
    UCHAR Enabled;
    ULONG ErrStatusBlockLength;
    ULONG RelatedErrorSourceId;
    UCHAR ErrStatusAddressSpaceID;
    UCHAR ErrStatusAddressBitWidth;
    UCHAR ErrStatusAddressBitOffset;
    UCHAR ErrStatusAddressAccessSize;
    LARGE_INTEGER ErrStatusAddress;
    WHEA_NOTIFICATION_DESCRIPTOR Notify;
} WHEA_GENERIC_ERROR_DESCRIPTOR, *PWHEA_GENERIC_ERROR_DESCRIPTOR;
typedef struct _WHEA_IPF_MCA_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR Reserved;
} WHEA_IPF_MCA_DESCRIPTOR, *PWHEA_IPF_MCA_DESCRIPTOR;
typedef struct _WHEA_IPF_CMC_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR Reserved;
} WHEA_IPF_CMC_DESCRIPTOR, *PWHEA_IPF_CMC_DESCRIPTOR;
typedef struct _WHEA_IPF_CPE_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR Reserved;
} WHEA_IPF_CPE_DESCRIPTOR, *PWHEA_IPF_CPE_DESCRIPTOR;
typedef struct _WHEA_ERROR_SOURCE_DESCRIPTOR {
    ULONG Length;
    ULONG Version;
    WHEA_ERROR_SOURCE_TYPE Type;
    WHEA_ERROR_SOURCE_STATE State;
    ULONG MaxRawDataLength;
    ULONG NumRecordsToPreallocate;
    ULONG MaxSectionsPerRecord;
    ULONG ErrorSourceId;
    ULONG PlatformErrorSourceId;
    ULONG Flags;
    union {
        WHEA_XPF_MCE_DESCRIPTOR XpfMceDescriptor;
        WHEA_XPF_CMC_DESCRIPTOR XpfCmcDescriptor;
        WHEA_XPF_NMI_DESCRIPTOR XpfNmiDescriptor;
        WHEA_IPF_MCA_DESCRIPTOR IpfMcaDescriptor;
        WHEA_IPF_CMC_DESCRIPTOR IpfCmcDescriptor;
        WHEA_IPF_CPE_DESCRIPTOR IpfCpeDescriptor;
        WHEA_AER_ROOTPORT_DESCRIPTOR AerRootportDescriptor;
        WHEA_AER_ENDPOINT_DESCRIPTOR AerEndpointDescriptor;
        WHEA_AER_BRIDGE_DESCRIPTOR AerBridgeDescriptor;
        WHEA_GENERIC_ERROR_DESCRIPTOR GenErrDescriptor;
    } Info;
} WHEA_ERROR_SOURCE_DESCRIPTOR, *PWHEA_ERROR_SOURCE_DESCRIPTOR;
typedef union _WHEA_REVISION {
    struct {
        UCHAR MinorRevision;
        UCHAR MajorRevision;
    } ;
    USHORT AsUSHORT;
} WHEA_REVISION, *PWHEA_REVISION;
typedef enum _WHEA_ERROR_TYPE {
    WheaErrTypeProcessor = 0,
    WheaErrTypeMemory,
    WheaErrTypePCIExpress,
    WheaErrTypeNMI,
    WheaErrTypePCIXBus,
    WheaErrTypePCIXDevice,
    WheaErrTypeGeneric
} WHEA_ERROR_TYPE, *PWHEA_ERROR_TYPE;
typedef enum _WHEA_ERROR_SEVERITY {
    WheaErrSevRecoverable = 0,
    WheaErrSevFatal = 1,
    WheaErrSevCorrected = 2,
    WheaErrSevNone = 3
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;
typedef union _WHEA_ERROR_STATUS {
    ULONGLONG ErrorStatus;
    struct {
        ULONGLONG Reserved1:8;
        ULONGLONG ErrorType:8;
        ULONGLONG Address:1;
        ULONGLONG Control:1;
        ULONGLONG Data:1;
        ULONGLONG Responder:1;
        ULONGLONG Requester:1;
        ULONGLONG FirstError:1;
        ULONGLONG Overflow:1;
        ULONGLONG Reserved2:41;
    } ;
} WHEA_ERROR_STATUS, *PWHEA_ERROR_STATUS;
typedef union _WHEA_PROCESSOR_FAMILY_INFO {
    struct {
        ULONG Stepping:4;
        ULONG Model:4;
        ULONG Family:4;
        ULONG ProcessorType:2;
        ULONG Reserved1:2;
        ULONG ExtendedModel:4;
        ULONG ExtendedFamily:8;
        ULONG Reserved2:4;
        ULONG Reserved3;
    } ;
    ULONGLONG AsULONGLONG;
} WHEA_PROCESSOR_FAMILY_INFO, *PWHEA_PROCESSOR_FAMILY_INFO;
typedef union _WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS {
    struct {
        ULONGLONG ProcessorType:1;
        ULONGLONG InstructionSet:1;
        ULONGLONG ErrorType:1;
        ULONGLONG Operation:1;
        ULONGLONG Flags:1;
        ULONGLONG Level:1;
        ULONGLONG CPUVersion:1;
        ULONGLONG CPUBrandString:1;
        ULONGLONG ProcessorId:1;
        ULONGLONG TargetAddress:1;
        ULONGLONG RequesterId:1;
        ULONGLONG ResponderId:1;
        ULONGLONG InstructionPointer:1;
        ULONGLONG Reserved:51;
    } ;
    ULONGLONG ValidBits;
} WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS,
  *PWHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS;
typedef struct _WHEA_GENERIC_PROCESSOR_ERROR {
    WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS ValidBits;
    UCHAR ProcessorType;
    UCHAR InstructionSet;
    UCHAR ErrorType;
    UCHAR Operation;
    UCHAR Flags;
    UCHAR Level;
    USHORT Reserved;
    ULONGLONG CPUVersion;
    UCHAR CPUBrandString[128];
    ULONGLONG ProcessorId;
    ULONGLONG TargetAddress;
    ULONGLONG RequesterId;
    ULONGLONG ResponderId;
    ULONGLONG InstructionPointer;
} WHEA_GENERIC_PROCESSOR_ERROR, *PWHEA_GENERIC_PROCESSOR_ERROR;
typedef union _WHEA_XPF_CACHE_CHECK {
    struct {
        ULONGLONG TransactionTypeValid:1;
        ULONGLONG OperationValid:1;
        ULONGLONG LevelValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ReservedValid:8;
 ULONGLONG TransactionType:2;
 ULONGLONG Operation:4;
 ULONGLONG Level:3;
 ULONGLONG ProcessorContextCorrupt:1;
 ULONGLONG Uncorrected:1;
 ULONGLONG PreciseIP:1;
 ULONGLONG RestartableIP:1;
 ULONGLONG Overflow:1;
        ULONGLONG Reserved:34;
    } ;
    ULONGLONG XpfCacheCheck;
} WHEA_XPF_CACHE_CHECK, *PWHEA_XPF_CACHE_CHECK;
typedef union _WHEA_XPF_TLB_CHECK {
    struct {
        ULONGLONG TransactionTypeValid:1;
        ULONGLONG OperationValid:1;
        ULONGLONG LevelValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ReservedValid:8;
 ULONGLONG TransactionType:2;
 ULONGLONG Operation:4;
 ULONGLONG Level:3;
 ULONGLONG ProcessorContextCorrupt:1;
 ULONGLONG Uncorrected:1;
 ULONGLONG PreciseIP:1;
 ULONGLONG RestartableIP:1;
 ULONGLONG Overflow:1;
 ULONGLONG Reserved:34;
    } ;
    ULONGLONG XpfTLBCheck;
} WHEA_XPF_TLB_CHECK, *PWHEA_XPF_TLB_CHECK;
typedef union _WHEA_XPF_BUS_CHECK {
    struct {
        ULONGLONG TransactionTypeValid:1;
        ULONGLONG OperationValid:1;
        ULONGLONG LevelValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ParticipationValid:1;
        ULONGLONG TimeoutValid:1;
        ULONGLONG AddressSpaceValid:1;
        ULONGLONG ReservedValid:5;
 ULONGLONG TransactionType:2;
 ULONGLONG Operation:4;
 ULONGLONG Level:3;
 ULONGLONG ProcessorContextCorrupt:1;
 ULONGLONG Uncorrected:1;
 ULONGLONG PreciseIP:1;
 ULONGLONG RestartableIP:1;
 ULONGLONG Overflow:1;
 ULONGLONG Participation:2;
 ULONGLONG Timeout:1;
 ULONGLONG AddressSpace:2;
 ULONGLONG Reserved:29;
    } ;
    ULONGLONG XpfBusCheck;
} WHEA_XPF_BUS_CHECK, *PWHEA_XPF_BUS_CHECK;
typedef union _WHEA_XPF_MS_CHECK {
    struct {
        ULONGLONG ErrorTypeValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ReservedValue:10;
        ULONGLONG ErrorType:3;
        ULONGLONG ProcessorContextCorrupt:1;
        ULONGLONG Uncorrected:1;
        ULONGLONG PreciseIP:1;
        ULONGLONG RestartableIP:1;
        ULONGLONG Overflow:1;
        ULONGLONG Reserved:40;
    } ;
    ULONGLONG XpfMsCheck;
} WHEA_XPF_MS_CHECK, *PWHEA_XPF_MS_CHECK;
typedef union _WHEA_XPF_PROCESSOR_ERROR_VALIDBITS {
    struct {
        ULONGLONG LocalAPICId:1;
        ULONGLONG CpuId:1;
        ULONGLONG ProcInfoCount:6;
        ULONGLONG ContextInfoCount:6;
        ULONGLONG Reserved:50;
    } ;
    ULONGLONG ValidBits;
} WHEA_XPF_PROCESSOR_ERROR_VALIDBITS, *PWHEA_XPF_PROCESSOR_ERROR_VALIDBITS;
typedef struct _WHEA_XPF_PROCESSOR_ERROR {
    WHEA_XPF_PROCESSOR_ERROR_VALIDBITS ValidBits;
    ULONGLONG LocalAPICId;
    UCHAR CpuId[48];
    UCHAR VariableInfo[1];
} WHEA_XPF_PROCESSOR_ERROR, *PWHEA_XPF_PROCESSOR_ERROR;
typedef union _WHEA_XPF_PROCINFO_VALIDBITS {
    struct {
        ULONGLONG CheckInfo:1;
        ULONGLONG TargetId:1;
        ULONGLONG RequesterId:1;
        ULONGLONG ResponderId:1;
        ULONGLONG InstructionPointer:1;
        ULONGLONG Reserved:59;
    } ;
    ULONGLONG ValidBits;
} WHEA_XPF_PROCINFO_VALIDBITS, *PWHEA_XPF_PROCINFO_VALIDBITS;
typedef struct _WHEA_XPF_PROCINFO {
    GUID CheckInfoId;
    WHEA_XPF_PROCINFO_VALIDBITS ValidBits;
    union {
        WHEA_XPF_BUS_CHECK BusCheck;
        WHEA_XPF_CACHE_CHECK CacheCheck;
        WHEA_XPF_MS_CHECK MsCheck;
        WHEA_XPF_TLB_CHECK TlbCheck;
        ULONGLONG AsULONGLONG;
    } CheckInfo;
    ULONGLONG TargetId;
    ULONGLONG RequesterId;
    ULONGLONG ResponderId;
    ULONGLONG InstructionPointer;
} WHEA_XPF_PROCINFO, *PWHEA_XPF_PROCINFO;
typedef struct _WHEA_XPF_CONTEXT_INFO {
    USHORT RegisterContextType;
    USHORT RegisterDataSize;
    ULONG MSRAddress;
    ULONGLONG MmRegisterAddress;
    UCHAR RegisterData[1];
} WHEA_XPF_CONTEXT_INFO, *PWHEA_XPF_CONTEXT_INFO;
typedef struct _WHEA_X86_REGISTER_STATE {
    ULONG Eax;
    ULONG Ebx;
    ULONG Ecx;
    ULONG Edx;
    ULONG Esi;
    ULONG Edi;
    ULONG Ebp;
    ULONG Esp;
    USHORT Cs;
    USHORT Ds;
    USHORT Ss;
    USHORT Es;
    USHORT Fs;
    USHORT Gs;
    ULONG Eflags;
    ULONG Eip;
    ULONG Cr0;
    ULONG Cr1;
    ULONG Cr2;
    ULONG Cr3;
    ULONG Cr4;
    ULONGLONG Gdtr;
    ULONGLONG Idtr;
    USHORT Ldtr;
    USHORT Tr;
} WHEA_X86_REGISTER_STATE, *PWHEA_X86_REGISTER_STATE;
typedef struct _WHEA128A {
    ULONGLONG Low;
    LONGLONG High;
} WHEA128A, *PWHEA128A;
#pragma warning(push)
#pragma warning(disable:4324)
typedef struct _WHEA_X64_REGISTER_STATE {
    ULONGLONG Rax;
    ULONGLONG Rbx;
    ULONGLONG Rcx;
    ULONGLONG Rdx;
    ULONGLONG Rsi;
    ULONGLONG Rdi;
    ULONGLONG Rbp;
    ULONGLONG Rsp;
    ULONGLONG R8;
    ULONGLONG R9;
    ULONGLONG R10;
    ULONGLONG R11;
    ULONGLONG R12;
    ULONGLONG R13;
    ULONGLONG R14;
    ULONGLONG R15;
    USHORT Cs;
    USHORT Ds;
    USHORT Ss;
    USHORT Es;
    USHORT Fs;
    USHORT Gs;
    USHORT Reserved;
    ULONGLONG Rflags;
    ULONGLONG Eip;
    ULONGLONG Cr0;
    ULONGLONG Cr1;
    ULONGLONG Cr2;
    ULONGLONG Cr3;
    ULONGLONG Cr4;
    ULONGLONG Cr8;
    WHEA128A Gdtr;
    WHEA128A Idtr;
    USHORT Ldtr;
    USHORT Tr;
} WHEA_X64_REGISTER_STATE, *PWHEA_X64_REGISTER_STATE;
#pragma warning(pop)
typedef union _WHEA_MEMORY_ERROR_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG PhysicalAddress:1;
        ULONGLONG PhysicalAddressMask:1;
        ULONGLONG Node:1;
        ULONGLONG Card:1;
        ULONGLONG Module:1;
        ULONGLONG Bank:1;
        ULONGLONG Device:1;
        ULONGLONG Row:1;
        ULONGLONG Column:1;
        ULONGLONG BitPosition:1;
        ULONGLONG RequesterId:1;
        ULONGLONG ResponderId:1;
        ULONGLONG TargetId:1;
        ULONGLONG ErrorType:1;
        ULONGLONG Reserved:49;
    } ;
    ULONGLONG ValidBits;
} WHEA_MEMORY_ERROR_VALIDBITS, *PWHEA_MEMORY_ERROR_VALIDBITS;
typedef struct _WHEA_MEMORY_ERROR {
    WHEA_MEMORY_ERROR_VALIDBITS ValidBits;
    WHEA_ERROR_STATUS ErrorStatus;
    ULONGLONG PhysicalAddress;
    ULONGLONG PhysicalAddressMask;
    USHORT Node;
    USHORT Card;
    USHORT Module;
    USHORT Bank;
    USHORT Device;
    USHORT Row;
    USHORT Column;
    USHORT BitPosition;
    ULONGLONG RequesterId;
    ULONGLONG ResponderId;
    ULONGLONG TargetId;
    UCHAR ErrorType;
} WHEA_MEMORY_ERROR, *PWHEA_MEMORY_ERROR;
typedef union _WHEA_NMI_ERROR_FLAGS {
    struct {
        ULONG HypervisorError:1;
        ULONG Reserved:31;
    } ;
    ULONG AsULONG;
} WHEA_NMI_ERROR_FLAGS, *PWHEA_NMI_ERROR_FLAGS;
typedef struct _WHEA_NMI_ERROR {
    UCHAR Data[8];
    WHEA_NMI_ERROR_FLAGS Flags;
} WHEA_NMI_ERROR, *PWHEA_NMI_ERROR;
typedef union _WHEA_PCIEXPRESS_ERROR_VALIDBITS {
    struct {
        ULONGLONG PortType:1;
        ULONGLONG Version:1;
        ULONGLONG CommandStatus:1;
        ULONGLONG DeviceId:1;
        ULONGLONG DeviceSerialNumber:1;
        ULONGLONG BridgeControlStatus:1;
        ULONGLONG ExpressCapability:1;
        ULONGLONG AerInfo:1;
        ULONGLONG Reserved:56;
    } ;
    ULONGLONG ValidBits;
} WHEA_PCIEXPRESS_ERROR_VALIDBITS, *PWHEA_PCIEXPRESS_ERROR_VALIDBITS;
typedef struct _WHEA_PCIEXPRESS_DEVICE_ID {
    USHORT VendorID;
    USHORT DeviceID;
    ULONG ClassCode:24;
    ULONG FunctionNumber:8;
    ULONG DeviceNumber:8;
    ULONG Segment:16;
    ULONG PrimaryBusNumber:8;
    ULONG SecondaryBusNumber:8;
    ULONG Reserved1:2;
    ULONG SlotNumber:14;
    ULONG Reserved2:8;
} WHEA_PCIEXPRESS_DEVICE_ID, *PWHEA_PCIEXPRESS_DEVICE_ID;
typedef union _WHEA_PCIEXPRESS_VERSION {
    struct {
        UCHAR MinorVersion;
        UCHAR MajorVersion;
        USHORT Reserved;
    } ;
    ULONG AsULONG;
} WHEA_PCIEXPRESS_VERSION, *PWHEA_PCIEXPRESS_VERSION;
typedef union _WHEA_PCIEXPRESS_COMMAND_STATUS {
    struct {
        USHORT Command;
        USHORT Status;
    } ;
    ULONG AsULONG;
} WHEA_PCIEXPRESS_COMMAND_STATUS, *PWHEA_PCIEXPRESS_COMMAND_STATUS;
typedef union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS {
    struct {
        USHORT BridgeSecondaryStatus;
        USHORT BridgeControl;
    } ;
    ULONG AsULONG;
} WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS,
    *PWHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS;
typedef enum {
    WheaPciExpressEndpoint = 0,
    WheaPciExpressLegacyEndpoint,
    WheaPciExpressRootPort = 4,
    WheaPciExpressUpstreamSwitchPort,
    WheaPciExpressDownstreamSwitchPort,
    WheaPciExpressToPciXBridge,
    WheaPciXToExpressBridge,
    WheaPciExpressRootComplexIntegratedEndpoint,
    WheaPciExpressRootComplexEventCollector
} WHEA_PCIEXPRESS_DEVICE_TYPE;
typedef struct _WHEA_PCIEXPRESS_ERROR {
    WHEA_PCIEXPRESS_ERROR_VALIDBITS ValidBits;
    WHEA_PCIEXPRESS_DEVICE_TYPE PortType;
    WHEA_PCIEXPRESS_VERSION Version;
    WHEA_PCIEXPRESS_COMMAND_STATUS CommandStatus;
    ULONG Reserved;
    WHEA_PCIEXPRESS_DEVICE_ID DeviceId;
    ULONGLONG DeviceSerialNumber;
    WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS BridgeControlStatus;
    UCHAR ExpressCapability[60];
    UCHAR AerInfo[96];
} WHEA_PCIEXPRESS_ERROR, *PWHEA_PCIEXPRESS_ERROR;
typedef union _WHEA_PCIXBUS_ERROR_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG ErrorType:1;
        ULONGLONG BusId:1;
        ULONGLONG BusAddress:1;
        ULONGLONG BusData:1;
        ULONGLONG BusCommand:1;
        ULONGLONG RequesterId:1;
        ULONGLONG CompleterId:1;
        ULONGLONG TargetId:1;
        ULONGLONG Reserved:55;
    } ;
    ULONGLONG ValidBits;
} WHEA_PCIXBUS_ERROR_VALIDBITS, *PWHEA_PCIXBUS_ERROR_VALIDBITS;
typedef union _WHEA_PCIXBUS_ID {
    struct {
        UCHAR BusNumber;
        UCHAR BusSegment;
    } ;
    USHORT AsUSHORT;
} WHEA_PCIXBUS_ID, *PWHEA_PCIXBUS_ID;
typedef union _WHEA_PCIXBUS_COMMAND {
    struct {
        ULONGLONG Command:56;
        ULONGLONG PCIXCommand:1;
        ULONGLONG Reserved:7;
    } ;
    ULONGLONG AsULONGLONG;
} WHEA_PCIXBUS_COMMAND, *PWHEA_PCIXBUS_COMMAND;
typedef struct _WHEA_PCIXBUS_ERROR {
    WHEA_PCIXBUS_ERROR_VALIDBITS ValidBits;
    WHEA_ERROR_STATUS ErrorStatus;
    USHORT ErrorType;
    WHEA_PCIXBUS_ID BusId;
    ULONG Reserved;
    ULONGLONG BusAddress;
    ULONGLONG BusData;
    WHEA_PCIXBUS_COMMAND BusCommand;
    ULONGLONG RequesterId;
    ULONGLONG CompleterId;
    ULONGLONG TargetId;
} WHEA_PCIXBUS_ERROR, *PWHEA_PCIXBUS_ERROR;
typedef union _WHEA_PCIXDEVICE_ERROR_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG IdInfo:1;
        ULONGLONG MemoryNumber:1;
        ULONGLONG IoNumber:1;
        ULONGLONG RegisterDataPairs:1;
        ULONGLONG Reserved:59;
    } ;
    ULONGLONG ValidBits;
} WHEA_PCIXDEVICE_ERROR_VALIDBITS, *PWHEA_PCIXDEVICE_ERROR_VALIDBITS;
typedef struct _WHEA_PCIXDEVICE_ID {
    USHORT VendorId;
    USHORT DeviceId;
    ULONG ClassCode:24;
    ULONG FunctionNumber:8;
    ULONG DeviceNumber:8;
    ULONG BusNumber:8;
    ULONG SegmentNumber:8;
    ULONG Reserved1:8;
    ULONG Reserved2;
} WHEA_PCIXDEVICE_ID, *PWHEA_PCIXDEVICE_ID;
typedef struct WHEA_PCIXDEVICE_REGISTER_PAIR {
    ULONGLONG Register;
    ULONGLONG Data;
} WHEA_PCIXDEVICE_REGISTER_PAIR, *PWHEA_PCIXDEVICE_REGISTER_PAIR;
typedef struct _WHEA_PCIXDEVICE_ERROR {
    WHEA_PCIXDEVICE_ERROR_VALIDBITS ValidBits;
    WHEA_ERROR_STATUS ErrorStatus;
    WHEA_PCIXDEVICE_ID IdInfo;
    ULONG MemoryNumber;
    ULONG IoNumber;
    WHEA_PCIXDEVICE_REGISTER_PAIR RegisterDataPairs[4];
} WHEA_PCIXDEVICE_ERROR, *PWHEA_PCIXDEVICE_ERROR;
typedef struct _WHEA_FIRMWARE_RECORD {
    UCHAR Type;
    UCHAR Reserved[7];
    ULONGLONG FirmwareRecordId;
} WHEA_FIRMWARE_RECORD, *PWHEA_FIRMWARE_RECORD;
typedef union _WHEA_GENERIC_ERROR_BLOCKSTATUS {
    struct {
        ULONG UncorrectableError:1;
        ULONG CorrectableError:1;
        ULONG MultipleUncorrectableErrors:1;
        ULONG MultipleCorrectableErrors:1;
        ULONG ErrorDataEntryCount:10;
        ULONG Reserved:18;
    } ;
    ULONG AsULONG;
} WHEA_GENERIC_ERROR_BLOCKSTATUS, *PWHEA_GENERIC_ERROR_BLOCKSTATUS;
typedef struct _WHEA_GENERIC_ERROR {
    WHEA_GENERIC_ERROR_BLOCKSTATUS BlockStatus;
    ULONG RawDataOffset;
    ULONG RawDataLength;
    ULONG DataLength;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    UCHAR Data[1];
} WHEA_GENERIC_ERROR, *PWHEA_GENERIC_ERROR;
typedef struct _WHEA_GENERIC_ERROR_DATA_ENTRY {
    GUID SectionType;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    WHEA_REVISION Revision;
    UCHAR ValidBits;
    UCHAR Flags;
    ULONG ErrorDataLength;
    GUID FRUId;
    UCHAR FRUText[20];
    UCHAR Data[1];
} WHEA_GENERIC_ERROR_DATA_ENTRY, *PWHEA_GENERIC_ERROR_DATA_ENTRY;
typedef union _WHEA_BOOT_ERROR_VALIDBITS {
    struct {
        UCHAR FRUId:1;
        UCHAR FRUString:1;
        UCHAR ErrorData:1;
        UCHAR Reserved:5;
    } ;
    UCHAR AsUCHAR;
} WHEA_BOOT_ERROR_VALIDBITS, *PWHEA_BOOT_ERROR_VALIDBITS;
typedef struct _WHEA_BOOT_ERROR_STATUS {
    UCHAR ErrorPresent;
    WHEA_BOOT_ERROR_VALIDBITS ValidBits;
    UCHAR ErrorDescription;
    UCHAR Reserved;
    ULONG ErrorDataLength;
    GUID Type;
    UCHAR FRUId[16];
    UCHAR FRUString[24];
    UCHAR ErrorData[1];
} WHEA_BOOT_ERROR_STATUS, *PWHEA_BOOT_ERROR_STATUS;
typedef union _WHEA_ERROR_PACKET_FLAGS {
    struct {
        ULONG PreviousError:1;
        ULONG CpuValid:1;
        ULONG HypervisorError:1;
        ULONG Simulated:1;
        ULONG Reserved:28;
    } ;
    ULONG AsULONG;
} WHEA_ERROR_PACKET_FLAGS, *PWHEA_ERROR_PACKET_FLAGS;
typedef struct _WHEA_ERROR_PACKET {
    ULONG Signature;
    WHEA_ERROR_PACKET_FLAGS Flags;
    ULONG Size;
    ULONG RawDataLength;
    ULONGLONG Reserved1;
    ULONGLONG Context;
    WHEA_ERROR_TYPE ErrorType;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    ULONG ErrorSourceId;
    WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    ULONG Reserved2;
    ULONG Version;
    ULONGLONG Cpu;
    union {
        WHEA_GENERIC_PROCESSOR_ERROR ProcessorError;
        WHEA_MEMORY_ERROR MemoryError;
        WHEA_NMI_ERROR NmiError;
        WHEA_PCIEXPRESS_ERROR PciExpressError;
        WHEA_PCIXBUS_ERROR PciXBusError;
        WHEA_PCIXDEVICE_ERROR PciXDeviceError;
    } u;
    WHEA_RAW_DATA_FORMAT RawDataFormat;
    ULONG RawDataOffset;
    UCHAR RawData[1];
} WHEA_ERROR_PACKET, *PWHEA_ERROR_PACKET;
typedef USHORT WHEA_ERROR_RECORD_ID, *PWHEA_ERROR_RECORD_ID;
typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
    struct {
        ULONG Primary:1;
        ULONG ContainmentWarning:1;
        ULONG Reset:1;
        ULONG ThresholdExceeded:1;
        ULONG ResourceNotAvailable:1;
        ULONG LatentError:1;
        ULONG Reserved:26;
    } ;
    ULONG AsULONG;
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS,
    *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
    struct {
        UCHAR FRUId:1;
        UCHAR FRUText:1;
        UCHAR Reserved:6;
    } ;
    UCHAR AsUCHAR;
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS,
    *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
    ULONG SectionOffset;
    ULONG SectionLength;
    WHEA_REVISION Revision;
    WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
    UCHAR Reserved;
    WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
    GUID SectionType;
    GUID FRUId;
    WHEA_ERROR_SEVERITY SectionSeverity;
    CCHAR FRUText[20];
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
typedef union _WHEA_PERSISTENCE_INFO {
    struct {
        ULONGLONG Signature:16;
        ULONGLONG Length:24;
        ULONGLONG Identifier:16;
        ULONGLONG Attributes:2;
        ULONGLONG DoNotLog:1;
        ULONGLONG Reserved:5;
    } ;
    ULONGLONG AsULONGLONG;
} WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO;
typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS {
    struct {
        ULONG Recovered:1;
        ULONG PreviousError:1;
        ULONG Simulated:1;
        ULONG Reserved:29;
    } ;
    ULONG AsULONG;
} WHEA_ERROR_RECORD_HEADER_FLAGS, *PWHEA_ERROR_RECORD_HEADER_FLAGS;
typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
    struct {
        ULONG Timestamp:1;
        ULONG PlatformId:1;
        ULONG PartitionId:1;
        ULONG Reserved:29;
    } ;
    ULONG AsULONG;
} WHEA_ERROR_RECORD_HEADER_VALIDBITS, *PWHEA_ERROR_RECORD_HEADER_VALIDBITS;
typedef union _WHEA_TIMESTAMP {
    struct {
        ULONGLONG Seconds:8;
        ULONGLONG Minutes:8;
        ULONGLONG Hours:8;
        ULONGLONG Reserved:8;
        ULONGLONG Day:8;
        ULONGLONG Month:8;
        ULONGLONG Year:8;
        ULONGLONG Century:8;
    } ;
    LARGE_INTEGER AsLARGE_INTEGER;
} WHEA_TIMESTAMP, *PWHEA_TIMESTAMP;
typedef struct _WHEA_ERROR_RECORD_HEADER {
    ULONG Signature;
    WHEA_REVISION Revision;
    ULONG SignatureEnd;
    USHORT SectionCount;
    WHEA_ERROR_SEVERITY Severity;
    WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
    ULONG Length;
    WHEA_TIMESTAMP Timestamp;
    GUID PlatformId;
    GUID PartitionId;
    GUID CreatorId;
    GUID NotifyType;
    ULONGLONG RecordId;
    WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
    WHEA_PERSISTENCE_INFO PersistenceInfo;
    UCHAR Reserved[12];
} WHEA_ERROR_RECORD_HEADER, *PWHEA_ERROR_RECORD_HEADER;
typedef struct _WHEA_ERROR_RECORD {
    WHEA_ERROR_RECORD_HEADER Header;
    WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
} WHEA_ERROR_RECORD, *PWHEA_ERROR_RECORD;
#pragma warning(disable:4103)
#pragma pack(pop)
typedef
NTSTATUS
(*WHEA_ERROR_SOURCE_INITIALIZER)(
     ULONG Phase,
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
     PVOID Context
    );
NTSTATUS
WheaReportHwError(
     PWHEA_ERROR_PACKET ErrPkt
    );
__declspec(dllimport)
NTSTATUS
WheaAddErrorSource(
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
     PVOID Context
    );
__declspec(dllimport)
NTSTATUS
WheaRemoveErrorSource(
     HANDLE Handle
    );
NTSTATUS
WheaRegisterErrSrcInitializer(
     WHEA_ERROR_SOURCE_TYPE ErrorSource,
     WHEA_ERROR_SOURCE_INITIALIZER Initializer
    );
PWHEA_ERROR_SOURCE_DESCRIPTOR
WheaGetErrorSource (
     ULONG ErrorSourceId
    );
__forceinline
PWHEA_ERROR_PACKET
WheaGetErrPacketFromErrRecord (
     PWHEA_ERROR_RECORD Record
    )
{
    GUID Guid;
    ULONG Offset;
    PWHEA_ERROR_PACKET Packet;
    ULONG SectionNumber;
    ULONG Size;
    GUID WheaPktSectionType = WHEA_PACKET_SECTION_GUID;
    ((!(Record->Header.Signature == 'REPC')) ? (__annotation(L"Debug", L"AssertFail", L"Record->Header.Signature == WHEA_ERROR_RECORD_SIGNATURE"), __int2c(), 0) : 1);
    if (Record->Header.Signature != 'REPC') {
        return ((void *)0);
    }
    Size = (sizeof(WHEA_ERROR_RECORD_HEADER)) +
            (sizeof(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR) *
             Record->Header.SectionCount);
    if (Record->Header.Length < Size) {
        return ((void *)0);
    }
    for (SectionNumber = 0;
         SectionNumber < Record->Header.SectionCount;
         SectionNumber += 1) {
        memcpy((&Guid),(&Record->SectionDescriptor[SectionNumber].SectionType),(sizeof(GUID)));
        if (RtlCompareMemory(&Guid, &WheaPktSectionType, sizeof(GUID)) ==
            sizeof(GUID)) {
            Offset = Record->SectionDescriptor[SectionNumber].SectionOffset;
            Size = (Offset +
                    Record->SectionDescriptor[SectionNumber].SectionLength);
            if (Record->Header.Length < Size) {
                return ((void *)0);
            }
            Packet = (PWHEA_ERROR_PACKET)((PUCHAR)Record + Offset);
            ((!(Packet->Signature == 'tPrE')) ? (__annotation(L"Debug", L"AssertFail", L"Packet->Signature == WHEA_ERROR_PKT_SIGNATURE"), __int2c(), 0) : 1);
            return Packet;
        }
    }
    return ((void *)0);
}
typedef union _WHEA_ERROR_INJECTION_CAPABILITIES {
    struct {
        ULONG ProcessorCorrectable:1;
        ULONG ProcessorUncorrectableNonFatal:1;
        ULONG ProcessorUncorrectableFatal:1;
        ULONG MemoryCorrectable:1;
        ULONG MemoryUncorrectableNonFatal:1;
        ULONG MemoryUncorrectableFatal:1;
        ULONG PCIExpressCorrectable:1;
        ULONG PCIExpressUncorrectableNonFatal:1;
        ULONG PCIExpressUncorrectableFatal:1;
        ULONG PlatformCorrectable:1;
        ULONG PlatformUncorrectableNonFatal:1;
        ULONG PlatformUncorrectableFatal:1;
        ULONG IA64Corrected:1;
        ULONG IA64Recoverable:1;
        ULONG IA64Fatal:1;
        ULONG IA64RecoverableCache:1;
        ULONG IA64RecoverableRegFile:1;
        ULONG Reserved:15;
    } ;
    ULONG AsULONG;
} WHEA_ERROR_INJECTION_CAPABILITIES, *PWHEA_ERROR_INJECTION_CAPABILITIES;
typedef
NTSTATUS
(*PSHED_PI_GET_ALL_ERROR_SOURCES) (
     PVOID PluginContext,
     PULONG Count,
     PWHEA_ERROR_SOURCE_DESCRIPTOR *ErrorSrcs,
     PULONG Length
    );
typedef
NTSTATUS
(*PSHED_PI_GET_ERROR_SOURCE_INFO) (
     PVOID PluginContext,
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
typedef
NTSTATUS
(*PSHED_PI_SET_ERROR_SOURCE_INFO) (
     PVOID PluginContext,
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
typedef
NTSTATUS
 (*PSHED_PI_ENABLE_ERROR_SOURCE) (
     PVOID PluginContext,
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
typedef
NTSTATUS
 (*PSHED_PI_DISABLE_ERROR_SOURCE) (
     PVOID PluginContext,
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
typedef
NTSTATUS
(*PSHED_PI_WRITE_ERROR_RECORD) (
     PVOID PluginContext,
     ULONG Flags,
     ULONG RecordLength,
     PWHEA_ERROR_RECORD ErrorRecord
    );
typedef
NTSTATUS
(*PSHED_PI_READ_ERROR_RECORD) (
     PVOID PluginContext,
     ULONG Flags,
     ULONGLONG ErrorRecordId,
     PULONGLONG NextErrorRecordId,
     PULONG RecordLength,
     PWHEA_ERROR_RECORD ErrorRecord
    );
typedef
NTSTATUS
(*PSHED_PI_CLEAR_ERROR_RECORD) (
     PVOID PluginContext,
     ULONG Flags,
     ULONGLONG ErrorRecordId
    );
typedef
NTSTATUS
(*PSHED_PI_RETRIEVE_ERROR_INFO) (
     PVOID PluginContext,
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
     ULONGLONG BufferLength,
     PWHEA_ERROR_PACKET Packet
    );
typedef
NTSTATUS
(*PSHED_PI_FINALIZE_ERROR_RECORD) (
     PVOID PluginContext,
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
     ULONG BufferLength,
     PWHEA_ERROR_RECORD ErrorRecord
    );
typedef
NTSTATUS
(*PSHED_PI_CLEAR_ERROR_STATUS) (
     PVOID PluginContext,
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
     ULONG BufferLength,
     PWHEA_ERROR_RECORD ErrorRecord
    );
typedef
NTSTATUS
(*PSHED_PI_ATTEMPT_ERROR_RECOVERY) (
     PVOID PluginContext,
     ULONG BufferLength,
     PWHEA_ERROR_RECORD ErrorRecord
    );
typedef
NTSTATUS
(*PSHED_PI_GET_INJECTION_CAPABILITIES) (
     PVOID PluginContext,
     PWHEA_ERROR_INJECTION_CAPABILITIES Capabilities
    );
typedef
NTSTATUS
(*PSHED_PI_INJECT_ERROR) (
     PVOID PluginContext,
     ULONGLONG ErrorType,
     ULONGLONG Parameter1,
     ULONGLONG Parameter2,
     ULONGLONG Parameter3,
     ULONGLONG Parameter4
    );
typedef struct _WHEA_PSHED_PLUGIN_CALLBACKS {
    PSHED_PI_GET_ALL_ERROR_SOURCES GetAllErrorSources;
    PVOID Reserved;
    PSHED_PI_GET_ERROR_SOURCE_INFO GetErrorSourceInfo;
    PSHED_PI_SET_ERROR_SOURCE_INFO SetErrorSourceInfo;
    PSHED_PI_ENABLE_ERROR_SOURCE EnableErrorSource;
    PSHED_PI_DISABLE_ERROR_SOURCE DisableErrorSource;
    PSHED_PI_WRITE_ERROR_RECORD WriteErrorRecord;
    PSHED_PI_READ_ERROR_RECORD ReadErrorRecord;
    PSHED_PI_CLEAR_ERROR_RECORD ClearErrorRecord;
    PSHED_PI_RETRIEVE_ERROR_INFO RetrieveErrorInfo;
    PSHED_PI_FINALIZE_ERROR_RECORD FinalizeErrorRecord;
    PSHED_PI_CLEAR_ERROR_STATUS ClearErrorStatus;
    PSHED_PI_ATTEMPT_ERROR_RECOVERY AttemptRecovery;
    PSHED_PI_GET_INJECTION_CAPABILITIES GetInjectionCapabilities;
    PSHED_PI_INJECT_ERROR InjectError;
} WHEA_PSHED_PLUGIN_CALLBACKS,
 *PWHEA_PSHED_PLUGIN_CALLBACKS;
typedef struct _WHEA_PSHED_PLUGIN_REGISTRATION_PACKET {
    ULONG Length;
    ULONG Version;
    PVOID Context;
    ULONG FunctionalAreaMask;
    ULONG Reserved;
    WHEA_PSHED_PLUGIN_CALLBACKS Callbacks;
} WHEA_PSHED_PLUGIN_REGISTRATION_PACKET,
  *PWHEA_PSHED_PLUGIN_REGISTRATION_PACKET;
typedef struct _WHEA_PSHED_INIT_PACKET {
    ULONG Size;
    ULONG Version;
} WHEA_PSHED_INIT_PACKET, *PWHEA_PSHED_INIT_PACKET;
PVOID
PshedAllocateMemory (
     ULONG Size
    );
NTSTATUS
PshedAttemptErrorRecovery(
     PWHEA_ERROR_RECORD ErrorRecord
    );
void
PshedBugCheckSystem(
     PWHEA_ERROR_RECORD ErrorRecord
    );
NTSTATUS
PshedClearErrorRecord(
     ULONG Flags,
     ULONGLONG RecordId
    );
NTSTATUS
PshedDisableErrorSource (
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
NTSTATUS
PshedEnableErrorSource (
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
NTSTATUS
PshedFinalizeErrorRecord(
     PWHEA_ERROR_RECORD ErrorRecord,
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
void
PshedFreeMemory (
     PVOID Address
    );
NTSTATUS
PshedGetAllErrorSources (
     PULONG ErrorSourceCount,
     PUCHAR *Buffer,
     PULONG Length
    );
NTSTATUS
PshedGetBootErrorPacket (
     PULONG BootPacketLength,
     PWHEA_ERROR_PACKET *BootPacket
    );
NTSTATUS
PshedGetErrorSourceInfo (
     WHEA_ERROR_SOURCE_TYPE ErrorSource,
     PWHEA_ERROR_SOURCE_DESCRIPTOR Descriptor
    );
NTSTATUS
PshedGetInjectionCapabilities (
     PWHEA_ERROR_INJECTION_CAPABILITIES Capabilities
    );
void
PshedHandleCorrectedError (
     PWHEA_ERROR_PACKET Packet
    );
NTSTATUS
PshedInjectError (
     ULONG ErrorType,
     ULONGLONG Parameter1,
     ULONGLONG Parameter2,
     ULONGLONG Parameter3,
     ULONGLONG Parameter4
    );
BOOLEAN
PshedIsSystemWheaEnabled (
    void
    );
NTSTATUS
PshedReadErrorRecord(
     ULONG Flags,
     ULONGLONG ErrorRecordId,
     PULONGLONG NextErrorRecordId,
     PULONG RecordLength,
     PWHEA_ERROR_RECORD *ErrorRecord
    );
NTSTATUS
PshedRegisterPlugin (
     PWHEA_PSHED_PLUGIN_REGISTRATION_PACKET Packet
    );
NTSTATUS
PshedRetrieveErrorInfo (
     PWHEA_ERROR_PACKET ErrorPkt,
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
NTSTATUS
PshedSetErrorSourceInfo (
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource
    );
BOOLEAN
PshedSynchronizeExecution (
     PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
     PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
     PVOID SynchronizeContext
    );
NTSTATUS
PshedWriteErrorRecord(
     ULONG Flags,
     ULONG RecordLength,
     PWHEA_ERROR_RECORD ErrorRecord
    );
#pragma warning(pop)
typedef void (*WDFFUNC) (void);
extern WDFFUNC WdfFunctions [];
typedef UCHAR BYTE;
typedef enum _WDF_TRI_STATE {
    WdfFalse = 0,
    WdfTrue = 1,
    WdfUseDefault = 2,
} WDF_TRI_STATE, *PWDF_TRI_STATE;
typedef PVOID WDFCONTEXT;
typedef struct WDFDEVICE_INIT *PWDFDEVICE_INIT;
typedef struct _WDF_OBJECT_ATTRIBUTES *PWDF_OBJECT_ATTRIBUTES;
typedef HANDLE WDFOBJECT, *PWDFOBJECT;
struct WDFDRIVER__{int unused;}; typedef struct WDFDRIVER__ *WDFDRIVER;
struct WDFDEVICE__{int unused;}; typedef struct WDFDEVICE__ *WDFDEVICE;
struct WDFWMIPROVIDER__{int unused;}; typedef struct WDFWMIPROVIDER__ *WDFWMIPROVIDER;
struct WDFWMIINSTANCE__{int unused;}; typedef struct WDFWMIINSTANCE__ *WDFWMIINSTANCE;
struct WDFQUEUE__{int unused;}; typedef struct WDFQUEUE__ *WDFQUEUE;
struct WDFREQUEST__{int unused;}; typedef struct WDFREQUEST__ *WDFREQUEST;
struct WDFFILEOBJECT__{int unused;}; typedef struct WDFFILEOBJECT__ *WDFFILEOBJECT;
struct WDFDPC__{int unused;}; typedef struct WDFDPC__ *WDFDPC;
struct WDFTIMER__{int unused;}; typedef struct WDFTIMER__ *WDFTIMER;
struct WDFWORKITEM__{int unused;}; typedef struct WDFWORKITEM__ *WDFWORKITEM;
struct WDFINTERRUPT__{int unused;}; typedef struct WDFINTERRUPT__ *WDFINTERRUPT;
struct WDFWAITLOCK__{int unused;}; typedef struct WDFWAITLOCK__ *WDFWAITLOCK;
struct WDFSPINLOCK__{int unused;}; typedef struct WDFSPINLOCK__ *WDFSPINLOCK;
struct WDFMEMORY__{int unused;}; typedef struct WDFMEMORY__ *WDFMEMORY;
struct WDFLOOKASIDE__{int unused;}; typedef struct WDFLOOKASIDE__ *WDFLOOKASIDE;
struct WDFIOTARGET__{int unused;}; typedef struct WDFIOTARGET__ *WDFIOTARGET;
struct WDFUSBDEVICE__{int unused;}; typedef struct WDFUSBDEVICE__ *WDFUSBDEVICE;
struct WDFUSBINTERFACE__{int unused;}; typedef struct WDFUSBINTERFACE__ *WDFUSBINTERFACE;
struct WDFUSBPIPE__{int unused;}; typedef struct WDFUSBPIPE__ *WDFUSBPIPE;
struct WDFDMAENABLER__{int unused;}; typedef struct WDFDMAENABLER__ *WDFDMAENABLER;
struct WDFDMATRANSACTION__{int unused;}; typedef struct WDFDMATRANSACTION__ *WDFDMATRANSACTION;
struct WDFCOMMONBUFFER__{int unused;}; typedef struct WDFCOMMONBUFFER__ *WDFCOMMONBUFFER;
struct WDFKEY__{int unused;}; typedef struct WDFKEY__ *WDFKEY;
struct WDFSTRING__{int unused;}; typedef struct WDFSTRING__ *WDFSTRING;
struct WDFCOLLECTION__{int unused;}; typedef struct WDFCOLLECTION__ *WDFCOLLECTION;
struct WDFCHILDLIST__{int unused;}; typedef struct WDFCHILDLIST__ *WDFCHILDLIST;
struct WDFIORESREQLIST__{int unused;}; typedef struct WDFIORESREQLIST__ *WDFIORESREQLIST;
struct WDFIORESLIST__{int unused;}; typedef struct WDFIORESLIST__ *WDFIORESLIST;
struct WDFCMRESLIST__{int unused;}; typedef struct WDFCMRESLIST__ *WDFCMRESLIST;
typedef struct _WDF_DRIVER_GLOBALS {
    WDFDRIVER Driver;
    ULONG DriverFlags;
    ULONG DriverTag;
    CHAR DriverName[(32)];
    BOOLEAN DisplaceDriverUnload;
} WDF_DRIVER_GLOBALS, *PWDF_DRIVER_GLOBALS;
extern PWDF_DRIVER_GLOBALS WdfDriverGlobals;
typedef enum _WDFFUNCENUM {
    WdfChildListCreateTableIndex = 0,
    WdfChildListGetDeviceTableIndex = 1,
    WdfChildListRetrievePdoTableIndex = 2,
    WdfChildListRetrieveAddressDescriptionTableIndex = 3,
    WdfChildListBeginScanTableIndex = 4,
    WdfChildListEndScanTableIndex = 5,
    WdfChildListBeginIterationTableIndex = 6,
    WdfChildListRetrieveNextDeviceTableIndex = 7,
    WdfChildListEndIterationTableIndex = 8,
    WdfChildListAddOrUpdateChildDescriptionAsPresentTableIndex = 9,
    WdfChildListUpdateChildDescriptionAsMissingTableIndex = 10,
    WdfChildListUpdateAllChildDescriptionsAsPresentTableIndex = 11,
    WdfChildListRequestChildEjectTableIndex = 12,
    WdfCollectionCreateTableIndex = 13,
    WdfCollectionGetCountTableIndex = 14,
    WdfCollectionAddTableIndex = 15,
    WdfCollectionRemoveTableIndex = 16,
    WdfCollectionRemoveItemTableIndex = 17,
    WdfCollectionGetItemTableIndex = 18,
    WdfCollectionGetFirstItemTableIndex = 19,
    WdfCollectionGetLastItemTableIndex = 20,
    WdfCommonBufferCreateTableIndex = 21,
    WdfCommonBufferGetAlignedVirtualAddressTableIndex = 22,
    WdfCommonBufferGetAlignedLogicalAddressTableIndex = 23,
    WdfCommonBufferGetLengthTableIndex = 24,
    WdfControlDeviceInitAllocateTableIndex = 25,
    WdfControlDeviceInitSetShutdownNotificationTableIndex = 26,
    WdfControlFinishInitializingTableIndex = 27,
    WdfDeviceGetDeviceStateTableIndex = 28,
    WdfDeviceSetDeviceStateTableIndex = 29,
    WdfWdmDeviceGetWdfDeviceHandleTableIndex = 30,
    WdfDeviceWdmGetDeviceObjectTableIndex = 31,
    WdfDeviceWdmGetAttachedDeviceTableIndex = 32,
    WdfDeviceWdmGetPhysicalDeviceTableIndex = 33,
    WdfDeviceWdmDispatchPreprocessedIrpTableIndex = 34,
    WdfDeviceAddDependentUsageDeviceObjectTableIndex = 35,
    WdfDeviceAddRemovalRelationsPhysicalDeviceTableIndex = 36,
    WdfDeviceRemoveRemovalRelationsPhysicalDeviceTableIndex = 37,
    WdfDeviceClearRemovalRelationsDevicesTableIndex = 38,
    WdfDeviceGetDriverTableIndex = 39,
    WdfDeviceRetrieveDeviceNameTableIndex = 40,
    WdfDeviceAssignMofResourceNameTableIndex = 41,
    WdfDeviceGetIoTargetTableIndex = 42,
    WdfDeviceGetDevicePnpStateTableIndex = 43,
    WdfDeviceGetDevicePowerStateTableIndex = 44,
    WdfDeviceGetDevicePowerPolicyStateTableIndex = 45,
    WdfDeviceAssignS0IdleSettingsTableIndex = 46,
    WdfDeviceAssignSxWakeSettingsTableIndex = 47,
    WdfDeviceOpenRegistryKeyTableIndex = 48,
    WdfDeviceSetSpecialFileSupportTableIndex = 49,
    WdfDeviceSetCharacteristicsTableIndex = 50,
    WdfDeviceGetCharacteristicsTableIndex = 51,
    WdfDeviceGetAlignmentRequirementTableIndex = 52,
    WdfDeviceSetAlignmentRequirementTableIndex = 53,
    WdfDeviceInitFreeTableIndex = 54,
    WdfDeviceInitSetPnpPowerEventCallbacksTableIndex = 55,
    WdfDeviceInitSetPowerPolicyEventCallbacksTableIndex = 56,
    WdfDeviceInitSetPowerPolicyOwnershipTableIndex = 57,
    WdfDeviceInitRegisterPnpStateChangeCallbackTableIndex = 58,
    WdfDeviceInitRegisterPowerStateChangeCallbackTableIndex = 59,
    WdfDeviceInitRegisterPowerPolicyStateChangeCallbackTableIndex = 60,
    WdfDeviceInitSetIoTypeTableIndex = 61,
    WdfDeviceInitSetExclusiveTableIndex = 62,
    WdfDeviceInitSetPowerNotPageableTableIndex = 63,
    WdfDeviceInitSetPowerPageableTableIndex = 64,
    WdfDeviceInitSetPowerInrushTableIndex = 65,
    WdfDeviceInitSetDeviceTypeTableIndex = 66,
    WdfDeviceInitAssignNameTableIndex = 67,
    WdfDeviceInitAssignSDDLStringTableIndex = 68,
    WdfDeviceInitSetDeviceClassTableIndex = 69,
    WdfDeviceInitSetCharacteristicsTableIndex = 70,
    WdfDeviceInitSetFileObjectConfigTableIndex = 71,
    WdfDeviceInitSetRequestAttributesTableIndex = 72,
    WdfDeviceInitAssignWdmIrpPreprocessCallbackTableIndex = 73,
    WdfDeviceInitSetIoInCallerContextCallbackTableIndex = 74,
    WdfDeviceCreateTableIndex = 75,
    WdfDeviceSetStaticStopRemoveTableIndex = 76,
    WdfDeviceCreateDeviceInterfaceTableIndex = 77,
    WdfDeviceSetDeviceInterfaceStateTableIndex = 78,
    WdfDeviceRetrieveDeviceInterfaceStringTableIndex = 79,
    WdfDeviceCreateSymbolicLinkTableIndex = 80,
    WdfDeviceQueryPropertyTableIndex = 81,
    WdfDeviceAllocAndQueryPropertyTableIndex = 82,
    WdfDeviceSetPnpCapabilitiesTableIndex = 83,
    WdfDeviceSetPowerCapabilitiesTableIndex = 84,
    WdfDeviceSetBusInformationForChildrenTableIndex = 85,
    WdfDeviceIndicateWakeStatusTableIndex = 86,
    WdfDeviceSetFailedTableIndex = 87,
    WdfDeviceStopIdleTableIndex = 88,
    WdfDeviceResumeIdleTableIndex = 89,
    WdfDeviceGetFileObjectTableIndex = 90,
    WdfDeviceEnqueueRequestTableIndex = 91,
    WdfDeviceGetDefaultQueueTableIndex = 92,
    WdfDeviceConfigureRequestDispatchingTableIndex = 93,
    WdfDmaEnablerCreateTableIndex = 94,
    WdfDmaEnablerGetMaximumLengthTableIndex = 95,
    WdfDmaEnablerGetMaximumScatterGatherElementsTableIndex = 96,
    WdfDmaEnablerSetMaximumScatterGatherElementsTableIndex = 97,
    WdfDmaTransactionCreateTableIndex = 98,
    WdfDmaTransactionInitializeTableIndex = 99,
    WdfDmaTransactionInitializeUsingRequestTableIndex = 100,
    WdfDmaTransactionExecuteTableIndex = 101,
    WdfDmaTransactionReleaseTableIndex = 102,
    WdfDmaTransactionDmaCompletedTableIndex = 103,
    WdfDmaTransactionDmaCompletedWithLengthTableIndex = 104,
    WdfDmaTransactionDmaCompletedFinalTableIndex = 105,
    WdfDmaTransactionGetBytesTransferredTableIndex = 106,
    WdfDmaTransactionSetMaximumLengthTableIndex = 107,
    WdfDmaTransactionGetRequestTableIndex = 108,
    WdfDmaTransactionGetCurrentDmaTransferLengthTableIndex = 109,
    WdfDmaTransactionGetDeviceTableIndex = 110,
    WdfDpcCreateTableIndex = 111,
    WdfDpcEnqueueTableIndex = 112,
    WdfDpcCancelTableIndex = 113,
    WdfDpcGetParentObjectTableIndex = 114,
    WdfDpcWdmGetDpcTableIndex = 115,
    WdfDriverCreateTableIndex = 116,
    WdfDriverGetRegistryPathTableIndex = 117,
    WdfDriverWdmGetDriverObjectTableIndex = 118,
    WdfDriverOpenParametersRegistryKeyTableIndex = 119,
    WdfWdmDriverGetWdfDriverHandleTableIndex = 120,
    WdfDriverRegisterTraceInfoTableIndex = 121,
    WdfDriverRetrieveVersionStringTableIndex = 122,
    WdfDriverIsVersionAvailableTableIndex = 123,
    WdfFdoInitWdmGetPhysicalDeviceTableIndex = 124,
    WdfFdoInitOpenRegistryKeyTableIndex = 125,
    WdfFdoInitQueryPropertyTableIndex = 126,
    WdfFdoInitAllocAndQueryPropertyTableIndex = 127,
    WdfFdoInitSetEventCallbacksTableIndex = 128,
    WdfFdoInitSetFilterTableIndex = 129,
    WdfFdoInitSetDefaultChildListConfigTableIndex = 130,
    WdfFdoQueryForInterfaceTableIndex = 131,
    WdfFdoGetDefaultChildListTableIndex = 132,
    WdfFdoAddStaticChildTableIndex = 133,
    WdfFdoLockStaticChildListForIterationTableIndex = 134,
    WdfFdoRetrieveNextStaticChildTableIndex = 135,
    WdfFdoUnlockStaticChildListFromIterationTableIndex = 136,
    WdfFileObjectGetFileNameTableIndex = 137,
    WdfFileObjectGetFlagsTableIndex = 138,
    WdfFileObjectGetDeviceTableIndex = 139,
    WdfFileObjectWdmGetFileObjectTableIndex = 140,
    WdfInterruptCreateTableIndex = 141,
    WdfInterruptQueueDpcForIsrTableIndex = 142,
    WdfInterruptSynchronizeTableIndex = 143,
    WdfInterruptAcquireLockTableIndex = 144,
    WdfInterruptReleaseLockTableIndex = 145,
    WdfInterruptEnableTableIndex = 146,
    WdfInterruptDisableTableIndex = 147,
    WdfInterruptWdmGetInterruptTableIndex = 148,
    WdfInterruptGetInfoTableIndex = 149,
    WdfInterruptSetPolicyTableIndex = 150,
    WdfInterruptGetDeviceTableIndex = 151,
    WdfIoQueueCreateTableIndex = 152,
    WdfIoQueueGetStateTableIndex = 153,
    WdfIoQueueStartTableIndex = 154,
    WdfIoQueueStopTableIndex = 155,
    WdfIoQueueStopSynchronouslyTableIndex = 156,
    WdfIoQueueGetDeviceTableIndex = 157,
    WdfIoQueueRetrieveNextRequestTableIndex = 158,
    WdfIoQueueRetrieveRequestByFileObjectTableIndex = 159,
    WdfIoQueueFindRequestTableIndex = 160,
    WdfIoQueueRetrieveFoundRequestTableIndex = 161,
    WdfIoQueueDrainSynchronouslyTableIndex = 162,
    WdfIoQueueDrainTableIndex = 163,
    WdfIoQueuePurgeSynchronouslyTableIndex = 164,
    WdfIoQueuePurgeTableIndex = 165,
    WdfIoQueueReadyNotifyTableIndex = 166,
    WdfIoTargetCreateTableIndex = 167,
    WdfIoTargetOpenTableIndex = 168,
    WdfIoTargetCloseForQueryRemoveTableIndex = 169,
    WdfIoTargetCloseTableIndex = 170,
    WdfIoTargetStartTableIndex = 171,
    WdfIoTargetStopTableIndex = 172,
    WdfIoTargetGetStateTableIndex = 173,
    WdfIoTargetGetDeviceTableIndex = 174,
    WdfIoTargetQueryTargetPropertyTableIndex = 175,
    WdfIoTargetAllocAndQueryTargetPropertyTableIndex = 176,
    WdfIoTargetQueryForInterfaceTableIndex = 177,
    WdfIoTargetWdmGetTargetDeviceObjectTableIndex = 178,
    WdfIoTargetWdmGetTargetPhysicalDeviceTableIndex = 179,
    WdfIoTargetWdmGetTargetFileObjectTableIndex = 180,
    WdfIoTargetWdmGetTargetFileHandleTableIndex = 181,
    WdfIoTargetSendReadSynchronouslyTableIndex = 182,
    WdfIoTargetFormatRequestForReadTableIndex = 183,
    WdfIoTargetSendWriteSynchronouslyTableIndex = 184,
    WdfIoTargetFormatRequestForWriteTableIndex = 185,
    WdfIoTargetSendIoctlSynchronouslyTableIndex = 186,
    WdfIoTargetFormatRequestForIoctlTableIndex = 187,
    WdfIoTargetSendInternalIoctlSynchronouslyTableIndex = 188,
    WdfIoTargetFormatRequestForInternalIoctlTableIndex = 189,
    WdfIoTargetSendInternalIoctlOthersSynchronouslyTableIndex = 190,
    WdfIoTargetFormatRequestForInternalIoctlOthersTableIndex = 191,
    WdfMemoryCreateTableIndex = 192,
    WdfMemoryCreatePreallocatedTableIndex = 193,
    WdfMemoryGetBufferTableIndex = 194,
    WdfMemoryAssignBufferTableIndex = 195,
    WdfMemoryCopyToBufferTableIndex = 196,
    WdfMemoryCopyFromBufferTableIndex = 197,
    WdfLookasideListCreateTableIndex = 198,
    WdfMemoryCreateFromLookasideTableIndex = 199,
    WdfDeviceMiniportCreateTableIndex = 200,
    WdfDriverMiniportUnloadTableIndex = 201,
    WdfObjectGetTypedContextWorkerTableIndex = 202,
    WdfObjectAllocateContextTableIndex = 203,
    WdfObjectContextGetObjectTableIndex = 204,
    WdfObjectReferenceActualTableIndex = 205,
    WdfObjectDereferenceActualTableIndex = 206,
    WdfObjectCreateTableIndex = 207,
    WdfObjectDeleteTableIndex = 208,
    WdfObjectQueryTableIndex = 209,
    WdfPdoInitAllocateTableIndex = 210,
    WdfPdoInitSetEventCallbacksTableIndex = 211,
    WdfPdoInitAssignDeviceIDTableIndex = 212,
    WdfPdoInitAssignInstanceIDTableIndex = 213,
    WdfPdoInitAddHardwareIDTableIndex = 214,
    WdfPdoInitAddCompatibleIDTableIndex = 215,
    WdfPdoInitAddDeviceTextTableIndex = 216,
    WdfPdoInitSetDefaultLocaleTableIndex = 217,
    WdfPdoInitAssignRawDeviceTableIndex = 218,
    WdfPdoMarkMissingTableIndex = 219,
    WdfPdoRequestEjectTableIndex = 220,
    WdfPdoGetParentTableIndex = 221,
    WdfPdoRetrieveIdentificationDescriptionTableIndex = 222,
    WdfPdoRetrieveAddressDescriptionTableIndex = 223,
    WdfPdoUpdateAddressDescriptionTableIndex = 224,
    WdfPdoAddEjectionRelationsPhysicalDeviceTableIndex = 225,
    WdfPdoRemoveEjectionRelationsPhysicalDeviceTableIndex = 226,
    WdfPdoClearEjectionRelationsDevicesTableIndex = 227,
    WdfDeviceAddQueryInterfaceTableIndex = 228,
    WdfRegistryOpenKeyTableIndex = 229,
    WdfRegistryCreateKeyTableIndex = 230,
    WdfRegistryCloseTableIndex = 231,
    WdfRegistryWdmGetHandleTableIndex = 232,
    WdfRegistryRemoveKeyTableIndex = 233,
    WdfRegistryRemoveValueTableIndex = 234,
    WdfRegistryQueryValueTableIndex = 235,
    WdfRegistryQueryMemoryTableIndex = 236,
    WdfRegistryQueryMultiStringTableIndex = 237,
    WdfRegistryQueryUnicodeStringTableIndex = 238,
    WdfRegistryQueryStringTableIndex = 239,
    WdfRegistryQueryULongTableIndex = 240,
    WdfRegistryAssignValueTableIndex = 241,
    WdfRegistryAssignMemoryTableIndex = 242,
    WdfRegistryAssignMultiStringTableIndex = 243,
    WdfRegistryAssignUnicodeStringTableIndex = 244,
    WdfRegistryAssignStringTableIndex = 245,
    WdfRegistryAssignULongTableIndex = 246,
    WdfRequestCreateTableIndex = 247,
    WdfRequestCreateFromIrpTableIndex = 248,
    WdfRequestReuseTableIndex = 249,
    WdfRequestChangeTargetTableIndex = 250,
    WdfRequestFormatRequestUsingCurrentTypeTableIndex = 251,
    WdfRequestWdmFormatUsingStackLocationTableIndex = 252,
    WdfRequestSendTableIndex = 253,
    WdfRequestGetStatusTableIndex = 254,
    WdfRequestMarkCancelableTableIndex = 255,
    WdfRequestUnmarkCancelableTableIndex = 256,
    WdfRequestIsCanceledTableIndex = 257,
    WdfRequestCancelSentRequestTableIndex = 258,
    WdfRequestIsFrom32BitProcessTableIndex = 259,
    WdfRequestSetCompletionRoutineTableIndex = 260,
    WdfRequestGetCompletionParamsTableIndex = 261,
    WdfRequestAllocateTimerTableIndex = 262,
    WdfRequestCompleteTableIndex = 263,
    WdfRequestCompleteWithPriorityBoostTableIndex = 264,
    WdfRequestCompleteWithInformationTableIndex = 265,
    WdfRequestGetParametersTableIndex = 266,
    WdfRequestRetrieveInputMemoryTableIndex = 267,
    WdfRequestRetrieveOutputMemoryTableIndex = 268,
    WdfRequestRetrieveInputBufferTableIndex = 269,
    WdfRequestRetrieveOutputBufferTableIndex = 270,
    WdfRequestRetrieveInputWdmMdlTableIndex = 271,
    WdfRequestRetrieveOutputWdmMdlTableIndex = 272,
    WdfRequestRetrieveUnsafeUserInputBufferTableIndex = 273,
    WdfRequestRetrieveUnsafeUserOutputBufferTableIndex = 274,
    WdfRequestSetInformationTableIndex = 275,
    WdfRequestGetInformationTableIndex = 276,
    WdfRequestGetFileObjectTableIndex = 277,
    WdfRequestProbeAndLockUserBufferForReadTableIndex = 278,
    WdfRequestProbeAndLockUserBufferForWriteTableIndex = 279,
    WdfRequestGetRequestorModeTableIndex = 280,
    WdfRequestForwardToIoQueueTableIndex = 281,
    WdfRequestGetIoQueueTableIndex = 282,
    WdfRequestRequeueTableIndex = 283,
    WdfRequestStopAcknowledgeTableIndex = 284,
    WdfRequestWdmGetIrpTableIndex = 285,
    WdfIoResourceRequirementsListSetSlotNumberTableIndex = 286,
    WdfIoResourceRequirementsListSetInterfaceTypeTableIndex = 287,
    WdfIoResourceRequirementsListAppendIoResListTableIndex = 288,
    WdfIoResourceRequirementsListInsertIoResListTableIndex = 289,
    WdfIoResourceRequirementsListGetCountTableIndex = 290,
    WdfIoResourceRequirementsListGetIoResListTableIndex = 291,
    WdfIoResourceRequirementsListRemoveTableIndex = 292,
    WdfIoResourceRequirementsListRemoveByIoResListTableIndex = 293,
    WdfIoResourceListCreateTableIndex = 294,
    WdfIoResourceListAppendDescriptorTableIndex = 295,
    WdfIoResourceListInsertDescriptorTableIndex = 296,
    WdfIoResourceListUpdateDescriptorTableIndex = 297,
    WdfIoResourceListGetCountTableIndex = 298,
    WdfIoResourceListGetDescriptorTableIndex = 299,
    WdfIoResourceListRemoveTableIndex = 300,
    WdfIoResourceListRemoveByDescriptorTableIndex = 301,
    WdfCmResourceListAppendDescriptorTableIndex = 302,
    WdfCmResourceListInsertDescriptorTableIndex = 303,
    WdfCmResourceListGetCountTableIndex = 304,
    WdfCmResourceListGetDescriptorTableIndex = 305,
    WdfCmResourceListRemoveTableIndex = 306,
    WdfCmResourceListRemoveByDescriptorTableIndex = 307,
    WdfStringCreateTableIndex = 308,
    WdfStringGetUnicodeStringTableIndex = 309,
    WdfObjectAcquireLockTableIndex = 310,
    WdfObjectReleaseLockTableIndex = 311,
    WdfWaitLockCreateTableIndex = 312,
    WdfWaitLockAcquireTableIndex = 313,
    WdfWaitLockReleaseTableIndex = 314,
    WdfSpinLockCreateTableIndex = 315,
    WdfSpinLockAcquireTableIndex = 316,
    WdfSpinLockReleaseTableIndex = 317,
    WdfTimerCreateTableIndex = 318,
    WdfTimerStartTableIndex = 319,
    WdfTimerStopTableIndex = 320,
    WdfTimerGetParentObjectTableIndex = 321,
    WdfUsbTargetDeviceCreateTableIndex = 322,
    WdfUsbTargetDeviceRetrieveInformationTableIndex = 323,
    WdfUsbTargetDeviceGetDeviceDescriptorTableIndex = 324,
    WdfUsbTargetDeviceRetrieveConfigDescriptorTableIndex = 325,
    WdfUsbTargetDeviceQueryStringTableIndex = 326,
    WdfUsbTargetDeviceAllocAndQueryStringTableIndex = 327,
    WdfUsbTargetDeviceFormatRequestForStringTableIndex = 328,
    WdfUsbTargetDeviceGetNumInterfacesTableIndex = 329,
    WdfUsbTargetDeviceSelectConfigTableIndex = 330,
    WdfUsbTargetDeviceWdmGetConfigurationHandleTableIndex = 331,
    WdfUsbTargetDeviceRetrieveCurrentFrameNumberTableIndex = 332,
    WdfUsbTargetDeviceSendControlTransferSynchronouslyTableIndex = 333,
    WdfUsbTargetDeviceFormatRequestForControlTransferTableIndex = 334,
    WdfUsbTargetDeviceIsConnectedSynchronousTableIndex = 335,
    WdfUsbTargetDeviceResetPortSynchronouslyTableIndex = 336,
    WdfUsbTargetDeviceCyclePortSynchronouslyTableIndex = 337,
    WdfUsbTargetDeviceFormatRequestForCyclePortTableIndex = 338,
    WdfUsbTargetDeviceSendUrbSynchronouslyTableIndex = 339,
    WdfUsbTargetDeviceFormatRequestForUrbTableIndex = 340,
    WdfUsbTargetPipeGetInformationTableIndex = 341,
    WdfUsbTargetPipeIsInEndpointTableIndex = 342,
    WdfUsbTargetPipeIsOutEndpointTableIndex = 343,
    WdfUsbTargetPipeGetTypeTableIndex = 344,
    WdfUsbTargetPipeSetNoMaximumPacketSizeCheckTableIndex = 345,
    WdfUsbTargetPipeWriteSynchronouslyTableIndex = 346,
    WdfUsbTargetPipeFormatRequestForWriteTableIndex = 347,
    WdfUsbTargetPipeReadSynchronouslyTableIndex = 348,
    WdfUsbTargetPipeFormatRequestForReadTableIndex = 349,
    WdfUsbTargetPipeConfigContinuousReaderTableIndex = 350,
    WdfUsbTargetPipeAbortSynchronouslyTableIndex = 351,
    WdfUsbTargetPipeFormatRequestForAbortTableIndex = 352,
    WdfUsbTargetPipeResetSynchronouslyTableIndex = 353,
    WdfUsbTargetPipeFormatRequestForResetTableIndex = 354,
    WdfUsbTargetPipeSendUrbSynchronouslyTableIndex = 355,
    WdfUsbTargetPipeFormatRequestForUrbTableIndex = 356,
    WdfUsbInterfaceGetInterfaceNumberTableIndex = 357,
    WdfUsbInterfaceGetNumEndpointsTableIndex = 358,
    WdfUsbInterfaceGetDescriptorTableIndex = 359,
    WdfUsbInterfaceSelectSettingTableIndex = 360,
    WdfUsbInterfaceGetEndpointInformationTableIndex = 361,
    WdfUsbTargetDeviceGetInterfaceTableIndex = 362,
    WdfUsbInterfaceGetConfiguredSettingIndexTableIndex = 363,
    WdfUsbInterfaceGetNumConfiguredPipesTableIndex = 364,
    WdfUsbInterfaceGetConfiguredPipeTableIndex = 365,
    WdfUsbTargetPipeWdmGetPipeHandleTableIndex = 366,
    WdfVerifierDbgBreakPointTableIndex = 367,
    WdfVerifierKeBugCheckTableIndex = 368,
    WdfWmiProviderCreateTableIndex = 369,
    WdfWmiProviderGetDeviceTableIndex = 370,
    WdfWmiProviderIsEnabledTableIndex = 371,
    WdfWmiProviderGetTracingHandleTableIndex = 372,
    WdfWmiInstanceCreateTableIndex = 373,
    WdfWmiInstanceRegisterTableIndex = 374,
    WdfWmiInstanceDeregisterTableIndex = 375,
    WdfWmiInstanceGetDeviceTableIndex = 376,
    WdfWmiInstanceGetProviderTableIndex = 377,
    WdfWmiInstanceFireEventTableIndex = 378,
    WdfWorkItemCreateTableIndex = 379,
    WdfWorkItemEnqueueTableIndex = 380,
    WdfWorkItemGetParentObjectTableIndex = 381,
    WdfWorkItemFlushTableIndex = 382,
    WdfCommonBufferCreateWithConfigTableIndex = 383,
    WdfDmaEnablerGetFragmentLengthTableIndex = 384,
    WdfDmaEnablerWdmGetDmaAdapterTableIndex = 385,
    WdfUsbInterfaceGetNumSettingsTableIndex = 386,
    WdfFunctionTableNumEntries = 387,
} WDFFUNCENUM;
__declspec(dllimport)
void
__stdcall
RtlAssert(
     PVOID FailedAssertion,
     PVOID FileName,
     ULONG LineNumber,
     PSTR Message
    );
typedef
void
(*PFN_WDFVERIFIERDBGBREAKPOINT)(
    PWDF_DRIVER_GLOBALS DriverGlobals
    );
void
__forceinline
WdfVerifierDbgBreakPoint(
    )
{
    ((PFN_WDFVERIFIERDBGBREAKPOINT) WdfFunctions[WdfVerifierDbgBreakPointTableIndex])(WdfDriverGlobals);
}
typedef
void
(*PFN_WDFVERIFIERKEBUGCHECK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    ULONG BugCheckCode,
    ULONG_PTR BugCheckParameter1,
    ULONG_PTR BugCheckParameter2,
    ULONG_PTR BugCheckParameter3,
    ULONG_PTR BugCheckParameter4
    );
void
__forceinline
WdfVerifierKeBugCheck(
    ULONG BugCheckCode,
    ULONG_PTR BugCheckParameter1,
    ULONG_PTR BugCheckParameter2,
    ULONG_PTR BugCheckParameter3,
    ULONG_PTR BugCheckParameter4
    )
{
    ((PFN_WDFVERIFIERKEBUGCHECK) WdfFunctions[WdfVerifierKeBugCheckTableIndex])(WdfDriverGlobals, BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
typedef enum _WDF_EXECUTION_LEVEL {
    WdfExecutionLevelInvalid = 0x00,
    WdfExecutionLevelInheritFromParent,
    WdfExecutionLevelPassive,
    WdfExecutionLevelDispatch,
} WDF_EXECUTION_LEVEL;
typedef enum _WDF_SYNCHRONIZATION_SCOPE {
    WdfSynchronizationScopeInvalid = 0x00,
    WdfSynchronizationScopeInheritFromParent,
    WdfSynchronizationScopeDevice,
    WdfSynchronizationScopeQueue,
    WdfSynchronizationScopeNone,
} WDF_SYNCHRONIZATION_SCOPE;
typedef
void
(EVT_WDF_OBJECT_CONTEXT_CLEANUP)(
     WDFOBJECT Object
    );
typedef EVT_WDF_OBJECT_CONTEXT_CLEANUP *PFN_WDF_OBJECT_CONTEXT_CLEANUP;
typedef
void
(EVT_WDF_OBJECT_CONTEXT_DESTROY)(
     WDFOBJECT Object
    );
typedef EVT_WDF_OBJECT_CONTEXT_DESTROY *PFN_WDF_OBJECT_CONTEXT_DESTROY;
typedef const struct _WDF_OBJECT_CONTEXT_TYPE_INFO *PCWDF_OBJECT_CONTEXT_TYPE_INFO;
typedef struct _WDF_OBJECT_ATTRIBUTES {
    ULONG Size;
    PFN_WDF_OBJECT_CONTEXT_CLEANUP EvtCleanupCallback;
    PFN_WDF_OBJECT_CONTEXT_DESTROY EvtDestroyCallback;
    WDF_EXECUTION_LEVEL ExecutionLevel;
    WDF_SYNCHRONIZATION_SCOPE SynchronizationScope;
    WDFOBJECT ParentObject;
    size_t ContextSizeOverride;
    PCWDF_OBJECT_CONTEXT_TYPE_INFO ContextTypeInfo;
} WDF_OBJECT_ATTRIBUTES, *PWDF_OBJECT_ATTRIBUTES;
void
__forceinline
WDF_OBJECT_ATTRIBUTES_INIT(
     PWDF_OBJECT_ATTRIBUTES Attributes
    )
{
    memset((Attributes),0,(sizeof(WDF_OBJECT_ATTRIBUTES)));
    Attributes->Size = sizeof(WDF_OBJECT_ATTRIBUTES);
    Attributes->ExecutionLevel = WdfExecutionLevelInheritFromParent;
    Attributes->SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
}
typedef
PCWDF_OBJECT_CONTEXT_TYPE_INFO
(__cdecl *PFN_GET_UNIQUE_CONTEXT_TYPE)(
    void
    );
typedef struct _WDF_OBJECT_CONTEXT_TYPE_INFO {
    ULONG Size;
    PCHAR ContextName;
    size_t ContextSize;
    PCWDF_OBJECT_CONTEXT_TYPE_INFO UniqueType;
    PFN_GET_UNIQUE_CONTEXT_TYPE EvtDriverGetUniqueContextType;
} WDF_OBJECT_CONTEXT_TYPE_INFO, *PWDF_OBJECT_CONTEXT_TYPE_INFO;
#pragma section(".kmdftypeinit$b", read, write)
#pragma section(".data")
typedef
PVOID
(__fastcall *PFN_WDFOBJECTGETTYPEDCONTEXTWORKER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFOBJECT Handle,
    PCWDF_OBJECT_CONTEXT_TYPE_INFO TypeInfo
    );
PVOID
__forceinline
WdfObjectGetTypedContextWorker(
    WDFOBJECT Handle,
    PCWDF_OBJECT_CONTEXT_TYPE_INFO TypeInfo
    )
{
    return ((PFN_WDFOBJECTGETTYPEDCONTEXTWORKER) WdfFunctions[WdfObjectGetTypedContextWorkerTableIndex])(WdfDriverGlobals, Handle, TypeInfo);
}
typedef
NTSTATUS
(*PFN_WDFOBJECTALLOCATECONTEXT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFOBJECT Handle,
    PWDF_OBJECT_ATTRIBUTES ContextAttributes,
    PVOID* Context
    );
NTSTATUS
__forceinline
WdfObjectAllocateContext(
    WDFOBJECT Handle,
    PWDF_OBJECT_ATTRIBUTES ContextAttributes,
    PVOID* Context
    )
{
    return ((PFN_WDFOBJECTALLOCATECONTEXT) WdfFunctions[WdfObjectAllocateContextTableIndex])(WdfDriverGlobals, Handle, ContextAttributes, Context);
}
typedef
WDFOBJECT
(__fastcall *PFN_WDFOBJECTCONTEXTGETOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PVOID ContextPointer
    );
WDFOBJECT
__forceinline
WdfObjectContextGetObject(
    PVOID ContextPointer
    )
{
    return ((PFN_WDFOBJECTCONTEXTGETOBJECT) WdfFunctions[WdfObjectContextGetObjectTableIndex])(WdfDriverGlobals, ContextPointer);
}
typedef
void
(*PFN_WDFOBJECTREFERENCEACTUAL)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFOBJECT Handle,
    PVOID Tag,
    LONG Line,
    PCHAR File
    );
void
__forceinline
WdfObjectReferenceActual(
    WDFOBJECT Handle,
    PVOID Tag,
    LONG Line,
    PCHAR File
    )
{
    ((PFN_WDFOBJECTREFERENCEACTUAL) WdfFunctions[WdfObjectReferenceActualTableIndex])(WdfDriverGlobals, Handle, Tag, Line, File);
}
typedef
void
(*PFN_WDFOBJECTDEREFERENCEACTUAL)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFOBJECT Handle,
    PVOID Tag,
    LONG Line,
    PCHAR File
    );
void
__forceinline
WdfObjectDereferenceActual(
    WDFOBJECT Handle,
    PVOID Tag,
    LONG Line,
    PCHAR File
    )
{
    ((PFN_WDFOBJECTDEREFERENCEACTUAL) WdfFunctions[WdfObjectDereferenceActualTableIndex])(WdfDriverGlobals, Handle, Tag, Line, File);
}
typedef
NTSTATUS
(*PFN_WDFOBJECTCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFOBJECT* Object
    );
NTSTATUS
__forceinline
WdfObjectCreate(
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFOBJECT* Object
    )
{
    return ((PFN_WDFOBJECTCREATE) WdfFunctions[WdfObjectCreateTableIndex])(WdfDriverGlobals, Attributes, Object);
}
typedef
void
(*PFN_WDFOBJECTDELETE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFOBJECT Object
    );
void
__forceinline
WdfObjectDelete(
    WDFOBJECT Object
    )
{
    ((PFN_WDFOBJECTDELETE) WdfFunctions[WdfObjectDeleteTableIndex])(WdfDriverGlobals, Object);
}
typedef
NTSTATUS
(*PFN_WDFOBJECTQUERY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFOBJECT Object,
    const GUID* Guid,
    ULONG QueryBufferLength,
    PVOID QueryBuffer
    );
NTSTATUS
__forceinline
WdfObjectQuery(
    WDFOBJECT Object,
    const GUID* Guid,
    ULONG QueryBufferLength,
    PVOID QueryBuffer
    )
{
    return ((PFN_WDFOBJECTQUERY) WdfFunctions[WdfObjectQueryTableIndex])(WdfDriverGlobals, Object, Guid, QueryBufferLength, QueryBuffer);
}
typedef
void
(*PFN_WDFOBJECTACQUIRELOCK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFOBJECT Object
    );
void
__forceinline
WdfObjectAcquireLock(
    WDFOBJECT Object
    )
{
    ((PFN_WDFOBJECTACQUIRELOCK) WdfFunctions[WdfObjectAcquireLockTableIndex])(WdfDriverGlobals, Object);
}
typedef
void
(*PFN_WDFOBJECTRELEASELOCK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFOBJECT Object
    );
void
__forceinline
WdfObjectReleaseLock(
    WDFOBJECT Object
    )
{
    ((PFN_WDFOBJECTRELEASELOCK) WdfFunctions[WdfObjectReleaseLockTableIndex])(WdfDriverGlobals, Object);
}
typedef
NTSTATUS
(*PFN_WDFWAITLOCKCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_OBJECT_ATTRIBUTES LockAttributes,
    WDFWAITLOCK* Lock
    );
NTSTATUS
__forceinline
WdfWaitLockCreate(
    PWDF_OBJECT_ATTRIBUTES LockAttributes,
    WDFWAITLOCK* Lock
    )
{
    return ((PFN_WDFWAITLOCKCREATE) WdfFunctions[WdfWaitLockCreateTableIndex])(WdfDriverGlobals, LockAttributes, Lock);
}
typedef
NTSTATUS
(*PFN_WDFWAITLOCKACQUIRE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWAITLOCK Lock,
    PLONGLONG Timeout
    );
NTSTATUS
__forceinline
WdfWaitLockAcquire(
    WDFWAITLOCK Lock,
    PLONGLONG Timeout
    )
{
    return ((PFN_WDFWAITLOCKACQUIRE) WdfFunctions[WdfWaitLockAcquireTableIndex])(WdfDriverGlobals, Lock, Timeout);
}
typedef
void
(*PFN_WDFWAITLOCKRELEASE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWAITLOCK Lock
    );
void
__forceinline
WdfWaitLockRelease(
    WDFWAITLOCK Lock
    )
{
    ((PFN_WDFWAITLOCKRELEASE) WdfFunctions[WdfWaitLockReleaseTableIndex])(WdfDriverGlobals, Lock);
}
typedef
NTSTATUS
(*PFN_WDFSPINLOCKCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_OBJECT_ATTRIBUTES SpinLockAttributes,
    WDFSPINLOCK* SpinLock
    );
NTSTATUS
__forceinline
WdfSpinLockCreate(
    PWDF_OBJECT_ATTRIBUTES SpinLockAttributes,
    WDFSPINLOCK* SpinLock
    )
{
    return ((PFN_WDFSPINLOCKCREATE) WdfFunctions[WdfSpinLockCreateTableIndex])(WdfDriverGlobals, SpinLockAttributes, SpinLock);
}
typedef
void
(*PFN_WDFSPINLOCKACQUIRE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFSPINLOCK SpinLock
    );
void
__forceinline
WdfSpinLockAcquire(
    WDFSPINLOCK SpinLock
    )
{
    ((PFN_WDFSPINLOCKACQUIRE) WdfFunctions[WdfSpinLockAcquireTableIndex])(WdfDriverGlobals, SpinLock);
}
typedef
void
(*PFN_WDFSPINLOCKRELEASE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFSPINLOCK SpinLock
    );
void
__forceinline
WdfSpinLockRelease(
    WDFSPINLOCK SpinLock
    )
{
    ((PFN_WDFSPINLOCKRELEASE) WdfFunctions[WdfSpinLockReleaseTableIndex])(WdfDriverGlobals, SpinLock);
}
LONGLONG
__forceinline
WDF_REL_TIMEOUT_IN_SEC(
     ULONGLONG Time
    )
{
    return Time * -1 * ((LONGLONG) 1 * 10 * 1000 * 1000);
}
LONGLONG
__forceinline
WDF_ABS_TIMEOUT_IN_SEC(
     ULONGLONG Time
    )
{
    return Time * 1 * ((LONGLONG) 1 * 10 * 1000 * 1000);
}
LONGLONG
__forceinline
WDF_REL_TIMEOUT_IN_MS(
     ULONGLONG Time
    )
{
    return Time * -1 * ((LONGLONG) 1 * 10 * 1000);
}
LONGLONG
__forceinline
WDF_ABS_TIMEOUT_IN_MS(
     ULONGLONG Time
    )
{
    return Time * 1 * ((LONGLONG) 1 * 10 * 1000);
}
LONGLONG
__forceinline
WDF_REL_TIMEOUT_IN_US(
     ULONGLONG Time
    )
{
    return Time * -1 * ((LONGLONG) 1 * 10);
}
LONGLONG
__forceinline
WDF_ABS_TIMEOUT_IN_US(
     ULONGLONG Time
    )
{
    return Time * 1 * ((LONGLONG) 1 * 10);
}
size_t
__forceinline
WDF_ALIGN_SIZE_DOWN(
     size_t Length,
     size_t AlignTo
    )
{
    return Length & ~(AlignTo - 1);
}
size_t
__forceinline
WDF_ALIGN_SIZE_UP(
     size_t Length,
     size_t AlignTo
    )
{
    return WDF_ALIGN_SIZE_DOWN(Length + AlignTo - 1, AlignTo);
}
typedef enum _WDF_DRIVER_INIT_FLAGS {
    WdfDriverInitNonPnpDriver = 0x00000001,
    WdfDriverInitNoDispatchOverride = 0x00000002,
    WdfVerifyOn = 0x00000004,
    WdfVerifierOn = 0x00000008,
} WDF_DRIVER_INIT_FLAGS;
typedef
NTSTATUS
(EVT_WDF_DRIVER_DEVICE_ADD)(
     WDFDRIVER Driver,
     PWDFDEVICE_INIT DeviceInit
    );
typedef EVT_WDF_DRIVER_DEVICE_ADD *PFN_WDF_DRIVER_DEVICE_ADD;
typedef
void
(EVT_WDF_DRIVER_UNLOAD)(
     WDFDRIVER Driver
    );
typedef EVT_WDF_DRIVER_UNLOAD *PFN_WDF_DRIVER_UNLOAD;
typedef
NTSTATUS
(EVT_WDF_TRACE_CALLBACK)(
      UCHAR minorFunction,
      PVOID dataPath,
      ULONG bufferLength,
      PVOID buffer,
      PVOID context,
     PULONG size
    );
typedef EVT_WDF_TRACE_CALLBACK *PFN_WDF_TRACE_CALLBACK;
typedef struct _WDF_DRIVER_CONFIG {
    ULONG Size;
    PFN_WDF_DRIVER_DEVICE_ADD EvtDriverDeviceAdd;
    PFN_WDF_DRIVER_UNLOAD EvtDriverUnload;
    ULONG DriverInitFlags;
    ULONG DriverPoolTag;
} WDF_DRIVER_CONFIG, *PWDF_DRIVER_CONFIG;
void
__forceinline
WDF_DRIVER_CONFIG_INIT(
     PWDF_DRIVER_CONFIG Config,
     PFN_WDF_DRIVER_DEVICE_ADD EvtDriverDeviceAdd
    )
{
    memset((Config),0,(sizeof(WDF_DRIVER_CONFIG)));
    Config->Size = sizeof(WDF_DRIVER_CONFIG);
    Config->EvtDriverDeviceAdd = EvtDriverDeviceAdd;
}
typedef struct _WDF_DRIVER_VERSION_AVAILABLE_PARAMS {
    ULONG Size;
    ULONG MajorVersion;
    ULONG MinorVersion;
} WDF_DRIVER_VERSION_AVAILABLE_PARAMS, *PWDF_DRIVER_VERSION_AVAILABLE_PARAMS;
void
__forceinline
WDF_DRIVER_VERSION_AVAILABLE_PARAMS_INIT(
    PWDF_DRIVER_VERSION_AVAILABLE_PARAMS Params,
    ULONG MajorVersion,
    ULONG MinorVersion
    )
{
    memset((Params),0,(sizeof(WDF_DRIVER_VERSION_AVAILABLE_PARAMS)));
    Params->Size = sizeof(WDF_DRIVER_VERSION_AVAILABLE_PARAMS);
    Params->MajorVersion = MajorVersion;
    Params->MinorVersion = MinorVersion;
}
WDFDRIVER
__forceinline
WdfGetDriver(
    void
    )
{
    return WdfDriverGlobals->Driver;
}
typedef
NTSTATUS
(*PFN_WDFDRIVERCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PDRIVER_OBJECT DriverObject,
    PCUNICODE_STRING RegistryPath,
    PWDF_OBJECT_ATTRIBUTES DriverAttributes,
    PWDF_DRIVER_CONFIG DriverConfig,
    WDFDRIVER* Driver
    );
NTSTATUS
__forceinline
WdfDriverCreate(
    PDRIVER_OBJECT DriverObject,
    PCUNICODE_STRING RegistryPath,
    PWDF_OBJECT_ATTRIBUTES DriverAttributes,
    PWDF_DRIVER_CONFIG DriverConfig,
    WDFDRIVER* Driver
    )
{
    return ((PFN_WDFDRIVERCREATE) WdfFunctions[WdfDriverCreateTableIndex])(WdfDriverGlobals, DriverObject, RegistryPath, DriverAttributes, DriverConfig, Driver);
}
typedef
PWSTR
(*PFN_WDFDRIVERGETREGISTRYPATH)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDRIVER Driver
    );
PWSTR
__forceinline
WdfDriverGetRegistryPath(
    WDFDRIVER Driver
    )
{
    return ((PFN_WDFDRIVERGETREGISTRYPATH) WdfFunctions[WdfDriverGetRegistryPathTableIndex])(WdfDriverGlobals, Driver);
}
typedef
PDRIVER_OBJECT
(*PFN_WDFDRIVERWDMGETDRIVEROBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDRIVER Driver
    );
PDRIVER_OBJECT
__forceinline
WdfDriverWdmGetDriverObject(
    WDFDRIVER Driver
    )
{
    return ((PFN_WDFDRIVERWDMGETDRIVEROBJECT) WdfFunctions[WdfDriverWdmGetDriverObjectTableIndex])(WdfDriverGlobals, Driver);
}
typedef
NTSTATUS
(*PFN_WDFDRIVEROPENPARAMETERSREGISTRYKEY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDRIVER Driver,
    ACCESS_MASK DesiredAccess,
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    WDFKEY* Key
    );
NTSTATUS
__forceinline
WdfDriverOpenParametersRegistryKey(
    WDFDRIVER Driver,
    ACCESS_MASK DesiredAccess,
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    WDFKEY* Key
    )
{
    return ((PFN_WDFDRIVEROPENPARAMETERSREGISTRYKEY) WdfFunctions[WdfDriverOpenParametersRegistryKeyTableIndex])(WdfDriverGlobals, Driver, DesiredAccess, KeyAttributes, Key);
}
typedef
WDFDRIVER
(*PFN_WDFWDMDRIVERGETWDFDRIVERHANDLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PDRIVER_OBJECT DriverObject
    );
WDFDRIVER
__forceinline
WdfWdmDriverGetWdfDriverHandle(
    PDRIVER_OBJECT DriverObject
    )
{
    return ((PFN_WDFWDMDRIVERGETWDFDRIVERHANDLE) WdfFunctions[WdfWdmDriverGetWdfDriverHandleTableIndex])(WdfDriverGlobals, DriverObject);
}
typedef
NTSTATUS
(*PFN_WDFDRIVERREGISTERTRACEINFO)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PDRIVER_OBJECT DriverObject,
    PFN_WDF_TRACE_CALLBACK EvtTraceCallback,
    PVOID ControlBlock
    );
NTSTATUS
__forceinline
WdfDriverRegisterTraceInfo(
    PDRIVER_OBJECT DriverObject,
    PFN_WDF_TRACE_CALLBACK EvtTraceCallback,
    PVOID ControlBlock
    )
{
    return ((PFN_WDFDRIVERREGISTERTRACEINFO) WdfFunctions[WdfDriverRegisterTraceInfoTableIndex])(WdfDriverGlobals, DriverObject, EvtTraceCallback, ControlBlock);
}
typedef
NTSTATUS
(*PFN_WDFDRIVERRETRIEVEVERSIONSTRING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDRIVER Driver,
    WDFSTRING String
    );
NTSTATUS
__forceinline
WdfDriverRetrieveVersionString(
    WDFDRIVER Driver,
    WDFSTRING String
    )
{
    return ((PFN_WDFDRIVERRETRIEVEVERSIONSTRING) WdfFunctions[WdfDriverRetrieveVersionStringTableIndex])(WdfDriverGlobals, Driver, String);
}
typedef
BOOLEAN
(*PFN_WDFDRIVERISVERSIONAVAILABLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDRIVER Driver,
    PWDF_DRIVER_VERSION_AVAILABLE_PARAMS VersionAvailableParams
    );
BOOLEAN
__forceinline
WdfDriverIsVersionAvailable(
    WDFDRIVER Driver,
    PWDF_DRIVER_VERSION_AVAILABLE_PARAMS VersionAvailableParams
    )
{
    return ((PFN_WDFDRIVERISVERSIONAVAILABLE) WdfFunctions[WdfDriverIsVersionAvailableTableIndex])(WdfDriverGlobals, Driver, VersionAvailableParams);
}
typedef
NTSTATUS
(EVT_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST)(
     WDFDEVICE Device,
     LPGUID InterfaceType,
      PINTERFACE ExposedInterface,
      PVOID ExposedInterfaceSpecificData
    );
typedef EVT_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST *PFN_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST;
typedef struct _WDF_QUERY_INTERFACE_CONFIG {
    ULONG Size;
    PINTERFACE Interface;
    const GUID * InterfaceType;
    BOOLEAN SendQueryToParentStack;
    PFN_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST EvtDeviceProcessQueryInterfaceRequest;
    BOOLEAN ImportInterface;
} WDF_QUERY_INTERFACE_CONFIG, *PWDF_QUERY_INTERFACE_CONFIG;
void
__forceinline
WDF_QUERY_INTERFACE_CONFIG_INIT(
     PWDF_QUERY_INTERFACE_CONFIG InterfaceConfig,
     PINTERFACE Interface,
     const GUID* InterfaceType,
      PFN_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST EvtDeviceProcessQueryInterfaceRequest
    )
{
    memset((InterfaceConfig),0,(sizeof(WDF_QUERY_INTERFACE_CONFIG)));
    InterfaceConfig->Size = sizeof(WDF_QUERY_INTERFACE_CONFIG);
    InterfaceConfig->Interface = Interface;
    InterfaceConfig->InterfaceType = InterfaceType;
    InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest =
        EvtDeviceProcessQueryInterfaceRequest;
}
typedef
NTSTATUS
(*PFN_WDFDEVICEADDQUERYINTERFACE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_QUERY_INTERFACE_CONFIG InterfaceConfig
    );
NTSTATUS
__forceinline
WdfDeviceAddQueryInterface(
    WDFDEVICE Device,
    PWDF_QUERY_INTERFACE_CONFIG InterfaceConfig
    )
{
    return ((PFN_WDFDEVICEADDQUERYINTERFACE) WdfFunctions[WdfDeviceAddQueryInterfaceTableIndex])(WdfDriverGlobals, Device, InterfaceConfig);
}
void
__forceinline
WdfDeviceInterfaceReferenceNoOp(
    PVOID Context
    )
{
    (Context);
}
void
__forceinline
WdfDeviceInterfaceDereferenceNoOp(
    PVOID Context
    )
{
    (Context);
}
typedef enum _WDF_MEMORY_DESCRIPTOR_TYPE {
    WdfMemoryDescriptorTypeInvalid = 0,
    WdfMemoryDescriptorTypeBuffer,
    WdfMemoryDescriptorTypeMdl,
    WdfMemoryDescriptorTypeHandle,
} WDF_MEMORY_DESCRIPTOR_TYPE;
typedef struct _WDFMEMORY_OFFSET {
    size_t BufferOffset;
    size_t BufferLength;
} WDFMEMORY_OFFSET, *PWDFMEMORY_OFFSET;
typedef struct _WDF_MEMORY_DESCRIPTOR {
    WDF_MEMORY_DESCRIPTOR_TYPE Type;
    union {
        struct {
            PVOID Buffer;
            ULONG Length;
        } BufferType;
        struct {
            PMDL Mdl;
            ULONG BufferLength;
        } MdlType;
        struct {
            WDFMEMORY Memory;
            PWDFMEMORY_OFFSET Offsets;
        } HandleType;
    } u;
} WDF_MEMORY_DESCRIPTOR, *PWDF_MEMORY_DESCRIPTOR;
void
__forceinline
WDF_MEMORY_DESCRIPTOR_INIT_BUFFER(
     PWDF_MEMORY_DESCRIPTOR Descriptor,
     PVOID Buffer,
     ULONG BufferLength
    )
{
    memset((Descriptor),0,(sizeof(WDF_MEMORY_DESCRIPTOR)));
    Descriptor->Type = WdfMemoryDescriptorTypeBuffer;
    Descriptor->u.BufferType.Buffer = Buffer;
    Descriptor->u.BufferType.Length = BufferLength;
}
void
__forceinline
WDF_MEMORY_DESCRIPTOR_INIT_MDL(
     PWDF_MEMORY_DESCRIPTOR Descriptor,
     PMDL Mdl,
     ULONG BufferLength
    )
{
    memset((Descriptor),0,(sizeof(WDF_MEMORY_DESCRIPTOR)));
    Descriptor->Type = WdfMemoryDescriptorTypeMdl;
    Descriptor->u.MdlType.Mdl = Mdl;
    Descriptor->u.MdlType.BufferLength = BufferLength;
}
void
__forceinline
WDF_MEMORY_DESCRIPTOR_INIT_HANDLE(
     PWDF_MEMORY_DESCRIPTOR Descriptor,
     WDFMEMORY Memory,
      PWDFMEMORY_OFFSET Offsets
    )
{
    memset((Descriptor),0,(sizeof(WDF_MEMORY_DESCRIPTOR)));
    Descriptor->Type = WdfMemoryDescriptorTypeHandle;
    Descriptor->u.HandleType.Memory = Memory;
    Descriptor->u.HandleType.Offsets = Offsets;
}
typedef
NTSTATUS
(*PFN_WDFMEMORYCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    POOL_TYPE PoolType,
    ULONG PoolTag,
    size_t BufferSize,
    WDFMEMORY* Memory,
    PVOID* Buffer
    );
NTSTATUS
__forceinline
WdfMemoryCreate(
    PWDF_OBJECT_ATTRIBUTES Attributes,
    POOL_TYPE PoolType,
    ULONG PoolTag,
    size_t BufferSize,
    WDFMEMORY* Memory,
    PVOID* Buffer
    )
{
    return ((PFN_WDFMEMORYCREATE) WdfFunctions[WdfMemoryCreateTableIndex])(WdfDriverGlobals, Attributes, PoolType, PoolTag, BufferSize, Memory, Buffer);
}
typedef
NTSTATUS
(*PFN_WDFMEMORYCREATEPREALLOCATED)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    PVOID Buffer,
    size_t BufferSize,
    WDFMEMORY* Memory
    );
NTSTATUS
__forceinline
WdfMemoryCreatePreallocated(
    PWDF_OBJECT_ATTRIBUTES Attributes,
    PVOID Buffer,
    size_t BufferSize,
    WDFMEMORY* Memory
    )
{
    return ((PFN_WDFMEMORYCREATEPREALLOCATED) WdfFunctions[WdfMemoryCreatePreallocatedTableIndex])(WdfDriverGlobals, Attributes, Buffer, BufferSize, Memory);
}
typedef
PVOID
(*PFN_WDFMEMORYGETBUFFER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFMEMORY Memory,
    size_t* BufferSize
    );
PVOID
__forceinline
WdfMemoryGetBuffer(
    WDFMEMORY Memory,
    size_t* BufferSize
    )
{
    return ((PFN_WDFMEMORYGETBUFFER) WdfFunctions[WdfMemoryGetBufferTableIndex])(WdfDriverGlobals, Memory, BufferSize);
}
typedef
NTSTATUS
(*PFN_WDFMEMORYASSIGNBUFFER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFMEMORY Memory,
    PVOID Buffer,
    size_t BufferSize
    );
NTSTATUS
__forceinline
WdfMemoryAssignBuffer(
    WDFMEMORY Memory,
    PVOID Buffer,
    size_t BufferSize
    )
{
    return ((PFN_WDFMEMORYASSIGNBUFFER) WdfFunctions[WdfMemoryAssignBufferTableIndex])(WdfDriverGlobals, Memory, Buffer, BufferSize);
}
typedef
NTSTATUS
(*PFN_WDFMEMORYCOPYTOBUFFER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFMEMORY SourceMemory,
    size_t SourceOffset,
    PVOID Buffer,
    size_t NumBytesToCopyTo
    );
NTSTATUS
__forceinline
WdfMemoryCopyToBuffer(
    WDFMEMORY SourceMemory,
    size_t SourceOffset,
    PVOID Buffer,
    size_t NumBytesToCopyTo
    )
{
    return ((PFN_WDFMEMORYCOPYTOBUFFER) WdfFunctions[WdfMemoryCopyToBufferTableIndex])(WdfDriverGlobals, SourceMemory, SourceOffset, Buffer, NumBytesToCopyTo);
}
typedef
NTSTATUS
(*PFN_WDFMEMORYCOPYFROMBUFFER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFMEMORY DestinationMemory,
    size_t DestinationOffset,
    PVOID Buffer,
    size_t NumBytesToCopyFrom
    );
NTSTATUS
__forceinline
WdfMemoryCopyFromBuffer(
    WDFMEMORY DestinationMemory,
    size_t DestinationOffset,
    PVOID Buffer,
    size_t NumBytesToCopyFrom
    )
{
    return ((PFN_WDFMEMORYCOPYFROMBUFFER) WdfFunctions[WdfMemoryCopyFromBufferTableIndex])(WdfDriverGlobals, DestinationMemory, DestinationOffset, Buffer, NumBytesToCopyFrom);
}
typedef
NTSTATUS
(*PFN_WDFLOOKASIDELISTCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_OBJECT_ATTRIBUTES LookasideAttributes,
    size_t BufferSize,
    POOL_TYPE PoolType,
    PWDF_OBJECT_ATTRIBUTES MemoryAttributes,
    ULONG PoolTag,
    WDFLOOKASIDE* Lookaside
    );
NTSTATUS
__forceinline
WdfLookasideListCreate(
    PWDF_OBJECT_ATTRIBUTES LookasideAttributes,
    size_t BufferSize,
    POOL_TYPE PoolType,
    PWDF_OBJECT_ATTRIBUTES MemoryAttributes,
    ULONG PoolTag,
    WDFLOOKASIDE* Lookaside
    )
{
    return ((PFN_WDFLOOKASIDELISTCREATE) WdfFunctions[WdfLookasideListCreateTableIndex])(WdfDriverGlobals, LookasideAttributes, BufferSize, PoolType, MemoryAttributes, PoolTag, Lookaside);
}
typedef
NTSTATUS
(*PFN_WDFMEMORYCREATEFROMLOOKASIDE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFLOOKASIDE Lookaside,
    WDFMEMORY* Memory
    );
NTSTATUS
__forceinline
WdfMemoryCreateFromLookaside(
    WDFLOOKASIDE Lookaside,
    WDFMEMORY* Memory
    )
{
    return ((PFN_WDFMEMORYCREATEFROMLOOKASIDE) WdfFunctions[WdfMemoryCreateFromLookasideTableIndex])(WdfDriverGlobals, Lookaside, Memory);
}
typedef enum _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS {
    WdfChildListRetrieveDeviceUndefined = 0,
    WdfChildListRetrieveDeviceSuccess,
    WdfChildListRetrieveDeviceNotYetCreated,
    WdfChildListRetrieveDeviceNoSuchDevice,
} WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS, *PWDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS;
typedef enum _WDF_RETRIEVE_CHILD_FLAGS {
    WdfRetrieveUnspecified = 0x0000,
    WdfRetrievePresentChildren = 0x0001,
    WdfRetrieveMissingChildren = 0x0002,
    WdfRetrievePendingChildren = 0x0004,
    WdfRetrieveAddedChildren = (WdfRetrievePresentChildren | WdfRetrievePendingChildren),
    WdfRetrieveAllChildren = (WdfRetrievePresentChildren | WdfRetrievePendingChildren | WdfRetrieveMissingChildren),
} WDF_RETRIEVE_CHILD_FLAGS;
typedef struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER {
    ULONG IdentificationDescriptionSize;
} WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER,
  *PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER;
void
__forceinline
WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER_INIT(
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER Header,
    ULONG IdentificationDescriptionSize
    )
{
    memset((Header),0,(IdentificationDescriptionSize));
    Header->IdentificationDescriptionSize = IdentificationDescriptionSize;
}
typedef struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER {
    ULONG AddressDescriptionSize;
} WDF_CHILD_ADDRESS_DESCRIPTION_HEADER,
  *PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER;
void
__forceinline
WDF_CHILD_ADDRESS_DESCRIPTION_HEADER_INIT(
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER Header,
    ULONG AddressDescriptionSize
    )
{
    memset((Header),0,(AddressDescriptionSize));
    Header->AddressDescriptionSize = AddressDescriptionSize;
}
typedef
NTSTATUS
(EVT_WDF_CHILD_LIST_CREATE_DEVICE)(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription,
    PWDFDEVICE_INIT ChildInit
    );
typedef EVT_WDF_CHILD_LIST_CREATE_DEVICE *PFN_WDF_CHILD_LIST_CREATE_DEVICE;
typedef
void
(EVT_WDF_CHILD_LIST_SCAN_FOR_CHILDREN)(
    WDFCHILDLIST ChildList
    );
typedef EVT_WDF_CHILD_LIST_SCAN_FOR_CHILDREN *PFN_WDF_CHILD_LIST_SCAN_FOR_CHILDREN;
typedef
void
(EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COPY)(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER SourceIdentificationDescription,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER DestinationIdentificationDescription
    );
typedef EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COPY *PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COPY;
typedef
NTSTATUS
(EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_DUPLICATE)(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER SourceIdentificationDescription,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER DestinationIdentificationDescription
    );
typedef EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_DUPLICATE *PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_DUPLICATE;
typedef
BOOLEAN
(EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE)(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER FirstIdentificationDescription,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER SecondIdentificationDescription
    );
typedef EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE *PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE;
typedef
void
(EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_CLEANUP)(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    );
typedef EVT_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_CLEANUP *PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_CLEANUP;
typedef
void
(EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_COPY)(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER SourceAddressDescription,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER DestinationAddressDescription
    );
typedef EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_COPY *PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_COPY;
typedef
NTSTATUS
(EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_DUPLICATE)(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER SourceAddressDescription,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER DestinationAddressDescription
    );
typedef EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_DUPLICATE *PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_DUPLICATE;
typedef
void
(EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_CLEANUP)(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    );
typedef EVT_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_CLEANUP *PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_CLEANUP;
typedef
BOOLEAN
(EVT_WDF_CHILD_LIST_DEVICE_REENUMERATED)(
    WDFCHILDLIST ChildList,
    WDFDEVICE OldDevice,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER OldAddressDescription,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER NewAddressDescription
    );
typedef EVT_WDF_CHILD_LIST_DEVICE_REENUMERATED *PFN_WDF_CHILD_LIST_DEVICE_REENUMERATED;
typedef struct _WDF_CHILD_RETRIEVE_INFO {
    ULONG Size;
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription;
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription;
    WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS Status;
    PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE EvtChildListIdentificationDescriptionCompare;
} WDF_CHILD_RETRIEVE_INFO, *PWDF_CHILD_RETRIEVE_INFO;
void
__forceinline
WDF_CHILD_RETRIEVE_INFO_INIT(
    PWDF_CHILD_RETRIEVE_INFO Info,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    )
{
    memset((Info),0,(sizeof(WDF_CHILD_RETRIEVE_INFO)));
    Info->Size = sizeof(WDF_CHILD_RETRIEVE_INFO);
    Info->IdentificationDescription = IdentificationDescription;
}
typedef struct _WDF_CHILD_LIST_CONFIG {
    ULONG Size;
    ULONG IdentificationDescriptionSize;
    ULONG AddressDescriptionSize;
    PFN_WDF_CHILD_LIST_CREATE_DEVICE EvtChildListCreateDevice;
    PFN_WDF_CHILD_LIST_SCAN_FOR_CHILDREN EvtChildListScanForChildren;
    PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COPY EvtChildListIdentificationDescriptionCopy;
    PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_DUPLICATE EvtChildListIdentificationDescriptionDuplicate;
    PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_CLEANUP EvtChildListIdentificationDescriptionCleanup;
    PFN_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE EvtChildListIdentificationDescriptionCompare;
    PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_COPY EvtChildListAddressDescriptionCopy;
    PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_DUPLICATE EvtChildListAddressDescriptionDuplicate;
    PFN_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_CLEANUP EvtChildListAddressDescriptionCleanup;
    PFN_WDF_CHILD_LIST_DEVICE_REENUMERATED EvtChildListDeviceReenumerated;
} WDF_CHILD_LIST_CONFIG, *PWDF_CHILD_LIST_CONFIG;
void
__forceinline
WDF_CHILD_LIST_CONFIG_INIT(
     PWDF_CHILD_LIST_CONFIG Config,
     ULONG IdentificationDescriptionSize,
     PFN_WDF_CHILD_LIST_CREATE_DEVICE EvtChildListCreateDevice
    )
{
    memset((Config),0,(sizeof(WDF_CHILD_LIST_CONFIG)));
    Config->Size = sizeof(WDF_CHILD_LIST_CONFIG);
    Config->IdentificationDescriptionSize = IdentificationDescriptionSize;
    Config->EvtChildListCreateDevice = EvtChildListCreateDevice;
}
typedef struct _WDF_CHILD_LIST_ITERATOR {
    ULONG Size;
    ULONG Flags;
    PVOID Reserved[4];
} WDF_CHILD_LIST_ITERATOR, *PWDF_CHILD_LIST_ITERATOR;
void
__forceinline
WDF_CHILD_LIST_ITERATOR_INIT(
    PWDF_CHILD_LIST_ITERATOR Iterator,
    ULONG Flags
    )
{
    memset((Iterator),0,(sizeof(WDF_CHILD_LIST_ITERATOR)));
    Iterator->Size = sizeof(WDF_CHILD_LIST_ITERATOR);
    Iterator->Flags = Flags;
}
typedef
NTSTATUS
(*PFN_WDFCHILDLISTCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_CHILD_LIST_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES ChildListAttributes,
    WDFCHILDLIST* ChildList
    );
NTSTATUS
__forceinline
WdfChildListCreate(
    WDFDEVICE Device,
    PWDF_CHILD_LIST_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES ChildListAttributes,
    WDFCHILDLIST* ChildList
    )
{
    return ((PFN_WDFCHILDLISTCREATE) WdfFunctions[WdfChildListCreateTableIndex])(WdfDriverGlobals, Device, Config, ChildListAttributes, ChildList);
}
typedef
WDFDEVICE
(*PFN_WDFCHILDLISTGETDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList
    );
WDFDEVICE
__forceinline
WdfChildListGetDevice(
    WDFCHILDLIST ChildList
    )
{
    return ((PFN_WDFCHILDLISTGETDEVICE) WdfFunctions[WdfChildListGetDeviceTableIndex])(WdfDriverGlobals, ChildList);
}
typedef
WDFDEVICE
(*PFN_WDFCHILDLISTRETRIEVEPDO)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList,
    PWDF_CHILD_RETRIEVE_INFO RetrieveInfo
    );
WDFDEVICE
__forceinline
WdfChildListRetrievePdo(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_RETRIEVE_INFO RetrieveInfo
    )
{
    return ((PFN_WDFCHILDLISTRETRIEVEPDO) WdfFunctions[WdfChildListRetrievePdoTableIndex])(WdfDriverGlobals, ChildList, RetrieveInfo);
}
typedef
NTSTATUS
(*PFN_WDFCHILDLISTRETRIEVEADDRESSDESCRIPTION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    );
NTSTATUS
__forceinline
WdfChildListRetrieveAddressDescription(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    )
{
    return ((PFN_WDFCHILDLISTRETRIEVEADDRESSDESCRIPTION) WdfFunctions[WdfChildListRetrieveAddressDescriptionTableIndex])(WdfDriverGlobals, ChildList, IdentificationDescription, AddressDescription);
}
typedef
void
(*PFN_WDFCHILDLISTBEGINSCAN)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList
    );
void
__forceinline
WdfChildListBeginScan(
    WDFCHILDLIST ChildList
    )
{
    ((PFN_WDFCHILDLISTBEGINSCAN) WdfFunctions[WdfChildListBeginScanTableIndex])(WdfDriverGlobals, ChildList);
}
typedef
void
(*PFN_WDFCHILDLISTENDSCAN)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList
    );
void
__forceinline
WdfChildListEndScan(
    WDFCHILDLIST ChildList
    )
{
    ((PFN_WDFCHILDLISTENDSCAN) WdfFunctions[WdfChildListEndScanTableIndex])(WdfDriverGlobals, ChildList);
}
typedef
void
(*PFN_WDFCHILDLISTBEGINITERATION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList,
    PWDF_CHILD_LIST_ITERATOR Iterator
    );
void
__forceinline
WdfChildListBeginIteration(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_LIST_ITERATOR Iterator
    )
{
    ((PFN_WDFCHILDLISTBEGINITERATION) WdfFunctions[WdfChildListBeginIterationTableIndex])(WdfDriverGlobals, ChildList, Iterator);
}
typedef
NTSTATUS
(*PFN_WDFCHILDLISTRETRIEVENEXTDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList,
    PWDF_CHILD_LIST_ITERATOR Iterator,
    WDFDEVICE* Device,
    PWDF_CHILD_RETRIEVE_INFO Info
    );
NTSTATUS
__forceinline
WdfChildListRetrieveNextDevice(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_LIST_ITERATOR Iterator,
    WDFDEVICE* Device,
    PWDF_CHILD_RETRIEVE_INFO Info
    )
{
    return ((PFN_WDFCHILDLISTRETRIEVENEXTDEVICE) WdfFunctions[WdfChildListRetrieveNextDeviceTableIndex])(WdfDriverGlobals, ChildList, Iterator, Device, Info);
}
typedef
void
(*PFN_WDFCHILDLISTENDITERATION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList,
    PWDF_CHILD_LIST_ITERATOR Iterator
    );
void
__forceinline
WdfChildListEndIteration(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_LIST_ITERATOR Iterator
    )
{
    ((PFN_WDFCHILDLISTENDITERATION) WdfFunctions[WdfChildListEndIterationTableIndex])(WdfDriverGlobals, ChildList, Iterator);
}
typedef
NTSTATUS
(*PFN_WDFCHILDLISTADDORUPDATECHILDDESCRIPTIONASPRESENT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    );
NTSTATUS
__forceinline
WdfChildListAddOrUpdateChildDescriptionAsPresent(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    )
{
    return ((PFN_WDFCHILDLISTADDORUPDATECHILDDESCRIPTIONASPRESENT) WdfFunctions[WdfChildListAddOrUpdateChildDescriptionAsPresentTableIndex])(WdfDriverGlobals, ChildList, IdentificationDescription, AddressDescription);
}
typedef
NTSTATUS
(*PFN_WDFCHILDLISTUPDATECHILDDESCRIPTIONASMISSING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    );
NTSTATUS
__forceinline
WdfChildListUpdateChildDescriptionAsMissing(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    )
{
    return ((PFN_WDFCHILDLISTUPDATECHILDDESCRIPTIONASMISSING) WdfFunctions[WdfChildListUpdateChildDescriptionAsMissingTableIndex])(WdfDriverGlobals, ChildList, IdentificationDescription);
}
typedef
void
(*PFN_WDFCHILDLISTUPDATEALLCHILDDESCRIPTIONSASPRESENT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList
    );
void
__forceinline
WdfChildListUpdateAllChildDescriptionsAsPresent(
    WDFCHILDLIST ChildList
    )
{
    ((PFN_WDFCHILDLISTUPDATEALLCHILDDESCRIPTIONSASPRESENT) WdfFunctions[WdfChildListUpdateAllChildDescriptionsAsPresentTableIndex])(WdfDriverGlobals, ChildList);
}
typedef
BOOLEAN
(*PFN_WDFCHILDLISTREQUESTCHILDEJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    );
BOOLEAN
__forceinline
WdfChildListRequestChildEject(
    WDFCHILDLIST ChildList,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    )
{
    return ((PFN_WDFCHILDLISTREQUESTCHILDEJECT) WdfFunctions[WdfChildListRequestChildEjectTableIndex])(WdfDriverGlobals, ChildList, IdentificationDescription);
}
typedef
PUNICODE_STRING
(*PFN_WDFFILEOBJECTGETFILENAME)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFFILEOBJECT FileObject
    );
PUNICODE_STRING
__forceinline
WdfFileObjectGetFileName(
    WDFFILEOBJECT FileObject
    )
{
    return ((PFN_WDFFILEOBJECTGETFILENAME) WdfFunctions[WdfFileObjectGetFileNameTableIndex])(WdfDriverGlobals, FileObject);
}
typedef
ULONG
(*PFN_WDFFILEOBJECTGETFLAGS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFFILEOBJECT FileObject
    );
ULONG
__forceinline
WdfFileObjectGetFlags(
    WDFFILEOBJECT FileObject
    )
{
    return ((PFN_WDFFILEOBJECTGETFLAGS) WdfFunctions[WdfFileObjectGetFlagsTableIndex])(WdfDriverGlobals, FileObject);
}
typedef
WDFDEVICE
(*PFN_WDFFILEOBJECTGETDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFFILEOBJECT FileObject
    );
WDFDEVICE
__forceinline
WdfFileObjectGetDevice(
    WDFFILEOBJECT FileObject
    )
{
    return ((PFN_WDFFILEOBJECTGETDEVICE) WdfFunctions[WdfFileObjectGetDeviceTableIndex])(WdfDriverGlobals, FileObject);
}
typedef
PFILE_OBJECT
(*PFN_WDFFILEOBJECTWDMGETFILEOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFFILEOBJECT FileObject
    );
PFILE_OBJECT
__forceinline
WdfFileObjectWdmGetFileObject(
    WDFFILEOBJECT FileObject
    )
{
    return ((PFN_WDFFILEOBJECTWDMGETFILEOBJECT) WdfFunctions[WdfFileObjectWdmGetFileObjectTableIndex])(WdfDriverGlobals, FileObject);
}
typedef enum _WDF_DEVICE_STATE_FLAGS {
    WdfDevStateNP = 0x8000,
} WDF_DEVICE_STATE_FLAGS;
typedef enum _WDF_DEVICE_PNP_STATE {
    WdfDevStatePnpInvalid = 0x00,
    WdfDevStatePnpObjectCreated = 0x100,
    WdfDevStatePnpCheckForDevicePresence = 0x101,
    WdfDevStatePnpEjectFailed = 0x102,
    WdfDevStatePnpEjectHardware = 0x103,
    WdfDevStatePnpEjectedWaitingForRemove = 0x104,
    WdfDevStatePnpInit = 0x105,
    WdfDevStatePnpInitStarting = 0x106,
    WdfDevStatePnpInitSurpriseRemoved = 0x107,
    WdfDevStatePnpHardwareAvailable = 0x108,
    WdfDevStatePnpEnableInterfaces = 0x109,
    WdfDevStatePnpHardwareAvailablePowerPolicyFailed = 0x10A,
    WdfDevStatePnpQueryRemoveAskDriver = 0x10B,
    WdfDevStatePnpQueryRemovePending = 0x10C,
    WdfDevStatePnpQueryRemoveStaticCheck = 0x10D,
    WdfDevStatePnpQueriedRemoving = 0x10E,
    WdfDevStatePnpQueryStopAskDriver = 0x10F,
    WdfDevStatePnpQueryStopPending = 0x110,
    WdfDevStatePnpQueryStopStaticCheck = 0x111,
    WdfDevStatePnpQueryCanceled = 0x112,
    WdfDevStatePnpRemoved = 0x113,
    WdfDevStatePnpPdoRemoved = 0x114,
    WdfDevStatePnpRemovedPdoWait = 0x115,
    WdfDevStatePnpRemovedPdoSurpriseRemoved = 0x116,
    WdfDevStatePnpRemovingDisableInterfaces = 0x117,
    WdfDevStatePnpRestarting = 0x118,
    WdfDevStatePnpStarted = 0x119,
    WdfDevStatePnpStartedCancelStop = 0x11A,
    WdfDevStatePnpStartedCancelRemove = 0x11B,
    WdfDevStatePnpStartedRemoving = 0x11C,
    WdfDevStatePnpStartingFromStopped = 0x11D,
    WdfDevStatePnpStopped = 0x11E,
    WdfDevStatePnpStoppedWaitForStartCompletion = 0x11F,
    WdfDevStatePnpStartedStopping = 0x120,
    WdfDevStatePnpSurpriseRemove = 0x121,
    WdfDevStatePnpInitQueryRemove = 0x122,
    WdfDevStatePnpInitQueryRemoveCanceled = 0x123,
    WdfDevStatePnpFdoRemoved = 0x124,
    WdfDevStatePnpRemovedWaitForChildren = 0x125,
    WdfDevStatePnpQueriedSurpriseRemove = 0x126,
    WdfDevStatePnpSurpriseRemoveIoStarted = 0x127,
    WdfDevStatePnpFailedPowerDown = 0x128,
    WdfDevStatePnpFailedIoStarting = 0x129,
    WdfDevStatePnpFailedOwnHardware = 0x12A,
    WdfDevStatePnpFailed = 0x12B,
    WdfDevStatePnpFailedSurpriseRemoved = 0x12C,
    WdfDevStatePnpFailedStarted = 0x12D,
    WdfDevStatePnpFailedWaitForRemove = 0x12E,
    WdfDevStatePnpFailedInit = 0x12F,
    WdfDevStatePnpPdoInitFailed = 0x130,
    WdfDevStatePnpRestart = 0x131,
    WdfDevStatePnpRestartReleaseHardware = 0x132,
    WdfDevStatePnpRestartHardwareAvailable = 0x133,
    WdfDevStatePnpPdoRestart = 0x134,
    WdfDevStatePnpFinal = 0x135,
    WdfDevStatePnpRemovedChildrenRemoved = 0x136,
    WdfDevStatePnpNull = 0x137,
} WDF_DEVICE_PNP_STATE, *PWDF_DEVICE_PNP_STATE;
typedef enum _WDF_DEVICE_POWER_STATE {
    WdfDevStatePowerInvalid = 0x00,
    WdfDevStatePowerObjectCreated = 0x300,
    WdfDevStatePowerCheckDeviceType = 0x301,
    WdfDevStatePowerCheckDeviceTypeNP = 0x302 | WdfDevStateNP,
    WdfDevStatePowerCheckParentState = 0x303,
    WdfDevStatePowerCheckParentStateNP = 0x304 | WdfDevStateNP,
    WdfDevStatePowerEnablingWakeAtBus = 0x305,
    WdfDevStatePowerEnablingWakeAtBusNP = 0x306 | WdfDevStateNP,
    WdfDevStatePowerD0 = 0x307,
    WdfDevStatePowerD0NP = 0x308 | WdfDevStateNP,
    WdfDevStatePowerD0BusWakeOwner = 0x309,
    WdfDevStatePowerD0BusWakeOwnerNP = 0x30A | WdfDevStateNP,
    WdfDevStatePowerD0ArmedForWake = 0x30B,
    WdfDevStatePowerD0ArmedForWakeNP = 0x30C | WdfDevStateNP,
    WdfDevStatePowerD0DisarmingWakeAtBus = 0x30D,
    WdfDevStatePowerD0DisarmingWakeAtBusNP = 0x30E | WdfDevStateNP,
    WdfDevStatePowerD0Starting = 0x30F,
    WdfDevStatePowerD0StartingConnectInterrupt = 0x310,
    WdfDevStatePowerD0StartingDmaEnable = 0x311,
    WdfDevStatePowerD0StartingStartSelfManagedIo = 0x312,
    WdfDevStatePowerDecideD0State = 0x313,
    WdfDevStatePowerGotoD3Stopped = 0x314,
    WdfDevStatePowerStopped = 0x315,
    WdfDevStatePowerStartingCheckDeviceType = 0x316,
    WdfDevStatePowerStartingChild = 0x317,
    WdfDevStatePowerDxDisablingWakeAtBus = 0x318,
    WdfDevStatePowerDxDisablingWakeAtBusNP = 0x319 | WdfDevStateNP,
    WdfDevStatePowerGotoDx = 0x31A,
    WdfDevStatePowerGotoDxNP = 0x31B | WdfDevStateNP,
    WdfDevStatePowerGotoDxIoStopped = 0x31C,
    WdfDevStatePowerGotoDxIoStoppedNP = 0x31D | WdfDevStateNP,
    WdfDevStatePowerGotoDxNPFailed = 0x31E | WdfDevStateNP,
    WdfDevStatePowerDx = 0x31F,
    WdfDevStatePowerDxNP = 0x320 | WdfDevStateNP,
    WdfDevStatePowerGotoDxArmedForWake = 0x321,
    WdfDevStatePowerGotoDxArmedForWakeNP = 0x322 | WdfDevStateNP,
    WdfDevStatePowerGotoDxIoStoppedArmedForWake = 0x323,
    WdfDevStatePowerGotoDxIoStoppedArmedForWakeNP = 0x324 | WdfDevStateNP,
    WdfDevStatePowerDxArmedForWake = 0x325,
    WdfDevStatePowerDxArmedForWakeNP = 0x326 | WdfDevStateNP,
    WdfDevStatePowerCheckParentStateArmedForWake = 0x327,
    WdfDevStatePowerCheckParentStateArmedForWakeNP = 0x328 | WdfDevStateNP,
    WdfDevStatePowerWaitForParentArmedForWake = 0x329,
    WdfDevStatePowerWaitForParentArmedForWakeNP = 0x32A | WdfDevStateNP,
    WdfDevStatePowerStartSelfManagedIo = 0x32B,
    WdfDevStatePowerStartSelfManagedIoNP = 0x32C | WdfDevStateNP,
    WdfDevStatePowerStartSelfManagedIoFailed = 0x32D,
    WdfDevStatePowerStartSelfManagedIoFailedNP = 0x32E | WdfDevStateNP,
    WdfDevStatePowerWaitForParent = 0x32F,
    WdfDevStatePowerWaitForParentNP = 0x330 | WdfDevStateNP,
    WdfDevStatePowerWakePending = 0x331,
    WdfDevStatePowerWakePendingNP = 0x332 | WdfDevStateNP,
    WdfDevStatePowerWaking = 0x333,
    WdfDevStatePowerWakingNP = 0x334 | WdfDevStateNP,
    WdfDevStatePowerWakingConnectInterrupt = 0x335,
    WdfDevStatePowerWakingConnectInterruptNP = 0x336 | WdfDevStateNP,
    WdfDevStatePowerWakingConnectInterruptFailed = 0x337,
    WdfDevStatePowerWakingConnectInterruptFailedNP = 0x338 | WdfDevStateNP,
    WdfDevStatePowerWakingDmaEnable = 0x339,
    WdfDevStatePowerWakingDmaEnableNP = 0x33A | WdfDevStateNP,
    WdfDevStatePowerWakingDmaEnableFailed = 0x33B,
    WdfDevStatePowerWakingDmaEnableFailedNP = 0x33C | WdfDevStateNP,
    WdfDevStatePowerReportPowerUpFailedDerefParent = 0x33D,
    WdfDevStatePowerReportPowerUpFailed = 0x33E,
    WdfDevStatePowerPowerFailedPowerDown = 0x33F,
    WdfDevStatePowerReportPowerDownFailed = 0x340,
    WdfDevStatePowerInitialConnectInterruptFailed = 0x341,
    WdfDevStatePowerInitialDmaEnableFailed = 0x342,
    WdfDevStatePowerInitialSelfManagedIoFailed = 0x343,
    WdfDevStatePowerInitialPowerUpFailedDerefParent = 0x344,
    WdfDevStatePowerInitialPowerUpFailed = 0x345,
    WdfDevStatePowerDxStoppedDisarmWake = 0x346,
    WdfDevStatePowerDxStoppedDisarmWakeNP = 0x347 | WdfDevStateNP,
    WdfDevStatePowerGotoDxStoppedDisableInterruptNP = 0x348 | WdfDevStateNP,
    WdfDevStatePowerGotoDxStopped = 0x349,
    WdfDevStatePowerDxStopped = 0x34A,
    WdfDevStatePowerGotoStopped = 0x34B,
    WdfDevStatePowerStoppedCompleteDx = 0x34C,
    WdfDevStatePowerDxStoppedDecideDxState = 0x34D,
    WdfDevStatePowerDxStoppedArmForWake = 0x34E,
    WdfDevStatePowerDxStoppedArmForWakeNP = 0x34F | WdfDevStateNP,
    WdfDevStatePowerFinalPowerDownFailed = 0x350,
    WdfDevStatePowerFinal = 0x351,
    WdfDevStatePowerNull = 0x352,
} WDF_DEVICE_POWER_STATE, *PWDF_DEVICE_POWER_STATE;
typedef enum _WDF_DEVICE_POWER_POLICY_STATE {
    WdfDevStatePwrPolInvalid = 0x00,
    WdfDevStatePwrPolObjectCreated = 0x500,
    WdfDevStatePwrPolStarting = 0x501,
    WdfDevStatePwrPolStartingSucceeded = 0x502,
    WdfDevStatePwrPolStartingFailed = 0x503,
    WdfDevStatePwrPolStartingDecideS0Wake = 0x504,
    WdfDevStatePwrPolStartedIdleCapable = 0x505,
    WdfDevStatePwrPolTimerExpiredNoWake = 0x506,
    WdfDevStatePwrPolTimerExpiredNoWakeCompletePowerDown = 0x507,
    WdfDevStatePwrPolWaitingUnarmed = 0x508,
    WdfDevStatePwrPolWaitingUnarmedQueryIdle = 0x509,
    WdfDevStatePwrPolS0NoWakePowerUp = 0x50A,
    WdfDevStatePwrPolS0NoWakeCompletePowerUp = 0x50B,
    WdfDevStatePwrPolSystemSleepFromDeviceWaitingUnarmed = 0x50C,
    WdfDevStatePwrPolSystemSleepNeedWake = 0x50D,
    WdfDevStatePwrPolSystemSleepNeedWakeCompletePowerUp = 0x50E,
    WdfDevStatePwrPolSystemSleepPowerRequestFailed = 0x50F,
    WdfDevStatePwrPolCheckPowerPageable = 0x510,
    WdfDevStatePwrPolSleepingWakeWakeArrived = 0x511,
    WdfDevStatePwrPolSleepingWakeRevertArmWake = 0x512,
    WdfDevStatePwrPolSystemAsleepWakeArmed = 0x513,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabled = 0x514,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledWakeCanceled = 0x515,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisarm = 0x516,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggered = 0x517,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredS0 = 0x518,
    WdfDevStatePwrPolSystemWakeDeviceWokeDisarm = 0x519,
    WdfDevStatePwrPolSleepingWakeWakeArrivedNP = 0x51A | WdfDevStateNP,
    WdfDevStatePwrPolSleepingWakeRevertArmWakeNP = 0x51B | WdfDevStateNP,
    WdfDevStatePwrPolSleepingWakePowerDownFailed = 0x51C,
    WdfDevStatePwrPolSleepingWakePowerDownFailedWakeCanceled = 0x51D,
    WdfDevStatePwrPolSystemAsleepWakeArmedNP = 0x51E | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledNP = 0x51F | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledWakeCanceledNP = 0x520 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisarmNP = 0x521 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredNP = 0x522 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredS0NP = 0x523 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWokeDisarmNP = 0x524 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeCompletePowerUp = 0x525,
    WdfDevStatePwrPolSleeping = 0x526,
    WdfDevStatePwrPolSleepingNoWakePowerDown = 0x527,
    WdfDevStatePwrPolSleepingNoWakeCompletePowerDown = 0x528,
    WdfDevStatePwrPolSleepingNoWakeDxRequestFailed = 0x529,
    WdfDevStatePwrPolSleepingWakePowerDown = 0x52A,
    WdfDevStatePwrPolSleepingSendWake = 0x52B,
    WdfDevStatePwrPolSystemAsleepNoWake = 0x52C,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisabled = 0x52D,
    WdfDevStatePwrPolSystemWakeDeviceToD0 = 0x52E,
    WdfDevStatePwrPolSystemWakeDeviceToD0CompletePowerUp = 0x52F,
    WdfDevStatePwrPolSystemWakeQueryIdle = 0x530,
    WdfDevStatePwrPolStartedWakeCapable = 0x531,
    WdfDevStatePwrPolTimerExpiredDecideUsbSS = 0x532,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDown = 0x533,
    WdfDevStatePwrPolTimerExpiredWakeCapableSendWake = 0x534,
    WdfDevStatePwrPolTimerExpiredWakeCapableUsbSS = 0x535,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeArrived = 0x536,
    WdfDevStatePwrPolTimerExpiredWakeCapableCancelWake = 0x537,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeCanceled = 0x538,
    WdfDevStatePwrPolTimerExpiredWakeCapableCleanup = 0x539,
    WdfDevStatePwrPolTimerExpiredWakeCapableDxAllocFailed = 0x53A,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerDown = 0x53B,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerUp = 0x53C,
    WdfDevStatePwrPolWaitingArmedUsbSS = 0x53D,
    WdfDevStatePwrPolWaitingArmed = 0x53E,
    WdfDevStatePwrPolWaitingArmedQueryIdle = 0x53F,
    WdfDevStatePwrPolIoPresentArmed = 0x540,
    WdfDevStatePwrPolIoPresentArmedWakeCanceled = 0x541,
    WdfDevStatePwrPolS0WakeDisarm = 0x542,
    WdfDevStatePwrPolS0WakeCompletePowerUp = 0x543,
    WdfDevStatePwrPolTimerExpiredWakeSucceeded = 0x544,
    WdfDevStatePwrPolTimerExpiredWakeCompletedDisarm = 0x545,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeSucceeded = 0x546,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeFailed = 0x547,
    WdfDevStatePwrPolWakeFailedUsbSS = 0x548,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedCancelWake = 0x549,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedWakeCanceled = 0x54A,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedUsbSS = 0x54B,
    WdfDevStatePwrPolCancelingWakeForSystemSleep = 0x54C,
    WdfDevStatePwrPolCancelingWakeForSystemSleepWakeCanceled = 0x54D,
    WdfDevStatePwrPolDisarmingWakeForSystemSleepCompletePowerUp = 0x54E,
    WdfDevStatePwrPolPowerUpForSystemSleepFailed = 0x54F,
    WdfDevStatePwrPolWokeFromS0UsbSS = 0x550,
    WdfDevStatePwrPolWokeFromS0 = 0x551,
    WdfDevStatePwrPolWokeFromS0NotifyDriver = 0x552,
    WdfDevStatePwrPolStoppingResetDevice = 0x553,
    WdfDevStatePwrPolStoppingResetDeviceCompletePowerUp = 0x554,
    WdfDevStatePwrPolStoppingResetDeviceFailed = 0x555,
    WdfDevStatePwrPolStoppingD0 = 0x556,
    WdfDevStatePwrPolStoppingD0Failed = 0x557,
    WdfDevStatePwrPolStoppingDisarmWake = 0x558,
    WdfDevStatePwrPolStoppingDisarmWakeCancelWake = 0x559,
    WdfDevStatePwrPolStoppingDisarmWakeWakeCanceled = 0x55A,
    WdfDevStatePwrPolStopping = 0x55B,
    WdfDevStatePwrPolStoppingFailed = 0x55C,
    WdfDevStatePwrPolStoppingSendStatus = 0x55D,
    WdfDevStatePwrPolStoppingCancelTimer = 0x55E,
    WdfDevStatePwrPolStoppingWaitForIdleTimeout = 0x55F,
    WdfDevStatePwrPolStoppingCancelUsbSS = 0x560,
    WdfDevStatePwrPolStoppingWaitForUsbSSCompletion = 0x561,
    WdfDevStatePwrPolStoppingCancelWake = 0x562,
    WdfDevStatePwrPolStopped = 0x563,
    WdfDevStatePwrPolCancelUsbSS = 0x564,
    WdfDevStatePwrPolStarted = 0x565,
    WdfDevStatePwrPolStartedCancelTimer = 0x566,
    WdfDevStatePwrPolStartedWaitForIdleTimeout = 0x567,
    WdfDevStatePwrPolStartedWakeCapableCancelTimerForSleep = 0x568,
    WdfDevStatePwrPolStartedWakeCapableWaitForIdleTimeout = 0x569,
    WdfDevStatePwrPolStartedWakeCapableSleepingUsbSS = 0x56A,
    WdfDevStatePwrPolStartedIdleCapableCancelTimerForSleep = 0x56B,
    WdfDevStatePwrPolStartedIdleCapableWaitForIdleTimeout = 0x56C,
    WdfDevStatePwrPolDeviceD0PowerRequestFailed = 0x56D,
    WdfDevStatePwrPolDevicePowerRequestFailed = 0x56E,
    WdfDevStatePwrPolGotoDx = 0x56F,
    WdfDevStatePwrPolGotoDxInDx = 0x570,
    WdfDevStatePwrPolDx = 0x571,
    WdfDevStatePwrPolGotoD0 = 0x572,
    WdfDevStatePwrPolGotoD0InD0 = 0x573,
    WdfDevStatePwrPolFinal = 0x574,
    WdfDevStatePwrPolSleepingPowerDownNotProcessed = 0x575,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownNotProcessed = 0x576,
    WdfDevStatePwrPolTimerExpiredNoWakePowerDownNotProcessed = 0x577,
    WdfDevStatePwrPolTimerExpiredNoWakePoweredDownDisableIdleTimer = 0x578,
    WdfDevStatePwrPolStoppingWaitingForImplicitPowerDown = 0x579,
    WdfDevStatePwrPolStoppingPoweringUp = 0x57A,
    WdfDevStatePwrPolStoppingPoweringDown = 0x57B,
    WdfDevStatePwrPolNull = 0x57C,
} WDF_DEVICE_POWER_POLICY_STATE, *PWDF_DEVICE_POWER_POLICY_STATE;
typedef enum _WDF_STATE_NOTIFICATION_TYPE {
    StateNotificationInvalid = 0x0000,
    StateNotificationEnterState = 0x0001,
    StateNotificationPostProcessState = 0x0002,
    StateNotificationLeaveState = 0x0004,
    StateNotificationAllStates = StateNotificationEnterState | StateNotificationPostProcessState | StateNotificationLeaveState,
} WDF_STATE_NOTIFICATION_TYPE;
typedef enum _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES {
    IdleCapsInvalid = 0,
    IdleCannotWakeFromS0,
    IdleCanWakeFromS0,
    IdleUsbSelectiveSuspend,
} WDF_POWER_POLICY_S0_IDLE_CAPABILITIES;
typedef enum _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL {
    IdleUserControlInvalid = 0,
    IdleDoNotAllowUserControl,
    IdleAllowUserControl,
} WDF_POWER_POLICY_S0_IDLE_USER_CONTROL;
typedef enum _WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS {
    IdleTimeoutDefaultConstant = 0,
} WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS;
typedef enum _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL {
    WakeUserControlInvalid = 0,
    WakeDoNotAllowUserControl,
    WakeAllowUserControl,
} WDF_POWER_POLICY_SX_WAKE_USER_CONTROL;
typedef enum _WDF_POWER_DEVICE_STATE {
    WdfPowerDeviceInvalid = 0,
    WdfPowerDeviceD0,
    WdfPowerDeviceD1,
    WdfPowerDeviceD2,
    WdfPowerDeviceD3,
    WdfPowerDeviceD3Final,
    WdfPowerDevicePrepareForHibernation,
    WdfPowerDeviceMaximum,
} WDF_POWER_DEVICE_STATE, *PWDF_POWER_DEVICE_STATE;
typedef enum _WDF_SPECIAL_FILE_TYPE {
    WdfSpecialFileUndefined = 0,
    WdfSpecialFilePaging = 1,
    WdfSpecialFileHibernation,
    WdfSpecialFileDump,
    WdfSpecialFileMax,
} WDF_SPECIAL_FILE_TYPE, *PWDF_SPECIAL_FILE_TYPE;
typedef enum _WDF_DEVICE_IO_TYPE {
    WdfDeviceIoUndefined = 0,
    WdfDeviceIoNeither,
    WdfDeviceIoBuffered,
    WdfDeviceIoDirect,
} WDF_DEVICE_IO_TYPE, *PWDF_DEVICE_IO_TYPE;
typedef enum _WDF_FILEOBJECT_CLASS {
    WdfFileObjectInvalid = 0,
    WdfFileObjectNotRequired,
    WdfFileObjectWdfCanUseFsContext,
    WdfFileObjectWdfCanUseFsContext2,
    WdfFileObjectWdfCannotUseFsContexts,
} WDF_FILEOBJECT_CLASS, *PWDF_FILEOBJECT_CLASS;
typedef enum _WDF_DEVICE_FAILED_ACTION {
    WdfDeviceFailedUndefined = 0,
    WdfDeviceFailedAttemptRestart,
    WdfDeviceFailedNoRestart,
} WDF_DEVICE_FAILED_ACTION;
       
extern const UNICODE_STRING SDDL_DEVOBJ_KERNEL_ONLY;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RX;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_R;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_R_RES_R;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R;
extern const UNICODE_STRING SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RWX_RES_RWX;
NTSTATUS
WdmlibIoCreateDeviceSecure(
      PDRIVER_OBJECT DriverObject,
      ULONG DeviceExtensionSize,
      PUNICODE_STRING DeviceName ,
      ULONG DeviceType,
      ULONG DeviceCharacteristics,
      BOOLEAN Exclusive,
      PCUNICODE_STRING DefaultSDDLString,
      LPCGUID DeviceClassGuid ,
     PDEVICE_OBJECT *DeviceObject
    );
NTSTATUS
WdmlibRtlInitUnicodeStringEx(
     PUNICODE_STRING DestinationString,
      PCWSTR SourceString
    );
NTSTATUS
WdmlibIoValidateDeviceIoControlAccess(
      PIRP Irp,
      ULONG RequiredAccess
    );
typedef enum _WDF_REQUEST_TYPE WDF_REQUEST_TYPE;
typedef
void
(EVT_WDF_DEVICE_FILE_CREATE)(
     WDFDEVICE Device,
     WDFREQUEST Request,
     WDFFILEOBJECT FileObject
    );
typedef EVT_WDF_DEVICE_FILE_CREATE *PFN_WDF_DEVICE_FILE_CREATE;
typedef
void
(EVT_WDF_FILE_CLOSE)(
     WDFFILEOBJECT FileObject
    );
typedef EVT_WDF_FILE_CLOSE *PFN_WDF_FILE_CLOSE;
typedef
void
(EVT_WDF_FILE_CLEANUP)(
     WDFFILEOBJECT FileObject
    );
typedef EVT_WDF_FILE_CLEANUP *PFN_WDF_FILE_CLEANUP;
typedef struct _WDF_FILEOBJECT_CONFIG {
    ULONG Size;
    PFN_WDF_DEVICE_FILE_CREATE EvtDeviceFileCreate;
    PFN_WDF_FILE_CLOSE EvtFileClose;
    PFN_WDF_FILE_CLEANUP EvtFileCleanup;
    WDF_TRI_STATE AutoForwardCleanupClose;
    WDF_FILEOBJECT_CLASS FileObjectClass;
} WDF_FILEOBJECT_CONFIG, *PWDF_FILEOBJECT_CONFIG;
void
__forceinline
WDF_FILEOBJECT_CONFIG_INIT(
     PWDF_FILEOBJECT_CONFIG FileEventCallbacks,
      PFN_WDF_DEVICE_FILE_CREATE EvtDeviceFileCreate,
      PFN_WDF_FILE_CLOSE EvtFileClose,
      PFN_WDF_FILE_CLEANUP EvtFileCleanup
    )
{
    FileEventCallbacks->Size = sizeof(WDF_FILEOBJECT_CONFIG);
    FileEventCallbacks->EvtDeviceFileCreate = EvtDeviceFileCreate;
    FileEventCallbacks->EvtFileClose = EvtFileClose;
    FileEventCallbacks->EvtFileCleanup = EvtFileCleanup;
    FileEventCallbacks->FileObjectClass = WdfFileObjectWdfCannotUseFsContexts;
    FileEventCallbacks->AutoForwardCleanupClose = WdfUseDefault;
}
typedef struct _WDF_DEVICE_PNP_NOTIFICATION_DATA {
    WDF_STATE_NOTIFICATION_TYPE Type;
    union {
        struct {
            WDF_DEVICE_PNP_STATE CurrentState;
            WDF_DEVICE_PNP_STATE NewState;
        } EnterState;
        struct {
            WDF_DEVICE_PNP_STATE CurrentState;
        } PostProcessState;
        struct {
            WDF_DEVICE_PNP_STATE CurrentState;
            WDF_DEVICE_PNP_STATE NewState;
        } LeaveState;
    } Data;
} WDF_DEVICE_PNP_NOTIFICATION_DATA;
typedef const WDF_DEVICE_PNP_NOTIFICATION_DATA* PCWDF_DEVICE_PNP_NOTIFICATION_DATA;
typedef struct _WDF_DEVICE_POWER_NOTIFICATION_DATA {
    WDF_STATE_NOTIFICATION_TYPE Type;
    union {
        struct {
            WDF_DEVICE_POWER_STATE CurrentState;
            WDF_DEVICE_POWER_STATE NewState;
        } EnterState;
        struct {
            WDF_DEVICE_POWER_STATE CurrentState;
        } PostProcessState;
        struct {
            WDF_DEVICE_POWER_STATE CurrentState;
            WDF_DEVICE_POWER_STATE NewState;
        } LeaveState;
    } Data;
} WDF_DEVICE_POWER_NOTIFICATION_DATA;
typedef const WDF_DEVICE_POWER_NOTIFICATION_DATA* PCWDF_DEVICE_POWER_NOTIFICATION_DATA;
typedef struct _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA {
    WDF_STATE_NOTIFICATION_TYPE Type;
    union {
        struct {
            WDF_DEVICE_POWER_POLICY_STATE CurrentState;
            WDF_DEVICE_POWER_POLICY_STATE NewState;
        } EnterState;
        struct {
            WDF_DEVICE_POWER_POLICY_STATE CurrentState;
        } PostProcessState;
        struct {
            WDF_DEVICE_POWER_POLICY_STATE CurrentState;
            WDF_DEVICE_POWER_POLICY_STATE NewState;
        } LeaveState;
    } Data;
} WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA;
typedef const WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA* PCWDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA;
typedef
void
(EVT_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION)(
    WDFDEVICE Device,
    PCWDF_DEVICE_PNP_NOTIFICATION_DATA NotificationData
    );
typedef EVT_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION *PFN_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION;
typedef
void
(EVT_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION)(
    WDFDEVICE Device,
    PCWDF_DEVICE_POWER_NOTIFICATION_DATA NotificationData
    );
typedef EVT_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION *PFN_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION;
typedef
void
(EVT_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION)(
    WDFDEVICE Device,
    PCWDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData
    );
typedef EVT_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION *PFN_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION;
typedef
NTSTATUS
(EVT_WDF_DEVICE_D0_ENTRY)(
      WDFDEVICE Device,
      WDF_POWER_DEVICE_STATE PreviousState
    );
typedef EVT_WDF_DEVICE_D0_ENTRY *PFN_WDF_DEVICE_D0_ENTRY;
typedef
NTSTATUS
(EVT_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED)(
      WDFDEVICE Device,
      WDF_POWER_DEVICE_STATE PreviousState
    );
typedef EVT_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED *PFN_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED;
typedef
NTSTATUS
(EVT_WDF_DEVICE_D0_EXIT)(
      WDFDEVICE Device,
      WDF_POWER_DEVICE_STATE TargetState
    );
typedef EVT_WDF_DEVICE_D0_EXIT *PFN_WDF_DEVICE_D0_EXIT;
typedef
NTSTATUS
(EVT_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED)(
      WDFDEVICE Device,
      WDF_POWER_DEVICE_STATE TargetState
    );
typedef EVT_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED *PFN_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED;
typedef
NTSTATUS
(EVT_WDF_DEVICE_PREPARE_HARDWARE)(
      WDFDEVICE Device,
      WDFCMRESLIST ResourcesRaw,
      WDFCMRESLIST ResourcesTranslated
    );
typedef EVT_WDF_DEVICE_PREPARE_HARDWARE *PFN_WDF_DEVICE_PREPARE_HARDWARE;
typedef
NTSTATUS
(EVT_WDF_DEVICE_RELEASE_HARDWARE)(
      WDFDEVICE Device,
      WDFCMRESLIST ResourcesTranslated
    );
typedef EVT_WDF_DEVICE_RELEASE_HARDWARE *PFN_WDF_DEVICE_RELEASE_HARDWARE;
typedef
void
(EVT_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP)(
      WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP *PFN_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP;
typedef
void
(EVT_WDF_DEVICE_SELF_MANAGED_IO_FLUSH)(
      WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_FLUSH *PFN_WDF_DEVICE_SELF_MANAGED_IO_FLUSH;
typedef
NTSTATUS
(EVT_WDF_DEVICE_SELF_MANAGED_IO_INIT)(
      WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_INIT *PFN_WDF_DEVICE_SELF_MANAGED_IO_INIT;
typedef
NTSTATUS
(EVT_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND)(
      WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND *PFN_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND;
typedef
NTSTATUS
(EVT_WDF_DEVICE_SELF_MANAGED_IO_RESTART)(
      WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_RESTART *PFN_WDF_DEVICE_SELF_MANAGED_IO_RESTART;
typedef
NTSTATUS
(EVT_WDF_DEVICE_QUERY_STOP)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_QUERY_STOP *PFN_WDF_DEVICE_QUERY_STOP;
typedef
NTSTATUS
(EVT_WDF_DEVICE_QUERY_REMOVE)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_QUERY_REMOVE *PFN_WDF_DEVICE_QUERY_REMOVE;
typedef
void
(EVT_WDF_DEVICE_SURPRISE_REMOVAL)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SURPRISE_REMOVAL *PFN_WDF_DEVICE_SURPRISE_REMOVAL;
typedef
void
(EVT_WDF_DEVICE_USAGE_NOTIFICATION)(
     WDFDEVICE Device,
     WDF_SPECIAL_FILE_TYPE NotificationType,
     BOOLEAN IsInNotificationPath
    );
typedef EVT_WDF_DEVICE_USAGE_NOTIFICATION *PFN_WDF_DEVICE_USAGE_NOTIFICATION;
typedef
void
(EVT_WDF_DEVICE_RELATIONS_QUERY)(
     WDFDEVICE Device,
     DEVICE_RELATION_TYPE RelationType
    );
typedef EVT_WDF_DEVICE_RELATIONS_QUERY *PFN_WDF_DEVICE_RELATIONS_QUERY;
typedef
NTSTATUS
(EVT_WDF_DEVICE_ARM_WAKE_FROM_S0)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_ARM_WAKE_FROM_S0 *PFN_WDF_DEVICE_ARM_WAKE_FROM_S0;
typedef
NTSTATUS
(EVT_WDF_DEVICE_ARM_WAKE_FROM_SX)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_ARM_WAKE_FROM_SX *PFN_WDF_DEVICE_ARM_WAKE_FROM_SX;
typedef
NTSTATUS
(EVT_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON)(
     WDFDEVICE Device,
     BOOLEAN DeviceWakeEnabled,
     BOOLEAN ChildrenArmedForWake
    );
typedef EVT_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON *PFN_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON;
typedef
void
(EVT_WDF_DEVICE_DISARM_WAKE_FROM_S0)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_DISARM_WAKE_FROM_S0 *PFN_WDF_DEVICE_DISARM_WAKE_FROM_S0;
typedef
void
(EVT_WDF_DEVICE_DISARM_WAKE_FROM_SX)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_DISARM_WAKE_FROM_SX *PFN_WDF_DEVICE_DISARM_WAKE_FROM_SX;
typedef
void
(EVT_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED *PFN_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED;
typedef
void
(EVT_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED *PFN_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED;
typedef struct _WDF_PNPPOWER_EVENT_CALLBACKS {
    ULONG Size;
    PFN_WDF_DEVICE_D0_ENTRY EvtDeviceD0Entry;
    PFN_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED EvtDeviceD0EntryPostInterruptsEnabled;
    PFN_WDF_DEVICE_D0_EXIT EvtDeviceD0Exit;
    PFN_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED EvtDeviceD0ExitPreInterruptsDisabled;
    PFN_WDF_DEVICE_PREPARE_HARDWARE EvtDevicePrepareHardware;
    PFN_WDF_DEVICE_RELEASE_HARDWARE EvtDeviceReleaseHardware;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP EvtDeviceSelfManagedIoCleanup;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_FLUSH EvtDeviceSelfManagedIoFlush;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_INIT EvtDeviceSelfManagedIoInit;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND EvtDeviceSelfManagedIoSuspend;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_RESTART EvtDeviceSelfManagedIoRestart;
    PFN_WDF_DEVICE_SURPRISE_REMOVAL EvtDeviceSurpriseRemoval;
    PFN_WDF_DEVICE_QUERY_REMOVE EvtDeviceQueryRemove;
    PFN_WDF_DEVICE_QUERY_STOP EvtDeviceQueryStop;
    PFN_WDF_DEVICE_USAGE_NOTIFICATION EvtDeviceUsageNotification;
    PFN_WDF_DEVICE_RELATIONS_QUERY EvtDeviceRelationsQuery;
} WDF_PNPPOWER_EVENT_CALLBACKS, *PWDF_PNPPOWER_EVENT_CALLBACKS;
typedef struct _WDF_POWER_POLICY_EVENT_CALLBACKS {
    ULONG Size;
    PFN_WDF_DEVICE_ARM_WAKE_FROM_S0 EvtDeviceArmWakeFromS0;
    PFN_WDF_DEVICE_DISARM_WAKE_FROM_S0 EvtDeviceDisarmWakeFromS0;
    PFN_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED EvtDeviceWakeFromS0Triggered;
    PFN_WDF_DEVICE_ARM_WAKE_FROM_SX EvtDeviceArmWakeFromSx;
    PFN_WDF_DEVICE_DISARM_WAKE_FROM_SX EvtDeviceDisarmWakeFromSx;
    PFN_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED EvtDeviceWakeFromSxTriggered;
    PFN_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON EvtDeviceArmWakeFromSxWithReason;
} WDF_POWER_POLICY_EVENT_CALLBACKS, *PWDF_POWER_POLICY_EVENT_CALLBACKS;
void
__forceinline
WDF_POWER_POLICY_EVENT_CALLBACKS_INIT(
    PWDF_POWER_POLICY_EVENT_CALLBACKS Callbacks
    )
{
    memset((Callbacks),0,(sizeof(WDF_POWER_POLICY_EVENT_CALLBACKS)));
    Callbacks->Size = sizeof(WDF_POWER_POLICY_EVENT_CALLBACKS);
}
void
__forceinline
WDF_PNPPOWER_EVENT_CALLBACKS_INIT(
     PWDF_PNPPOWER_EVENT_CALLBACKS Callbacks
    )
{
    memset((Callbacks),0,(sizeof(WDF_PNPPOWER_EVENT_CALLBACKS)));
    Callbacks->Size = sizeof(WDF_PNPPOWER_EVENT_CALLBACKS);
}
ULONG
__forceinline
WdfDevStateNormalize(
    ULONG State
    )
{
    return State & ~WdfDevStateNP;
}
BOOLEAN
__forceinline
WdfDevStateIsNP(
    ULONG State
    )
{
    return (State & WdfDevStateNP) ? 1 : 0;
}
typedef struct _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS {
    ULONG Size;
    WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps;
    DEVICE_POWER_STATE DxState;
    ULONG IdleTimeout;
    WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings;
    WDF_TRI_STATE Enabled;
} WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS, *PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS;
void
__forceinline
WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_INIT(
    PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS Settings,
    WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps
    )
{
    memset((Settings),0,(sizeof(WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS)));
    Settings->Size = sizeof(WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS);
    Settings->IdleTimeout = ((ULONG) IdleTimeoutDefaultConstant);
    Settings->UserControlOfIdleSettings = IdleAllowUserControl;
    Settings->Enabled = WdfUseDefault;
    Settings->IdleCaps = IdleCaps;
    switch (IdleCaps) {
    case IdleUsbSelectiveSuspend:
    case IdleCanWakeFromS0:
        Settings->DxState = PowerDeviceMaximum;
        break;
    case IdleCannotWakeFromS0:
        Settings->DxState = PowerDeviceD3;
        break;
    }
}
typedef struct _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS {
    ULONG Size;
    DEVICE_POWER_STATE DxState;
    WDF_POWER_POLICY_SX_WAKE_USER_CONTROL UserControlOfWakeSettings;
    WDF_TRI_STATE Enabled;
    BOOLEAN ArmForWakeIfChildrenAreArmedForWake;
    BOOLEAN IndicateChildWakeOnParentWake;
} WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS, *PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS;
void
__forceinline
WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_INIT(
    PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS Settings
    )
{
    memset((Settings),0,(sizeof(WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS)));
    Settings->Size = sizeof(WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS);
    Settings->Enabled = WdfUseDefault;
    Settings->DxState = PowerDeviceMaximum;
    Settings->UserControlOfWakeSettings = WakeAllowUserControl;
}
typedef struct _WDF_DEVICE_STATE {
    ULONG Size;
    WDF_TRI_STATE Disabled;
    WDF_TRI_STATE DontDisplayInUI;
    WDF_TRI_STATE Failed;
    WDF_TRI_STATE NotDisableable;
    WDF_TRI_STATE Removed;
    WDF_TRI_STATE ResourcesChanged;
} WDF_DEVICE_STATE, *PWDF_DEVICE_STATE;
void
__forceinline
WDF_DEVICE_STATE_INIT(
     PWDF_DEVICE_STATE PnpDeviceState
    )
{
    memset((PnpDeviceState),0,(sizeof(WDF_DEVICE_STATE)));
    PnpDeviceState->Size = sizeof(WDF_DEVICE_STATE);
    PnpDeviceState->Disabled = WdfUseDefault;
    PnpDeviceState->DontDisplayInUI = WdfUseDefault;
    PnpDeviceState->Failed = WdfUseDefault;
    PnpDeviceState->NotDisableable = WdfUseDefault;
    PnpDeviceState->Removed = WdfUseDefault;
    PnpDeviceState->ResourcesChanged = WdfUseDefault;
}
typedef struct _WDF_DEVICE_PNP_CAPABILITIES {
    ULONG Size;
    WDF_TRI_STATE LockSupported;
    WDF_TRI_STATE EjectSupported;
    WDF_TRI_STATE Removable;
    WDF_TRI_STATE DockDevice;
    WDF_TRI_STATE UniqueID;
    WDF_TRI_STATE SilentInstall;
    WDF_TRI_STATE SurpriseRemovalOK;
    WDF_TRI_STATE HardwareDisabled;
    WDF_TRI_STATE NoDisplayInUI;
    ULONG Address;
    ULONG UINumber;
} WDF_DEVICE_PNP_CAPABILITIES, *PWDF_DEVICE_PNP_CAPABILITIES;
void
__forceinline
WDF_DEVICE_PNP_CAPABILITIES_INIT(
    PWDF_DEVICE_PNP_CAPABILITIES Caps
    )
{
    memset((Caps),0,(sizeof(WDF_DEVICE_PNP_CAPABILITIES)));
    Caps->Size = sizeof(WDF_DEVICE_PNP_CAPABILITIES);
    Caps->LockSupported = WdfUseDefault;
    Caps->EjectSupported = WdfUseDefault;
    Caps->Removable = WdfUseDefault;
    Caps->DockDevice = WdfUseDefault;
    Caps->UniqueID = WdfUseDefault;
    Caps->SilentInstall = WdfUseDefault;
    Caps->SurpriseRemovalOK = WdfUseDefault;
    Caps->HardwareDisabled = WdfUseDefault;
    Caps->NoDisplayInUI = WdfUseDefault;
    Caps->Address = (ULONG) -1;
    Caps->UINumber = (ULONG) -1;
}
typedef struct _WDF_DEVICE_POWER_CAPABILITIES {
    ULONG Size;
    WDF_TRI_STATE DeviceD1;
    WDF_TRI_STATE DeviceD2;
    WDF_TRI_STATE WakeFromD0;
    WDF_TRI_STATE WakeFromD1;
    WDF_TRI_STATE WakeFromD2;
    WDF_TRI_STATE WakeFromD3;
    DEVICE_POWER_STATE DeviceState[PowerSystemMaximum];
    DEVICE_POWER_STATE DeviceWake;
    SYSTEM_POWER_STATE SystemWake;
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;
    DEVICE_POWER_STATE IdealDxStateForSx;
} WDF_DEVICE_POWER_CAPABILITIES, *PWDF_DEVICE_POWER_CAPABILITIES;
void
__forceinline
WDF_DEVICE_POWER_CAPABILITIES_INIT(
    PWDF_DEVICE_POWER_CAPABILITIES Caps
    )
{
    ULONG i;
    memset((Caps),0,(sizeof(WDF_DEVICE_POWER_CAPABILITIES)));
    Caps->Size = sizeof(WDF_DEVICE_POWER_CAPABILITIES);
    Caps->DeviceD1 = WdfUseDefault;
    Caps->DeviceD2 = WdfUseDefault;
    Caps->WakeFromD0 = WdfUseDefault;
    Caps->WakeFromD1 = WdfUseDefault;
    Caps->WakeFromD2 = WdfUseDefault;
    Caps->WakeFromD3 = WdfUseDefault;
    for (i = 0; i < sizeof(Caps->DeviceState)/sizeof(Caps->DeviceState[1]); i++) {
        Caps->DeviceState[i] = PowerDeviceMaximum;
    }
    Caps->DeviceWake = PowerDeviceMaximum;
    Caps->SystemWake = PowerSystemMaximum;
    Caps->D1Latency = (ULONG) -1;
    Caps->D2Latency = (ULONG) -1;
    Caps->D3Latency = (ULONG) -1;
    Caps->IdealDxStateForSx = PowerDeviceMaximum;
}
typedef
NTSTATUS
(EVT_WDFDEVICE_WDM_IRP_PREPROCESS)(
    WDFDEVICE Device,
    PIRP Irp
    );
typedef EVT_WDFDEVICE_WDM_IRP_PREPROCESS *PFN_WDFDEVICE_WDM_IRP_PREPROCESS;
typedef
void
(EVT_WDF_IO_IN_CALLER_CONTEXT) (
     WDFDEVICE Device,
     WDFREQUEST Request
    );
typedef EVT_WDF_IO_IN_CALLER_CONTEXT *PFN_WDF_IO_IN_CALLER_CONTEXT;
typedef
void
(*PFN_WDFDEVICEGETDEVICESTATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_DEVICE_STATE DeviceState
    );
void
__forceinline
WdfDeviceGetDeviceState(
    WDFDEVICE Device,
    PWDF_DEVICE_STATE DeviceState
    )
{
    ((PFN_WDFDEVICEGETDEVICESTATE) WdfFunctions[WdfDeviceGetDeviceStateTableIndex])(WdfDriverGlobals, Device, DeviceState);
}
typedef
void
(*PFN_WDFDEVICESETDEVICESTATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_DEVICE_STATE DeviceState
    );
void
__forceinline
WdfDeviceSetDeviceState(
    WDFDEVICE Device,
    PWDF_DEVICE_STATE DeviceState
    )
{
    ((PFN_WDFDEVICESETDEVICESTATE) WdfFunctions[WdfDeviceSetDeviceStateTableIndex])(WdfDriverGlobals, Device, DeviceState);
}
typedef
WDFDEVICE
(*PFN_WDFWDMDEVICEGETWDFDEVICEHANDLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PDEVICE_OBJECT DeviceObject
    );
WDFDEVICE
__forceinline
WdfWdmDeviceGetWdfDeviceHandle(
    PDEVICE_OBJECT DeviceObject
    )
{
    return ((PFN_WDFWDMDEVICEGETWDFDEVICEHANDLE) WdfFunctions[WdfWdmDeviceGetWdfDeviceHandleTableIndex])(WdfDriverGlobals, DeviceObject);
}
typedef
PDEVICE_OBJECT
(*PFN_WDFDEVICEWDMGETDEVICEOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
PDEVICE_OBJECT
__forceinline
WdfDeviceWdmGetDeviceObject(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEWDMGETDEVICEOBJECT) WdfFunctions[WdfDeviceWdmGetDeviceObjectTableIndex])(WdfDriverGlobals, Device);
}
typedef
PDEVICE_OBJECT
(*PFN_WDFDEVICEWDMGETATTACHEDDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
PDEVICE_OBJECT
__forceinline
WdfDeviceWdmGetAttachedDevice(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEWDMGETATTACHEDDEVICE) WdfFunctions[WdfDeviceWdmGetAttachedDeviceTableIndex])(WdfDriverGlobals, Device);
}
typedef
PDEVICE_OBJECT
(*PFN_WDFDEVICEWDMGETPHYSICALDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
PDEVICE_OBJECT
__forceinline
WdfDeviceWdmGetPhysicalDevice(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEWDMGETPHYSICALDEVICE) WdfFunctions[WdfDeviceWdmGetPhysicalDeviceTableIndex])(WdfDriverGlobals, Device);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEWDMDISPATCHPREPROCESSEDIRP)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PIRP Irp
    );
NTSTATUS
__forceinline
WdfDeviceWdmDispatchPreprocessedIrp(
    WDFDEVICE Device,
    PIRP Irp
    )
{
    return ((PFN_WDFDEVICEWDMDISPATCHPREPROCESSEDIRP) WdfFunctions[WdfDeviceWdmDispatchPreprocessedIrpTableIndex])(WdfDriverGlobals, Device, Irp);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEADDDEPENDENTUSAGEDEVICEOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PDEVICE_OBJECT DependentDevice
    );
NTSTATUS
__forceinline
WdfDeviceAddDependentUsageDeviceObject(
    WDFDEVICE Device,
    PDEVICE_OBJECT DependentDevice
    )
{
    return ((PFN_WDFDEVICEADDDEPENDENTUSAGEDEVICEOBJECT) WdfFunctions[WdfDeviceAddDependentUsageDeviceObjectTableIndex])(WdfDriverGlobals, Device, DependentDevice);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEADDREMOVALRELATIONSPHYSICALDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PDEVICE_OBJECT PhysicalDevice
    );
NTSTATUS
__forceinline
WdfDeviceAddRemovalRelationsPhysicalDevice(
    WDFDEVICE Device,
    PDEVICE_OBJECT PhysicalDevice
    )
{
    return ((PFN_WDFDEVICEADDREMOVALRELATIONSPHYSICALDEVICE) WdfFunctions[WdfDeviceAddRemovalRelationsPhysicalDeviceTableIndex])(WdfDriverGlobals, Device, PhysicalDevice);
}
typedef
void
(*PFN_WDFDEVICEREMOVEREMOVALRELATIONSPHYSICALDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PDEVICE_OBJECT PhysicalDevice
    );
void
__forceinline
WdfDeviceRemoveRemovalRelationsPhysicalDevice(
    WDFDEVICE Device,
    PDEVICE_OBJECT PhysicalDevice
    )
{
    ((PFN_WDFDEVICEREMOVEREMOVALRELATIONSPHYSICALDEVICE) WdfFunctions[WdfDeviceRemoveRemovalRelationsPhysicalDeviceTableIndex])(WdfDriverGlobals, Device, PhysicalDevice);
}
typedef
void
(*PFN_WDFDEVICECLEARREMOVALRELATIONSDEVICES)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
void
__forceinline
WdfDeviceClearRemovalRelationsDevices(
    WDFDEVICE Device
    )
{
    ((PFN_WDFDEVICECLEARREMOVALRELATIONSDEVICES) WdfFunctions[WdfDeviceClearRemovalRelationsDevicesTableIndex])(WdfDriverGlobals, Device);
}
typedef
WDFDRIVER
(*PFN_WDFDEVICEGETDRIVER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
WDFDRIVER
__forceinline
WdfDeviceGetDriver(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDRIVER) WdfFunctions[WdfDeviceGetDriverTableIndex])(WdfDriverGlobals, Device);
}
typedef
NTSTATUS
(*PFN_WDFDEVICERETRIEVEDEVICENAME)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    WDFSTRING String
    );
NTSTATUS
__forceinline
WdfDeviceRetrieveDeviceName(
    WDFDEVICE Device,
    WDFSTRING String
    )
{
    return ((PFN_WDFDEVICERETRIEVEDEVICENAME) WdfFunctions[WdfDeviceRetrieveDeviceNameTableIndex])(WdfDriverGlobals, Device, String);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEASSIGNMOFRESOURCENAME)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PCUNICODE_STRING MofResourceName
    );
NTSTATUS
__forceinline
WdfDeviceAssignMofResourceName(
    WDFDEVICE Device,
    PCUNICODE_STRING MofResourceName
    )
{
    return ((PFN_WDFDEVICEASSIGNMOFRESOURCENAME) WdfFunctions[WdfDeviceAssignMofResourceNameTableIndex])(WdfDriverGlobals, Device, MofResourceName);
}
typedef
WDFIOTARGET
(*PFN_WDFDEVICEGETIOTARGET)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
WDFIOTARGET
__forceinline
WdfDeviceGetIoTarget(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETIOTARGET) WdfFunctions[WdfDeviceGetIoTargetTableIndex])(WdfDriverGlobals, Device);
}
typedef
WDF_DEVICE_PNP_STATE
(*PFN_WDFDEVICEGETDEVICEPNPSTATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
WDF_DEVICE_PNP_STATE
__forceinline
WdfDeviceGetDevicePnpState(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEVICEPNPSTATE) WdfFunctions[WdfDeviceGetDevicePnpStateTableIndex])(WdfDriverGlobals, Device);
}
typedef
WDF_DEVICE_POWER_STATE
(*PFN_WDFDEVICEGETDEVICEPOWERSTATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
WDF_DEVICE_POWER_STATE
__forceinline
WdfDeviceGetDevicePowerState(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEVICEPOWERSTATE) WdfFunctions[WdfDeviceGetDevicePowerStateTableIndex])(WdfDriverGlobals, Device);
}
typedef
WDF_DEVICE_POWER_POLICY_STATE
(*PFN_WDFDEVICEGETDEVICEPOWERPOLICYSTATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
WDF_DEVICE_POWER_POLICY_STATE
__forceinline
WdfDeviceGetDevicePowerPolicyState(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEVICEPOWERPOLICYSTATE) WdfFunctions[WdfDeviceGetDevicePowerPolicyStateTableIndex])(WdfDriverGlobals, Device);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEASSIGNS0IDLESETTINGS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS Settings
    );
NTSTATUS
__forceinline
WdfDeviceAssignS0IdleSettings(
    WDFDEVICE Device,
    PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS Settings
    )
{
    return ((PFN_WDFDEVICEASSIGNS0IDLESETTINGS) WdfFunctions[WdfDeviceAssignS0IdleSettingsTableIndex])(WdfDriverGlobals, Device, Settings);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEASSIGNSXWAKESETTINGS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS Settings
    );
NTSTATUS
__forceinline
WdfDeviceAssignSxWakeSettings(
    WDFDEVICE Device,
    PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS Settings
    )
{
    return ((PFN_WDFDEVICEASSIGNSXWAKESETTINGS) WdfFunctions[WdfDeviceAssignSxWakeSettingsTableIndex])(WdfDriverGlobals, Device, Settings);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEOPENREGISTRYKEY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    ULONG DeviceInstanceKeyType,
    ACCESS_MASK DesiredAccess,
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    WDFKEY* Key
    );
NTSTATUS
__forceinline
WdfDeviceOpenRegistryKey(
    WDFDEVICE Device,
    ULONG DeviceInstanceKeyType,
    ACCESS_MASK DesiredAccess,
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    WDFKEY* Key
    )
{
    return ((PFN_WDFDEVICEOPENREGISTRYKEY) WdfFunctions[WdfDeviceOpenRegistryKeyTableIndex])(WdfDriverGlobals, Device, DeviceInstanceKeyType, DesiredAccess, KeyAttributes, Key);
}
typedef
void
(*PFN_WDFDEVICESETSPECIALFILESUPPORT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    WDF_SPECIAL_FILE_TYPE FileType,
    BOOLEAN FileTypeIsSupported
    );
void
__forceinline
WdfDeviceSetSpecialFileSupport(
    WDFDEVICE Device,
    WDF_SPECIAL_FILE_TYPE FileType,
    BOOLEAN FileTypeIsSupported
    )
{
    ((PFN_WDFDEVICESETSPECIALFILESUPPORT) WdfFunctions[WdfDeviceSetSpecialFileSupportTableIndex])(WdfDriverGlobals, Device, FileType, FileTypeIsSupported);
}
typedef
void
(*PFN_WDFDEVICESETCHARACTERISTICS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    ULONG DeviceCharacteristics
    );
void
__forceinline
WdfDeviceSetCharacteristics(
    WDFDEVICE Device,
    ULONG DeviceCharacteristics
    )
{
    ((PFN_WDFDEVICESETCHARACTERISTICS) WdfFunctions[WdfDeviceSetCharacteristicsTableIndex])(WdfDriverGlobals, Device, DeviceCharacteristics);
}
typedef
ULONG
(*PFN_WDFDEVICEGETCHARACTERISTICS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
ULONG
__forceinline
WdfDeviceGetCharacteristics(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETCHARACTERISTICS) WdfFunctions[WdfDeviceGetCharacteristicsTableIndex])(WdfDriverGlobals, Device);
}
typedef
ULONG
(*PFN_WDFDEVICEGETALIGNMENTREQUIREMENT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
ULONG
__forceinline
WdfDeviceGetAlignmentRequirement(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETALIGNMENTREQUIREMENT) WdfFunctions[WdfDeviceGetAlignmentRequirementTableIndex])(WdfDriverGlobals, Device);
}
typedef
void
(*PFN_WDFDEVICESETALIGNMENTREQUIREMENT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    ULONG AlignmentRequirement
    );
void
__forceinline
WdfDeviceSetAlignmentRequirement(
    WDFDEVICE Device,
    ULONG AlignmentRequirement
    )
{
    ((PFN_WDFDEVICESETALIGNMENTREQUIREMENT) WdfFunctions[WdfDeviceSetAlignmentRequirementTableIndex])(WdfDriverGlobals, Device, AlignmentRequirement);
}
typedef
void
(*PFN_WDFDEVICEINITFREE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit
    );
void
__forceinline
WdfDeviceInitFree(
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITFREE) WdfFunctions[WdfDeviceInitFreeTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef
void
(*PFN_WDFDEVICEINITSETPNPPOWEREVENTCALLBACKS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PWDF_PNPPOWER_EVENT_CALLBACKS PnpPowerEventCallbacks
    );
void
__forceinline
WdfDeviceInitSetPnpPowerEventCallbacks(
    PWDFDEVICE_INIT DeviceInit,
    PWDF_PNPPOWER_EVENT_CALLBACKS PnpPowerEventCallbacks
    )
{
    ((PFN_WDFDEVICEINITSETPNPPOWEREVENTCALLBACKS) WdfFunctions[WdfDeviceInitSetPnpPowerEventCallbacksTableIndex])(WdfDriverGlobals, DeviceInit, PnpPowerEventCallbacks);
}
typedef
void
(*PFN_WDFDEVICEINITSETPOWERPOLICYEVENTCALLBACKS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PWDF_POWER_POLICY_EVENT_CALLBACKS PowerPolicyEventCallbacks
    );
void
__forceinline
WdfDeviceInitSetPowerPolicyEventCallbacks(
    PWDFDEVICE_INIT DeviceInit,
    PWDF_POWER_POLICY_EVENT_CALLBACKS PowerPolicyEventCallbacks
    )
{
    ((PFN_WDFDEVICEINITSETPOWERPOLICYEVENTCALLBACKS) WdfFunctions[WdfDeviceInitSetPowerPolicyEventCallbacksTableIndex])(WdfDriverGlobals, DeviceInit, PowerPolicyEventCallbacks);
}
typedef
void
(*PFN_WDFDEVICEINITSETPOWERPOLICYOWNERSHIP)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    BOOLEAN IsPowerPolicyOwner
    );
void
__forceinline
WdfDeviceInitSetPowerPolicyOwnership(
    PWDFDEVICE_INIT DeviceInit,
    BOOLEAN IsPowerPolicyOwner
    )
{
    ((PFN_WDFDEVICEINITSETPOWERPOLICYOWNERSHIP) WdfFunctions[WdfDeviceInitSetPowerPolicyOwnershipTableIndex])(WdfDriverGlobals, DeviceInit, IsPowerPolicyOwner);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEINITREGISTERPNPSTATECHANGECALLBACK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    WDF_DEVICE_PNP_STATE PnpState,
    PFN_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION EvtDevicePnpStateChange,
    ULONG CallbackTypes
    );
NTSTATUS
__forceinline
WdfDeviceInitRegisterPnpStateChangeCallback(
    PWDFDEVICE_INIT DeviceInit,
    WDF_DEVICE_PNP_STATE PnpState,
    PFN_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION EvtDevicePnpStateChange,
    ULONG CallbackTypes
    )
{
    return ((PFN_WDFDEVICEINITREGISTERPNPSTATECHANGECALLBACK) WdfFunctions[WdfDeviceInitRegisterPnpStateChangeCallbackTableIndex])(WdfDriverGlobals, DeviceInit, PnpState, EvtDevicePnpStateChange, CallbackTypes);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEINITREGISTERPOWERSTATECHANGECALLBACK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    WDF_DEVICE_POWER_STATE PowerState,
    PFN_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION EvtDevicePowerStateChange,
    ULONG CallbackTypes
    );
NTSTATUS
__forceinline
WdfDeviceInitRegisterPowerStateChangeCallback(
    PWDFDEVICE_INIT DeviceInit,
    WDF_DEVICE_POWER_STATE PowerState,
    PFN_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION EvtDevicePowerStateChange,
    ULONG CallbackTypes
    )
{
    return ((PFN_WDFDEVICEINITREGISTERPOWERSTATECHANGECALLBACK) WdfFunctions[WdfDeviceInitRegisterPowerStateChangeCallbackTableIndex])(WdfDriverGlobals, DeviceInit, PowerState, EvtDevicePowerStateChange, CallbackTypes);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEINITREGISTERPOWERPOLICYSTATECHANGECALLBACK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    WDF_DEVICE_POWER_POLICY_STATE PowerPolicyState,
    PFN_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION EvtDevicePowerPolicyStateChange,
    ULONG CallbackTypes
    );
NTSTATUS
__forceinline
WdfDeviceInitRegisterPowerPolicyStateChangeCallback(
    PWDFDEVICE_INIT DeviceInit,
    WDF_DEVICE_POWER_POLICY_STATE PowerPolicyState,
    PFN_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION EvtDevicePowerPolicyStateChange,
    ULONG CallbackTypes
    )
{
    return ((PFN_WDFDEVICEINITREGISTERPOWERPOLICYSTATECHANGECALLBACK) WdfFunctions[WdfDeviceInitRegisterPowerPolicyStateChangeCallbackTableIndex])(WdfDriverGlobals, DeviceInit, PowerPolicyState, EvtDevicePowerPolicyStateChange, CallbackTypes);
}
typedef
void
(*PFN_WDFDEVICEINITSETIOTYPE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    WDF_DEVICE_IO_TYPE IoType
    );
void
__forceinline
WdfDeviceInitSetIoType(
    PWDFDEVICE_INIT DeviceInit,
    WDF_DEVICE_IO_TYPE IoType
    )
{
    ((PFN_WDFDEVICEINITSETIOTYPE) WdfFunctions[WdfDeviceInitSetIoTypeTableIndex])(WdfDriverGlobals, DeviceInit, IoType);
}
typedef
void
(*PFN_WDFDEVICEINITSETEXCLUSIVE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    BOOLEAN IsExclusive
    );
void
__forceinline
WdfDeviceInitSetExclusive(
    PWDFDEVICE_INIT DeviceInit,
    BOOLEAN IsExclusive
    )
{
    ((PFN_WDFDEVICEINITSETEXCLUSIVE) WdfFunctions[WdfDeviceInitSetExclusiveTableIndex])(WdfDriverGlobals, DeviceInit, IsExclusive);
}
typedef
void
(*PFN_WDFDEVICEINITSETPOWERNOTPAGEABLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit
    );
void
__forceinline
WdfDeviceInitSetPowerNotPageable(
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITSETPOWERNOTPAGEABLE) WdfFunctions[WdfDeviceInitSetPowerNotPageableTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef
void
(*PFN_WDFDEVICEINITSETPOWERPAGEABLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit
    );
void
__forceinline
WdfDeviceInitSetPowerPageable(
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITSETPOWERPAGEABLE) WdfFunctions[WdfDeviceInitSetPowerPageableTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef
void
(*PFN_WDFDEVICEINITSETPOWERINRUSH)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit
    );
void
__forceinline
WdfDeviceInitSetPowerInrush(
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITSETPOWERINRUSH) WdfFunctions[WdfDeviceInitSetPowerInrushTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef
void
(*PFN_WDFDEVICEINITSETDEVICETYPE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    ULONG DeviceType
    );
void
__forceinline
WdfDeviceInitSetDeviceType(
    PWDFDEVICE_INIT DeviceInit,
    ULONG DeviceType
    )
{
    ((PFN_WDFDEVICEINITSETDEVICETYPE) WdfFunctions[WdfDeviceInitSetDeviceTypeTableIndex])(WdfDriverGlobals, DeviceInit, DeviceType);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEINITASSIGNNAME)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING DeviceName
    );
NTSTATUS
__forceinline
WdfDeviceInitAssignName(
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING DeviceName
    )
{
    return ((PFN_WDFDEVICEINITASSIGNNAME) WdfFunctions[WdfDeviceInitAssignNameTableIndex])(WdfDriverGlobals, DeviceInit, DeviceName);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEINITASSIGNSDDLSTRING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING SDDLString
    );
NTSTATUS
__forceinline
WdfDeviceInitAssignSDDLString(
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING SDDLString
    )
{
    return ((PFN_WDFDEVICEINITASSIGNSDDLSTRING) WdfFunctions[WdfDeviceInitAssignSDDLStringTableIndex])(WdfDriverGlobals, DeviceInit, SDDLString);
}
typedef
void
(*PFN_WDFDEVICEINITSETDEVICECLASS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    const GUID* DeviceClassGuid
    );
void
__forceinline
WdfDeviceInitSetDeviceClass(
    PWDFDEVICE_INIT DeviceInit,
    const GUID* DeviceClassGuid
    )
{
    ((PFN_WDFDEVICEINITSETDEVICECLASS) WdfFunctions[WdfDeviceInitSetDeviceClassTableIndex])(WdfDriverGlobals, DeviceInit, DeviceClassGuid);
}
typedef
void
(*PFN_WDFDEVICEINITSETCHARACTERISTICS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    ULONG DeviceCharacteristics,
    BOOLEAN OrInValues
    );
void
__forceinline
WdfDeviceInitSetCharacteristics(
    PWDFDEVICE_INIT DeviceInit,
    ULONG DeviceCharacteristics,
    BOOLEAN OrInValues
    )
{
    ((PFN_WDFDEVICEINITSETCHARACTERISTICS) WdfFunctions[WdfDeviceInitSetCharacteristicsTableIndex])(WdfDriverGlobals, DeviceInit, DeviceCharacteristics, OrInValues);
}
typedef
void
(*PFN_WDFDEVICEINITSETFILEOBJECTCONFIG)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PWDF_FILEOBJECT_CONFIG FileObjectConfig,
    PWDF_OBJECT_ATTRIBUTES FileObjectAttributes
    );
void
__forceinline
WdfDeviceInitSetFileObjectConfig(
    PWDFDEVICE_INIT DeviceInit,
    PWDF_FILEOBJECT_CONFIG FileObjectConfig,
    PWDF_OBJECT_ATTRIBUTES FileObjectAttributes
    )
{
    ((PFN_WDFDEVICEINITSETFILEOBJECTCONFIG) WdfFunctions[WdfDeviceInitSetFileObjectConfigTableIndex])(WdfDriverGlobals, DeviceInit, FileObjectConfig, FileObjectAttributes);
}
typedef
void
(*PFN_WDFDEVICEINITSETREQUESTATTRIBUTES)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PWDF_OBJECT_ATTRIBUTES RequestAttributes
    );
void
__forceinline
WdfDeviceInitSetRequestAttributes(
    PWDFDEVICE_INIT DeviceInit,
    PWDF_OBJECT_ATTRIBUTES RequestAttributes
    )
{
    ((PFN_WDFDEVICEINITSETREQUESTATTRIBUTES) WdfFunctions[WdfDeviceInitSetRequestAttributesTableIndex])(WdfDriverGlobals, DeviceInit, RequestAttributes);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEINITASSIGNWDMIRPPREPROCESSCALLBACK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PFN_WDFDEVICE_WDM_IRP_PREPROCESS EvtDevicePreprocessWdmIrp,
    UCHAR MajorFunction,
    PUCHAR MinorFunctions,
    ULONG NumMinorFunctions
    );
NTSTATUS
__forceinline
WdfDeviceInitAssignWdmIrpPreprocessCallback(
    PWDFDEVICE_INIT DeviceInit,
    PFN_WDFDEVICE_WDM_IRP_PREPROCESS EvtDevicePreprocessWdmIrp,
    UCHAR MajorFunction,
    PUCHAR MinorFunctions,
    ULONG NumMinorFunctions
    )
{
    return ((PFN_WDFDEVICEINITASSIGNWDMIRPPREPROCESSCALLBACK) WdfFunctions[WdfDeviceInitAssignWdmIrpPreprocessCallbackTableIndex])(WdfDriverGlobals, DeviceInit, EvtDevicePreprocessWdmIrp, MajorFunction, MinorFunctions, NumMinorFunctions);
}
typedef
void
(*PFN_WDFDEVICEINITSETIOINCALLERCONTEXTCALLBACK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PFN_WDF_IO_IN_CALLER_CONTEXT EvtIoInCallerContext
    );
void
__forceinline
WdfDeviceInitSetIoInCallerContextCallback(
    PWDFDEVICE_INIT DeviceInit,
    PFN_WDF_IO_IN_CALLER_CONTEXT EvtIoInCallerContext
    )
{
    ((PFN_WDFDEVICEINITSETIOINCALLERCONTEXTCALLBACK) WdfFunctions[WdfDeviceInitSetIoInCallerContextCallbackTableIndex])(WdfDriverGlobals, DeviceInit, EvtIoInCallerContext);
}
typedef
NTSTATUS
(*PFN_WDFDEVICECREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT* DeviceInit,
    PWDF_OBJECT_ATTRIBUTES DeviceAttributes,
    WDFDEVICE* Device
    );
NTSTATUS
__forceinline
WdfDeviceCreate(
    PWDFDEVICE_INIT* DeviceInit,
    PWDF_OBJECT_ATTRIBUTES DeviceAttributes,
    WDFDEVICE* Device
    )
{
    return ((PFN_WDFDEVICECREATE) WdfFunctions[WdfDeviceCreateTableIndex])(WdfDriverGlobals, DeviceInit, DeviceAttributes, Device);
}
typedef
void
(*PFN_WDFDEVICESETSTATICSTOPREMOVE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    BOOLEAN Stoppable
    );
void
__forceinline
WdfDeviceSetStaticStopRemove(
    WDFDEVICE Device,
    BOOLEAN Stoppable
    )
{
    ((PFN_WDFDEVICESETSTATICSTOPREMOVE) WdfFunctions[WdfDeviceSetStaticStopRemoveTableIndex])(WdfDriverGlobals, Device, Stoppable);
}
typedef
NTSTATUS
(*PFN_WDFDEVICECREATEDEVICEINTERFACE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    const GUID* InterfaceClassGUID,
    PCUNICODE_STRING ReferenceString
    );
NTSTATUS
__forceinline
WdfDeviceCreateDeviceInterface(
    WDFDEVICE Device,
    const GUID* InterfaceClassGUID,
    PCUNICODE_STRING ReferenceString
    )
{
    return ((PFN_WDFDEVICECREATEDEVICEINTERFACE) WdfFunctions[WdfDeviceCreateDeviceInterfaceTableIndex])(WdfDriverGlobals, Device, InterfaceClassGUID, ReferenceString);
}
typedef
void
(*PFN_WDFDEVICESETDEVICEINTERFACESTATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    const GUID* InterfaceClassGUID,
    PCUNICODE_STRING ReferenceString,
    BOOLEAN IsInterfaceEnabled
    );
void
__forceinline
WdfDeviceSetDeviceInterfaceState(
    WDFDEVICE Device,
    const GUID* InterfaceClassGUID,
    PCUNICODE_STRING ReferenceString,
    BOOLEAN IsInterfaceEnabled
    )
{
    ((PFN_WDFDEVICESETDEVICEINTERFACESTATE) WdfFunctions[WdfDeviceSetDeviceInterfaceStateTableIndex])(WdfDriverGlobals, Device, InterfaceClassGUID, ReferenceString, IsInterfaceEnabled);
}
typedef
NTSTATUS
(*PFN_WDFDEVICERETRIEVEDEVICEINTERFACESTRING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    const GUID* InterfaceClassGUID,
    PCUNICODE_STRING ReferenceString,
    WDFSTRING String
    );
NTSTATUS
__forceinline
WdfDeviceRetrieveDeviceInterfaceString(
    WDFDEVICE Device,
    const GUID* InterfaceClassGUID,
    PCUNICODE_STRING ReferenceString,
    WDFSTRING String
    )
{
    return ((PFN_WDFDEVICERETRIEVEDEVICEINTERFACESTRING) WdfFunctions[WdfDeviceRetrieveDeviceInterfaceStringTableIndex])(WdfDriverGlobals, Device, InterfaceClassGUID, ReferenceString, String);
}
typedef
NTSTATUS
(*PFN_WDFDEVICECREATESYMBOLICLINK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PCUNICODE_STRING SymbolicLinkName
    );
NTSTATUS
__forceinline
WdfDeviceCreateSymbolicLink(
    WDFDEVICE Device,
    PCUNICODE_STRING SymbolicLinkName
    )
{
    return ((PFN_WDFDEVICECREATESYMBOLICLINK) WdfFunctions[WdfDeviceCreateSymbolicLinkTableIndex])(WdfDriverGlobals, Device, SymbolicLinkName);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEQUERYPROPERTY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    ULONG BufferLength,
    PVOID PropertyBuffer,
    PULONG ResultLength
    );
NTSTATUS
__forceinline
WdfDeviceQueryProperty(
    WDFDEVICE Device,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    ULONG BufferLength,
    PVOID PropertyBuffer,
    PULONG ResultLength
    )
{
    return ((PFN_WDFDEVICEQUERYPROPERTY) WdfFunctions[WdfDeviceQueryPropertyTableIndex])(WdfDriverGlobals, Device, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEALLOCANDQUERYPROPERTY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    POOL_TYPE PoolType,
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
    WDFMEMORY* PropertyMemory
    );
NTSTATUS
__forceinline
WdfDeviceAllocAndQueryProperty(
    WDFDEVICE Device,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    POOL_TYPE PoolType,
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
    WDFMEMORY* PropertyMemory
    )
{
    return ((PFN_WDFDEVICEALLOCANDQUERYPROPERTY) WdfFunctions[WdfDeviceAllocAndQueryPropertyTableIndex])(WdfDriverGlobals, Device, DeviceProperty, PoolType, PropertyMemoryAttributes, PropertyMemory);
}
typedef
void
(*PFN_WDFDEVICESETPNPCAPABILITIES)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_DEVICE_PNP_CAPABILITIES PnpCapabilities
    );
void
__forceinline
WdfDeviceSetPnpCapabilities(
    WDFDEVICE Device,
    PWDF_DEVICE_PNP_CAPABILITIES PnpCapabilities
    )
{
    ((PFN_WDFDEVICESETPNPCAPABILITIES) WdfFunctions[WdfDeviceSetPnpCapabilitiesTableIndex])(WdfDriverGlobals, Device, PnpCapabilities);
}
typedef
void
(*PFN_WDFDEVICESETPOWERCAPABILITIES)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_DEVICE_POWER_CAPABILITIES PowerCapabilities
    );
void
__forceinline
WdfDeviceSetPowerCapabilities(
    WDFDEVICE Device,
    PWDF_DEVICE_POWER_CAPABILITIES PowerCapabilities
    )
{
    ((PFN_WDFDEVICESETPOWERCAPABILITIES) WdfFunctions[WdfDeviceSetPowerCapabilitiesTableIndex])(WdfDriverGlobals, Device, PowerCapabilities);
}
typedef
void
(*PFN_WDFDEVICESETBUSINFORMATIONFORCHILDREN)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PPNP_BUS_INFORMATION BusInformation
    );
void
__forceinline
WdfDeviceSetBusInformationForChildren(
    WDFDEVICE Device,
    PPNP_BUS_INFORMATION BusInformation
    )
{
    ((PFN_WDFDEVICESETBUSINFORMATIONFORCHILDREN) WdfFunctions[WdfDeviceSetBusInformationForChildrenTableIndex])(WdfDriverGlobals, Device, BusInformation);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEINDICATEWAKESTATUS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    NTSTATUS WaitWakeStatus
    );
NTSTATUS
__forceinline
WdfDeviceIndicateWakeStatus(
    WDFDEVICE Device,
    NTSTATUS WaitWakeStatus
    )
{
    return ((PFN_WDFDEVICEINDICATEWAKESTATUS) WdfFunctions[WdfDeviceIndicateWakeStatusTableIndex])(WdfDriverGlobals, Device, WaitWakeStatus);
}
typedef
void
(*PFN_WDFDEVICESETFAILED)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    WDF_DEVICE_FAILED_ACTION FailedAction
    );
void
__forceinline
WdfDeviceSetFailed(
    WDFDEVICE Device,
    WDF_DEVICE_FAILED_ACTION FailedAction
    )
{
    ((PFN_WDFDEVICESETFAILED) WdfFunctions[WdfDeviceSetFailedTableIndex])(WdfDriverGlobals, Device, FailedAction);
}
typedef
NTSTATUS
(*PFN_WDFDEVICESTOPIDLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    BOOLEAN WaitForD0
    );
NTSTATUS
__forceinline
WdfDeviceStopIdle(
    WDFDEVICE Device,
    BOOLEAN WaitForD0
    )
{
    return ((PFN_WDFDEVICESTOPIDLE) WdfFunctions[WdfDeviceStopIdleTableIndex])(WdfDriverGlobals, Device, WaitForD0);
}
typedef
void
(*PFN_WDFDEVICERESUMEIDLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
void
__forceinline
WdfDeviceResumeIdle(
    WDFDEVICE Device
    )
{
    ((PFN_WDFDEVICERESUMEIDLE) WdfFunctions[WdfDeviceResumeIdleTableIndex])(WdfDriverGlobals, Device);
}
typedef
WDFFILEOBJECT
(*PFN_WDFDEVICEGETFILEOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PFILE_OBJECT FileObject
    );
WDFFILEOBJECT
__forceinline
WdfDeviceGetFileObject(
    WDFDEVICE Device,
    PFILE_OBJECT FileObject
    )
{
    return ((PFN_WDFDEVICEGETFILEOBJECT) WdfFunctions[WdfDeviceGetFileObjectTableIndex])(WdfDriverGlobals, Device, FileObject);
}
typedef
NTSTATUS
(*PFN_WDFDEVICEENQUEUEREQUEST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    WDFREQUEST Request
    );
NTSTATUS
__forceinline
WdfDeviceEnqueueRequest(
    WDFDEVICE Device,
    WDFREQUEST Request
    )
{
    return ((PFN_WDFDEVICEENQUEUEREQUEST) WdfFunctions[WdfDeviceEnqueueRequestTableIndex])(WdfDriverGlobals, Device, Request);
}
typedef
WDFQUEUE
(*PFN_WDFDEVICEGETDEFAULTQUEUE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
WDFQUEUE
__forceinline
WdfDeviceGetDefaultQueue(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEFAULTQUEUE) WdfFunctions[WdfDeviceGetDefaultQueueTableIndex])(WdfDriverGlobals, Device);
}
typedef
NTSTATUS
(*PFN_WDFDEVICECONFIGUREREQUESTDISPATCHING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    WDFQUEUE Queue,
    WDF_REQUEST_TYPE RequestType
    );
NTSTATUS
__forceinline
WdfDeviceConfigureRequestDispatching(
    WDFDEVICE Device,
    WDFQUEUE Queue,
    WDF_REQUEST_TYPE RequestType
    )
{
    return ((PFN_WDFDEVICECONFIGUREREQUESTDISPATCHING) WdfFunctions[WdfDeviceConfigureRequestDispatchingTableIndex])(WdfDriverGlobals, Device, Queue, RequestType);
}
typedef
NTSTATUS
(*PFN_WDFCOLLECTIONCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_OBJECT_ATTRIBUTES CollectionAttributes,
    WDFCOLLECTION* Collection
    );
NTSTATUS
__forceinline
WdfCollectionCreate(
    PWDF_OBJECT_ATTRIBUTES CollectionAttributes,
    WDFCOLLECTION* Collection
    )
{
    return ((PFN_WDFCOLLECTIONCREATE) WdfFunctions[WdfCollectionCreateTableIndex])(WdfDriverGlobals, CollectionAttributes, Collection);
}
typedef
ULONG
(*PFN_WDFCOLLECTIONGETCOUNT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCOLLECTION Collection
    );
ULONG
__forceinline
WdfCollectionGetCount(
    WDFCOLLECTION Collection
    )
{
    return ((PFN_WDFCOLLECTIONGETCOUNT) WdfFunctions[WdfCollectionGetCountTableIndex])(WdfDriverGlobals, Collection);
}
typedef
NTSTATUS
(*PFN_WDFCOLLECTIONADD)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCOLLECTION Collection,
    WDFOBJECT Object
    );
NTSTATUS
__forceinline
WdfCollectionAdd(
    WDFCOLLECTION Collection,
    WDFOBJECT Object
    )
{
    return ((PFN_WDFCOLLECTIONADD) WdfFunctions[WdfCollectionAddTableIndex])(WdfDriverGlobals, Collection, Object);
}
typedef
void
(*PFN_WDFCOLLECTIONREMOVE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCOLLECTION Collection,
    WDFOBJECT Item
    );
void
__forceinline
WdfCollectionRemove(
    WDFCOLLECTION Collection,
    WDFOBJECT Item
    )
{
    ((PFN_WDFCOLLECTIONREMOVE) WdfFunctions[WdfCollectionRemoveTableIndex])(WdfDriverGlobals, Collection, Item);
}
typedef
void
(*PFN_WDFCOLLECTIONREMOVEITEM)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCOLLECTION Collection,
    ULONG Index
    );
void
__forceinline
WdfCollectionRemoveItem(
    WDFCOLLECTION Collection,
    ULONG Index
    )
{
    ((PFN_WDFCOLLECTIONREMOVEITEM) WdfFunctions[WdfCollectionRemoveItemTableIndex])(WdfDriverGlobals, Collection, Index);
}
typedef
WDFOBJECT
(*PFN_WDFCOLLECTIONGETITEM)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCOLLECTION Collection,
    ULONG Index
    );
WDFOBJECT
__forceinline
WdfCollectionGetItem(
    WDFCOLLECTION Collection,
    ULONG Index
    )
{
    return ((PFN_WDFCOLLECTIONGETITEM) WdfFunctions[WdfCollectionGetItemTableIndex])(WdfDriverGlobals, Collection, Index);
}
typedef
WDFOBJECT
(*PFN_WDFCOLLECTIONGETFIRSTITEM)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCOLLECTION Collection
    );
WDFOBJECT
__forceinline
WdfCollectionGetFirstItem(
    WDFCOLLECTION Collection
    )
{
    return ((PFN_WDFCOLLECTIONGETFIRSTITEM) WdfFunctions[WdfCollectionGetFirstItemTableIndex])(WdfDriverGlobals, Collection);
}
typedef
WDFOBJECT
(*PFN_WDFCOLLECTIONGETLASTITEM)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCOLLECTION Collection
    );
WDFOBJECT
__forceinline
WdfCollectionGetLastItem(
    WDFCOLLECTION Collection
    )
{
    return ((PFN_WDFCOLLECTIONGETLASTITEM) WdfFunctions[WdfCollectionGetLastItemTableIndex])(WdfDriverGlobals, Collection);
}
typedef
void
(EVT_WDF_DPC) (
     WDFDPC Dpc
    );
typedef EVT_WDF_DPC *PFN_WDF_DPC;
typedef struct _WDF_DPC_CONFIG {
    ULONG Size;
    PFN_WDF_DPC EvtDpcFunc;
    BOOLEAN AutomaticSerialization;
} WDF_DPC_CONFIG, *PWDF_DPC_CONFIG;
void
__forceinline
WDF_DPC_CONFIG_INIT(
     PWDF_DPC_CONFIG Config,
     PFN_WDF_DPC EvtDpcFunc
    )
{
    memset((Config),0,(sizeof(WDF_DPC_CONFIG)));
    Config->Size = sizeof(WDF_DPC_CONFIG);
    Config->EvtDpcFunc = EvtDpcFunc;
    Config->AutomaticSerialization = 1;
}
typedef
NTSTATUS
(*PFN_WDFDPCCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_DPC_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFDPC* Dpc
    );
NTSTATUS
__forceinline
WdfDpcCreate(
    PWDF_DPC_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFDPC* Dpc
    )
{
    return ((PFN_WDFDPCCREATE) WdfFunctions[WdfDpcCreateTableIndex])(WdfDriverGlobals, Config, Attributes, Dpc);
}
typedef
BOOLEAN
(*PFN_WDFDPCENQUEUE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDPC Dpc
    );
BOOLEAN
__forceinline
WdfDpcEnqueue(
    WDFDPC Dpc
    )
{
    return ((PFN_WDFDPCENQUEUE) WdfFunctions[WdfDpcEnqueueTableIndex])(WdfDriverGlobals, Dpc);
}
typedef
BOOLEAN
(*PFN_WDFDPCCANCEL)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDPC Dpc,
    BOOLEAN Wait
    );
BOOLEAN
__forceinline
WdfDpcCancel(
    WDFDPC Dpc,
    BOOLEAN Wait
    )
{
    return ((PFN_WDFDPCCANCEL) WdfFunctions[WdfDpcCancelTableIndex])(WdfDriverGlobals, Dpc, Wait);
}
typedef
WDFOBJECT
(*PFN_WDFDPCGETPARENTOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDPC Dpc
    );
WDFOBJECT
__forceinline
WdfDpcGetParentObject(
    WDFDPC Dpc
    )
{
    return ((PFN_WDFDPCGETPARENTOBJECT) WdfFunctions[WdfDpcGetParentObjectTableIndex])(WdfDriverGlobals, Dpc);
}
typedef
PKDPC
(*PFN_WDFDPCWDMGETDPC)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDPC Dpc
    );
PKDPC
__forceinline
WdfDpcWdmGetDpc(
    WDFDPC Dpc
    )
{
    return ((PFN_WDFDPCWDMGETDPC) WdfFunctions[WdfDpcWdmGetDpcTableIndex])(WdfDriverGlobals, Dpc);
}
typedef
void
(EVT_WDF_TIMER) (
     WDFTIMER Timer
    );
typedef EVT_WDF_TIMER *PFN_WDF_TIMER;
typedef struct _WDF_TIMER_CONFIG {
    ULONG Size;
    PFN_WDF_TIMER EvtTimerFunc;
    LONG Period;
    BOOLEAN AutomaticSerialization;
} WDF_TIMER_CONFIG, *PWDF_TIMER_CONFIG;
void
__forceinline
WDF_TIMER_CONFIG_INIT(
     PWDF_TIMER_CONFIG Config,
     PFN_WDF_TIMER EvtTimerFunc
    )
{
    memset((Config),0,(sizeof(WDF_TIMER_CONFIG)));
    Config->Size = sizeof(WDF_TIMER_CONFIG);
    Config->EvtTimerFunc = EvtTimerFunc;
    Config->Period = 0;
    Config->AutomaticSerialization = 1;
}
void
__forceinline
WDF_TIMER_CONFIG_INIT_PERIODIC(
     PWDF_TIMER_CONFIG Config,
     PFN_WDF_TIMER EvtTimerFunc,
     LONG Period
    )
{
    memset((Config),0,(sizeof(WDF_TIMER_CONFIG)));
    Config->Size = sizeof(WDF_TIMER_CONFIG);
    Config->EvtTimerFunc = EvtTimerFunc;
    Config->Period = Period;
    Config->AutomaticSerialization = 1;
}
typedef
NTSTATUS
(*PFN_WDFTIMERCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_TIMER_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFTIMER* Timer
    );
NTSTATUS
__forceinline
WdfTimerCreate(
    PWDF_TIMER_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFTIMER* Timer
    )
{
    return ((PFN_WDFTIMERCREATE) WdfFunctions[WdfTimerCreateTableIndex])(WdfDriverGlobals, Config, Attributes, Timer);
}
typedef
BOOLEAN
(*PFN_WDFTIMERSTART)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFTIMER Timer,
    LONGLONG DueTime
    );
BOOLEAN
__forceinline
WdfTimerStart(
    WDFTIMER Timer,
    LONGLONG DueTime
    )
{
    return ((PFN_WDFTIMERSTART) WdfFunctions[WdfTimerStartTableIndex])(WdfDriverGlobals, Timer, DueTime);
}
typedef
BOOLEAN
(*PFN_WDFTIMERSTOP)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFTIMER Timer,
    BOOLEAN Wait
    );
BOOLEAN
__forceinline
WdfTimerStop(
    WDFTIMER Timer,
    BOOLEAN Wait
    )
{
    return ((PFN_WDFTIMERSTOP) WdfFunctions[WdfTimerStopTableIndex])(WdfDriverGlobals, Timer, Wait);
}
typedef
WDFOBJECT
(*PFN_WDFTIMERGETPARENTOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFTIMER Timer
    );
WDFOBJECT
__forceinline
WdfTimerGetParentObject(
    WDFTIMER Timer
    )
{
    return ((PFN_WDFTIMERGETPARENTOBJECT) WdfFunctions[WdfTimerGetParentObjectTableIndex])(WdfDriverGlobals, Timer);
}
typedef
void
(EVT_WDF_WORKITEM) (
     WDFWORKITEM WorkItem
    );
typedef EVT_WDF_WORKITEM *PFN_WDF_WORKITEM;
typedef struct _WDF_WORKITEM_CONFIG {
    ULONG Size;
    PFN_WDF_WORKITEM EvtWorkItemFunc;
    BOOLEAN AutomaticSerialization;
} WDF_WORKITEM_CONFIG, *PWDF_WORKITEM_CONFIG;
void
__forceinline
WDF_WORKITEM_CONFIG_INIT(
     PWDF_WORKITEM_CONFIG Config,
     PFN_WDF_WORKITEM EvtWorkItemFunc
    )
{
    memset((Config),0,(sizeof(WDF_WORKITEM_CONFIG)));
    Config->Size = sizeof(WDF_WORKITEM_CONFIG);
    Config->EvtWorkItemFunc = EvtWorkItemFunc;
    Config->AutomaticSerialization = 1;
}
typedef
NTSTATUS
(*PFN_WDFWORKITEMCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_WORKITEM_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFWORKITEM* WorkItem
    );
NTSTATUS
__forceinline
WdfWorkItemCreate(
    PWDF_WORKITEM_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFWORKITEM* WorkItem
    )
{
    return ((PFN_WDFWORKITEMCREATE) WdfFunctions[WdfWorkItemCreateTableIndex])(WdfDriverGlobals, Config, Attributes, WorkItem);
}
typedef
void
(*PFN_WDFWORKITEMENQUEUE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWORKITEM WorkItem
    );
void
__forceinline
WdfWorkItemEnqueue(
    WDFWORKITEM WorkItem
    )
{
    ((PFN_WDFWORKITEMENQUEUE) WdfFunctions[WdfWorkItemEnqueueTableIndex])(WdfDriverGlobals, WorkItem);
}
typedef
WDFOBJECT
(*PFN_WDFWORKITEMGETPARENTOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWORKITEM WorkItem
    );
WDFOBJECT
__forceinline
WdfWorkItemGetParentObject(
    WDFWORKITEM WorkItem
    )
{
    return ((PFN_WDFWORKITEMGETPARENTOBJECT) WdfFunctions[WdfWorkItemGetParentObjectTableIndex])(WdfDriverGlobals, WorkItem);
}
typedef
void
(*PFN_WDFWORKITEMFLUSH)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWORKITEM WorkItem
    );
void
__forceinline
WdfWorkItemFlush(
    WDFWORKITEM WorkItem
    )
{
    ((PFN_WDFWORKITEMFLUSH) WdfFunctions[WdfWorkItemFlushTableIndex])(WdfDriverGlobals, WorkItem);
}
typedef enum _WDF_INTERRUPT_POLARITY {
    WdfInterruptPolarityUnknown = 0,
    WdfInterruptActiveHigh,
    WdfInterruptActiveLow,
} WDF_INTERRUPT_POLARITY, *PWDF_INTERRUPT_POLARITY;
typedef enum _WDF_INTERRUPT_POLICY {
    WdfIrqPolicyMachineDefault = 0,
    WdfIrqPolicyAllCloseProcessors,
    WdfIrqPolicyOneCloseProcessor,
    WdfIrqPolicyAllProcessorsInMachine,
    WdfIrqPolicySpecifiedProcessors,
    WdfIrqPolicySpreadMessagesAcrossAllProcessors,
} WDF_INTERRUPT_POLICY, *PWDF_INTERRUPT_POLICY;
typedef enum _WDF_INTERRUPT_PRIORITY {
    WdfIrqPriorityUndefined = 0,
    WdfIrqPriorityLow,
    WdfIrqPriorityNormal,
    WdfIrqPriorityHigh,
} WDF_INTERRUPT_PRIORITY, *PWDF_INTERRUPT_PRIORITY;
typedef
BOOLEAN
(EVT_WDF_INTERRUPT_ISR) (
     WDFINTERRUPT Interrupt,
     ULONG MessageID
    );
typedef EVT_WDF_INTERRUPT_ISR *PFN_WDF_INTERRUPT_ISR;
typedef
BOOLEAN
(EVT_WDF_INTERRUPT_SYNCHRONIZE) (
     WDFINTERRUPT Interrupt,
     WDFCONTEXT Context
    );
typedef EVT_WDF_INTERRUPT_SYNCHRONIZE *PFN_WDF_INTERRUPT_SYNCHRONIZE;
typedef
void
(EVT_WDF_INTERRUPT_DPC) (
     WDFINTERRUPT Interrupt,
     WDFOBJECT AssociatedObject
    );
typedef EVT_WDF_INTERRUPT_DPC *PFN_WDF_INTERRUPT_DPC;
typedef
NTSTATUS
(EVT_WDF_INTERRUPT_ENABLE) (
     WDFINTERRUPT Interrupt,
     WDFDEVICE AssociatedDevice
    );
typedef EVT_WDF_INTERRUPT_ENABLE *PFN_WDF_INTERRUPT_ENABLE;
typedef
NTSTATUS
(EVT_WDF_INTERRUPT_DISABLE) (
     WDFINTERRUPT Interrupt,
     WDFDEVICE AssociatedDevice
    );
typedef EVT_WDF_INTERRUPT_DISABLE *PFN_WDF_INTERRUPT_DISABLE;
typedef struct _WDF_INTERRUPT_CONFIG {
    ULONG Size;
    WDFSPINLOCK SpinLock;
    WDF_TRI_STATE ShareVector;
    BOOLEAN FloatingSave;
    BOOLEAN AutomaticSerialization;
    PFN_WDF_INTERRUPT_ISR EvtInterruptIsr;
    PFN_WDF_INTERRUPT_DPC EvtInterruptDpc;
    PFN_WDF_INTERRUPT_ENABLE EvtInterruptEnable;
    PFN_WDF_INTERRUPT_DISABLE EvtInterruptDisable;
} WDF_INTERRUPT_CONFIG, *PWDF_INTERRUPT_CONFIG;
void
__forceinline
WDF_INTERRUPT_CONFIG_INIT(
     PWDF_INTERRUPT_CONFIG Configuration,
      PFN_WDF_INTERRUPT_ISR EvtInterruptIsr,
      PFN_WDF_INTERRUPT_DPC EvtInterruptDpc
    )
{
    memset((Configuration),0,(sizeof(WDF_INTERRUPT_CONFIG)));
    Configuration->Size = sizeof(WDF_INTERRUPT_CONFIG);
    Configuration->ShareVector = WdfUseDefault;
    Configuration->EvtInterruptIsr = EvtInterruptIsr;
    Configuration->EvtInterruptDpc = EvtInterruptDpc;
}
typedef struct _WDF_INTERRUPT_INFO {
    ULONG Size;
    ULONG64 Reserved1;
    KAFFINITY TargetProcessorSet;
    ULONG Reserved2;
    ULONG MessageNumber;
    ULONG Vector;
    KIRQL Irql;
    KINTERRUPT_MODE Mode;
    WDF_INTERRUPT_POLARITY Polarity;
    BOOLEAN MessageSignaled;
    UCHAR ShareDisposition;
} WDF_INTERRUPT_INFO, *PWDF_INTERRUPT_INFO;
void
__forceinline
WDF_INTERRUPT_INFO_INIT(
    PWDF_INTERRUPT_INFO Info
    )
{
    memset((Info),0,(sizeof(WDF_INTERRUPT_INFO)));
    Info->Size = sizeof(WDF_INTERRUPT_INFO);
}
typedef
NTSTATUS
(*PFN_WDFINTERRUPTCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_INTERRUPT_CONFIG Configuration,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFINTERRUPT* Interrupt
    );
NTSTATUS
__forceinline
WdfInterruptCreate(
    WDFDEVICE Device,
    PWDF_INTERRUPT_CONFIG Configuration,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFINTERRUPT* Interrupt
    )
{
    return ((PFN_WDFINTERRUPTCREATE) WdfFunctions[WdfInterruptCreateTableIndex])(WdfDriverGlobals, Device, Configuration, Attributes, Interrupt);
}
typedef
BOOLEAN
(*PFN_WDFINTERRUPTQUEUEDPCFORISR)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFINTERRUPT Interrupt
    );
BOOLEAN
__forceinline
WdfInterruptQueueDpcForIsr(
    WDFINTERRUPT Interrupt
    )
{
    return ((PFN_WDFINTERRUPTQUEUEDPCFORISR) WdfFunctions[WdfInterruptQueueDpcForIsrTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef
BOOLEAN
(*PFN_WDFINTERRUPTSYNCHRONIZE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFINTERRUPT Interrupt,
    PFN_WDF_INTERRUPT_SYNCHRONIZE Callback,
    WDFCONTEXT Context
    );
BOOLEAN
__forceinline
WdfInterruptSynchronize(
    WDFINTERRUPT Interrupt,
    PFN_WDF_INTERRUPT_SYNCHRONIZE Callback,
    WDFCONTEXT Context
    )
{
    return ((PFN_WDFINTERRUPTSYNCHRONIZE) WdfFunctions[WdfInterruptSynchronizeTableIndex])(WdfDriverGlobals, Interrupt, Callback, Context);
}
typedef
void
(*PFN_WDFINTERRUPTACQUIRELOCK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFINTERRUPT Interrupt
    );
void
__forceinline
WdfInterruptAcquireLock(
    WDFINTERRUPT Interrupt
    )
{
    ((PFN_WDFINTERRUPTACQUIRELOCK) WdfFunctions[WdfInterruptAcquireLockTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef
void
(*PFN_WDFINTERRUPTRELEASELOCK)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFINTERRUPT Interrupt
    );
void
__forceinline
WdfInterruptReleaseLock(
    WDFINTERRUPT Interrupt
    )
{
    ((PFN_WDFINTERRUPTRELEASELOCK) WdfFunctions[WdfInterruptReleaseLockTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef
void
(*PFN_WDFINTERRUPTENABLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFINTERRUPT Interrupt
    );
void
__forceinline
WdfInterruptEnable(
    WDFINTERRUPT Interrupt
    )
{
    ((PFN_WDFINTERRUPTENABLE) WdfFunctions[WdfInterruptEnableTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef
void
(*PFN_WDFINTERRUPTDISABLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFINTERRUPT Interrupt
    );
void
__forceinline
WdfInterruptDisable(
    WDFINTERRUPT Interrupt
    )
{
    ((PFN_WDFINTERRUPTDISABLE) WdfFunctions[WdfInterruptDisableTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef
PKINTERRUPT
(*PFN_WDFINTERRUPTWDMGETINTERRUPT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFINTERRUPT Interrupt
    );
PKINTERRUPT
__forceinline
WdfInterruptWdmGetInterrupt(
    WDFINTERRUPT Interrupt
    )
{
    return ((PFN_WDFINTERRUPTWDMGETINTERRUPT) WdfFunctions[WdfInterruptWdmGetInterruptTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef
void
(*PFN_WDFINTERRUPTGETINFO)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFINTERRUPT Interrupt,
    PWDF_INTERRUPT_INFO Info
    );
void
__forceinline
WdfInterruptGetInfo(
    WDFINTERRUPT Interrupt,
    PWDF_INTERRUPT_INFO Info
    )
{
    ((PFN_WDFINTERRUPTGETINFO) WdfFunctions[WdfInterruptGetInfoTableIndex])(WdfDriverGlobals, Interrupt, Info);
}
typedef
void
(*PFN_WDFINTERRUPTSETPOLICY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFINTERRUPT Interrupt,
    WDF_INTERRUPT_POLICY Policy,
    WDF_INTERRUPT_PRIORITY Priority,
    KAFFINITY TargetProcessorSet
    );
void
__forceinline
WdfInterruptSetPolicy(
    WDFINTERRUPT Interrupt,
    WDF_INTERRUPT_POLICY Policy,
    WDF_INTERRUPT_PRIORITY Priority,
    KAFFINITY TargetProcessorSet
    )
{
    ((PFN_WDFINTERRUPTSETPOLICY) WdfFunctions[WdfInterruptSetPolicyTableIndex])(WdfDriverGlobals, Interrupt, Policy, Priority, TargetProcessorSet);
}
typedef
WDFDEVICE
(*PFN_WDFINTERRUPTGETDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFINTERRUPT Interrupt
    );
WDFDEVICE
__forceinline
WdfInterruptGetDevice(
    WDFINTERRUPT Interrupt
    )
{
    return ((PFN_WDFINTERRUPTGETDEVICE) WdfFunctions[WdfInterruptGetDeviceTableIndex])(WdfDriverGlobals, Interrupt);
}
typedef
void
(*PFN_WDFIORESOURCEREQUIREMENTSLISTSETSLOTNUMBER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESREQLIST RequirementsList,
    ULONG SlotNumber
    );
void
__forceinline
WdfIoResourceRequirementsListSetSlotNumber(
    WDFIORESREQLIST RequirementsList,
    ULONG SlotNumber
    )
{
    ((PFN_WDFIORESOURCEREQUIREMENTSLISTSETSLOTNUMBER) WdfFunctions[WdfIoResourceRequirementsListSetSlotNumberTableIndex])(WdfDriverGlobals, RequirementsList, SlotNumber);
}
typedef
void
(*PFN_WDFIORESOURCEREQUIREMENTSLISTSETINTERFACETYPE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESREQLIST RequirementsList,
    INTERFACE_TYPE InterfaceType
    );
void
__forceinline
WdfIoResourceRequirementsListSetInterfaceType(
    WDFIORESREQLIST RequirementsList,
    INTERFACE_TYPE InterfaceType
    )
{
    ((PFN_WDFIORESOURCEREQUIREMENTSLISTSETINTERFACETYPE) WdfFunctions[WdfIoResourceRequirementsListSetInterfaceTypeTableIndex])(WdfDriverGlobals, RequirementsList, InterfaceType);
}
typedef
NTSTATUS
(*PFN_WDFIORESOURCEREQUIREMENTSLISTAPPENDIORESLIST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESREQLIST RequirementsList,
    WDFIORESLIST IoResList
    );
NTSTATUS
__forceinline
WdfIoResourceRequirementsListAppendIoResList(
    WDFIORESREQLIST RequirementsList,
    WDFIORESLIST IoResList
    )
{
    return ((PFN_WDFIORESOURCEREQUIREMENTSLISTAPPENDIORESLIST) WdfFunctions[WdfIoResourceRequirementsListAppendIoResListTableIndex])(WdfDriverGlobals, RequirementsList, IoResList);
}
typedef
NTSTATUS
(*PFN_WDFIORESOURCEREQUIREMENTSLISTINSERTIORESLIST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESREQLIST RequirementsList,
    WDFIORESLIST IoResList,
    ULONG Index
    );
NTSTATUS
__forceinline
WdfIoResourceRequirementsListInsertIoResList(
    WDFIORESREQLIST RequirementsList,
    WDFIORESLIST IoResList,
    ULONG Index
    )
{
    return ((PFN_WDFIORESOURCEREQUIREMENTSLISTINSERTIORESLIST) WdfFunctions[WdfIoResourceRequirementsListInsertIoResListTableIndex])(WdfDriverGlobals, RequirementsList, IoResList, Index);
}
typedef
ULONG
(*PFN_WDFIORESOURCEREQUIREMENTSLISTGETCOUNT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESREQLIST RequirementsList
    );
ULONG
__forceinline
WdfIoResourceRequirementsListGetCount(
    WDFIORESREQLIST RequirementsList
    )
{
    return ((PFN_WDFIORESOURCEREQUIREMENTSLISTGETCOUNT) WdfFunctions[WdfIoResourceRequirementsListGetCountTableIndex])(WdfDriverGlobals, RequirementsList);
}
typedef
WDFIORESLIST
(*PFN_WDFIORESOURCEREQUIREMENTSLISTGETIORESLIST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESREQLIST RequirementsList,
    ULONG Index
    );
WDFIORESLIST
__forceinline
WdfIoResourceRequirementsListGetIoResList(
    WDFIORESREQLIST RequirementsList,
    ULONG Index
    )
{
    return ((PFN_WDFIORESOURCEREQUIREMENTSLISTGETIORESLIST) WdfFunctions[WdfIoResourceRequirementsListGetIoResListTableIndex])(WdfDriverGlobals, RequirementsList, Index);
}
typedef
void
(*PFN_WDFIORESOURCEREQUIREMENTSLISTREMOVE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESREQLIST RequirementsList,
    ULONG Index
    );
void
__forceinline
WdfIoResourceRequirementsListRemove(
    WDFIORESREQLIST RequirementsList,
    ULONG Index
    )
{
    ((PFN_WDFIORESOURCEREQUIREMENTSLISTREMOVE) WdfFunctions[WdfIoResourceRequirementsListRemoveTableIndex])(WdfDriverGlobals, RequirementsList, Index);
}
typedef
void
(*PFN_WDFIORESOURCEREQUIREMENTSLISTREMOVEBYIORESLIST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESREQLIST RequirementsList,
    WDFIORESLIST IoResList
    );
void
__forceinline
WdfIoResourceRequirementsListRemoveByIoResList(
    WDFIORESREQLIST RequirementsList,
    WDFIORESLIST IoResList
    )
{
    ((PFN_WDFIORESOURCEREQUIREMENTSLISTREMOVEBYIORESLIST) WdfFunctions[WdfIoResourceRequirementsListRemoveByIoResListTableIndex])(WdfDriverGlobals, RequirementsList, IoResList);
}
typedef
NTSTATUS
(*PFN_WDFIORESOURCELISTCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESREQLIST RequirementsList,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFIORESLIST* ResourceList
    );
NTSTATUS
__forceinline
WdfIoResourceListCreate(
    WDFIORESREQLIST RequirementsList,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFIORESLIST* ResourceList
    )
{
    return ((PFN_WDFIORESOURCELISTCREATE) WdfFunctions[WdfIoResourceListCreateTableIndex])(WdfDriverGlobals, RequirementsList, Attributes, ResourceList);
}
typedef
NTSTATUS
(*PFN_WDFIORESOURCELISTAPPENDDESCRIPTOR)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESLIST ResourceList,
    PIO_RESOURCE_DESCRIPTOR Descriptor
    );
NTSTATUS
__forceinline
WdfIoResourceListAppendDescriptor(
    WDFIORESLIST ResourceList,
    PIO_RESOURCE_DESCRIPTOR Descriptor
    )
{
    return ((PFN_WDFIORESOURCELISTAPPENDDESCRIPTOR) WdfFunctions[WdfIoResourceListAppendDescriptorTableIndex])(WdfDriverGlobals, ResourceList, Descriptor);
}
typedef
NTSTATUS
(*PFN_WDFIORESOURCELISTINSERTDESCRIPTOR)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESLIST ResourceList,
    PIO_RESOURCE_DESCRIPTOR Descriptor,
    ULONG Index
    );
NTSTATUS
__forceinline
WdfIoResourceListInsertDescriptor(
    WDFIORESLIST ResourceList,
    PIO_RESOURCE_DESCRIPTOR Descriptor,
    ULONG Index
    )
{
    return ((PFN_WDFIORESOURCELISTINSERTDESCRIPTOR) WdfFunctions[WdfIoResourceListInsertDescriptorTableIndex])(WdfDriverGlobals, ResourceList, Descriptor, Index);
}
typedef
void
(*PFN_WDFIORESOURCELISTUPDATEDESCRIPTOR)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESLIST ResourceList,
    PIO_RESOURCE_DESCRIPTOR Descriptor,
    ULONG Index
    );
void
__forceinline
WdfIoResourceListUpdateDescriptor(
    WDFIORESLIST ResourceList,
    PIO_RESOURCE_DESCRIPTOR Descriptor,
    ULONG Index
    )
{
    ((PFN_WDFIORESOURCELISTUPDATEDESCRIPTOR) WdfFunctions[WdfIoResourceListUpdateDescriptorTableIndex])(WdfDriverGlobals, ResourceList, Descriptor, Index);
}
typedef
ULONG
(*PFN_WDFIORESOURCELISTGETCOUNT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESLIST ResourceList
    );
ULONG
__forceinline
WdfIoResourceListGetCount(
    WDFIORESLIST ResourceList
    )
{
    return ((PFN_WDFIORESOURCELISTGETCOUNT) WdfFunctions[WdfIoResourceListGetCountTableIndex])(WdfDriverGlobals, ResourceList);
}
typedef
PIO_RESOURCE_DESCRIPTOR
(*PFN_WDFIORESOURCELISTGETDESCRIPTOR)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESLIST ResourceList,
    ULONG Index
    );
PIO_RESOURCE_DESCRIPTOR
__forceinline
WdfIoResourceListGetDescriptor(
    WDFIORESLIST ResourceList,
    ULONG Index
    )
{
    return ((PFN_WDFIORESOURCELISTGETDESCRIPTOR) WdfFunctions[WdfIoResourceListGetDescriptorTableIndex])(WdfDriverGlobals, ResourceList, Index);
}
typedef
void
(*PFN_WDFIORESOURCELISTREMOVE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESLIST ResourceList,
    ULONG Index
    );
void
__forceinline
WdfIoResourceListRemove(
    WDFIORESLIST ResourceList,
    ULONG Index
    )
{
    ((PFN_WDFIORESOURCELISTREMOVE) WdfFunctions[WdfIoResourceListRemoveTableIndex])(WdfDriverGlobals, ResourceList, Index);
}
typedef
void
(*PFN_WDFIORESOURCELISTREMOVEBYDESCRIPTOR)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIORESLIST ResourceList,
    PIO_RESOURCE_DESCRIPTOR Descriptor
    );
void
__forceinline
WdfIoResourceListRemoveByDescriptor(
    WDFIORESLIST ResourceList,
    PIO_RESOURCE_DESCRIPTOR Descriptor
    )
{
    ((PFN_WDFIORESOURCELISTREMOVEBYDESCRIPTOR) WdfFunctions[WdfIoResourceListRemoveByDescriptorTableIndex])(WdfDriverGlobals, ResourceList, Descriptor);
}
typedef
NTSTATUS
(*PFN_WDFCMRESOURCELISTAPPENDDESCRIPTOR)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCMRESLIST List,
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor
    );
NTSTATUS
__forceinline
WdfCmResourceListAppendDescriptor(
    WDFCMRESLIST List,
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor
    )
{
    return ((PFN_WDFCMRESOURCELISTAPPENDDESCRIPTOR) WdfFunctions[WdfCmResourceListAppendDescriptorTableIndex])(WdfDriverGlobals, List, Descriptor);
}
typedef
NTSTATUS
(*PFN_WDFCMRESOURCELISTINSERTDESCRIPTOR)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCMRESLIST List,
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
    ULONG Index
    );
NTSTATUS
__forceinline
WdfCmResourceListInsertDescriptor(
    WDFCMRESLIST List,
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
    ULONG Index
    )
{
    return ((PFN_WDFCMRESOURCELISTINSERTDESCRIPTOR) WdfFunctions[WdfCmResourceListInsertDescriptorTableIndex])(WdfDriverGlobals, List, Descriptor, Index);
}
typedef
ULONG
(*PFN_WDFCMRESOURCELISTGETCOUNT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCMRESLIST List
    );
ULONG
__forceinline
WdfCmResourceListGetCount(
    WDFCMRESLIST List
    )
{
    return ((PFN_WDFCMRESOURCELISTGETCOUNT) WdfFunctions[WdfCmResourceListGetCountTableIndex])(WdfDriverGlobals, List);
}
typedef
PCM_PARTIAL_RESOURCE_DESCRIPTOR
(*PFN_WDFCMRESOURCELISTGETDESCRIPTOR)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCMRESLIST List,
    ULONG Index
    );
PCM_PARTIAL_RESOURCE_DESCRIPTOR
__forceinline
WdfCmResourceListGetDescriptor(
    WDFCMRESLIST List,
    ULONG Index
    )
{
    return ((PFN_WDFCMRESOURCELISTGETDESCRIPTOR) WdfFunctions[WdfCmResourceListGetDescriptorTableIndex])(WdfDriverGlobals, List, Index);
}
typedef
void
(*PFN_WDFCMRESOURCELISTREMOVE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCMRESLIST List,
    ULONG Index
    );
void
__forceinline
WdfCmResourceListRemove(
    WDFCMRESLIST List,
    ULONG Index
    )
{
    ((PFN_WDFCMRESOURCELISTREMOVE) WdfFunctions[WdfCmResourceListRemoveTableIndex])(WdfDriverGlobals, List, Index);
}
typedef
void
(*PFN_WDFCMRESOURCELISTREMOVEBYDESCRIPTOR)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCMRESLIST List,
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor
    );
void
__forceinline
WdfCmResourceListRemoveByDescriptor(
    WDFCMRESLIST List,
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor
    )
{
    ((PFN_WDFCMRESOURCELISTREMOVEBYDESCRIPTOR) WdfFunctions[WdfCmResourceListRemoveByDescriptorTableIndex])(WdfDriverGlobals, List, Descriptor);
}
typedef enum _WDF_REQUEST_TYPE {
    WdfRequestTypeCreate = 0x0,
    WdfRequestTypeCreateNamedPipe = 0x1,
    WdfRequestTypeClose = 0x2,
    WdfRequestTypeRead = 0x3,
    WdfRequestTypeWrite = 0x4,
    WdfRequestTypeQueryInformation = 0x5,
    WdfRequestTypeSetInformation = 0x6,
    WdfRequestTypeQueryEA = 0x7,
    WdfRequestTypeSetEA = 0x8,
    WdfRequestTypeFlushBuffers = 0x9,
    WdfRequestTypeQueryVolumeInformation = 0xa,
    WdfRequestTypeSetVolumeInformation = 0xb,
    WdfRequestTypeDirectoryControl = 0xc,
    WdfRequestTypeFileSystemControl = 0xd,
    WdfRequestTypeDeviceControl = 0xe,
    WdfRequestTypeDeviceControlInternal = 0xf,
    WdfRequestTypeShutdown = 0x10,
    WdfRequestTypeLockControl = 0x11,
    WdfRequestTypeCleanup = 0x12,
    WdfRequestTypeCreateMailSlot = 0x13,
    WdfRequestTypeQuerySecurity = 0x14,
    WdfRequestTypeSetSecurity = 0x15,
    WdfRequestTypePower = 0x16,
    WdfRequestTypeSystemControl = 0x17,
    WdfRequestTypeDeviceChange = 0x18,
    WdfRequestTypeQueryQuota = 0x19,
    WdfRequestTypeSetQuota = 0x1A,
    WdfRequestTypePnp = 0x1B,
    WdfRequestTypeOther =0x1C,
    WdfRequestTypeUsb = 0x40,
    WdfRequestTypeNoFormat = 0xFF,
    WdfRequestTypeMax,
} WDF_REQUEST_TYPE;
typedef enum _WDF_REQUEST_REUSE_FLAGS {
    WDF_REQUEST_REUSE_NO_FLAGS = 0x00000000,
    WDF_REQUEST_REUSE_SET_NEW_IRP = 0x00000001,
} WDF_REQUEST_REUSE_FLAGS;
typedef enum _WDF_REQUEST_STOP_ACTION_FLAGS {
    WdfRequestStopActionInvalid = 0,
    WdfRequestStopActionSuspend = 0x01,
    WdfRequestStopActionPurge = 0x2,
    WdfRequestStopRequestCancelable = 0x10000000,
} WDF_REQUEST_STOP_ACTION_FLAGS;
typedef enum _WDF_REQUEST_SEND_OPTIONS_FLAGS {
    WDF_REQUEST_SEND_OPTION_TIMEOUT = 0x0000001,
    WDF_REQUEST_SEND_OPTION_SYNCHRONOUS = 0x0000002,
    WDF_REQUEST_SEND_OPTION_IGNORE_TARGET_STATE = 0x0000004,
    WDF_REQUEST_SEND_OPTION_SEND_AND_FORGET = 0x0000008,
} WDF_REQUEST_SEND_OPTIONS_FLAGS;
typedef
void
(EVT_WDF_REQUEST_CANCEL) (
     WDFREQUEST Request
    );
typedef EVT_WDF_REQUEST_CANCEL *PFN_WDF_REQUEST_CANCEL;
typedef struct _WDF_REQUEST_PARAMETERS {
    USHORT Size;
    UCHAR MinorFunction;
    WDF_REQUEST_TYPE Type;
    union {
        struct {
            PIO_SECURITY_CONTEXT SecurityContext;
            ULONG Options;
            USHORT FileAttributes;
            USHORT ShareAccess;
            ULONG EaLength;
        } Create;
        struct {
            size_t Length;
            ULONG Key;
            LONGLONG DeviceOffset;
        } Read;
        struct {
            size_t Length;
            ULONG Key;
            LONGLONG DeviceOffset;
        } Write;
        struct {
            size_t OutputBufferLength;
            size_t InputBufferLength;
            ULONG IoControlCode;
            PVOID Type3InputBuffer;
        } DeviceIoControl;
        struct {
            PVOID Arg1;
            PVOID Arg2;
            ULONG IoControlCode;
            PVOID Arg4;
        } Others;
    } Parameters;
} WDF_REQUEST_PARAMETERS, *PWDF_REQUEST_PARAMETERS;
void
__forceinline
WDF_REQUEST_PARAMETERS_INIT(
     PWDF_REQUEST_PARAMETERS Parameters
    )
{
    memset((Parameters),0,(sizeof(WDF_REQUEST_PARAMETERS)));
    Parameters->Size = sizeof(WDF_REQUEST_PARAMETERS);
}
typedef struct _WDF_USB_REQUEST_COMPLETION_PARAMS *PWDF_USB_REQUEST_COMPLETION_PARAMS;
typedef struct _WDF_REQUEST_COMPLETION_PARAMS {
    ULONG Size;
    WDF_REQUEST_TYPE Type;
    IO_STATUS_BLOCK IoStatus;
    union {
        struct {
            WDFMEMORY Buffer;
            size_t Length;
            size_t Offset;
        } Write;
        struct {
            WDFMEMORY Buffer;
            size_t Length;
            size_t Offset;
        } Read;
        struct {
            ULONG IoControlCode;
            struct {
                WDFMEMORY Buffer;
                size_t Offset;
            } Input;
            struct {
                WDFMEMORY Buffer;
                size_t Offset;
                size_t Length;
            } Output;
        } Ioctl;
        struct {
            union {
                PVOID Ptr;
                ULONG_PTR Value;
            } Argument1;
            union {
                PVOID Ptr;
                ULONG_PTR Value;
            } Argument2;
            union {
                PVOID Ptr;
                ULONG_PTR Value;
            } Argument3;
            union {
                PVOID Ptr;
                ULONG_PTR Value;
            } Argument4;
        } Others;
        struct {
            PWDF_USB_REQUEST_COMPLETION_PARAMS Completion;
        } Usb;
    } Parameters;
} WDF_REQUEST_COMPLETION_PARAMS, *PWDF_REQUEST_COMPLETION_PARAMS;
void
__forceinline
WDF_REQUEST_COMPLETION_PARAMS_INIT(
    PWDF_REQUEST_COMPLETION_PARAMS Params
    )
{
    memset((Params),0,(sizeof(WDF_REQUEST_COMPLETION_PARAMS)));
    Params->Size = sizeof(WDF_REQUEST_COMPLETION_PARAMS);
    Params->Type = WdfRequestTypeNoFormat;
}
typedef
void
(EVT_WDF_REQUEST_COMPLETION_ROUTINE)(
     WDFREQUEST Request,
     WDFIOTARGET Target,
     PWDF_REQUEST_COMPLETION_PARAMS Params,
     WDFCONTEXT Context
    );
typedef EVT_WDF_REQUEST_COMPLETION_ROUTINE *PFN_WDF_REQUEST_COMPLETION_ROUTINE;
typedef struct _WDF_REQUEST_REUSE_PARAMS {
    ULONG Size;
    ULONG Flags;
    NTSTATUS Status;
    PIRP NewIrp;
} WDF_REQUEST_REUSE_PARAMS, *PWDF_REQUEST_REUSE_PARAMS;
void
__forceinline
WDF_REQUEST_REUSE_PARAMS_INIT(
     PWDF_REQUEST_REUSE_PARAMS Params,
     ULONG Flags,
     NTSTATUS Status
    )
{
    memset((Params),0,(sizeof(WDF_REQUEST_REUSE_PARAMS)));
    Params->Size = sizeof(WDF_REQUEST_REUSE_PARAMS);
    Params->Flags = Flags;
    Params->Status = Status;
}
void
__forceinline
WDF_REQUEST_REUSE_PARAMS_SET_NEW_IRP(
     PWDF_REQUEST_REUSE_PARAMS Params,
     PIRP NewIrp
    )
{
    Params->Flags |= WDF_REQUEST_REUSE_SET_NEW_IRP;
    Params->NewIrp = NewIrp;
}
typedef struct _WDF_REQUEST_SEND_OPTIONS {
    ULONG Size;
    ULONG Flags;
    LONGLONG Timeout;
} WDF_REQUEST_SEND_OPTIONS, *PWDF_REQUEST_SEND_OPTIONS;
void
__forceinline
WDF_REQUEST_SEND_OPTIONS_INIT(
     PWDF_REQUEST_SEND_OPTIONS Options,
     ULONG Flags
    )
{
    memset((Options),0,(sizeof(WDF_REQUEST_SEND_OPTIONS)));
    Options->Size = sizeof(WDF_REQUEST_SEND_OPTIONS);
    Options->Flags = Flags;
}
void
__forceinline
WDF_REQUEST_SEND_OPTIONS_SET_TIMEOUT(
     PWDF_REQUEST_SEND_OPTIONS Options,
     LONGLONG Timeout
    )
{
    Options->Flags |= WDF_REQUEST_SEND_OPTION_TIMEOUT;
    Options->Timeout = Timeout;
}
typedef
NTSTATUS
(*PFN_WDFREQUESTCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_OBJECT_ATTRIBUTES RequestAttributes,
    WDFIOTARGET IoTarget,
    WDFREQUEST* Request
    );
NTSTATUS
__forceinline
WdfRequestCreate(
    PWDF_OBJECT_ATTRIBUTES RequestAttributes,
    WDFIOTARGET IoTarget,
    WDFREQUEST* Request
    )
{
    return ((PFN_WDFREQUESTCREATE) WdfFunctions[WdfRequestCreateTableIndex])(WdfDriverGlobals, RequestAttributes, IoTarget, Request);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTCREATEFROMIRP)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDF_OBJECT_ATTRIBUTES RequestAttributes,
    PIRP Irp,
    BOOLEAN RequestFreesIrp,
    WDFREQUEST* Request
    );
NTSTATUS
__forceinline
WdfRequestCreateFromIrp(
    PWDF_OBJECT_ATTRIBUTES RequestAttributes,
    PIRP Irp,
    BOOLEAN RequestFreesIrp,
    WDFREQUEST* Request
    )
{
    return ((PFN_WDFREQUESTCREATEFROMIRP) WdfFunctions[WdfRequestCreateFromIrpTableIndex])(WdfDriverGlobals, RequestAttributes, Irp, RequestFreesIrp, Request);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTREUSE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    PWDF_REQUEST_REUSE_PARAMS ReuseParams
    );
NTSTATUS
__forceinline
WdfRequestReuse(
    WDFREQUEST Request,
    PWDF_REQUEST_REUSE_PARAMS ReuseParams
    )
{
    return ((PFN_WDFREQUESTREUSE) WdfFunctions[WdfRequestReuseTableIndex])(WdfDriverGlobals, Request, ReuseParams);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTCHANGETARGET)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    WDFIOTARGET IoTarget
    );
NTSTATUS
__forceinline
WdfRequestChangeTarget(
    WDFREQUEST Request,
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFREQUESTCHANGETARGET) WdfFunctions[WdfRequestChangeTargetTableIndex])(WdfDriverGlobals, Request, IoTarget);
}
typedef
void
(*PFN_WDFREQUESTFORMATREQUESTUSINGCURRENTTYPE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
void
__forceinline
WdfRequestFormatRequestUsingCurrentType(
    WDFREQUEST Request
    )
{
    ((PFN_WDFREQUESTFORMATREQUESTUSINGCURRENTTYPE) WdfFunctions[WdfRequestFormatRequestUsingCurrentTypeTableIndex])(WdfDriverGlobals, Request);
}
typedef
void
(*PFN_WDFREQUESTWDMFORMATUSINGSTACKLOCATION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    PIO_STACK_LOCATION Stack
    );
void
__forceinline
WdfRequestWdmFormatUsingStackLocation(
    WDFREQUEST Request,
    PIO_STACK_LOCATION Stack
    )
{
    ((PFN_WDFREQUESTWDMFORMATUSINGSTACKLOCATION) WdfFunctions[WdfRequestWdmFormatUsingStackLocationTableIndex])(WdfDriverGlobals, Request, Stack);
}
typedef
BOOLEAN
(*PFN_WDFREQUESTSEND)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    WDFIOTARGET Target,
    PWDF_REQUEST_SEND_OPTIONS Options
    );
BOOLEAN
__forceinline
WdfRequestSend(
    WDFREQUEST Request,
    WDFIOTARGET Target,
    PWDF_REQUEST_SEND_OPTIONS Options
    )
{
    return ((PFN_WDFREQUESTSEND) WdfFunctions[WdfRequestSendTableIndex])(WdfDriverGlobals, Request, Target, Options);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTGETSTATUS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
NTSTATUS
__forceinline
WdfRequestGetStatus(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETSTATUS) WdfFunctions[WdfRequestGetStatusTableIndex])(WdfDriverGlobals, Request);
}
typedef
void
(*PFN_WDFREQUESTMARKCANCELABLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    PFN_WDF_REQUEST_CANCEL EvtRequestCancel
    );
void
__forceinline
WdfRequestMarkCancelable(
    WDFREQUEST Request,
    PFN_WDF_REQUEST_CANCEL EvtRequestCancel
    )
{
    ((PFN_WDFREQUESTMARKCANCELABLE) WdfFunctions[WdfRequestMarkCancelableTableIndex])(WdfDriverGlobals, Request, EvtRequestCancel);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTUNMARKCANCELABLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
NTSTATUS
__forceinline
WdfRequestUnmarkCancelable(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTUNMARKCANCELABLE) WdfFunctions[WdfRequestUnmarkCancelableTableIndex])(WdfDriverGlobals, Request);
}
typedef
BOOLEAN
(*PFN_WDFREQUESTISCANCELED)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
BOOLEAN
__forceinline
WdfRequestIsCanceled(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTISCANCELED) WdfFunctions[WdfRequestIsCanceledTableIndex])(WdfDriverGlobals, Request);
}
typedef
BOOLEAN
(*PFN_WDFREQUESTCANCELSENTREQUEST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
BOOLEAN
__forceinline
WdfRequestCancelSentRequest(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTCANCELSENTREQUEST) WdfFunctions[WdfRequestCancelSentRequestTableIndex])(WdfDriverGlobals, Request);
}
typedef
BOOLEAN
(*PFN_WDFREQUESTISFROM32BITPROCESS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
BOOLEAN
__forceinline
WdfRequestIsFrom32BitProcess(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTISFROM32BITPROCESS) WdfFunctions[WdfRequestIsFrom32BitProcessTableIndex])(WdfDriverGlobals, Request);
}
typedef
void
(*PFN_WDFREQUESTSETCOMPLETIONROUTINE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
    WDFCONTEXT CompletionContext
    );
void
__forceinline
WdfRequestSetCompletionRoutine(
    WDFREQUEST Request,
    PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
    WDFCONTEXT CompletionContext
    )
{
    ((PFN_WDFREQUESTSETCOMPLETIONROUTINE) WdfFunctions[WdfRequestSetCompletionRoutineTableIndex])(WdfDriverGlobals, Request, CompletionRoutine, CompletionContext);
}
typedef
void
(*PFN_WDFREQUESTGETCOMPLETIONPARAMS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    PWDF_REQUEST_COMPLETION_PARAMS Params
    );
void
__forceinline
WdfRequestGetCompletionParams(
    WDFREQUEST Request,
    PWDF_REQUEST_COMPLETION_PARAMS Params
    )
{
    ((PFN_WDFREQUESTGETCOMPLETIONPARAMS) WdfFunctions[WdfRequestGetCompletionParamsTableIndex])(WdfDriverGlobals, Request, Params);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTALLOCATETIMER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
NTSTATUS
__forceinline
WdfRequestAllocateTimer(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTALLOCATETIMER) WdfFunctions[WdfRequestAllocateTimerTableIndex])(WdfDriverGlobals, Request);
}
typedef
void
(*PFN_WDFREQUESTCOMPLETE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    NTSTATUS Status
    );
void
__forceinline
WdfRequestComplete(
    WDFREQUEST Request,
    NTSTATUS Status
    )
{
    ((PFN_WDFREQUESTCOMPLETE) WdfFunctions[WdfRequestCompleteTableIndex])(WdfDriverGlobals, Request, Status);
}
typedef
void
(*PFN_WDFREQUESTCOMPLETEWITHPRIORITYBOOST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    NTSTATUS Status,
    CCHAR PriorityBoost
    );
void
__forceinline
WdfRequestCompleteWithPriorityBoost(
    WDFREQUEST Request,
    NTSTATUS Status,
    CCHAR PriorityBoost
    )
{
    ((PFN_WDFREQUESTCOMPLETEWITHPRIORITYBOOST) WdfFunctions[WdfRequestCompleteWithPriorityBoostTableIndex])(WdfDriverGlobals, Request, Status, PriorityBoost);
}
typedef
void
(*PFN_WDFREQUESTCOMPLETEWITHINFORMATION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    NTSTATUS Status,
    ULONG_PTR Information
    );
void
__forceinline
WdfRequestCompleteWithInformation(
    WDFREQUEST Request,
    NTSTATUS Status,
    ULONG_PTR Information
    )
{
    ((PFN_WDFREQUESTCOMPLETEWITHINFORMATION) WdfFunctions[WdfRequestCompleteWithInformationTableIndex])(WdfDriverGlobals, Request, Status, Information);
}
typedef
void
(*PFN_WDFREQUESTGETPARAMETERS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    PWDF_REQUEST_PARAMETERS Parameters
    );
void
__forceinline
WdfRequestGetParameters(
    WDFREQUEST Request,
    PWDF_REQUEST_PARAMETERS Parameters
    )
{
    ((PFN_WDFREQUESTGETPARAMETERS) WdfFunctions[WdfRequestGetParametersTableIndex])(WdfDriverGlobals, Request, Parameters);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTRETRIEVEINPUTMEMORY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    WDFMEMORY* Memory
    );
NTSTATUS
__forceinline
WdfRequestRetrieveInputMemory(
    WDFREQUEST Request,
    WDFMEMORY* Memory
    )
{
    return ((PFN_WDFREQUESTRETRIEVEINPUTMEMORY) WdfFunctions[WdfRequestRetrieveInputMemoryTableIndex])(WdfDriverGlobals, Request, Memory);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTRETRIEVEOUTPUTMEMORY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    WDFMEMORY* Memory
    );
NTSTATUS
__forceinline
WdfRequestRetrieveOutputMemory(
    WDFREQUEST Request,
    WDFMEMORY* Memory
    )
{
    return ((PFN_WDFREQUESTRETRIEVEOUTPUTMEMORY) WdfFunctions[WdfRequestRetrieveOutputMemoryTableIndex])(WdfDriverGlobals, Request, Memory);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTRETRIEVEINPUTBUFFER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    size_t MinimumRequiredLength,
    PVOID* Buffer,
    size_t* Length
    );
NTSTATUS
__forceinline
WdfRequestRetrieveInputBuffer(
    WDFREQUEST Request,
    size_t MinimumRequiredLength,
    PVOID* Buffer,
    size_t* Length
    )
{
    return ((PFN_WDFREQUESTRETRIEVEINPUTBUFFER) WdfFunctions[WdfRequestRetrieveInputBufferTableIndex])(WdfDriverGlobals, Request, MinimumRequiredLength, Buffer, Length);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTRETRIEVEOUTPUTBUFFER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    size_t MinimumRequiredSize,
    PVOID* Buffer,
    size_t* Length
    );
NTSTATUS
__forceinline
WdfRequestRetrieveOutputBuffer(
    WDFREQUEST Request,
    size_t MinimumRequiredSize,
    PVOID* Buffer,
    size_t* Length
    )
{
    return ((PFN_WDFREQUESTRETRIEVEOUTPUTBUFFER) WdfFunctions[WdfRequestRetrieveOutputBufferTableIndex])(WdfDriverGlobals, Request, MinimumRequiredSize, Buffer, Length);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTRETRIEVEINPUTWDMMDL)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    PMDL* Mdl
    );
NTSTATUS
__forceinline
WdfRequestRetrieveInputWdmMdl(
    WDFREQUEST Request,
    PMDL* Mdl
    )
{
    return ((PFN_WDFREQUESTRETRIEVEINPUTWDMMDL) WdfFunctions[WdfRequestRetrieveInputWdmMdlTableIndex])(WdfDriverGlobals, Request, Mdl);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTRETRIEVEOUTPUTWDMMDL)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    PMDL* Mdl
    );
NTSTATUS
__forceinline
WdfRequestRetrieveOutputWdmMdl(
    WDFREQUEST Request,
    PMDL* Mdl
    )
{
    return ((PFN_WDFREQUESTRETRIEVEOUTPUTWDMMDL) WdfFunctions[WdfRequestRetrieveOutputWdmMdlTableIndex])(WdfDriverGlobals, Request, Mdl);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTRETRIEVEUNSAFEUSERINPUTBUFFER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    size_t MinimumRequiredLength,
    PVOID* InputBuffer,
    size_t* Length
    );
NTSTATUS
__forceinline
WdfRequestRetrieveUnsafeUserInputBuffer(
    WDFREQUEST Request,
    size_t MinimumRequiredLength,
    PVOID* InputBuffer,
    size_t* Length
    )
{
    return ((PFN_WDFREQUESTRETRIEVEUNSAFEUSERINPUTBUFFER) WdfFunctions[WdfRequestRetrieveUnsafeUserInputBufferTableIndex])(WdfDriverGlobals, Request, MinimumRequiredLength, InputBuffer, Length);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTRETRIEVEUNSAFEUSEROUTPUTBUFFER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    size_t MinimumRequiredLength,
    PVOID* OutputBuffer,
    size_t* Length
    );
NTSTATUS
__forceinline
WdfRequestRetrieveUnsafeUserOutputBuffer(
    WDFREQUEST Request,
    size_t MinimumRequiredLength,
    PVOID* OutputBuffer,
    size_t* Length
    )
{
    return ((PFN_WDFREQUESTRETRIEVEUNSAFEUSEROUTPUTBUFFER) WdfFunctions[WdfRequestRetrieveUnsafeUserOutputBufferTableIndex])(WdfDriverGlobals, Request, MinimumRequiredLength, OutputBuffer, Length);
}
typedef
void
(*PFN_WDFREQUESTSETINFORMATION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    ULONG_PTR Information
    );
void
__forceinline
WdfRequestSetInformation(
    WDFREQUEST Request,
    ULONG_PTR Information
    )
{
    ((PFN_WDFREQUESTSETINFORMATION) WdfFunctions[WdfRequestSetInformationTableIndex])(WdfDriverGlobals, Request, Information);
}
typedef
ULONG_PTR
(*PFN_WDFREQUESTGETINFORMATION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
ULONG_PTR
__forceinline
WdfRequestGetInformation(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETINFORMATION) WdfFunctions[WdfRequestGetInformationTableIndex])(WdfDriverGlobals, Request);
}
typedef
WDFFILEOBJECT
(*PFN_WDFREQUESTGETFILEOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
WDFFILEOBJECT
__forceinline
WdfRequestGetFileObject(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETFILEOBJECT) WdfFunctions[WdfRequestGetFileObjectTableIndex])(WdfDriverGlobals, Request);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTPROBEANDLOCKUSERBUFFERFORREAD)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    PVOID Buffer,
    size_t Length,
    WDFMEMORY* MemoryObject
    );
NTSTATUS
__forceinline
WdfRequestProbeAndLockUserBufferForRead(
    WDFREQUEST Request,
    PVOID Buffer,
    size_t Length,
    WDFMEMORY* MemoryObject
    )
{
    return ((PFN_WDFREQUESTPROBEANDLOCKUSERBUFFERFORREAD) WdfFunctions[WdfRequestProbeAndLockUserBufferForReadTableIndex])(WdfDriverGlobals, Request, Buffer, Length, MemoryObject);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTPROBEANDLOCKUSERBUFFERFORWRITE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    PVOID Buffer,
    size_t Length,
    WDFMEMORY* MemoryObject
    );
NTSTATUS
__forceinline
WdfRequestProbeAndLockUserBufferForWrite(
    WDFREQUEST Request,
    PVOID Buffer,
    size_t Length,
    WDFMEMORY* MemoryObject
    )
{
    return ((PFN_WDFREQUESTPROBEANDLOCKUSERBUFFERFORWRITE) WdfFunctions[WdfRequestProbeAndLockUserBufferForWriteTableIndex])(WdfDriverGlobals, Request, Buffer, Length, MemoryObject);
}
typedef
KPROCESSOR_MODE
(*PFN_WDFREQUESTGETREQUESTORMODE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
KPROCESSOR_MODE
__forceinline
WdfRequestGetRequestorMode(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETREQUESTORMODE) WdfFunctions[WdfRequestGetRequestorModeTableIndex])(WdfDriverGlobals, Request);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTFORWARDTOIOQUEUE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    WDFQUEUE DestinationQueue
    );
NTSTATUS
__forceinline
WdfRequestForwardToIoQueue(
    WDFREQUEST Request,
    WDFQUEUE DestinationQueue
    )
{
    return ((PFN_WDFREQUESTFORWARDTOIOQUEUE) WdfFunctions[WdfRequestForwardToIoQueueTableIndex])(WdfDriverGlobals, Request, DestinationQueue);
}
typedef
WDFQUEUE
(*PFN_WDFREQUESTGETIOQUEUE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
WDFQUEUE
__forceinline
WdfRequestGetIoQueue(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTGETIOQUEUE) WdfFunctions[WdfRequestGetIoQueueTableIndex])(WdfDriverGlobals, Request);
}
typedef
NTSTATUS
(*PFN_WDFREQUESTREQUEUE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
NTSTATUS
__forceinline
WdfRequestRequeue(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTREQUEUE) WdfFunctions[WdfRequestRequeueTableIndex])(WdfDriverGlobals, Request);
}
typedef
void
(*PFN_WDFREQUESTSTOPACKNOWLEDGE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request,
    BOOLEAN Requeue
    );
void
__forceinline
WdfRequestStopAcknowledge(
    WDFREQUEST Request,
    BOOLEAN Requeue
    )
{
    ((PFN_WDFREQUESTSTOPACKNOWLEDGE) WdfFunctions[WdfRequestStopAcknowledgeTableIndex])(WdfDriverGlobals, Request, Requeue);
}
typedef
PIRP
(*PFN_WDFREQUESTWDMGETIRP)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFREQUEST Request
    );
PIRP
__forceinline
WdfRequestWdmGetIrp(
    WDFREQUEST Request
    )
{
    return ((PFN_WDFREQUESTWDMGETIRP) WdfFunctions[WdfRequestWdmGetIrpTableIndex])(WdfDriverGlobals, Request);
}
typedef enum _WDF_IO_TARGET_STATE {
    WdfIoTargetStateUndefined = 0,
    WdfIoTargetStarted,
    WdfIoTargetStopped,
    WdfIoTargetClosedForQueryRemove,
    WdfIoTargetClosed,
    WdfIoTargetDeleted,
} WDF_IO_TARGET_STATE, *PWDF_IO_TARGET_STATE;
typedef enum _WDF_IO_TARGET_OPEN_TYPE {
    WdfIoTargetOpenUndefined = 0,
    WdfIoTargetOpenUseExistingDevice = 1,
    WdfIoTargetOpenByName = 2,
    WdfIoTargetOpenReopen = 3,
} WDF_IO_TARGET_OPEN_TYPE;
typedef enum _WDF_IO_TARGET_SENT_IO_ACTION {
    WdfIoTargetSentIoUndefined = 0,
    WdfIoTargetCancelSentIo,
    WdfIoTargetWaitForSentIoToComplete,
    WdfIoTargetLeaveSentIoPending,
} WDF_IO_TARGET_SENT_IO_ACTION;
typedef
NTSTATUS
(EVT_WDF_IO_TARGET_QUERY_REMOVE)(
     WDFIOTARGET IoTarget
    );
typedef EVT_WDF_IO_TARGET_QUERY_REMOVE *PFN_WDF_IO_TARGET_QUERY_REMOVE;
typedef
void
(EVT_WDF_IO_TARGET_REMOVE_CANCELED)(
     WDFIOTARGET IoTarget
    );
typedef EVT_WDF_IO_TARGET_REMOVE_CANCELED *PFN_WDF_IO_TARGET_REMOVE_CANCELED;
typedef
void
(EVT_WDF_IO_TARGET_REMOVE_COMPLETE)(
     WDFIOTARGET IoTarget
    );
typedef EVT_WDF_IO_TARGET_REMOVE_COMPLETE *PFN_WDF_IO_TARGET_REMOVE_COMPLETE;
typedef struct _WDF_IO_TARGET_OPEN_PARAMS {
    ULONG Size;
    WDF_IO_TARGET_OPEN_TYPE Type;
    PFN_WDF_IO_TARGET_QUERY_REMOVE EvtIoTargetQueryRemove;
    PFN_WDF_IO_TARGET_REMOVE_CANCELED EvtIoTargetRemoveCanceled;
    PFN_WDF_IO_TARGET_REMOVE_COMPLETE EvtIoTargetRemoveComplete;
    PDEVICE_OBJECT TargetDeviceObject;
    PFILE_OBJECT TargetFileObject;
    UNICODE_STRING TargetDeviceName;
    ACCESS_MASK DesiredAccess;
    ULONG ShareAccess;
    ULONG FileAttributes;
    ULONG CreateDisposition;
    ULONG CreateOptions;
    PVOID EaBuffer;
    ULONG EaBufferLength;
    PLONGLONG AllocationSize;
    ULONG FileInformation;
} WDF_IO_TARGET_OPEN_PARAMS, *PWDF_IO_TARGET_OPEN_PARAMS;
void
__forceinline
WDF_IO_TARGET_OPEN_PARAMS_INIT_EXISTING_DEVICE(
     PWDF_IO_TARGET_OPEN_PARAMS Params,
     PDEVICE_OBJECT DeviceObject
    )
{
    memset((Params),0,(sizeof(WDF_IO_TARGET_OPEN_PARAMS)));
    Params->Size = sizeof(WDF_IO_TARGET_OPEN_PARAMS);
    Params->Type = WdfIoTargetOpenUseExistingDevice;
    Params->TargetDeviceObject = DeviceObject;
}
void
__forceinline
WDF_IO_TARGET_OPEN_PARAMS_INIT_CREATE_BY_NAME(
     PWDF_IO_TARGET_OPEN_PARAMS Params,
     PUNICODE_STRING TargetDeviceName,
     ACCESS_MASK DesiredAccess
    )
{
    memset((Params),0,(sizeof(WDF_IO_TARGET_OPEN_PARAMS)));
    Params->Size = sizeof(WDF_IO_TARGET_OPEN_PARAMS);
    Params->Type = WdfIoTargetOpenByName;
    memcpy((&Params->TargetDeviceName),(TargetDeviceName),(sizeof(UNICODE_STRING)));
    Params->DesiredAccess = DesiredAccess;
    Params->CreateOptions = 0x00000040;
}
void
__forceinline
WDF_IO_TARGET_OPEN_PARAMS_INIT_OPEN_BY_NAME(
     PWDF_IO_TARGET_OPEN_PARAMS Params,
     PUNICODE_STRING TargetDeviceName,
     ACCESS_MASK DesiredAccess
    )
{
    WDF_IO_TARGET_OPEN_PARAMS_INIT_CREATE_BY_NAME(Params,
                                                  TargetDeviceName,
                                                  DesiredAccess);
    Params->CreateDisposition = 0x00000001;
}
void
__forceinline
WDF_IO_TARGET_OPEN_PARAMS_INIT_REOPEN(
     PWDF_IO_TARGET_OPEN_PARAMS Params
    )
{
    memset((Params),0,(sizeof(WDF_IO_TARGET_OPEN_PARAMS)));
    Params->Size = sizeof(WDF_IO_TARGET_OPEN_PARAMS);
    Params->Type = WdfIoTargetOpenReopen;
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_OBJECT_ATTRIBUTES IoTargetAttributes,
    WDFIOTARGET* IoTarget
    );
NTSTATUS
__forceinline
WdfIoTargetCreate(
    WDFDEVICE Device,
    PWDF_OBJECT_ATTRIBUTES IoTargetAttributes,
    WDFIOTARGET* IoTarget
    )
{
    return ((PFN_WDFIOTARGETCREATE) WdfFunctions[WdfIoTargetCreateTableIndex])(WdfDriverGlobals, Device, IoTargetAttributes, IoTarget);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETOPEN)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    PWDF_IO_TARGET_OPEN_PARAMS OpenParams
    );
NTSTATUS
__forceinline
WdfIoTargetOpen(
    WDFIOTARGET IoTarget,
    PWDF_IO_TARGET_OPEN_PARAMS OpenParams
    )
{
    return ((PFN_WDFIOTARGETOPEN) WdfFunctions[WdfIoTargetOpenTableIndex])(WdfDriverGlobals, IoTarget, OpenParams);
}
typedef
void
(*PFN_WDFIOTARGETCLOSEFORQUERYREMOVE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget
    );
void
__forceinline
WdfIoTargetCloseForQueryRemove(
    WDFIOTARGET IoTarget
    )
{
    ((PFN_WDFIOTARGETCLOSEFORQUERYREMOVE) WdfFunctions[WdfIoTargetCloseForQueryRemoveTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef
void
(*PFN_WDFIOTARGETCLOSE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget
    );
void
__forceinline
WdfIoTargetClose(
    WDFIOTARGET IoTarget
    )
{
    ((PFN_WDFIOTARGETCLOSE) WdfFunctions[WdfIoTargetCloseTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETSTART)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget
    );
NTSTATUS
__forceinline
WdfIoTargetStart(
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETSTART) WdfFunctions[WdfIoTargetStartTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef
void
(*PFN_WDFIOTARGETSTOP)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDF_IO_TARGET_SENT_IO_ACTION Action
    );
void
__forceinline
WdfIoTargetStop(
    WDFIOTARGET IoTarget,
    WDF_IO_TARGET_SENT_IO_ACTION Action
    )
{
    ((PFN_WDFIOTARGETSTOP) WdfFunctions[WdfIoTargetStopTableIndex])(WdfDriverGlobals, IoTarget, Action);
}
typedef
WDF_IO_TARGET_STATE
(*PFN_WDFIOTARGETGETSTATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget
    );
WDF_IO_TARGET_STATE
__forceinline
WdfIoTargetGetState(
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETGETSTATE) WdfFunctions[WdfIoTargetGetStateTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef
WDFDEVICE
(*PFN_WDFIOTARGETGETDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget
    );
WDFDEVICE
__forceinline
WdfIoTargetGetDevice(
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETGETDEVICE) WdfFunctions[WdfIoTargetGetDeviceTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETQUERYTARGETPROPERTY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    ULONG BufferLength,
    PVOID PropertyBuffer,
    PULONG ResultLength
    );
NTSTATUS
__forceinline
WdfIoTargetQueryTargetProperty(
    WDFIOTARGET IoTarget,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    ULONG BufferLength,
    PVOID PropertyBuffer,
    PULONG ResultLength
    )
{
    return ((PFN_WDFIOTARGETQUERYTARGETPROPERTY) WdfFunctions[WdfIoTargetQueryTargetPropertyTableIndex])(WdfDriverGlobals, IoTarget, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETALLOCANDQUERYTARGETPROPERTY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    POOL_TYPE PoolType,
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
    WDFMEMORY* PropertyMemory
    );
NTSTATUS
__forceinline
WdfIoTargetAllocAndQueryTargetProperty(
    WDFIOTARGET IoTarget,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    POOL_TYPE PoolType,
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
    WDFMEMORY* PropertyMemory
    )
{
    return ((PFN_WDFIOTARGETALLOCANDQUERYTARGETPROPERTY) WdfFunctions[WdfIoTargetAllocAndQueryTargetPropertyTableIndex])(WdfDriverGlobals, IoTarget, DeviceProperty, PoolType, PropertyMemoryAttributes, PropertyMemory);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETQUERYFORINTERFACE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    LPCGUID InterfaceType,
    PINTERFACE Interface,
    USHORT Size,
    USHORT Version,
    PVOID InterfaceSpecificData
    );
NTSTATUS
__forceinline
WdfIoTargetQueryForInterface(
    WDFIOTARGET IoTarget,
    LPCGUID InterfaceType,
    PINTERFACE Interface,
    USHORT Size,
    USHORT Version,
    PVOID InterfaceSpecificData
    )
{
    return ((PFN_WDFIOTARGETQUERYFORINTERFACE) WdfFunctions[WdfIoTargetQueryForInterfaceTableIndex])(WdfDriverGlobals, IoTarget, InterfaceType, Interface, Size, Version, InterfaceSpecificData);
}
typedef
PDEVICE_OBJECT
(*PFN_WDFIOTARGETWDMGETTARGETDEVICEOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget
    );
PDEVICE_OBJECT
__forceinline
WdfIoTargetWdmGetTargetDeviceObject(
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETDEVICEOBJECT) WdfFunctions[WdfIoTargetWdmGetTargetDeviceObjectTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef
PDEVICE_OBJECT
(*PFN_WDFIOTARGETWDMGETTARGETPHYSICALDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget
    );
PDEVICE_OBJECT
__forceinline
WdfIoTargetWdmGetTargetPhysicalDevice(
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETPHYSICALDEVICE) WdfFunctions[WdfIoTargetWdmGetTargetPhysicalDeviceTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef
PFILE_OBJECT
(*PFN_WDFIOTARGETWDMGETTARGETFILEOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget
    );
PFILE_OBJECT
__forceinline
WdfIoTargetWdmGetTargetFileObject(
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETFILEOBJECT) WdfFunctions[WdfIoTargetWdmGetTargetFileObjectTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef
HANDLE
(*PFN_WDFIOTARGETWDMGETTARGETFILEHANDLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget
    );
HANDLE
__forceinline
WdfIoTargetWdmGetTargetFileHandle(
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETFILEHANDLE) WdfFunctions[WdfIoTargetWdmGetTargetFileHandleTableIndex])(WdfDriverGlobals, IoTarget);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETSENDREADSYNCHRONOUSLY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    PLONGLONG DeviceOffset,
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    PULONG_PTR BytesRead
    );
NTSTATUS
__forceinline
WdfIoTargetSendReadSynchronously(
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    PLONGLONG DeviceOffset,
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    PULONG_PTR BytesRead
    )
{
    return ((PFN_WDFIOTARGETSENDREADSYNCHRONOUSLY) WdfFunctions[WdfIoTargetSendReadSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, OutputBuffer, DeviceOffset, RequestOptions, BytesRead);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETFORMATREQUESTFORREAD)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    WDFMEMORY OutputBuffer,
    PWDFMEMORY_OFFSET OutputBufferOffset,
    PLONGLONG DeviceOffset
    );
NTSTATUS
__forceinline
WdfIoTargetFormatRequestForRead(
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    WDFMEMORY OutputBuffer,
    PWDFMEMORY_OFFSET OutputBufferOffset,
    PLONGLONG DeviceOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORREAD) WdfFunctions[WdfIoTargetFormatRequestForReadTableIndex])(WdfDriverGlobals, IoTarget, Request, OutputBuffer, OutputBufferOffset, DeviceOffset);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETSENDWRITESYNCHRONOUSLY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    PLONGLONG DeviceOffset,
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    PULONG_PTR BytesWritten
    );
NTSTATUS
__forceinline
WdfIoTargetSendWriteSynchronously(
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    PLONGLONG DeviceOffset,
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    PULONG_PTR BytesWritten
    )
{
    return ((PFN_WDFIOTARGETSENDWRITESYNCHRONOUSLY) WdfFunctions[WdfIoTargetSendWriteSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, InputBuffer, DeviceOffset, RequestOptions, BytesWritten);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETFORMATREQUESTFORWRITE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    WDFMEMORY InputBuffer,
    PWDFMEMORY_OFFSET InputBufferOffset,
    PLONGLONG DeviceOffset
    );
NTSTATUS
__forceinline
WdfIoTargetFormatRequestForWrite(
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    WDFMEMORY InputBuffer,
    PWDFMEMORY_OFFSET InputBufferOffset,
    PLONGLONG DeviceOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORWRITE) WdfFunctions[WdfIoTargetFormatRequestForWriteTableIndex])(WdfDriverGlobals, IoTarget, Request, InputBuffer, InputBufferOffset, DeviceOffset);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETSENDIOCTLSYNCHRONOUSLY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    PULONG_PTR BytesReturned
    );
NTSTATUS
__forceinline
WdfIoTargetSendIoctlSynchronously(
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    PULONG_PTR BytesReturned
    )
{
    return ((PFN_WDFIOTARGETSENDIOCTLSYNCHRONOUSLY) WdfFunctions[WdfIoTargetSendIoctlSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, OutputBuffer, RequestOptions, BytesReturned);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETFORMATREQUESTFORIOCTL)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    WDFMEMORY InputBuffer,
    PWDFMEMORY_OFFSET InputBufferOffset,
    WDFMEMORY OutputBuffer,
    PWDFMEMORY_OFFSET OutputBufferOffset
    );
NTSTATUS
__forceinline
WdfIoTargetFormatRequestForIoctl(
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    WDFMEMORY InputBuffer,
    PWDFMEMORY_OFFSET InputBufferOffset,
    WDFMEMORY OutputBuffer,
    PWDFMEMORY_OFFSET OutputBufferOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORIOCTL) WdfFunctions[WdfIoTargetFormatRequestForIoctlTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, InputBufferOffset, OutputBuffer, OutputBufferOffset);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETSENDINTERNALIOCTLSYNCHRONOUSLY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    PULONG_PTR BytesReturned
    );
NTSTATUS
__forceinline
WdfIoTargetSendInternalIoctlSynchronously(
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    PULONG_PTR BytesReturned
    )
{
    return ((PFN_WDFIOTARGETSENDINTERNALIOCTLSYNCHRONOUSLY) WdfFunctions[WdfIoTargetSendInternalIoctlSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, OutputBuffer, RequestOptions, BytesReturned);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTL)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    WDFMEMORY InputBuffer,
    PWDFMEMORY_OFFSET InputBufferOffset,
    WDFMEMORY OutputBuffer,
    PWDFMEMORY_OFFSET OutputBufferOffset
    );
NTSTATUS
__forceinline
WdfIoTargetFormatRequestForInternalIoctl(
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    WDFMEMORY InputBuffer,
    PWDFMEMORY_OFFSET InputBufferOffset,
    WDFMEMORY OutputBuffer,
    PWDFMEMORY_OFFSET OutputBufferOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTL) WdfFunctions[WdfIoTargetFormatRequestForInternalIoctlTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, InputBufferOffset, OutputBuffer, OutputBufferOffset);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETSENDINTERNALIOCTLOTHERSSYNCHRONOUSLY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    PWDF_MEMORY_DESCRIPTOR OtherArg1,
    PWDF_MEMORY_DESCRIPTOR OtherArg2,
    PWDF_MEMORY_DESCRIPTOR OtherArg4,
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    PULONG_PTR BytesReturned
    );
NTSTATUS
__forceinline
WdfIoTargetSendInternalIoctlOthersSynchronously(
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    PWDF_MEMORY_DESCRIPTOR OtherArg1,
    PWDF_MEMORY_DESCRIPTOR OtherArg2,
    PWDF_MEMORY_DESCRIPTOR OtherArg4,
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    PULONG_PTR BytesReturned
    )
{
    return ((PFN_WDFIOTARGETSENDINTERNALIOCTLOTHERSSYNCHRONOUSLY) WdfFunctions[WdfIoTargetSendInternalIoctlOthersSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, OtherArg1, OtherArg2, OtherArg4, RequestOptions, BytesReturned);
}
typedef
NTSTATUS
(*PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTLOTHERS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    WDFMEMORY OtherArg1,
    PWDFMEMORY_OFFSET OtherArg1Offset,
    WDFMEMORY OtherArg2,
    PWDFMEMORY_OFFSET OtherArg2Offset,
    WDFMEMORY OtherArg4,
    PWDFMEMORY_OFFSET OtherArg4Offset
    );
NTSTATUS
__forceinline
WdfIoTargetFormatRequestForInternalIoctlOthers(
    WDFIOTARGET IoTarget,
    WDFREQUEST Request,
    ULONG IoctlCode,
    WDFMEMORY OtherArg1,
    PWDFMEMORY_OFFSET OtherArg1Offset,
    WDFMEMORY OtherArg2,
    PWDFMEMORY_OFFSET OtherArg2Offset,
    WDFMEMORY OtherArg4,
    PWDFMEMORY_OFFSET OtherArg4Offset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTLOTHERS) WdfFunctions[WdfIoTargetFormatRequestForInternalIoctlOthersTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, OtherArg1, OtherArg1Offset, OtherArg2, OtherArg2Offset, OtherArg4, OtherArg4Offset);
}
typedef enum _WDF_IO_QUEUE_DISPATCH_TYPE {
    WdfIoQueueDispatchInvalid = 0,
    WdfIoQueueDispatchSequential,
    WdfIoQueueDispatchParallel,
    WdfIoQueueDispatchManual,
    WdfIoQueueDispatchMax,
} WDF_IO_QUEUE_DISPATCH_TYPE;
typedef enum _WDF_IO_QUEUE_STATE {
    WdfIoQueueAcceptRequests = 0x01,
    WdfIoQueueDispatchRequests = 0x02,
    WdfIoQueueNoRequests = 0x04,
    WdfIoQueueDriverNoRequests = 0x08,
    WdfIoQueuePnpHeld = 0x10,
} WDF_IO_QUEUE_STATE;
BOOLEAN
__forceinline
WDF_IO_QUEUE_IDLE(
    WDF_IO_QUEUE_STATE State
    )
{
    return ((State & WdfIoQueueNoRequests) &&
            (State & WdfIoQueueDriverNoRequests)) ? 1: 0;
}
BOOLEAN
__forceinline
WDF_IO_QUEUE_READY(
    WDF_IO_QUEUE_STATE State
    )
{
   return ((State & WdfIoQueueDispatchRequests) &&
        (State & WdfIoQueueAcceptRequests) &&
        ((State & WdfIoQueuePnpHeld)==0)) ? 1: 0;
}
BOOLEAN
__forceinline
WDF_IO_QUEUE_STOPPED(
    WDF_IO_QUEUE_STATE State
    )
{
    return (((State & WdfIoQueueDispatchRequests) == 0) &&
        (State & WdfIoQueueAcceptRequests) &&
        (State & WdfIoQueueDriverNoRequests)) ? 1: 0;
}
BOOLEAN
__forceinline
WDF_IO_QUEUE_DRAINED(
    WDF_IO_QUEUE_STATE State
    )
{
    return ( ((State & WdfIoQueueAcceptRequests)==0) &&
          (State & WdfIoQueueDispatchRequests) &&
          (State & WdfIoQueueNoRequests) &&
          (State & WdfIoQueueDriverNoRequests) ) ? 1: 0;
}
BOOLEAN
__forceinline
WDF_IO_QUEUE_PURGED(
    WDF_IO_QUEUE_STATE State
    )
{
    return ( ((State & WdfIoQueueAcceptRequests)==0) &&
          (State & WdfIoQueueNoRequests) &&
          (State & WdfIoQueueDriverNoRequests) ) ? 1: 0;
}
typedef
void
(EVT_WDF_IO_QUEUE_IO_DEFAULT) (
     WDFQUEUE Queue,
     WDFREQUEST Request
    );
typedef EVT_WDF_IO_QUEUE_IO_DEFAULT *PFN_WDF_IO_QUEUE_IO_DEFAULT;
typedef
void
(EVT_WDF_IO_QUEUE_IO_STOP) (
     WDFQUEUE Queue,
     WDFREQUEST Request,
     ULONG ActionFlags
    );
typedef EVT_WDF_IO_QUEUE_IO_STOP *PFN_WDF_IO_QUEUE_IO_STOP;
typedef
void
(EVT_WDF_IO_QUEUE_IO_RESUME) (
     WDFQUEUE Queue,
     WDFREQUEST Request
    );
typedef EVT_WDF_IO_QUEUE_IO_RESUME *PFN_WDF_IO_QUEUE_IO_RESUME;
typedef
void
(EVT_WDF_IO_QUEUE_IO_READ) (
     WDFQUEUE Queue,
     WDFREQUEST Request,
     size_t Length
    );
typedef EVT_WDF_IO_QUEUE_IO_READ *PFN_WDF_IO_QUEUE_IO_READ;
typedef
void
(EVT_WDF_IO_QUEUE_IO_WRITE) (
     WDFQUEUE Queue,
     WDFREQUEST Request,
     size_t Length
    );
typedef EVT_WDF_IO_QUEUE_IO_WRITE *PFN_WDF_IO_QUEUE_IO_WRITE;
typedef
void
(EVT_WDF_IO_QUEUE_IO_DEVICE_CONTROL) (
     WDFQUEUE Queue,
     WDFREQUEST Request,
     size_t OutputBufferLength,
     size_t InputBufferLength,
     ULONG IoControlCode
    );
typedef EVT_WDF_IO_QUEUE_IO_DEVICE_CONTROL *PFN_WDF_IO_QUEUE_IO_DEVICE_CONTROL;
typedef
void
(EVT_WDF_IO_QUEUE_IO_INTERNAL_DEVICE_CONTROL) (
     WDFQUEUE Queue,
     WDFREQUEST Request,
     size_t OutputBufferLength,
     size_t InputBufferLength,
     ULONG IoControlCode
    );
typedef EVT_WDF_IO_QUEUE_IO_INTERNAL_DEVICE_CONTROL *PFN_WDF_IO_QUEUE_IO_INTERNAL_DEVICE_CONTROL;
typedef
void
(EVT_WDF_IO_QUEUE_IO_CANCELED_ON_QUEUE) (
     WDFQUEUE Queue,
     WDFREQUEST Request
    );
typedef EVT_WDF_IO_QUEUE_IO_CANCELED_ON_QUEUE *PFN_WDF_IO_QUEUE_IO_CANCELED_ON_QUEUE;
typedef
void
(EVT_WDF_IO_QUEUE_STATE) (
     WDFQUEUE Queue,
     WDFCONTEXT Context
    );
typedef EVT_WDF_IO_QUEUE_STATE *PFN_WDF_IO_QUEUE_STATE;
typedef struct _WDF_IO_QUEUE_CONFIG {
    ULONG Size;
    WDF_IO_QUEUE_DISPATCH_TYPE DispatchType;
    WDF_TRI_STATE PowerManaged;
    BOOLEAN AllowZeroLengthRequests;
    BOOLEAN DefaultQueue;
    PFN_WDF_IO_QUEUE_IO_DEFAULT EvtIoDefault;
    PFN_WDF_IO_QUEUE_IO_READ EvtIoRead;
    PFN_WDF_IO_QUEUE_IO_WRITE EvtIoWrite;
    PFN_WDF_IO_QUEUE_IO_DEVICE_CONTROL EvtIoDeviceControl;
    PFN_WDF_IO_QUEUE_IO_INTERNAL_DEVICE_CONTROL EvtIoInternalDeviceControl;
    PFN_WDF_IO_QUEUE_IO_STOP EvtIoStop;
    PFN_WDF_IO_QUEUE_IO_RESUME EvtIoResume;
    PFN_WDF_IO_QUEUE_IO_CANCELED_ON_QUEUE EvtIoCanceledOnQueue;
} WDF_IO_QUEUE_CONFIG, *PWDF_IO_QUEUE_CONFIG;
void
__forceinline
WDF_IO_QUEUE_CONFIG_INIT(
     PWDF_IO_QUEUE_CONFIG Config,
     WDF_IO_QUEUE_DISPATCH_TYPE DispatchType
    )
{
    memset((Config),0,(sizeof(WDF_IO_QUEUE_CONFIG)));
    Config->Size = sizeof(WDF_IO_QUEUE_CONFIG);
    Config->PowerManaged = WdfUseDefault;
    Config->DispatchType = DispatchType;
}
void
__forceinline
WDF_IO_QUEUE_CONFIG_INIT_DEFAULT_QUEUE(
     PWDF_IO_QUEUE_CONFIG Config,
     WDF_IO_QUEUE_DISPATCH_TYPE DispatchType
    )
{
    memset((Config),0,(sizeof(WDF_IO_QUEUE_CONFIG)));
    Config->Size = sizeof(WDF_IO_QUEUE_CONFIG);
    Config->PowerManaged = WdfUseDefault;
    Config->DefaultQueue = 1;
    Config->DispatchType = DispatchType;
}
typedef
NTSTATUS
(*PFN_WDFIOQUEUECREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_IO_QUEUE_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES QueueAttributes,
    WDFQUEUE* Queue
    );
NTSTATUS
__forceinline
WdfIoQueueCreate(
    WDFDEVICE Device,
    PWDF_IO_QUEUE_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES QueueAttributes,
    WDFQUEUE* Queue
    )
{
    return ((PFN_WDFIOQUEUECREATE) WdfFunctions[WdfIoQueueCreateTableIndex])(WdfDriverGlobals, Device, Config, QueueAttributes, Queue);
}
typedef
WDF_IO_QUEUE_STATE
(*PFN_WDFIOQUEUEGETSTATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue,
    PULONG QueueRequests,
    PULONG DriverRequests
    );
WDF_IO_QUEUE_STATE
__forceinline
WdfIoQueueGetState(
    WDFQUEUE Queue,
    PULONG QueueRequests,
    PULONG DriverRequests
    )
{
    return ((PFN_WDFIOQUEUEGETSTATE) WdfFunctions[WdfIoQueueGetStateTableIndex])(WdfDriverGlobals, Queue, QueueRequests, DriverRequests);
}
typedef
void
(*PFN_WDFIOQUEUESTART)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue
    );
void
__forceinline
WdfIoQueueStart(
    WDFQUEUE Queue
    )
{
    ((PFN_WDFIOQUEUESTART) WdfFunctions[WdfIoQueueStartTableIndex])(WdfDriverGlobals, Queue);
}
typedef
void
(*PFN_WDFIOQUEUESTOP)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue,
    PFN_WDF_IO_QUEUE_STATE StopComplete,
    WDFCONTEXT Context
    );
void
__forceinline
WdfIoQueueStop(
    WDFQUEUE Queue,
    PFN_WDF_IO_QUEUE_STATE StopComplete,
    WDFCONTEXT Context
    )
{
    ((PFN_WDFIOQUEUESTOP) WdfFunctions[WdfIoQueueStopTableIndex])(WdfDriverGlobals, Queue, StopComplete, Context);
}
typedef
void
(*PFN_WDFIOQUEUESTOPSYNCHRONOUSLY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue
    );
void
__forceinline
WdfIoQueueStopSynchronously(
    WDFQUEUE Queue
    )
{
    ((PFN_WDFIOQUEUESTOPSYNCHRONOUSLY) WdfFunctions[WdfIoQueueStopSynchronouslyTableIndex])(WdfDriverGlobals, Queue);
}
typedef
WDFDEVICE
(*PFN_WDFIOQUEUEGETDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue
    );
WDFDEVICE
__forceinline
WdfIoQueueGetDevice(
    WDFQUEUE Queue
    )
{
    return ((PFN_WDFIOQUEUEGETDEVICE) WdfFunctions[WdfIoQueueGetDeviceTableIndex])(WdfDriverGlobals, Queue);
}
typedef
NTSTATUS
(*PFN_WDFIOQUEUERETRIEVENEXTREQUEST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue,
    WDFREQUEST* OutRequest
    );
NTSTATUS
__forceinline
WdfIoQueueRetrieveNextRequest(
    WDFQUEUE Queue,
    WDFREQUEST* OutRequest
    )
{
    return ((PFN_WDFIOQUEUERETRIEVENEXTREQUEST) WdfFunctions[WdfIoQueueRetrieveNextRequestTableIndex])(WdfDriverGlobals, Queue, OutRequest);
}
typedef
NTSTATUS
(*PFN_WDFIOQUEUERETRIEVEREQUESTBYFILEOBJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue,
    WDFFILEOBJECT FileObject,
    WDFREQUEST* OutRequest
    );
NTSTATUS
__forceinline
WdfIoQueueRetrieveRequestByFileObject(
    WDFQUEUE Queue,
    WDFFILEOBJECT FileObject,
    WDFREQUEST* OutRequest
    )
{
    return ((PFN_WDFIOQUEUERETRIEVEREQUESTBYFILEOBJECT) WdfFunctions[WdfIoQueueRetrieveRequestByFileObjectTableIndex])(WdfDriverGlobals, Queue, FileObject, OutRequest);
}
typedef
NTSTATUS
(*PFN_WDFIOQUEUEFINDREQUEST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue,
    WDFREQUEST FoundRequest,
    WDFFILEOBJECT FileObject,
    PWDF_REQUEST_PARAMETERS Parameters,
    WDFREQUEST* OutRequest
    );
NTSTATUS
__forceinline
WdfIoQueueFindRequest(
    WDFQUEUE Queue,
    WDFREQUEST FoundRequest,
    WDFFILEOBJECT FileObject,
    PWDF_REQUEST_PARAMETERS Parameters,
    WDFREQUEST* OutRequest
    )
{
    return ((PFN_WDFIOQUEUEFINDREQUEST) WdfFunctions[WdfIoQueueFindRequestTableIndex])(WdfDriverGlobals, Queue, FoundRequest, FileObject, Parameters, OutRequest);
}
typedef
NTSTATUS
(*PFN_WDFIOQUEUERETRIEVEFOUNDREQUEST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue,
    WDFREQUEST FoundRequest,
    WDFREQUEST* OutRequest
    );
NTSTATUS
__forceinline
WdfIoQueueRetrieveFoundRequest(
    WDFQUEUE Queue,
    WDFREQUEST FoundRequest,
    WDFREQUEST* OutRequest
    )
{
    return ((PFN_WDFIOQUEUERETRIEVEFOUNDREQUEST) WdfFunctions[WdfIoQueueRetrieveFoundRequestTableIndex])(WdfDriverGlobals, Queue, FoundRequest, OutRequest);
}
typedef
void
(*PFN_WDFIOQUEUEDRAINSYNCHRONOUSLY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue
    );
void
__forceinline
WdfIoQueueDrainSynchronously(
    WDFQUEUE Queue
    )
{
    ((PFN_WDFIOQUEUEDRAINSYNCHRONOUSLY) WdfFunctions[WdfIoQueueDrainSynchronouslyTableIndex])(WdfDriverGlobals, Queue);
}
typedef
void
(*PFN_WDFIOQUEUEDRAIN)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue,
    PFN_WDF_IO_QUEUE_STATE DrainComplete,
    WDFCONTEXT Context
    );
void
__forceinline
WdfIoQueueDrain(
    WDFQUEUE Queue,
    PFN_WDF_IO_QUEUE_STATE DrainComplete,
    WDFCONTEXT Context
    )
{
    ((PFN_WDFIOQUEUEDRAIN) WdfFunctions[WdfIoQueueDrainTableIndex])(WdfDriverGlobals, Queue, DrainComplete, Context);
}
typedef
void
(*PFN_WDFIOQUEUEPURGESYNCHRONOUSLY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue
    );
void
__forceinline
WdfIoQueuePurgeSynchronously(
    WDFQUEUE Queue
    )
{
    ((PFN_WDFIOQUEUEPURGESYNCHRONOUSLY) WdfFunctions[WdfIoQueuePurgeSynchronouslyTableIndex])(WdfDriverGlobals, Queue);
}
typedef
void
(*PFN_WDFIOQUEUEPURGE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue,
    PFN_WDF_IO_QUEUE_STATE PurgeComplete,
    WDFCONTEXT Context
    );
void
__forceinline
WdfIoQueuePurge(
    WDFQUEUE Queue,
    PFN_WDF_IO_QUEUE_STATE PurgeComplete,
    WDFCONTEXT Context
    )
{
    ((PFN_WDFIOQUEUEPURGE) WdfFunctions[WdfIoQueuePurgeTableIndex])(WdfDriverGlobals, Queue, PurgeComplete, Context);
}
typedef
NTSTATUS
(*PFN_WDFIOQUEUEREADYNOTIFY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFQUEUE Queue,
    PFN_WDF_IO_QUEUE_STATE QueueReady,
    WDFCONTEXT Context
    );
NTSTATUS
__forceinline
WdfIoQueueReadyNotify(
    WDFQUEUE Queue,
    PFN_WDF_IO_QUEUE_STATE QueueReady,
    WDFCONTEXT Context
    )
{
    return ((PFN_WDFIOQUEUEREADYNOTIFY) WdfFunctions[WdfIoQueueReadyNotifyTableIndex])(WdfDriverGlobals, Queue, QueueReady, Context);
}
typedef
NTSTATUS
(EVT_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS)(
     WDFDEVICE Device,
     WDFIORESREQLIST IoResourceRequirementsList
    );
typedef EVT_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS *PFN_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS;
typedef
NTSTATUS
(EVT_WDF_DEVICE_REMOVE_ADDED_RESOURCES)(
     WDFDEVICE Device,
      WDFCMRESLIST ResourcesRaw,
      WDFCMRESLIST ResourcesTranslated
    );
typedef EVT_WDF_DEVICE_REMOVE_ADDED_RESOURCES *PFN_WDF_DEVICE_REMOVE_ADDED_RESOURCES;
typedef struct _WDF_FDO_EVENT_CALLBACKS {
    ULONG Size;
    PFN_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS EvtDeviceFilterAddResourceRequirements;
    PFN_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS EvtDeviceFilterRemoveResourceRequirements;
    PFN_WDF_DEVICE_REMOVE_ADDED_RESOURCES EvtDeviceRemoveAddedResources;
} WDF_FDO_EVENT_CALLBACKS, *PWDF_FDO_EVENT_CALLBACKS;
void
__forceinline
WDF_FDO_EVENT_CALLBACKS_INIT(
     PWDF_FDO_EVENT_CALLBACKS Callbacks
    )
{
    memset((Callbacks),0,(sizeof(WDF_FDO_EVENT_CALLBACKS)));
    Callbacks->Size = sizeof(WDF_FDO_EVENT_CALLBACKS);
}
typedef
PDEVICE_OBJECT
(*PFN_WDFFDOINITWDMGETPHYSICALDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit
    );
PDEVICE_OBJECT
__forceinline
WdfFdoInitWdmGetPhysicalDevice(
    PWDFDEVICE_INIT DeviceInit
    )
{
    return ((PFN_WDFFDOINITWDMGETPHYSICALDEVICE) WdfFunctions[WdfFdoInitWdmGetPhysicalDeviceTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef
NTSTATUS
(*PFN_WDFFDOINITOPENREGISTRYKEY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    ULONG DeviceInstanceKeyType,
    ACCESS_MASK DesiredAccess,
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    WDFKEY* Key
    );
NTSTATUS
__forceinline
WdfFdoInitOpenRegistryKey(
    PWDFDEVICE_INIT DeviceInit,
    ULONG DeviceInstanceKeyType,
    ACCESS_MASK DesiredAccess,
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    WDFKEY* Key
    )
{
    return ((PFN_WDFFDOINITOPENREGISTRYKEY) WdfFunctions[WdfFdoInitOpenRegistryKeyTableIndex])(WdfDriverGlobals, DeviceInit, DeviceInstanceKeyType, DesiredAccess, KeyAttributes, Key);
}
typedef
NTSTATUS
(*PFN_WDFFDOINITQUERYPROPERTY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    ULONG BufferLength,
    PVOID PropertyBuffer,
    PULONG ResultLength
    );
NTSTATUS
__forceinline
WdfFdoInitQueryProperty(
    PWDFDEVICE_INIT DeviceInit,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    ULONG BufferLength,
    PVOID PropertyBuffer,
    PULONG ResultLength
    )
{
    return ((PFN_WDFFDOINITQUERYPROPERTY) WdfFunctions[WdfFdoInitQueryPropertyTableIndex])(WdfDriverGlobals, DeviceInit, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}
typedef
NTSTATUS
(*PFN_WDFFDOINITALLOCANDQUERYPROPERTY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    POOL_TYPE PoolType,
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
    WDFMEMORY* PropertyMemory
    );
NTSTATUS
__forceinline
WdfFdoInitAllocAndQueryProperty(
    PWDFDEVICE_INIT DeviceInit,
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    POOL_TYPE PoolType,
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
    WDFMEMORY* PropertyMemory
    )
{
    return ((PFN_WDFFDOINITALLOCANDQUERYPROPERTY) WdfFunctions[WdfFdoInitAllocAndQueryPropertyTableIndex])(WdfDriverGlobals, DeviceInit, DeviceProperty, PoolType, PropertyMemoryAttributes, PropertyMemory);
}
typedef
void
(*PFN_WDFFDOINITSETEVENTCALLBACKS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PWDF_FDO_EVENT_CALLBACKS FdoEventCallbacks
    );
void
__forceinline
WdfFdoInitSetEventCallbacks(
    PWDFDEVICE_INIT DeviceInit,
    PWDF_FDO_EVENT_CALLBACKS FdoEventCallbacks
    )
{
    ((PFN_WDFFDOINITSETEVENTCALLBACKS) WdfFunctions[WdfFdoInitSetEventCallbacksTableIndex])(WdfDriverGlobals, DeviceInit, FdoEventCallbacks);
}
typedef
void
(*PFN_WDFFDOINITSETFILTER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit
    );
void
__forceinline
WdfFdoInitSetFilter(
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFFDOINITSETFILTER) WdfFunctions[WdfFdoInitSetFilterTableIndex])(WdfDriverGlobals, DeviceInit);
}
typedef
void
(*PFN_WDFFDOINITSETDEFAULTCHILDLISTCONFIG)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PWDF_CHILD_LIST_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES DefaultChildListAttributes
    );
void
__forceinline
WdfFdoInitSetDefaultChildListConfig(
    PWDFDEVICE_INIT DeviceInit,
    PWDF_CHILD_LIST_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES DefaultChildListAttributes
    )
{
    ((PFN_WDFFDOINITSETDEFAULTCHILDLISTCONFIG) WdfFunctions[WdfFdoInitSetDefaultChildListConfigTableIndex])(WdfDriverGlobals, DeviceInit, Config, DefaultChildListAttributes);
}
typedef
NTSTATUS
(*PFN_WDFFDOQUERYFORINTERFACE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Fdo,
    LPCGUID InterfaceType,
    PINTERFACE Interface,
    USHORT Size,
    USHORT Version,
    PVOID InterfaceSpecificData
    );
NTSTATUS
__forceinline
WdfFdoQueryForInterface(
    WDFDEVICE Fdo,
    LPCGUID InterfaceType,
    PINTERFACE Interface,
    USHORT Size,
    USHORT Version,
    PVOID InterfaceSpecificData
    )
{
    return ((PFN_WDFFDOQUERYFORINTERFACE) WdfFunctions[WdfFdoQueryForInterfaceTableIndex])(WdfDriverGlobals, Fdo, InterfaceType, Interface, Size, Version, InterfaceSpecificData);
}
typedef
WDFCHILDLIST
(*PFN_WDFFDOGETDEFAULTCHILDLIST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Fdo
    );
WDFCHILDLIST
__forceinline
WdfFdoGetDefaultChildList(
    WDFDEVICE Fdo
    )
{
    return ((PFN_WDFFDOGETDEFAULTCHILDLIST) WdfFunctions[WdfFdoGetDefaultChildListTableIndex])(WdfDriverGlobals, Fdo);
}
typedef
NTSTATUS
(*PFN_WDFFDOADDSTATICCHILD)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Fdo,
    WDFDEVICE Child
    );
NTSTATUS
__forceinline
WdfFdoAddStaticChild(
    WDFDEVICE Fdo,
    WDFDEVICE Child
    )
{
    return ((PFN_WDFFDOADDSTATICCHILD) WdfFunctions[WdfFdoAddStaticChildTableIndex])(WdfDriverGlobals, Fdo, Child);
}
typedef
void
(*PFN_WDFFDOLOCKSTATICCHILDLISTFORITERATION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Fdo
    );
void
__forceinline
WdfFdoLockStaticChildListForIteration(
    WDFDEVICE Fdo
    )
{
    ((PFN_WDFFDOLOCKSTATICCHILDLISTFORITERATION) WdfFunctions[WdfFdoLockStaticChildListForIterationTableIndex])(WdfDriverGlobals, Fdo);
}
typedef
WDFDEVICE
(*PFN_WDFFDORETRIEVENEXTSTATICCHILD)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Fdo,
    WDFDEVICE PreviousChild,
    ULONG Flags
    );
WDFDEVICE
__forceinline
WdfFdoRetrieveNextStaticChild(
    WDFDEVICE Fdo,
    WDFDEVICE PreviousChild,
    ULONG Flags
    )
{
    return ((PFN_WDFFDORETRIEVENEXTSTATICCHILD) WdfFunctions[WdfFdoRetrieveNextStaticChildTableIndex])(WdfDriverGlobals, Fdo, PreviousChild, Flags);
}
typedef
void
(*PFN_WDFFDOUNLOCKSTATICCHILDLISTFROMITERATION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Fdo
    );
void
__forceinline
WdfFdoUnlockStaticChildListFromIteration(
    WDFDEVICE Fdo
    )
{
    ((PFN_WDFFDOUNLOCKSTATICCHILDLISTFROMITERATION) WdfFunctions[WdfFdoUnlockStaticChildListFromIterationTableIndex])(WdfDriverGlobals, Fdo);
}
typedef
NTSTATUS
(EVT_WDF_DEVICE_RESOURCES_QUERY)(
     WDFDEVICE Device,
     WDFCMRESLIST Resources
    );
typedef EVT_WDF_DEVICE_RESOURCES_QUERY *PFN_WDF_DEVICE_RESOURCES_QUERY;
typedef
NTSTATUS
(EVT_WDF_DEVICE_RESOURCE_REQUIREMENTS_QUERY)(
     WDFDEVICE Device,
     WDFIORESREQLIST IoResourceRequirementsList
    );
typedef EVT_WDF_DEVICE_RESOURCE_REQUIREMENTS_QUERY *PFN_WDF_DEVICE_RESOURCE_REQUIREMENTS_QUERY;
typedef
NTSTATUS
(EVT_WDF_DEVICE_EJECT)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_EJECT *PFN_WDF_DEVICE_EJECT;
typedef
NTSTATUS
(EVT_WDF_DEVICE_SET_LOCK)(
     WDFDEVICE Device,
     BOOLEAN IsLocked
    );
typedef EVT_WDF_DEVICE_SET_LOCK *PFN_WDF_DEVICE_SET_LOCK;
typedef
NTSTATUS
(EVT_WDF_DEVICE_ENABLE_WAKE_AT_BUS)(
     WDFDEVICE Device,
     SYSTEM_POWER_STATE PowerState
    );
typedef EVT_WDF_DEVICE_ENABLE_WAKE_AT_BUS *PFN_WDF_DEVICE_ENABLE_WAKE_AT_BUS;
typedef
void
(EVT_WDF_DEVICE_DISABLE_WAKE_AT_BUS)(
     WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_DISABLE_WAKE_AT_BUS *PFN_WDF_DEVICE_DISABLE_WAKE_AT_BUS;
typedef struct _WDF_PDO_EVENT_CALLBACKS {
    ULONG Size;
    PFN_WDF_DEVICE_RESOURCES_QUERY EvtDeviceResourcesQuery;
    PFN_WDF_DEVICE_RESOURCE_REQUIREMENTS_QUERY EvtDeviceResourceRequirementsQuery;
    PFN_WDF_DEVICE_EJECT EvtDeviceEject;
    PFN_WDF_DEVICE_SET_LOCK EvtDeviceSetLock;
    PFN_WDF_DEVICE_ENABLE_WAKE_AT_BUS EvtDeviceEnableWakeAtBus;
    PFN_WDF_DEVICE_DISABLE_WAKE_AT_BUS EvtDeviceDisableWakeAtBus;
} WDF_PDO_EVENT_CALLBACKS, *PWDF_PDO_EVENT_CALLBACKS;
void
__forceinline
WDF_PDO_EVENT_CALLBACKS_INIT(
     PWDF_PDO_EVENT_CALLBACKS Callbacks
    )
{
    memset((Callbacks),0,(sizeof(WDF_PDO_EVENT_CALLBACKS)));
    Callbacks->Size = sizeof(WDF_PDO_EVENT_CALLBACKS);
}
typedef
PWDFDEVICE_INIT
(*PFN_WDFPDOINITALLOCATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE ParentDevice
    );
PWDFDEVICE_INIT
__forceinline
WdfPdoInitAllocate(
    WDFDEVICE ParentDevice
    )
{
    return ((PFN_WDFPDOINITALLOCATE) WdfFunctions[WdfPdoInitAllocateTableIndex])(WdfDriverGlobals, ParentDevice);
}
typedef
void
(*PFN_WDFPDOINITSETEVENTCALLBACKS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PWDF_PDO_EVENT_CALLBACKS DispatchTable
    );
void
__forceinline
WdfPdoInitSetEventCallbacks(
    PWDFDEVICE_INIT DeviceInit,
    PWDF_PDO_EVENT_CALLBACKS DispatchTable
    )
{
    ((PFN_WDFPDOINITSETEVENTCALLBACKS) WdfFunctions[WdfPdoInitSetEventCallbacksTableIndex])(WdfDriverGlobals, DeviceInit, DispatchTable);
}
typedef
NTSTATUS
(*PFN_WDFPDOINITASSIGNDEVICEID)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING DeviceID
    );
NTSTATUS
__forceinline
WdfPdoInitAssignDeviceID(
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING DeviceID
    )
{
    return ((PFN_WDFPDOINITASSIGNDEVICEID) WdfFunctions[WdfPdoInitAssignDeviceIDTableIndex])(WdfDriverGlobals, DeviceInit, DeviceID);
}
typedef
NTSTATUS
(*PFN_WDFPDOINITASSIGNINSTANCEID)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING InstanceID
    );
NTSTATUS
__forceinline
WdfPdoInitAssignInstanceID(
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING InstanceID
    )
{
    return ((PFN_WDFPDOINITASSIGNINSTANCEID) WdfFunctions[WdfPdoInitAssignInstanceIDTableIndex])(WdfDriverGlobals, DeviceInit, InstanceID);
}
typedef
NTSTATUS
(*PFN_WDFPDOINITADDHARDWAREID)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING HardwareID
    );
NTSTATUS
__forceinline
WdfPdoInitAddHardwareID(
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING HardwareID
    )
{
    return ((PFN_WDFPDOINITADDHARDWAREID) WdfFunctions[WdfPdoInitAddHardwareIDTableIndex])(WdfDriverGlobals, DeviceInit, HardwareID);
}
typedef
NTSTATUS
(*PFN_WDFPDOINITADDCOMPATIBLEID)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING CompatibleID
    );
NTSTATUS
__forceinline
WdfPdoInitAddCompatibleID(
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING CompatibleID
    )
{
    return ((PFN_WDFPDOINITADDCOMPATIBLEID) WdfFunctions[WdfPdoInitAddCompatibleIDTableIndex])(WdfDriverGlobals, DeviceInit, CompatibleID);
}
typedef
NTSTATUS
(*PFN_WDFPDOINITADDDEVICETEXT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING DeviceDescription,
    PCUNICODE_STRING DeviceLocation,
    LCID LocaleId
    );
NTSTATUS
__forceinline
WdfPdoInitAddDeviceText(
    PWDFDEVICE_INIT DeviceInit,
    PCUNICODE_STRING DeviceDescription,
    PCUNICODE_STRING DeviceLocation,
    LCID LocaleId
    )
{
    return ((PFN_WDFPDOINITADDDEVICETEXT) WdfFunctions[WdfPdoInitAddDeviceTextTableIndex])(WdfDriverGlobals, DeviceInit, DeviceDescription, DeviceLocation, LocaleId);
}
typedef
void
(*PFN_WDFPDOINITSETDEFAULTLOCALE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    LCID LocaleId
    );
void
__forceinline
WdfPdoInitSetDefaultLocale(
    PWDFDEVICE_INIT DeviceInit,
    LCID LocaleId
    )
{
    ((PFN_WDFPDOINITSETDEFAULTLOCALE) WdfFunctions[WdfPdoInitSetDefaultLocaleTableIndex])(WdfDriverGlobals, DeviceInit, LocaleId);
}
typedef
NTSTATUS
(*PFN_WDFPDOINITASSIGNRAWDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    const GUID* DeviceClassGuid
    );
NTSTATUS
__forceinline
WdfPdoInitAssignRawDevice(
    PWDFDEVICE_INIT DeviceInit,
    const GUID* DeviceClassGuid
    )
{
    return ((PFN_WDFPDOINITASSIGNRAWDEVICE) WdfFunctions[WdfPdoInitAssignRawDeviceTableIndex])(WdfDriverGlobals, DeviceInit, DeviceClassGuid);
}
typedef
NTSTATUS
(*PFN_WDFPDOMARKMISSING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
NTSTATUS
__forceinline
WdfPdoMarkMissing(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFPDOMARKMISSING) WdfFunctions[WdfPdoMarkMissingTableIndex])(WdfDriverGlobals, Device);
}
typedef
void
(*PFN_WDFPDOREQUESTEJECT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
void
__forceinline
WdfPdoRequestEject(
    WDFDEVICE Device
    )
{
    ((PFN_WDFPDOREQUESTEJECT) WdfFunctions[WdfPdoRequestEjectTableIndex])(WdfDriverGlobals, Device);
}
typedef
WDFDEVICE
(*PFN_WDFPDOGETPARENT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
WDFDEVICE
__forceinline
WdfPdoGetParent(
    WDFDEVICE Device
    )
{
    return ((PFN_WDFPDOGETPARENT) WdfFunctions[WdfPdoGetParentTableIndex])(WdfDriverGlobals, Device);
}
typedef
NTSTATUS
(*PFN_WDFPDORETRIEVEIDENTIFICATIONDESCRIPTION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    );
NTSTATUS
__forceinline
WdfPdoRetrieveIdentificationDescription(
    WDFDEVICE Device,
    PWDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER IdentificationDescription
    )
{
    return ((PFN_WDFPDORETRIEVEIDENTIFICATIONDESCRIPTION) WdfFunctions[WdfPdoRetrieveIdentificationDescriptionTableIndex])(WdfDriverGlobals, Device, IdentificationDescription);
}
typedef
NTSTATUS
(*PFN_WDFPDORETRIEVEADDRESSDESCRIPTION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    );
NTSTATUS
__forceinline
WdfPdoRetrieveAddressDescription(
    WDFDEVICE Device,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    )
{
    return ((PFN_WDFPDORETRIEVEADDRESSDESCRIPTION) WdfFunctions[WdfPdoRetrieveAddressDescriptionTableIndex])(WdfDriverGlobals, Device, AddressDescription);
}
typedef
NTSTATUS
(*PFN_WDFPDOUPDATEADDRESSDESCRIPTION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    );
NTSTATUS
__forceinline
WdfPdoUpdateAddressDescription(
    WDFDEVICE Device,
    PWDF_CHILD_ADDRESS_DESCRIPTION_HEADER AddressDescription
    )
{
    return ((PFN_WDFPDOUPDATEADDRESSDESCRIPTION) WdfFunctions[WdfPdoUpdateAddressDescriptionTableIndex])(WdfDriverGlobals, Device, AddressDescription);
}
typedef
NTSTATUS
(*PFN_WDFPDOADDEJECTIONRELATIONSPHYSICALDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PDEVICE_OBJECT PhysicalDevice
    );
NTSTATUS
__forceinline
WdfPdoAddEjectionRelationsPhysicalDevice(
    WDFDEVICE Device,
    PDEVICE_OBJECT PhysicalDevice
    )
{
    return ((PFN_WDFPDOADDEJECTIONRELATIONSPHYSICALDEVICE) WdfFunctions[WdfPdoAddEjectionRelationsPhysicalDeviceTableIndex])(WdfDriverGlobals, Device, PhysicalDevice);
}
typedef
void
(*PFN_WDFPDOREMOVEEJECTIONRELATIONSPHYSICALDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PDEVICE_OBJECT PhysicalDevice
    );
void
__forceinline
WdfPdoRemoveEjectionRelationsPhysicalDevice(
    WDFDEVICE Device,
    PDEVICE_OBJECT PhysicalDevice
    )
{
    ((PFN_WDFPDOREMOVEEJECTIONRELATIONSPHYSICALDEVICE) WdfFunctions[WdfPdoRemoveEjectionRelationsPhysicalDeviceTableIndex])(WdfDriverGlobals, Device, PhysicalDevice);
}
typedef
void
(*PFN_WDFPDOCLEAREJECTIONRELATIONSDEVICES)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
void
__forceinline
WdfPdoClearEjectionRelationsDevices(
    WDFDEVICE Device
    )
{
    ((PFN_WDFPDOCLEAREJECTIONRELATIONSDEVICES) WdfFunctions[WdfPdoClearEjectionRelationsDevicesTableIndex])(WdfDriverGlobals, Device);
}
typedef
void
(EVT_WDF_DEVICE_SHUTDOWN_NOTIFICATION)(
    WDFDEVICE Device
    );
typedef EVT_WDF_DEVICE_SHUTDOWN_NOTIFICATION *PFN_WDF_DEVICE_SHUTDOWN_NOTIFICATION;
typedef enum _WDF_DEVICE_SHUTDOWN_FLAGS {
    WdfDeviceShutdown = 0x01,
    WdfDeviceLastChanceShutdown = 0x02,
} WDF_DEVICE_SHUTDOWN_FLAGS;
typedef
PWDFDEVICE_INIT
(*PFN_WDFCONTROLDEVICEINITALLOCATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDRIVER Driver,
    const UNICODE_STRING* SDDLString
    );
PWDFDEVICE_INIT
__forceinline
WdfControlDeviceInitAllocate(
    WDFDRIVER Driver,
    const UNICODE_STRING* SDDLString
    )
{
    return ((PFN_WDFCONTROLDEVICEINITALLOCATE) WdfFunctions[WdfControlDeviceInitAllocateTableIndex])(WdfDriverGlobals, Driver, SDDLString);
}
typedef
void
(*PFN_WDFCONTROLDEVICEINITSETSHUTDOWNNOTIFICATION)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PWDFDEVICE_INIT DeviceInit,
    PFN_WDF_DEVICE_SHUTDOWN_NOTIFICATION Notification,
    UCHAR Flags
    );
void
__forceinline
WdfControlDeviceInitSetShutdownNotification(
    PWDFDEVICE_INIT DeviceInit,
    PFN_WDF_DEVICE_SHUTDOWN_NOTIFICATION Notification,
    UCHAR Flags
    )
{
    ((PFN_WDFCONTROLDEVICEINITSETSHUTDOWNNOTIFICATION) WdfFunctions[WdfControlDeviceInitSetShutdownNotificationTableIndex])(WdfDriverGlobals, DeviceInit, Notification, Flags);
}
typedef
void
(*PFN_WDFCONTROLFINISHINITIALIZING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device
    );
void
__forceinline
WdfControlFinishInitializing(
    WDFDEVICE Device
    )
{
    ((PFN_WDFCONTROLFINISHINITIALIZING) WdfFunctions[WdfControlFinishInitializingTableIndex])(WdfDriverGlobals, Device);
}
typedef enum _WDF_WMI_PROVIDER_CONTROL {
    WdfWmiControlInvalid = 0,
    WdfWmiEventControl,
    WdfWmiInstanceControl,
} WDF_WMI_PROVIDER_CONTROL;
typedef enum _WDF_WMI_PROVIDER_FLAGS {
    WdfWmiProviderEventOnly = 0x0001,
    WdfWmiProviderExpensive = 0x0002,
    WdfWmiProviderTracing = 0x0004,
    WdfWmiProviderValidFlags = WdfWmiProviderEventOnly | WdfWmiProviderExpensive | WdfWmiProviderTracing,
} WDF_WMI_PROVIDER_FLAGS;
typedef
NTSTATUS
(EVT_WDF_WMI_INSTANCE_QUERY_INSTANCE)(
     WDFWMIINSTANCE WmiInstance,
     ULONG OutBufferSize,
     PVOID OutBuffer,
     PULONG BufferUsed
    );
typedef EVT_WDF_WMI_INSTANCE_QUERY_INSTANCE *PFN_WDF_WMI_INSTANCE_QUERY_INSTANCE;
typedef
NTSTATUS
(EVT_WDF_WMI_INSTANCE_SET_INSTANCE)(
     WDFWMIINSTANCE WmiInstance,
     ULONG InBufferSize,
     PVOID InBuffer
    );
typedef EVT_WDF_WMI_INSTANCE_SET_INSTANCE *PFN_WDF_WMI_INSTANCE_SET_INSTANCE;
typedef
NTSTATUS
(EVT_WDF_WMI_INSTANCE_SET_ITEM)(
     WDFWMIINSTANCE WmiInstance,
     ULONG DataItemId,
     ULONG InBufferSize,
     PVOID InBuffer
    );
typedef EVT_WDF_WMI_INSTANCE_SET_ITEM *PFN_WDF_WMI_INSTANCE_SET_ITEM;
typedef
NTSTATUS
(EVT_WDF_WMI_INSTANCE_EXECUTE_METHOD)(
     WDFWMIINSTANCE WmiInstance,
     ULONG MethodId,
     ULONG InBufferSize,
     ULONG OutBufferSize,
      PVOID Buffer,
     PULONG BufferUsed
    );
typedef EVT_WDF_WMI_INSTANCE_EXECUTE_METHOD *PFN_WDF_WMI_INSTANCE_EXECUTE_METHOD;
typedef
NTSTATUS
(EVT_WDF_WMI_PROVIDER_FUNCTION_CONTROL)(
     WDFWMIPROVIDER WmiProvider,
     WDF_WMI_PROVIDER_CONTROL Control,
     BOOLEAN Enable
    );
typedef EVT_WDF_WMI_PROVIDER_FUNCTION_CONTROL *PFN_WDF_WMI_PROVIDER_FUNCTION_CONTROL;
typedef struct _WDF_WMI_PROVIDER_CONFIG {
    ULONG Size;
    GUID Guid;
    ULONG Flags;
    ULONG MinInstanceBufferSize;
    PFN_WDF_WMI_PROVIDER_FUNCTION_CONTROL EvtWmiProviderFunctionControl;
} WDF_WMI_PROVIDER_CONFIG, *PWDF_WMI_PROVIDER_CONFIG;
void
__forceinline
WDF_WMI_PROVIDER_CONFIG_INIT(
     PWDF_WMI_PROVIDER_CONFIG Config,
     const GUID* Guid
    )
{
    memset((Config),0,(sizeof(WDF_WMI_PROVIDER_CONFIG)));
    Config->Size = sizeof(WDF_WMI_PROVIDER_CONFIG);
    memcpy((&Config->Guid),(Guid),(sizeof(GUID)));
}
typedef struct _WDF_WMI_INSTANCE_CONFIG {
    ULONG Size;
    WDFWMIPROVIDER Provider;
    PWDF_WMI_PROVIDER_CONFIG ProviderConfig;
    BOOLEAN UseContextForQuery;
    BOOLEAN Register;
    PFN_WDF_WMI_INSTANCE_QUERY_INSTANCE EvtWmiInstanceQueryInstance;
    PFN_WDF_WMI_INSTANCE_SET_INSTANCE EvtWmiInstanceSetInstance;
    PFN_WDF_WMI_INSTANCE_SET_ITEM EvtWmiInstanceSetItem;
    PFN_WDF_WMI_INSTANCE_EXECUTE_METHOD EvtWmiInstanceExecuteMethod;
} WDF_WMI_INSTANCE_CONFIG, *PWDF_WMI_INSTANCE_CONFIG;
void
__forceinline
WDF_WMI_INSTANCE_CONFIG_INIT_PROVIDER(
     PWDF_WMI_INSTANCE_CONFIG Config,
     WDFWMIPROVIDER Provider
    )
{
    memset((Config),0,(sizeof(WDF_WMI_INSTANCE_CONFIG)));
    Config->Size = sizeof(WDF_WMI_INSTANCE_CONFIG);
    Config->Provider = Provider;
}
void
__forceinline
WDF_WMI_INSTANCE_CONFIG_INIT_PROVIDER_CONFIG(
     PWDF_WMI_INSTANCE_CONFIG Config,
     PWDF_WMI_PROVIDER_CONFIG ProviderConfig
    )
{
    memset((Config),0,(sizeof(WDF_WMI_INSTANCE_CONFIG)));
    Config->Size = sizeof(WDF_WMI_INSTANCE_CONFIG);
    Config->ProviderConfig = ProviderConfig;
}
NTSTATUS
__forceinline
WDF_WMI_BUFFER_APPEND_STRING(
    PVOID Buffer,
    ULONG BufferLength,
    PCUNICODE_STRING String,
    PULONG RequiredSize
    )
{
    *RequiredSize = String->Length + sizeof(USHORT);
    if (BufferLength < (String->Length + sizeof(USHORT))) {
        return ((NTSTATUS)0xC0000023L);
    }
    *(USHORT *) Buffer = String->Length;
    memcpy((((PVOID) (((PUCHAR) (Buffer)) + (sizeof(USHORT))))),(String->Buffer),(String->Length));
    return ((NTSTATUS)0x00000000L);
}
typedef
NTSTATUS
(*PFN_WDFWMIPROVIDERCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_WMI_PROVIDER_CONFIG WmiProviderConfig,
    PWDF_OBJECT_ATTRIBUTES ProviderAttributes,
    WDFWMIPROVIDER* WmiProvider
    );
NTSTATUS
__forceinline
WdfWmiProviderCreate(
    WDFDEVICE Device,
    PWDF_WMI_PROVIDER_CONFIG WmiProviderConfig,
    PWDF_OBJECT_ATTRIBUTES ProviderAttributes,
    WDFWMIPROVIDER* WmiProvider
    )
{
    return ((PFN_WDFWMIPROVIDERCREATE) WdfFunctions[WdfWmiProviderCreateTableIndex])(WdfDriverGlobals, Device, WmiProviderConfig, ProviderAttributes, WmiProvider);
}
typedef
WDFDEVICE
(*PFN_WDFWMIPROVIDERGETDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWMIPROVIDER WmiProvider
    );
WDFDEVICE
__forceinline
WdfWmiProviderGetDevice(
    WDFWMIPROVIDER WmiProvider
    )
{
    return ((PFN_WDFWMIPROVIDERGETDEVICE) WdfFunctions[WdfWmiProviderGetDeviceTableIndex])(WdfDriverGlobals, WmiProvider);
}
typedef
BOOLEAN
(*PFN_WDFWMIPROVIDERISENABLED)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWMIPROVIDER WmiProvider,
    WDF_WMI_PROVIDER_CONTROL ProviderControl
    );
BOOLEAN
__forceinline
WdfWmiProviderIsEnabled(
    WDFWMIPROVIDER WmiProvider,
    WDF_WMI_PROVIDER_CONTROL ProviderControl
    )
{
    return ((PFN_WDFWMIPROVIDERISENABLED) WdfFunctions[WdfWmiProviderIsEnabledTableIndex])(WdfDriverGlobals, WmiProvider, ProviderControl);
}
typedef
ULONGLONG
(*PFN_WDFWMIPROVIDERGETTRACINGHANDLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWMIPROVIDER WmiProvider
    );
ULONGLONG
__forceinline
WdfWmiProviderGetTracingHandle(
    WDFWMIPROVIDER WmiProvider
    )
{
    return ((PFN_WDFWMIPROVIDERGETTRACINGHANDLE) WdfFunctions[WdfWmiProviderGetTracingHandleTableIndex])(WdfDriverGlobals, WmiProvider);
}
typedef
NTSTATUS
(*PFN_WDFWMIINSTANCECREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_WMI_INSTANCE_CONFIG InstanceConfig,
    PWDF_OBJECT_ATTRIBUTES InstanceAttributes,
    WDFWMIINSTANCE* Instance
    );
NTSTATUS
__forceinline
WdfWmiInstanceCreate(
    WDFDEVICE Device,
    PWDF_WMI_INSTANCE_CONFIG InstanceConfig,
    PWDF_OBJECT_ATTRIBUTES InstanceAttributes,
    WDFWMIINSTANCE* Instance
    )
{
    return ((PFN_WDFWMIINSTANCECREATE) WdfFunctions[WdfWmiInstanceCreateTableIndex])(WdfDriverGlobals, Device, InstanceConfig, InstanceAttributes, Instance);
}
typedef
NTSTATUS
(*PFN_WDFWMIINSTANCEREGISTER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWMIINSTANCE WmiInstance
    );
NTSTATUS
__forceinline
WdfWmiInstanceRegister(
    WDFWMIINSTANCE WmiInstance
    )
{
    return ((PFN_WDFWMIINSTANCEREGISTER) WdfFunctions[WdfWmiInstanceRegisterTableIndex])(WdfDriverGlobals, WmiInstance);
}
typedef
void
(*PFN_WDFWMIINSTANCEDEREGISTER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWMIINSTANCE WmiInstance
    );
void
__forceinline
WdfWmiInstanceDeregister(
    WDFWMIINSTANCE WmiInstance
    )
{
    ((PFN_WDFWMIINSTANCEDEREGISTER) WdfFunctions[WdfWmiInstanceDeregisterTableIndex])(WdfDriverGlobals, WmiInstance);
}
typedef
WDFDEVICE
(*PFN_WDFWMIINSTANCEGETDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWMIINSTANCE WmiInstance
    );
WDFDEVICE
__forceinline
WdfWmiInstanceGetDevice(
    WDFWMIINSTANCE WmiInstance
    )
{
    return ((PFN_WDFWMIINSTANCEGETDEVICE) WdfFunctions[WdfWmiInstanceGetDeviceTableIndex])(WdfDriverGlobals, WmiInstance);
}
typedef
WDFWMIPROVIDER
(*PFN_WDFWMIINSTANCEGETPROVIDER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWMIINSTANCE WmiInstance
    );
WDFWMIPROVIDER
__forceinline
WdfWmiInstanceGetProvider(
    WDFWMIINSTANCE WmiInstance
    )
{
    return ((PFN_WDFWMIINSTANCEGETPROVIDER) WdfFunctions[WdfWmiInstanceGetProviderTableIndex])(WdfDriverGlobals, WmiInstance);
}
typedef
NTSTATUS
(*PFN_WDFWMIINSTANCEFIREEVENT)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFWMIINSTANCE WmiInstance,
    ULONG EventDataSize,
    PVOID EventData
    );
NTSTATUS
__forceinline
WdfWmiInstanceFireEvent(
    WDFWMIINSTANCE WmiInstance,
    ULONG EventDataSize,
    PVOID EventData
    )
{
    return ((PFN_WDFWMIINSTANCEFIREEVENT) WdfFunctions[WdfWmiInstanceFireEventTableIndex])(WdfDriverGlobals, WmiInstance, EventDataSize, EventData);
}
typedef
NTSTATUS
(*PFN_WDFSTRINGCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    PCUNICODE_STRING UnicodeString,
    PWDF_OBJECT_ATTRIBUTES StringAttributes,
    WDFSTRING* String
    );
NTSTATUS
__forceinline
WdfStringCreate(
    PCUNICODE_STRING UnicodeString,
    PWDF_OBJECT_ATTRIBUTES StringAttributes,
    WDFSTRING* String
    )
{
    return ((PFN_WDFSTRINGCREATE) WdfFunctions[WdfStringCreateTableIndex])(WdfDriverGlobals, UnicodeString, StringAttributes, String);
}
typedef
void
(*PFN_WDFSTRINGGETUNICODESTRING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFSTRING String,
    PUNICODE_STRING UnicodeString
    );
void
__forceinline
WdfStringGetUnicodeString(
    WDFSTRING String,
    PUNICODE_STRING UnicodeString
    )
{
    ((PFN_WDFSTRINGGETUNICODESTRING) WdfFunctions[WdfStringGetUnicodeStringTableIndex])(WdfDriverGlobals, String, UnicodeString);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYOPENKEY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY ParentKey,
    PCUNICODE_STRING KeyName,
    ACCESS_MASK DesiredAccess,
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    WDFKEY* Key
    );
NTSTATUS
__forceinline
WdfRegistryOpenKey(
    WDFKEY ParentKey,
    PCUNICODE_STRING KeyName,
    ACCESS_MASK DesiredAccess,
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    WDFKEY* Key
    )
{
    return ((PFN_WDFREGISTRYOPENKEY) WdfFunctions[WdfRegistryOpenKeyTableIndex])(WdfDriverGlobals, ParentKey, KeyName, DesiredAccess, KeyAttributes, Key);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYCREATEKEY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY ParentKey,
    PCUNICODE_STRING KeyName,
    ACCESS_MASK DesiredAccess,
    ULONG CreateOptions,
    PULONG CreateDisposition,
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    WDFKEY* Key
    );
NTSTATUS
__forceinline
WdfRegistryCreateKey(
    WDFKEY ParentKey,
    PCUNICODE_STRING KeyName,
    ACCESS_MASK DesiredAccess,
    ULONG CreateOptions,
    PULONG CreateDisposition,
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    WDFKEY* Key
    )
{
    return ((PFN_WDFREGISTRYCREATEKEY) WdfFunctions[WdfRegistryCreateKeyTableIndex])(WdfDriverGlobals, ParentKey, KeyName, DesiredAccess, CreateOptions, CreateDisposition, KeyAttributes, Key);
}
typedef
void
(*PFN_WDFREGISTRYCLOSE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key
    );
void
__forceinline
WdfRegistryClose(
    WDFKEY Key
    )
{
    ((PFN_WDFREGISTRYCLOSE) WdfFunctions[WdfRegistryCloseTableIndex])(WdfDriverGlobals, Key);
}
typedef
HANDLE
(*PFN_WDFREGISTRYWDMGETHANDLE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key
    );
HANDLE
__forceinline
WdfRegistryWdmGetHandle(
    WDFKEY Key
    )
{
    return ((PFN_WDFREGISTRYWDMGETHANDLE) WdfFunctions[WdfRegistryWdmGetHandleTableIndex])(WdfDriverGlobals, Key);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYREMOVEKEY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key
    );
NTSTATUS
__forceinline
WdfRegistryRemoveKey(
    WDFKEY Key
    )
{
    return ((PFN_WDFREGISTRYREMOVEKEY) WdfFunctions[WdfRegistryRemoveKeyTableIndex])(WdfDriverGlobals, Key);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYREMOVEVALUE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName
    );
NTSTATUS
__forceinline
WdfRegistryRemoveValue(
    WDFKEY Key,
    PCUNICODE_STRING ValueName
    )
{
    return ((PFN_WDFREGISTRYREMOVEVALUE) WdfFunctions[WdfRegistryRemoveValueTableIndex])(WdfDriverGlobals, Key, ValueName);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYQUERYVALUE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    ULONG ValueLength,
    PVOID Value,
    PULONG ValueLengthQueried,
    PULONG ValueType
    );
NTSTATUS
__forceinline
WdfRegistryQueryValue(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    ULONG ValueLength,
    PVOID Value,
    PULONG ValueLengthQueried,
    PULONG ValueType
    )
{
    return ((PFN_WDFREGISTRYQUERYVALUE) WdfFunctions[WdfRegistryQueryValueTableIndex])(WdfDriverGlobals, Key, ValueName, ValueLength, Value, ValueLengthQueried, ValueType);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYQUERYMEMORY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    POOL_TYPE PoolType,
    PWDF_OBJECT_ATTRIBUTES MemoryAttributes,
    WDFMEMORY* Memory,
    PULONG ValueType
    );
NTSTATUS
__forceinline
WdfRegistryQueryMemory(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    POOL_TYPE PoolType,
    PWDF_OBJECT_ATTRIBUTES MemoryAttributes,
    WDFMEMORY* Memory,
    PULONG ValueType
    )
{
    return ((PFN_WDFREGISTRYQUERYMEMORY) WdfFunctions[WdfRegistryQueryMemoryTableIndex])(WdfDriverGlobals, Key, ValueName, PoolType, MemoryAttributes, Memory, ValueType);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYQUERYMULTISTRING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    PWDF_OBJECT_ATTRIBUTES StringsAttributes,
    WDFCOLLECTION Collection
    );
NTSTATUS
__forceinline
WdfRegistryQueryMultiString(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    PWDF_OBJECT_ATTRIBUTES StringsAttributes,
    WDFCOLLECTION Collection
    )
{
    return ((PFN_WDFREGISTRYQUERYMULTISTRING) WdfFunctions[WdfRegistryQueryMultiStringTableIndex])(WdfDriverGlobals, Key, ValueName, StringsAttributes, Collection);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYQUERYUNICODESTRING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    PUSHORT ValueByteLength,
    PUNICODE_STRING Value
    );
NTSTATUS
__forceinline
WdfRegistryQueryUnicodeString(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    PUSHORT ValueByteLength,
    PUNICODE_STRING Value
    )
{
    return ((PFN_WDFREGISTRYQUERYUNICODESTRING) WdfFunctions[WdfRegistryQueryUnicodeStringTableIndex])(WdfDriverGlobals, Key, ValueName, ValueByteLength, Value);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYQUERYSTRING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    WDFSTRING String
    );
NTSTATUS
__forceinline
WdfRegistryQueryString(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    WDFSTRING String
    )
{
    return ((PFN_WDFREGISTRYQUERYSTRING) WdfFunctions[WdfRegistryQueryStringTableIndex])(WdfDriverGlobals, Key, ValueName, String);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYQUERYULONG)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    PULONG Value
    );
NTSTATUS
__forceinline
WdfRegistryQueryULong(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    PULONG Value
    )
{
    return ((PFN_WDFREGISTRYQUERYULONG) WdfFunctions[WdfRegistryQueryULongTableIndex])(WdfDriverGlobals, Key, ValueName, Value);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYASSIGNVALUE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    ULONG ValueType,
    ULONG ValueLength,
    PVOID Value
    );
NTSTATUS
__forceinline
WdfRegistryAssignValue(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    ULONG ValueType,
    ULONG ValueLength,
    PVOID Value
    )
{
    return ((PFN_WDFREGISTRYASSIGNVALUE) WdfFunctions[WdfRegistryAssignValueTableIndex])(WdfDriverGlobals, Key, ValueName, ValueType, ValueLength, Value);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYASSIGNMEMORY)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    ULONG ValueType,
    WDFMEMORY Memory,
    PWDFMEMORY_OFFSET MemoryOffsets
    );
NTSTATUS
__forceinline
WdfRegistryAssignMemory(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    ULONG ValueType,
    WDFMEMORY Memory,
    PWDFMEMORY_OFFSET MemoryOffsets
    )
{
    return ((PFN_WDFREGISTRYASSIGNMEMORY) WdfFunctions[WdfRegistryAssignMemoryTableIndex])(WdfDriverGlobals, Key, ValueName, ValueType, Memory, MemoryOffsets);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYASSIGNMULTISTRING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    WDFCOLLECTION StringsCollection
    );
NTSTATUS
__forceinline
WdfRegistryAssignMultiString(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    WDFCOLLECTION StringsCollection
    )
{
    return ((PFN_WDFREGISTRYASSIGNMULTISTRING) WdfFunctions[WdfRegistryAssignMultiStringTableIndex])(WdfDriverGlobals, Key, ValueName, StringsCollection);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYASSIGNUNICODESTRING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    PCUNICODE_STRING Value
    );
NTSTATUS
__forceinline
WdfRegistryAssignUnicodeString(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    PCUNICODE_STRING Value
    )
{
    return ((PFN_WDFREGISTRYASSIGNUNICODESTRING) WdfFunctions[WdfRegistryAssignUnicodeStringTableIndex])(WdfDriverGlobals, Key, ValueName, Value);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYASSIGNSTRING)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    WDFSTRING String
    );
NTSTATUS
__forceinline
WdfRegistryAssignString(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    WDFSTRING String
    )
{
    return ((PFN_WDFREGISTRYASSIGNSTRING) WdfFunctions[WdfRegistryAssignStringTableIndex])(WdfDriverGlobals, Key, ValueName, String);
}
typedef
NTSTATUS
(*PFN_WDFREGISTRYASSIGNULONG)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    ULONG Value
    );
NTSTATUS
__forceinline
WdfRegistryAssignULong(
    WDFKEY Key,
    PCUNICODE_STRING ValueName,
    ULONG Value
    )
{
    return ((PFN_WDFREGISTRYASSIGNULONG) WdfFunctions[WdfRegistryAssignULongTableIndex])(WdfDriverGlobals, Key, ValueName, Value);
}
typedef enum _WDF_DMA_PROFILE {
    WdfDmaProfileInvalid = 0,
    WdfDmaProfilePacket,
    WdfDmaProfileScatterGather,
    WdfDmaProfilePacket64,
    WdfDmaProfileScatterGather64,
    WdfDmaProfileScatterGatherDuplex,
    WdfDmaProfileScatterGather64Duplex,
} WDF_DMA_PROFILE;
typedef enum _WDF_DMA_DIRECTION {
    WdfDmaDirectionReadFromDevice = 0,
    WdfDmaDirectionWriteToDevice = 1,
} WDF_DMA_DIRECTION;
typedef
NTSTATUS
(EVT_WDF_DMA_ENABLER_FILL)(
      WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_FILL *PFN_WDF_DMA_ENABLER_FILL;
typedef
NTSTATUS
(EVT_WDF_DMA_ENABLER_FLUSH)(
      WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_FLUSH *PFN_WDF_DMA_ENABLER_FLUSH;
typedef
NTSTATUS
(EVT_WDF_DMA_ENABLER_ENABLE)(
      WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_ENABLE *PFN_WDF_DMA_ENABLER_ENABLE;
typedef
NTSTATUS
(EVT_WDF_DMA_ENABLER_DISABLE)(
      WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_DISABLE *PFN_WDF_DMA_ENABLER_DISABLE;
typedef
NTSTATUS
(EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_START)(
      WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_START *PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_START;
typedef
NTSTATUS
(EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP)(
      WDFDMAENABLER DmaEnabler
    );
typedef EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP *PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP;
typedef struct _WDF_DMA_ENABLER_CONFIG {
    ULONG Size;
    WDF_DMA_PROFILE Profile;
    size_t MaximumLength;
    PFN_WDF_DMA_ENABLER_FILL EvtDmaEnablerFill;
    PFN_WDF_DMA_ENABLER_FLUSH EvtDmaEnablerFlush;
    PFN_WDF_DMA_ENABLER_DISABLE EvtDmaEnablerDisable;
    PFN_WDF_DMA_ENABLER_ENABLE EvtDmaEnablerEnable;
    PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_START EvtDmaEnablerSelfManagedIoStart;
    PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP EvtDmaEnablerSelfManagedIoStop;
} WDF_DMA_ENABLER_CONFIG, *PWDF_DMA_ENABLER_CONFIG;
void
__forceinline
WDF_DMA_ENABLER_CONFIG_INIT(
      PWDF_DMA_ENABLER_CONFIG Config,
      WDF_DMA_PROFILE Profile,
      size_t MaximumLength
    )
{
    memset((Config),0,(sizeof(WDF_DMA_ENABLER_CONFIG)));
    Config->Size = sizeof(WDF_DMA_ENABLER_CONFIG);
    Config->Profile = Profile;
    Config->MaximumLength = MaximumLength;
}
typedef
NTSTATUS
(*PFN_WDFDMAENABLERCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDEVICE Device,
    PWDF_DMA_ENABLER_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFDMAENABLER* DmaEnablerHandle
    );
NTSTATUS
__forceinline
WdfDmaEnablerCreate(
    WDFDEVICE Device,
    PWDF_DMA_ENABLER_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFDMAENABLER* DmaEnablerHandle
    )
{
    return ((PFN_WDFDMAENABLERCREATE) WdfFunctions[WdfDmaEnablerCreateTableIndex])(WdfDriverGlobals, Device, Config, Attributes, DmaEnablerHandle);
}
typedef
size_t
(*PFN_WDFDMAENABLERGETMAXIMUMLENGTH)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMAENABLER DmaEnabler
    );
size_t
__forceinline
WdfDmaEnablerGetMaximumLength(
    WDFDMAENABLER DmaEnabler
    )
{
    return ((PFN_WDFDMAENABLERGETMAXIMUMLENGTH) WdfFunctions[WdfDmaEnablerGetMaximumLengthTableIndex])(WdfDriverGlobals, DmaEnabler);
}
typedef
size_t
(*PFN_WDFDMAENABLERGETMAXIMUMSCATTERGATHERELEMENTS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMAENABLER DmaEnabler
    );
size_t
__forceinline
WdfDmaEnablerGetMaximumScatterGatherElements(
    WDFDMAENABLER DmaEnabler
    )
{
    return ((PFN_WDFDMAENABLERGETMAXIMUMSCATTERGATHERELEMENTS) WdfFunctions[WdfDmaEnablerGetMaximumScatterGatherElementsTableIndex])(WdfDriverGlobals, DmaEnabler);
}
typedef
void
(*PFN_WDFDMAENABLERSETMAXIMUMSCATTERGATHERELEMENTS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMAENABLER DmaEnabler,
    size_t MaximumFragments
    );
void
__forceinline
WdfDmaEnablerSetMaximumScatterGatherElements(
    WDFDMAENABLER DmaEnabler,
    size_t MaximumFragments
    )
{
    ((PFN_WDFDMAENABLERSETMAXIMUMSCATTERGATHERELEMENTS) WdfFunctions[WdfDmaEnablerSetMaximumScatterGatherElementsTableIndex])(WdfDriverGlobals, DmaEnabler, MaximumFragments);
}
typedef
size_t
(*PFN_WDFDMAENABLERGETFRAGMENTLENGTH)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMAENABLER DmaEnabler,
    WDF_DMA_DIRECTION DmaDirection
    );
size_t
__forceinline
WdfDmaEnablerGetFragmentLength(
    WDFDMAENABLER DmaEnabler,
    WDF_DMA_DIRECTION DmaDirection
    )
{
    return ((PFN_WDFDMAENABLERGETFRAGMENTLENGTH) WdfFunctions[WdfDmaEnablerGetFragmentLengthTableIndex])(WdfDriverGlobals, DmaEnabler, DmaDirection);
}
typedef
PDMA_ADAPTER
(*PFN_WDFDMAENABLERWDMGETDMAADAPTER)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMAENABLER DmaEnabler,
    WDF_DMA_DIRECTION DmaDirection
    );
PDMA_ADAPTER
__forceinline
WdfDmaEnablerWdmGetDmaAdapter(
    WDFDMAENABLER DmaEnabler,
    WDF_DMA_DIRECTION DmaDirection
    )
{
    return ((PFN_WDFDMAENABLERWDMGETDMAADAPTER) WdfFunctions[WdfDmaEnablerWdmGetDmaAdapterTableIndex])(WdfDriverGlobals, DmaEnabler, DmaDirection);
}
typedef
BOOLEAN
(EVT_WDF_PROGRAM_DMA) (
     WDFDMATRANSACTION Transaction,
     WDFDEVICE Device,
     WDFCONTEXT Context,
     WDF_DMA_DIRECTION Direction,
     PSCATTER_GATHER_LIST SgList
    );
typedef EVT_WDF_PROGRAM_DMA *PFN_WDF_PROGRAM_DMA;
typedef
NTSTATUS
(*PFN_WDFDMATRANSACTIONCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMAENABLER DmaEnabler,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFDMATRANSACTION* DmaTransaction
    );
NTSTATUS
__forceinline
WdfDmaTransactionCreate(
    WDFDMAENABLER DmaEnabler,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFDMATRANSACTION* DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONCREATE) WdfFunctions[WdfDmaTransactionCreateTableIndex])(WdfDriverGlobals, DmaEnabler, Attributes, DmaTransaction);
}
typedef
NTSTATUS
(*PFN_WDFDMATRANSACTIONINITIALIZE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction,
    PFN_WDF_PROGRAM_DMA EvtProgramDmaFunction,
    WDF_DMA_DIRECTION DmaDirection,
    PMDL Mdl,
    PVOID VirtualAddress,
    size_t Length
    );
NTSTATUS
__forceinline
WdfDmaTransactionInitialize(
    WDFDMATRANSACTION DmaTransaction,
    PFN_WDF_PROGRAM_DMA EvtProgramDmaFunction,
    WDF_DMA_DIRECTION DmaDirection,
    PMDL Mdl,
    PVOID VirtualAddress,
    size_t Length
    )
{
    return ((PFN_WDFDMATRANSACTIONINITIALIZE) WdfFunctions[WdfDmaTransactionInitializeTableIndex])(WdfDriverGlobals, DmaTransaction, EvtProgramDmaFunction, DmaDirection, Mdl, VirtualAddress, Length);
}
typedef
NTSTATUS
(*PFN_WDFDMATRANSACTIONINITIALIZEUSINGREQUEST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction,
    WDFREQUEST Request,
    PFN_WDF_PROGRAM_DMA EvtProgramDmaFunction,
    WDF_DMA_DIRECTION DmaDirection
    );
NTSTATUS
__forceinline
WdfDmaTransactionInitializeUsingRequest(
    WDFDMATRANSACTION DmaTransaction,
    WDFREQUEST Request,
    PFN_WDF_PROGRAM_DMA EvtProgramDmaFunction,
    WDF_DMA_DIRECTION DmaDirection
    )
{
    return ((PFN_WDFDMATRANSACTIONINITIALIZEUSINGREQUEST) WdfFunctions[WdfDmaTransactionInitializeUsingRequestTableIndex])(WdfDriverGlobals, DmaTransaction, Request, EvtProgramDmaFunction, DmaDirection);
}
typedef
NTSTATUS
(*PFN_WDFDMATRANSACTIONEXECUTE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction,
    WDFCONTEXT Context
    );
NTSTATUS
__forceinline
WdfDmaTransactionExecute(
    WDFDMATRANSACTION DmaTransaction,
    WDFCONTEXT Context
    )
{
    return ((PFN_WDFDMATRANSACTIONEXECUTE) WdfFunctions[WdfDmaTransactionExecuteTableIndex])(WdfDriverGlobals, DmaTransaction, Context);
}
typedef
NTSTATUS
(*PFN_WDFDMATRANSACTIONRELEASE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction
    );
NTSTATUS
__forceinline
WdfDmaTransactionRelease(
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONRELEASE) WdfFunctions[WdfDmaTransactionReleaseTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef
BOOLEAN
(*PFN_WDFDMATRANSACTIONDMACOMPLETED)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction,
    NTSTATUS* Status
    );
BOOLEAN
__forceinline
WdfDmaTransactionDmaCompleted(
    WDFDMATRANSACTION DmaTransaction,
    NTSTATUS* Status
    )
{
    return ((PFN_WDFDMATRANSACTIONDMACOMPLETED) WdfFunctions[WdfDmaTransactionDmaCompletedTableIndex])(WdfDriverGlobals, DmaTransaction, Status);
}
typedef
BOOLEAN
(*PFN_WDFDMATRANSACTIONDMACOMPLETEDWITHLENGTH)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction,
    size_t TransferredLength,
    NTSTATUS* Status
    );
BOOLEAN
__forceinline
WdfDmaTransactionDmaCompletedWithLength(
    WDFDMATRANSACTION DmaTransaction,
    size_t TransferredLength,
    NTSTATUS* Status
    )
{
    return ((PFN_WDFDMATRANSACTIONDMACOMPLETEDWITHLENGTH) WdfFunctions[WdfDmaTransactionDmaCompletedWithLengthTableIndex])(WdfDriverGlobals, DmaTransaction, TransferredLength, Status);
}
typedef
BOOLEAN
(*PFN_WDFDMATRANSACTIONDMACOMPLETEDFINAL)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction,
    size_t FinalTransferredLength,
    NTSTATUS* Status
    );
BOOLEAN
__forceinline
WdfDmaTransactionDmaCompletedFinal(
    WDFDMATRANSACTION DmaTransaction,
    size_t FinalTransferredLength,
    NTSTATUS* Status
    )
{
    return ((PFN_WDFDMATRANSACTIONDMACOMPLETEDFINAL) WdfFunctions[WdfDmaTransactionDmaCompletedFinalTableIndex])(WdfDriverGlobals, DmaTransaction, FinalTransferredLength, Status);
}
typedef
size_t
(*PFN_WDFDMATRANSACTIONGETBYTESTRANSFERRED)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction
    );
size_t
__forceinline
WdfDmaTransactionGetBytesTransferred(
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONGETBYTESTRANSFERRED) WdfFunctions[WdfDmaTransactionGetBytesTransferredTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef
void
(*PFN_WDFDMATRANSACTIONSETMAXIMUMLENGTH)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction,
    size_t MaximumLength
    );
void
__forceinline
WdfDmaTransactionSetMaximumLength(
    WDFDMATRANSACTION DmaTransaction,
    size_t MaximumLength
    )
{
    ((PFN_WDFDMATRANSACTIONSETMAXIMUMLENGTH) WdfFunctions[WdfDmaTransactionSetMaximumLengthTableIndex])(WdfDriverGlobals, DmaTransaction, MaximumLength);
}
typedef
WDFREQUEST
(*PFN_WDFDMATRANSACTIONGETREQUEST)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction
    );
WDFREQUEST
__forceinline
WdfDmaTransactionGetRequest(
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONGETREQUEST) WdfFunctions[WdfDmaTransactionGetRequestTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef
size_t
(*PFN_WDFDMATRANSACTIONGETCURRENTDMATRANSFERLENGTH)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction
    );
size_t
__forceinline
WdfDmaTransactionGetCurrentDmaTransferLength(
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONGETCURRENTDMATRANSFERLENGTH) WdfFunctions[WdfDmaTransactionGetCurrentDmaTransferLengthTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef
WDFDEVICE
(*PFN_WDFDMATRANSACTIONGETDEVICE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMATRANSACTION DmaTransaction
    );
WDFDEVICE
__forceinline
WdfDmaTransactionGetDevice(
    WDFDMATRANSACTION DmaTransaction
    )
{
    return ((PFN_WDFDMATRANSACTIONGETDEVICE) WdfFunctions[WdfDmaTransactionGetDeviceTableIndex])(WdfDriverGlobals, DmaTransaction);
}
typedef struct _WDF_COMMON_BUFFER_CONFIG {
    ULONG Size;
    ULONG AlignmentRequirement;
} WDF_COMMON_BUFFER_CONFIG, *PWDF_COMMON_BUFFER_CONFIG;
void
__forceinline
WDF_COMMON_BUFFER_CONFIG_INIT(
      PWDF_COMMON_BUFFER_CONFIG Config,
      ULONG AlignmentRequirement
    )
{
    memset((Config),0,(sizeof(WDF_COMMON_BUFFER_CONFIG)));
    Config->Size = sizeof(WDF_COMMON_BUFFER_CONFIG);
    Config->AlignmentRequirement = AlignmentRequirement;
}
typedef
NTSTATUS
(*PFN_WDFCOMMONBUFFERCREATE)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMAENABLER DmaEnabler,
    size_t Length,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFCOMMONBUFFER* CommonBuffer
    );
NTSTATUS
__forceinline
WdfCommonBufferCreate(
    WDFDMAENABLER DmaEnabler,
    size_t Length,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFCOMMONBUFFER* CommonBuffer
    )
{
    return ((PFN_WDFCOMMONBUFFERCREATE) WdfFunctions[WdfCommonBufferCreateTableIndex])(WdfDriverGlobals, DmaEnabler, Length, Attributes, CommonBuffer);
}
typedef
NTSTATUS
(*PFN_WDFCOMMONBUFFERCREATEWITHCONFIG)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFDMAENABLER DmaEnabler,
    size_t Length,
    PWDF_COMMON_BUFFER_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFCOMMONBUFFER* CommonBuffer
    );
NTSTATUS
__forceinline
WdfCommonBufferCreateWithConfig(
    WDFDMAENABLER DmaEnabler,
    size_t Length,
    PWDF_COMMON_BUFFER_CONFIG Config,
    PWDF_OBJECT_ATTRIBUTES Attributes,
    WDFCOMMONBUFFER* CommonBuffer
    )
{
    return ((PFN_WDFCOMMONBUFFERCREATEWITHCONFIG) WdfFunctions[WdfCommonBufferCreateWithConfigTableIndex])(WdfDriverGlobals, DmaEnabler, Length, Config, Attributes, CommonBuffer);
}
typedef
PVOID
(*PFN_WDFCOMMONBUFFERGETALIGNEDVIRTUALADDRESS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCOMMONBUFFER CommonBuffer
    );
PVOID
__forceinline
WdfCommonBufferGetAlignedVirtualAddress(
    WDFCOMMONBUFFER CommonBuffer
    )
{
    return ((PFN_WDFCOMMONBUFFERGETALIGNEDVIRTUALADDRESS) WdfFunctions[WdfCommonBufferGetAlignedVirtualAddressTableIndex])(WdfDriverGlobals, CommonBuffer);
}
typedef
PHYSICAL_ADDRESS
(*PFN_WDFCOMMONBUFFERGETALIGNEDLOGICALADDRESS)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCOMMONBUFFER CommonBuffer
    );
PHYSICAL_ADDRESS
__forceinline
WdfCommonBufferGetAlignedLogicalAddress(
    WDFCOMMONBUFFER CommonBuffer
    )
{
    return ((PFN_WDFCOMMONBUFFERGETALIGNEDLOGICALADDRESS) WdfFunctions[WdfCommonBufferGetAlignedLogicalAddressTableIndex])(WdfDriverGlobals, CommonBuffer);
}
typedef
size_t
(*PFN_WDFCOMMONBUFFERGETLENGTH)(
    PWDF_DRIVER_GLOBALS DriverGlobals,
    WDFCOMMONBUFFER CommonBuffer
    );
size_t
__forceinline
WdfCommonBufferGetLength(
    WDFCOMMONBUFFER CommonBuffer
    )
{
    return ((PFN_WDFCOMMONBUFFERGETLENGTH) WdfFunctions[WdfCommonBufferGetLengthTableIndex])(WdfDriverGlobals, CommonBuffer);
}
typedef enum _WDF_BUGCHECK_CODES {
    WDF_POWER_ROUTINE_TIMED_OUT = 0x1,
    WDF_RECURSIVE_LOCK = 0x2,
    WDF_VERIFIER_FATAL_ERROR = 0x3,
    WDF_REQUIRED_PARAMETER_IS_NULL = 0x4,
    WDF_INVALID_HANDLE = 0x5,
    WDF_REQUEST_FATAL_ERROR = 0x6,
    WDF_OBJECT_ERROR = 0x7,
    WDF_DMA_FATAL_ERROR = 0x8,
    WDF_INVALID_INTERRUPT = 0x9,
    WDF_QUEUE_FATAL_ERROR = 0xA,
    WDF_INVALID_LOCK_OPERATION = 0xB,
} WDF_BUGCHECK_CODES;
typedef enum _WDF_REQUEST_FATAL_ERROR_CODES {
    WDF_REQUEST_FATAL_ERROR_NO_MORE_STACK_LOCATIONS = 0x1,
    WDF_REQUEST_FATAL_ERROR_NULL_IRP = 0x2,
    WDF_REQUEST_FATAL_ERROR_REQUEST_ALREADY_SENT = 0x3,
    WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH = 0x4,
} WDF_REQUEST_FATAL_ERROR_CODES;
typedef struct _WDF_POWER_ROUTINE_TIMED_OUT_DATA {
    WDF_DEVICE_POWER_STATE PowerState;
    WDF_DEVICE_POWER_POLICY_STATE PowerPolicyState;
    PDEVICE_OBJECT DeviceObject;
    WDFDEVICE Device;
    PKTHREAD TimedOutThread;
} WDF_POWER_ROUTINE_TIMED_OUT_DATA;
typedef struct _WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA {
    WDFREQUEST Request;
    PIRP Irp;
    ULONG OutputBufferLength;
    ULONG_PTR Information;
    UCHAR MajorFunction;
} WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA,
  *PWDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA;
typedef struct _WDF_QUEUE_FATAL_ERROR_DATA {
    WDFQUEUE Queue;
    WDFREQUEST Request;
    NTSTATUS Status;
} WDF_QUEUE_FATAL_ERROR_DATA, *PWDF_QUEUE_FATAL_ERROR_DATA;
typedef EVT_WDF_OBJECT_CONTEXT_CLEANUP EVT_WDF_DEVICE_CONTEXT_CLEANUP;
typedef EVT_WDF_OBJECT_CONTEXT_DESTROY EVT_WDF_DEVICE_CONTEXT_DESTROY;
typedef EVT_WDF_OBJECT_CONTEXT_CLEANUP EVT_WDF_IO_QUEUE_CONTEXT_CLEANUP_CALLBACK;
typedef EVT_WDF_OBJECT_CONTEXT_DESTROY EVT_WDF_IO_QUEUE_CONTEXT_DESTROY_CALLBACK;
typedef EVT_WDF_OBJECT_CONTEXT_CLEANUP EVT_WDF_FILE_CONTEXT_CLEANUP_CALLBACK;
typedef EVT_WDF_OBJECT_CONTEXT_DESTROY EVT_WDF_FILE_CONTEXT_DESTROY_CALLBACK;
DRIVER_INITIALIZE DriverEntry;
NTSTATUS
WdfHelloEvtDeviceAdd(
     WDFDRIVER Driver,
     PWDFDEVICE_INIT DeviceInit
    );
#pragma alloc_text (INIT, DriverEntry)
#pragma alloc_text (PAGE, WdfHelloEvtDeviceAdd)
NTSTATUS
DriverEntry(
     PDRIVER_OBJECT DriverObject,
     PUNICODE_STRING RegistryPath
    )
{
    NTSTATUS status = ((NTSTATUS)0x00000000L);
    WDF_DRIVER_CONFIG config;
    DbgPrint ("Hello WDF World.\n");
    DbgPrint ("Built %s %s\n", "Jun  8 2008", "20:09:43");
 WDF_DRIVER_CONFIG_INIT(
        &config,
        WdfHelloEvtDeviceAdd
        );
    status = WdfDriverCreate(
        DriverObject,
        RegistryPath,
        (((void *)0)),
        &config,
        (((void *)0))
        );
    if (!(((NTSTATUS)(status)) >= 0)) {
        DbgPrint ("WdfDriverCreate failed with status 0x%x\n", status);
    }
    return status;
}
NTSTATUS
WdfHelloEvtDeviceAdd(
     WDFDRIVER Driver,
     PWDFDEVICE_INIT DeviceInit
    )
{
    NTSTATUS status = ((NTSTATUS)0x00000000L);
    (Driver);
    { if (KeGetCurrentIrql() > 1) { DbgPrint ("EX: Pageable code called at IRQL %d\n", KeGetCurrentIrql()); ((!(0)) ? (__annotation(L"Debug", L"AssertFail", L"FALSE"), __int2c(), 0) : 1); } };
    DbgPrint ("WdfHelloEvtDeviceAdd called\n");
    return status;
}
