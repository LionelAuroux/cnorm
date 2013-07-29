/*
 * Some Microsoft compilator specific keyworks.
 * ----------------------------------------------------------------------------
 * Here you can find __cdecl specifier in different position in some
 * declaration.
 */
void	__cdecl exception_info(void);
void	__cdecl *xception_info(void);
void *	__cdecl _exception_info(void);

/*
 * Here you can find some cdecl or other things like that in function definition.
 */
void	__cdecl exception_info(void)
{
	return;
}

void	__cdecl *xception_info(void)
{
	return (void *)0;
}

void *	__cdecl _exception_info(void)
{
	return (void *)0;
}

void	__stdcall standard_call0(long long int value, long, void (__cdecl func)(void));
int		__stdcall standard_call1(long long int value, long, void (__cdecl *func)(int));
int		__stdcall standard_call2(long long int value, long, void (* __cdecl func)(void));

/*
 * Here you can find forceinline.
 */
// Declaration
__forceinline void	i_m_inlined(void);
inline void			i_less_inlined(void);
__inline void		i_m___inlined(void);
__inline__ void		i_m___inlined__(void);

// Definition
__forceinline void	i_m_inlined(void)
{
}

inline void			i_less_inlined(void)
{
}

__inline void		i_m___inlined(void)
{
}

__inline__ void		i_m___inlined__(void)
{
}

/*
 * Test of primitive types.
 */
__inline__ void		i_m___inlined__(void)
{
	__int8			a = 0;
	__int16			b = 1;
	__int32			c = 2;
	__int64			d = 4;
}
