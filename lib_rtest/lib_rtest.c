/* ******************************************************************** */
/*									*/
/*						THE LIB_RT PROJECT	*/
/*	lib_rtest.c					LIB_RTEST	*/
/*									*/
/*	By :	ChocolateCharlie					*/
/*	Updated :	2017-07-02	by :	ChocolateCharlie	*/
/*									*/
/* ******************************************************************** */

/*
** Include :
**	- lib_rtest.h	in order to use testing functions ; LRT_FAILURE ;
** LRT_SUCCESS
*/

#include "lib_rtest.h"

/* ******************************************************************** */
/*	Name : lib_rtest						*/
/*	Goal : test all lib_rt functions				*/
/*	Original library : -						*/
/* -------------------------------------------------------------------- */
/*	Parameters : None					(void)	*/
/*	Returns : an integer					(int)	*/
/*		- LRT_SUCCESS if all tests passed			*/
/*		- (might) LRT_FAILURE otherwise				*/
/* -------------------------------------------------------------------- */
/*	Errors : No errors are defined.					*/
/* -------------------------------------------------------------------- */
/*	Description : -							*/
/* -------------------------------------------------------------------- */
/*	WARNING : This function might abort program in case of failure.	*/
/*									*/
/* ******************************************************************** */

int	lib_rtest	(void)
{
	return ((lrtest_ctype()) ? LRT_SUCCESS : LRT_FAILURE);
}

