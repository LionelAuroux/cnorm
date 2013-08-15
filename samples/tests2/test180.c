/*
 * Windows attribute like declarations.
 *
 */

// Extern declaration.
extern __declspec(dllimport) char					__dllglobal;

// Function declaration.
__declspec(dllimport) int							__cdecl _isctype(int _C,  int _Type);
__declspec(noreturn) __declspec(dllimport) int		__cdecl _isctype(void);
__declspec(deprecated) __declspec(dllimport) int	__cdecl iamdeprecated(int _C,  int _Type);

// Typedef structur declaration.
typedef struct __declspec(align(8)) _DEVICE_OBJECT {
    int toto;
};
