/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lib_rtest.c                                               LIB_RTEST    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-17    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXTERNAL HEADERS : none
**	INTERNAL HEADERS : (1)
**	- lib_rtest.h
*/

#include "lib_rtest.h"


/* ------------------------------------------------------------------------ */
/*	Name : lib_rtest														*/
/*	Goal : Run most of the tests available in the lib_rtest					*/
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
/*	Run most of the tests available in the lib_rtest for the lib_rt library.*/
/*	Tests that cannot be automated (abortion expected, manual intervention	*/
/*	needed etc.) will not be run.											*/
/* ------------------------------------------------------------------------ */
/*	WARNING : This function might abort program in case of failure.			*/
/* ------------------------------------------------------------------------ */

int		lib_rtest	(void)
{
	return ( ( lrtest_assert
			&& lrtest_stdbool) ? LRT_SUCCESS : LRT_FAILURE);
}

