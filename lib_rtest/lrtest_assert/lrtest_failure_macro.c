/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_failure_macro.c                               LRTEST_STDBOOL    */
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
/*	Name : lrtest_failure_macro()											*/
/*	Goal : Test the LRT_FAILURE macro										*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : a boolean											(lrt_bool)	*/
/*				- lrt_true if the LRT_FAILURE macro is equal to zero		*/
/*				- lrt_false otherwise										*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Test LRT_FAILURE														*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_failure_macro	()
{
	return ((LRT_FAILURE == 0) ? lrt_true : lrt_false);
}

