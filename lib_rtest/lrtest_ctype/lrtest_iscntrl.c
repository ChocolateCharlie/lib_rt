/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrtest_iscntrl.c					LRTEST_CTYPE	*/
/*										*/
/*	By :	ChocolateCharlie						*/
/*	Updated :	2017-07-02	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/*
** Include :
**	- lrtest_ctype.h	in order to use lrt_iscntrl() ; lrt_assert() ;
** LRT_SUCCESS ; LRT_EOF ; LRT_UCHAR_MAX ; LRT_UCHAR_MIN
*/

#include "lrtest_ctype.h"

/* **************************************************************************** */
/*	Name : lrtest_iscntrl							*/
/*	Goal : test lrt_iscntrl							*/
/*	Original library : -							*/
/* ---------------------------------------------------------------------------- */
/*	Paramters : None						(void)	*/
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

int	lrtest_iscntrl	(void)
{
	int	i;

/* LRT_EOF macro */
	i = LRT_EOF;

	lrt_assert(!lrt_iscntrl(i));

	i = LRT_UCHAR_MIN - 1;

	while (++i < LRT_UCHAR_MAX + 1)
	{
/* True assertions */
		if(((i >= 0) && (i < 040))
		||  (i == 0177))
		{
			lrt_assert(lrt_iscntrl(i));
		}
/* False assertions */
		else
		{
			lrt_assert(!lrt_iscntrl(i));
		}
	}

	return (LRT_SUCCESS);
}

