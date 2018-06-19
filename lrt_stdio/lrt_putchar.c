/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrt_putchar.c                                             LRT_STDIO    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-18    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Includes :
**	EXTERNAL INCLUDES : (1)
**	- unistd.h
**	INTERNAL INCLUDES : none
*/

#include <unistd.h>


int		lrt_putchar	(char c)
{
	write(1, &c, 1);
	return (0);
}

