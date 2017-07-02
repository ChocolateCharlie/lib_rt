/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrtest-isalnum.c					LRTEST_CTYPE	*/
/*										*/
/*	By :	ChocolateCharlie						*/
/*	Updated :	2017-07-02	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/*
** Include :
**	- lrtest_ctype.h	in order to use lrt_isalnum() ; lrt_assert() ;
** LRT_SUCCESS ; LRT_EOF ; LRT_UCHAR_MAX ; LRT_UCHAR_MIN
*/

#include "lrtest_ctype.h"

/* **************************************************************************** */
/*	Name : lrtest_isalnum							*/
/*	Goal : test lrt_isalnum							*/
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

int	lrtest_isalnum	(void)
{
	int	i;

/* LRT_EOF macro */
	i = LRT_EOF;

	lrt_assert(!lrt_isalnum(i));

	i = LRT_UCHAR_MIN - 1;

	while (++i < LRT_UCHAR_MAX + 1)
	{
/* True assertions */
		if((i >= (int)'0' && i <= (int)'9')
		|| (i >= (int)'A' && i <= (int)'Z')
		|| (i >= (int)'a' && i <= (int)'z'))
		{
			lrt_assert(lrt_isalnum(i));
		}
/* False assertions */
		else
		{
			lrt_assert(!lrt_isalnum(i));
		}
	}

	return (LRT_SUCCESS);
}

