/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrt_fgets.c                                               LRT_STDIO    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-11    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXTERNAL HEADERS : (1)
**	- stdio.h	in order to use FILE and fgetc()
**	INTERNAL HEADERS : none
*/

#include <stdio.h>

/* ------------------------------------------------------------------------ */
/*																			*/
/* ------------------------------------------------------------------------ */

char	*lrt_fgets		(char *s, int size, FILE *stream)
{
	char	c;
	char	*dup_s;

	c = (char)fgetc(stream);
	dup_s = s;

	if (c == EOF)
	{
		return (NULL);
	}

	while (--size > 0)
	{
		if ((c == EOF) || (c == '\n'))
		{
			size = 0;
		}

		if (c != EOF)
		{
			*dup_s = c;
			dup_s++;
			c = (char)fgetc(stream);
		}
	}

	dup_s = '\0';

	return (s);
}

