/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_bool_true_false_defined_macro.c               LRTEST_STDBOOL    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-14    by ChocolateCharlie                         */
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
/*	Name : lrtest_bool_true_false_defined_macro()							*/
/*	Goal : Test the LRT_BOOL_TRUE_FALSE_DEFINED macro						*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : an integer											(int)	*/
/*				- LRT_SUCCESS if the macro's value is 1						*/
/*				- LRT_FAILURE otherwise										*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Test if LRT_BOOL_TRUE_FALSE_DEFINED is equal to 1.						*/
/* ------------------------------------------------------------------------ */

int		lrtest_bool_true_false_defined_macro	()
{
	return ((LRT_BOOL_TRUE_FALSE_DEFINED == 1) ? LRT_SUCCESS : LRT_FAILURE);
}

