/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrtest_isblank.c					LRTEST_CTYPE	*/
/*										*/
/*	By :	ChocolateCharlie						*/
/*	Updated :	2017-07-01	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/*
** Include :
**	- lrtest_ctype.h	in order to use lrt_isblank() ; lrt_assert() ;
** LRT_SUCCESS ; LRT_EOF ; LRT_UCHAR_MAX ; LRT_UCHAR_MIN
*/

#include "lrtest_ctype.h"

/* **************************************************************************** */
/*	Name : lrtest_isblank							*/
/*	Goal : test lrt_isblank							*/
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

int	lrtest_isblank	(void)
{
	int	i;

/* LRT_EOF macro */
	i = LRT_EOF;

	lrt_assert(!lrt_isblank(i));

	i = LRT_UCHAR_MIN - 1;

	while (++i < LRT_UCHAR_MAX + 1)
	{
/* True assertions */
		if((i == (int)' ')
		|| (i == (int)'\t'))
		{
			lrt_assert(lrt_isblank(i));
		}
/* False assertions */
		else
		{
			lrt_assert(!lrt_isblank(i));
		}
	}

	return (LRT_SUCCESS);
}

