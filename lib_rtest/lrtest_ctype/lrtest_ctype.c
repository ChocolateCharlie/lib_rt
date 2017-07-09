/* ******************************************************************** */
/*									*/
/*						THE LIB_RT PROJECT	*/
/*	lrtest_ctype.c					LRTEST_CTYPE	*/
/*									*/
/*	By :	ChocolateCharlie					*/
/*	Updated :	2017-07-09	by :	ChocolateCharlie	*/
/*									*/
/* ******************************************************************** */

/*
** Include :
**	- lrtest_ctype.h	in order to use all the functions to test
** LRT_FAILURE ; LRT_SUCCESS
*/

#include "lrtest_ctype.h"

/* ******************************************************************** */
/*	Name : lrtest_ctype						*/
/*	Goal : test full lrt_ctype					*/
/*	Original library : -						*/
/* -------------------------------------------------------------------- */
/*	Parameters : None					(void)	*/
/*	Returns : an integer					(int)	*/
/*		- LRT_SUCCESS if all tests passed			*/
/*		- LRT_FAILURE otherwise					*/
/* -------------------------------------------------------------------- */
/*	Errors : No errors are defined.					*/
/* -------------------------------------------------------------------- */
/*	Description : -							*/
/* -------------------------------------------------------------------- */
/*	WARNING : This function might abort in case of failure.		*/
/*									*/
/* ******************************************************************** */

int	lrtest_ctype	(void)
{
	return((lrtest_isalnum() &&
		lrtest_isalpha() &&
		lrtest_isascii() &&
		lrtest_isblank() &&
		lrtest_iscntrl() &&
		lrtest_isdigit() &&
		lrtest_isgraph() &&
		lrtest_islower() &&
		lrtest_isprint() &&
		lrtest_ispunct() &&
		lrtest_isspace() &&
		lrtest_isupper() &&
		lrtest_isxdigit() &&
		lrtest_toascii() &&
		lrtest_tolower() &&
		lrtest_toupper()) ? LRT_SUCCESS : LRT_FAILURE);
}

