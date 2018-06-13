/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_false_macro.c                                 LRTEST_STDBOOL    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-13    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

/*
** Include :
**	EXRERNAL HEADERS : none
**	INTERNAL HEADERS : (1)
**	- lrtest_stdbool.h
*/

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_false_macro()												*/
/*	Goal : Test the lrt_false macro											*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : an integer											(int)	*/
/*				- LRT_SUCCESS if the lrt_false is evaluated as false		*/
/*				- LRT_FAILURE otherwise										*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Test lrt_false.															*/
/* ------------------------------------------------------------------------ */

int		lrtest_false_macro	()
{
	return ((!lrt_false) ? LRT_SUCCESS : LRT_FAILURE);
}

