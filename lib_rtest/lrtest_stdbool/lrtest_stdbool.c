/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_stdbool.c                                     LRTEST_STDBOOL    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Update :    2018-06-17    by ChocolateCharlie                          */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXTERNAL HEADERS : none
**	INTERNAL HEADERS : (1)
**	- lrtest_stdbool.h
*/

#include "lrtest_stdbool.h"


/* ------------------------------------------------------------------------ */
/*	Name : lrtest_stdbool													*/
/*	Goal : Run all the tests available for the lrt_stdbool header			*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : an integer											(int)	*/
/*				- LRT_SUCCESS if all tests passed							*/
/*				- LRT_FAILURE otherwise										*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Run all the available tests for the lrt_stdbool header.					*/
/* ------------------------------------------------------------------------ */

int		lrtest_stdbool							(void)
{
	return((lrtest_bool_true_false_defined_macro() &&
			lrtest_false_macro() &&
			lrtest_true_macro()) ? LRT_SUCCESS : LRT_FAILURE);
}

