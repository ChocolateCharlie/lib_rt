/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrtest_isalpha.c					LRT_CTYPE	*/
/*										*/
/*	By : ChocolateCharlie							*/
/*	Updated :	2017-07-02	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/*
** Include :
**	- lrtest_ctype.h	in order to use lrt_isalpah() ; lrt_assert() ;
** LRT_SUCCESS ; LRT_EOF ; LRT_UCHAR_MAX ; LRT_UCHAR_MIN
*/

#include "lrtest_ctype.h"

/* **************************************************************************** */
/*	Name : lrtest_isalpha							*/
/*	Goal : test lrt_isalpha							*/
/*	Original library : -							*/
/* ---------------------------------------------------------------------------- */
/*	Parameters : None						(void)	*/
/*	Returns : an integer						(int)	*/
/*		- LRT_SUCCESS if all tests passed				*/
/* ---------------------------------------------------------------------------- */
/*	Errors : No errors are defined.						*/
/* ---------------------------------------------------------------------------- */
/*	Description : -								*/
/* ---------------------------------------------------------------------------- */
/*	WARNING : This function might abort program in case of failure.		*/
/*										*/
/* **************************************************************************** */

int	lrtest_isalpha	(void)
{
	int	i;

/* LRT_EOF macro */
	i = LRT_EOF;

	lrt_assert(!lrt_isalpha(i));

	i = LRT_UCHAR_MIN - 1;

	while (++i < LRT_UCHAR_MAX + 1)
	{
/* True assertions */
		if((i >= (int)'A' && i <= (int)'Z')
		|| (i >= (int)'a' && i <= (int)'z'))
		{
			lrt_assert(lrt_isalpha(i));
		}
/* False assertions */
		else
		{
			lrt_assert(!lrt_isalpha(i));
		}
	}

	return (LRT_SUCCESS);
}

