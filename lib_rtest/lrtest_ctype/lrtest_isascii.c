/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrtest_isascii.c					LRTEST_CTYPE	*/
/*										*/
/*	By :	ChocolateCharlie						*/
/*	Updated :	2017-07-02	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/*
** Include :
**	- lrtest_ctype.h	in order to use lrt_isascii() ; lrt_assert() ;
** LRT_SUCCESS ; LRT_INT_MAX ; LRT_INT_MIN
*/

#include "lrtest_ctype.h"

/* **************************************************************************** */
/*	Name : lrtest_isascii							*/
/*	Goal : test lrt_isascii							*/
/*	original library : -							*/
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

int	lrtest_isascii	(void)
{
	int	i;

	i = LRT_INT_MIN - 1;

	while (++i < LRT_INT_MAX + 1)
	{
/* True assertions */
		if (i >= 0 && i <= 0177)
		{
			lrt_assert(lrt_isascii(i));
		}
/* False assertions */
		else
		{
			lrt_assert(!lrt_isascii(i));
		}
	}

	return (LRT_SUCCESS);
}

