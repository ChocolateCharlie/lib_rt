/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrt_limits.h                                                 LIB_RT    */
/*                                                                           */
/*    By : ChocolateCharlie                                                  */
/*    Updated :    2018-06-17    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

#ifndef	LRT_LIMITS_H_INCLUDED
#define	LRT_LIMITS_H_INCLUDED

/*
** Include :
**	EXTERNAL HEADERS : none
**	INTERNAL HEADERS : (1)
**	- lrt_stdio.h	in order to use the lrt_ssize_t macro
*/

#include "../lrt_stdio/lrt_stdio.h"


/*
** Minimum Values
*/

#define	LRT_POSIX_SSIZE_MAX		(lrt_ssize_t)32767


/*
** Numerical Limits
*/

#define	LRT_CHAR_BIT			8

#define	LRT_INT_MAX				(int)2147483647
#define	LRT_INT_MIN				(int)-2147483647

#define	LRT_LLONG_MAX			(long long)9223372036854775807
#define	LRT_LLONG_MIN			(long long)-9223372036854775807

#define	LRT_LONG_BIT			32

#define	LRT_LONG_MAX			(long)2147483647
#define	LRT_LONG_MIN			(long)-2147483647

#define	LRT_MB_LEN_MAX			1

#define	LRT_SCHAR_MAX			(char)127
#define	LRT_SCHAR_MIN			(char)-128

#define	LRT_SHRT_MAX			(short)32767
#define	LRT_SHRT_MIN			(short)-32767

#define SSIZE_MAX				(lrt_ssize_t)LRT_POSIX_SSIZE_MAX

#define	LRT_UCHAR_MAX			(unsigned char)255
#define	LRT_UCHAR_MIN			(unsigned char)0

#define	LRT_UINT_MAX			(unsigned)4294967295
#define	LRT_ULLONG_MAX			(unsigned long long)18446744073709551615
#define	LRT_ULONG_MAX			(unsigned long)4294967295
#define	LRT_USHRT_MAX			(unsigned short)65535

#define	LRT_WORD_BIT			(int)32

#endif	//LRT_LIMITS_H_INCLUDED

