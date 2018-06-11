/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrt_getchar.c                                             LRT_STDIO    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-11    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXTERNAL HEADERS : (1)
**	- stdio.h	in order to use stdin and getc()
**	INTERNAL HEADERS : none
*/

#include <stdio.h>


/* ------------------------------------------------------------------------ */
/*	Name : lrt_getchar														*/
/*	Goal : read the next character from stdin								*/
/*	Original library : <stdio.h>											*/
/* ------------------------------------------------------------------------ */
/*	Parameters : none												(void)	*/
/*	Returns : an integer											(int)	*/
/*				- the character read as an unsigned char cast to an int		*/
/*				- EOF on end of file error									*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*																			*/
/* ------------------------------------------------------------------------ */

int		lrt_getchar		(void)
{
		return (getc(stdin));
}

