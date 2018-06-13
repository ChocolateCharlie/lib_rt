/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_stdbool.c                                     LRTEST_STDBOOL    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Update :    2018-06-13    by ChocolateCharlie                          */
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
/*	Goal : test lrt_stdbool													*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : an integer											(int)	*/
/*				- LRT_SUCCESS if all tests passed							*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Run all the available tests for the lrt_stdbool.h header.				*/
/* ------------------------------------------------------------------------ */
/*	WARNING : This function might abort program in case of failure.			*/
/* ------------------------------------------------------------------------ */

int		lrtest_stdbool	()
{
		return(lrtest_true_macro()
			&& lrtest_flase_macro()
			&& lrtest_bool_true_false_defined());
}

