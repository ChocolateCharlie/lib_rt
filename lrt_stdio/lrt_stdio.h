/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrt_stdio.h                                               LRT_STDIO    */
/*                                                                           */
/*    By : ChocolateCharlie                                                  */
/*    Updated :    2018-06-11    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXTERNAL HEADERS : (1)
**	- stdio.h	as this is only a partial implementation of stdio.h
**				in order to use FILE, fgetc() and getc()
**	INTERNAL HEADERS : none
*/

#include <stdio.h>


char	*lrt_fgets		(char *s, int size, FILE *stream);
int		lrt_getchar		(void);

