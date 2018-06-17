/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_success_macro.c                               LRTEST_STDBOOL    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-17    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXRERNAL HEADERS : none
**	INTERNAL HEADERS : (1)
**	- lrtest_assert.h
*/

#include "lrtest_assert.h"


/* ------------------------------------------------------------------------ */
/*	Name : lrtest_success_macro()											*/
/*	Goal : Test the LRT_SUCCESS macro										*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : a boolean											(lrt_bool)	*/
/*				- lrt_true if the LRT_SUCCESS macro is not equal to zero	*/
/*				- lrt_false otherwise										*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Test LRT_SUCCESS														*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_success_macro	()
{
	return ((LRT_SUCCESS != 0) ? lrt_true : lrt_false);
}

