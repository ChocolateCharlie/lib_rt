/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrt_assert.h                                             LRT_ASSERT    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-11    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */



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
#endif


/*
** Define state macros :
** - LRT_FAILURE	0			(int)
** - LRT_SUCCESS	non_zero	(int)
*/
#ifndef	LRT_ASSERT_H_INCLUDED
#define	LRT_ASSERT_H_INCLUDED

#define	LRT_FAILURE	(int)0
#define	LRT_SUCCESS	(int)1

#endif

