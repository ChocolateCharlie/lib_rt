/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrt_stdio.h                                               LRT_STDIO    */
/*                                                                           */
/*    By : ChocolateCharlie                                                  */
/*    Updated :    2018-06-13    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXTERNAL HEADERS : (1)
**	- stdio.h	as this is only a partial implementation of stdio.h
**				in order to use FILE, fgetc() and getc()
**	INTERNAL HEADERS : none
*/

#ifndef	LRT_STDIO_H_INCLUDED
#define	LRT_STDIO_H_INCLUDED

#include <stdio.h>

#ifndef	LRT_SIZE_T_DEFINED
#define	LRT_SIZE_T_DEFINED
typedef	unsigned int	lrt_size_t;
#endif

#ifndef	LRT_SSIZE_T_DEFINED
#define	LRT_SSIZE_T_DEFINED
typedef	int				lrt_ssize_t;
#endif

#ifndef	LRT_VA_LIST_DEFINED
#define	LRT_VA_LIST_DEFINED
typedef	char			*lrt_va_list;
#endif;


#ifndef	LRT_EOF
#define	LRT_EOF		(int)-1
#endif

#ifndef	LRT_NULL
#define	LRT_NULL	((void*)0)
#endif


char	*lrt_fgets		(char *s, int size, FILE *stream);
int		lrt_getchar		(void);

#endif

