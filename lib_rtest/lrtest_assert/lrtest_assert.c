/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_assert.c                                       LRTEST_ASSERT    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-17    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXTERNAL HEADERS : none
**	INTERNAL HEADERS : (1)
**	- lrtest_assert.h
*/

#include "lrtest_assert.h"


/* ------------------------------------------------------------------------ */
/*	Name : lrtest_assert													*/
/*	Goal : Run most of the tests available for the lrt_assert header		*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : a boolean											(lrt_bool)	*/
/*				- lrt_true if all tests passed								*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Run most of the tests available for the lrt_assert header.				*/
/*	Tests that cannot be automated (abortion expected) will not be run.		*/
/* ------------------------------------------------------------------------ */
/*	WARNING : This function might abort program in case of failure.			*/
/*	This function does not test the behavior of the lrt_assert() macro when	*/
/*	it is expected to abort.												*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert										(void)
{
	return(lrtest_assert_macro()
		&& lrtest_failure_macro()
		&& lrtest_success_macro());
}

