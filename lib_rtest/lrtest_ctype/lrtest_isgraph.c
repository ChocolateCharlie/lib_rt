/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrtest_isgraph.c					LRTEST_CTYPE	*/
/*										*/
/*	By :	ChocolateCharlie						*/
/*	Updated :	2017-07-02	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/*
** Include :
**	- lrtest_ctype.h	in order to use lrt_isgraph() ; lrt_assert() ;
** LRT_SUCCESS ; LRT_EOF ; LRT_UCHAR_MIN : LRT_UCHAR_MAX
*/

#include "lrtest_ctype.h"

/* **************************************************************************** */
/*	Name : lrtest_isgraph							*/
/*	Goal : test lrt_isgraph							*/
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

int	lrtest_isgraph	(void)
{
	int	i;

/* LRT_EOF macro */
	i = LRT_EOF;

	lrt_assert(!lrt_isgraph(i));

	i = LRT_UCHAR_MIN - 1;

	while (++i < LRT_UCHAR_MAX + 1)
	{
/* True assertions */
		if ((i > 040) && (i < 0177))
		{
			lrt_assert(lrt_isgraph(i));
		}
/* False assertions */
		else
		{
			lrt_assert(!lrt_isgraph(i));
		}
	}

	return (LRT_SUCCESS);
}

