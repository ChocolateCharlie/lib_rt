/* **************************************************************************** */
/*										*/
/*							THE LIB_RT_PROJECT	*/
/*	lrt_assert.h						LRT_ASSERT	*/
/*										*/
/*	By : ChocolateCharlie							*/
/*	Updated :	2017-07-02	by ChocolateCharlie			*/
/*										*/
/* **************************************************************************** */

/*
** TODO :
**	- remove inclusion of <stdio.h> and replace printf()
**	(write informations on stderr)
**	- remove inclusion of <stdlib> and replace abort()
*/

/*
** Include :
**	- stdio.h	in order to use printf()
**	- stdlib.h	in order to use abort()
*/

#include <stdio.h>
#include <stdlib.h>

/*
** Define the lrt_assert() macro
*/

#ifndef	LRT_NDEBUG
#define	lrt_assert(e)	if (!e)							\
			{							\
				printf( "[LIB_RT]Assertion failed: %s\n"	\
					"Source file: %s\n"			\
					"Enclosing function: %s\t"		\
					"Line: %d\n",				\
					#e, __FILE__, __func__, __LINE__);	\
				abort();					\
			}
#else
#define lrt_assert(ignore)((void) 0)
#endif

/*
** Define states macros :
**	- LRT_FAILURE	0		(int)
**	_ LRT_SUCCESS	non-zero	(int)
*/

#ifndef	LRT_ASSERT_H_INCLUDED
#define	LRT_ASSERT_H_INCLUDED

#define	LRT_FAILURE	(int)0
#define	LRT_SUCCESS	(int)1

#endif

