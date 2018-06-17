/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_true_macro.c                                  LRTEST_STDBOOL    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-17    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXRERNAL HEADERS : none
**	INTERNAL HEADERS : (1)
**	- lrtest_stdbool.h
*/

#include "lrtest_stdbool.h"


/* ------------------------------------------------------------------------ */
/*	Name : lrtest_true_macro												*/
/*	Goal : Test the lrt_true macro											*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : an integer											(int)	*/
/*				- LRT_SUCCESS if the lrt_true is evaluated as true			*/
/*				- LRT_FAILURE otherwise										*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Test lrt_true															*/
/* ------------------------------------------------------------------------ */

int		lrtest_true_macro							(void)
{
	return ((lrt_true) ? LRT_SUCCESS : LRT_FAILURE);
}

