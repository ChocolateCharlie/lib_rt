/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrt_assert.h                                             LRT_ASSERT    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-17    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

#ifndef	LRT_ASSERT_H_INCLUDED
#define	LRT_ASSERT_H_INCLUDED

/*
** Include :
**	EXTERNAL HEADERS : (2)
**	- stdio.h	in order to use fprintf()
**	- stdlib.h	in order to use abort()
**	INTERNAL HEADERS : none
*/

#include <stdio.h>
#include <stdlib.h>


/*
** Define the lrt_assert() macro
*/

#ifndef	LRT_NDEBUG
#define	lrt_assert(e)	if (!e)												\
						{													\
							fprintf(stderr,									\
									"[LIB_RT] Assertion failed : %s\n"		\
									"Source file : %s\n"					\
									"Enclosing function : %s\t"				\
									"Line : %d\n",							\
									#e, __FILE__, __func__, __LINE__);		\
							abort();										\
						}
#else
#define	lrt_assert(ignore)((void) 0)
#endif	//LRT_NDEBUG

/*
** Define state macros :
** - LRT_FAILURE	0			(int)
** - LRT_SUCCESS	non_zero	(int)
*/

#ifndef	LRT_FAILURE
#define	LRT_FAILURE	(int)0
#endif

#ifndef	LRT_SUCCESS
#define	LRT_SUCCESS	(int)1
#endif

#endif	//LRT_ASSERT_H_INCLUDED

