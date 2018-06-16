/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_assert.c                                       LRTEST_ASSERT    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-15    by ChocolateCharlie                         */
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
/*	Name : lrtest_assert()													*/
/*	Goal :	*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : none												(void)	*/
/*	Returns : a boolean											(lrt_bool)	*/
/*				- lrt_true if all tests passed								*/
/*				- lrt_false otherwise										*/
/* ------------------------------------------------------------------------ */
/*	Description :	*/
/* ------------------------------------------------------------------------ */
/*	WARNING : This function does not test the behavior of the lrt_assert()	*/
/*	macro when it is expected to abort.										*/
/* ------------------------------------------------------------------------ */

lrt_bool		lrtest_assert	()
{
	return(lrtest_assert_macro()
		&& lrtest_failure_macro()
		&& lrtest_success_macro());
}

