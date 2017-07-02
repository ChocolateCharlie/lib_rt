/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrtest_isdigit.c					LRTEST_CTYPE	*/
/*										*/
/*	By :	ChocolateCharlie						*/
/*	Updated :	2017-07-02	by : ChocolateCharlie			*/
/*										*/
/* **************************************************************************** */

/*
** Include :
**	- lrtest_ctype.h	in order to use lrt_isdigit() ; lrt_assert ;
** LRT_SUCCESS ; LRT_EOF ; LRT_UCHAR_MAX ; LRT_UCHAR_MIN
*/

#include "lrtest_ctype.h"

/* **************************************************************************** */
/*	Name : lrtest_isdigit							*/
/*	Goal : test lrt_isdigit							*/
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
/*	WARNING : This function might abort the program in case of failure.	*/
/*										*/
/* **************************************************************************** */

int	lrtest_isdigit	(void)
{
	int	i;

/* LRT_EOF macro */
	i = LRT_EOF;

	lrt_assert(!lrt_isdigit(i));

	i = LRT_UCHAR_MIN - 1;

	while (++i < LRT_UCHAR_MAX + 1)
	{
/* True assertions */
		if((i >= (int)'0') && (i <= (int)'9'))
		{
			lrt_assert(lrt_isdigit(i));
		}
/* False assertions */
		else
		{
			lrt_assert(!lrt_isdigit(i));
		}
	}

	return (LRT_SUCCESS);
}

