/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrt_fputc.c                                               LRT_STDIO    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-19    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXTERNAL HEADERS : (1)
**	- stdio.h	in order to use FILE structure
**	INTERNAL HEADERS : none
*/

#include <stdio.h>


/* ------------------------------------------------------------------------ */
/*	Name : lrt_fputc														*/
/*	Goal : Put a byte on a stream											*/
/*	Original library : stdio.h												*/
/* ------------------------------------------------------------------------ */
/*	Parameters	*/
/*	Returns	*/
/* ------------------------------------------------------------------------ */
/*	Description :	*/
/* ------------------------------------------------------------------------ */

int		lrt_fputc	(int c, FILE *stream)
{
	int				fd;

	switch (stream)
	{
		case stdin :
			fd = LRT_STDIN_FILENO;
			break;
		case stdout :
			fd = LRT_STDOUT_FILENO;
			break;
		case stderr :
			fd = LRT_STDERR_FILENO;
			break;
	}

	write(fd, &c, 1);

	return (0);
}

