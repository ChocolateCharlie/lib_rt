/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrt_fgetc.c                                               LRT_STDIO    */
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
/*	Name : lrt_fgetc														*/
/*	Goal : Get a byte from a stream											*/
/*	Original library : stdio.h												*/
/* ------------------------------------------------------------------------ */
/*	Parameters	*/
/*	Returns	*/
/* ------------------------------------------------------------------------ */
/*	Description :	*/
/* ------------------------------------------------------------------------ */

int		lrt_fgetc	(FILE *stream)
{
	unsigned char	c;
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

	read(fd, &c, 1);

	return ((int) c);
}

