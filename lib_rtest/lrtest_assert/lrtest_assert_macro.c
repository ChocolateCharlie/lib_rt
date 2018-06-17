/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_assert_macro.c                                 LRTEST_ASSERT    */
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
/*	Name : lrtest_assert_macro												*/
/*	Goal : Test the lrt_assert macro										*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : a boolean											(lrt_bool)	*/
/*				- lrt_true if all tests passed								*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Test the lrt_assert macro												*/
/* ------------------------------------------------------------------------ */
/*	WARNING : This function might abort program in case of failure.			*/
/*	This function does not test the behavior of the lrt_assert() macro when	*/
/*	it is expected to abort.												*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert_macro	()
{
	return(lrtest_assert_when_false_and_ndebug_dont_raise()
		&& lrtest_assert_when_true_and_ndebug_dont_raise()
		&& lrtest_assert_when_true_and_not_ndebug_dont_raise());
}

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_assert_when_false_and_ndebug_dont_raise					*/
/*	Goal : test lrt_assert when the expression is false and when LRT_NDEBUG	*/
/*	is defined (no abortion is expected)									*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : a boolean											(lrt_bool)	*/
/*				- lrt_true if lrt_assert did not abort						*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Test the lrt_assert macro when the expression is false (1 == 0) and when*/
/*	LRT_NDEBUG is defined : lrt_assert is not expected to abort.			*/
/*	This test does not require LRT_NDEBUG to be previously defined.			*/
/* ------------------------------------------------------------------------ */
/*	WARNING : This function might abort program in case of failure.			*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert_when_false_and_ndebug_dont_raise	()
{
	lrt_bool	lrt_ndebug_defined;

	lrt_ndebug_defined = lrtest_init_lrt_ndebug_defined(lrt_true);

	printf("[LRTEST_ASSERT] Testing false expression	\
			when LRT_NDEBUG is defined :\t");
	lrt_assert(1 == 0);
	printf("OK\n");

	if (! lrt_ndebug_defined)
	{
		#undef LRT_NDEBUG
	}

	return (lrt_true);
}

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_assert_when_false_and_not_ndebug_raise					*/
/*	Goal : test lrt_assert when the expression is false and when LRT_NDEBUG	*/
/*	is not defined (abortion is expected)									*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : a boolean											(lrt_bool)	*/
/*				- lrt_false if lrt_assert did not abort						*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Test the lrt_assert macro when the expression is false (1 == 0) and when*/
/*	LRT_NDEBUG is not defined : lrt_assert is expected to abort.			*/
/*	If LRT_NDEBUG is defined before running this test, this function will	*/
/*	disable it, and then redefine it after the test using the following		*/
/*	expression :	#define	LRT_NDEBUG										*/
/*	Note that this is not the expected behavior, as the lrt_assert macro is	*/
/*	expected to abort.														*/
/* ------------------------------------------------------------------------ */
/*	WARNING : This function is expected to abort program.					*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert_when_false_and_not_ndebug_raise	()
{
	lrt_bool	lrt_ndebug_defined;

	lrt_ndebug_defined = lrtest_init_lrt_ndebug_defined(lrt_false);

	printf("[LRTEST_ASSERT] Testing false expression	\
			when LRT_NDEBUG is not defined.\n			\
			WARNING : The expected behavior is abortion.\n");
	lrt_assert(1 == 0);
	printf("Error, an abortion was expected.\n");

	if (lrt_ndebug_defined)
	{
		#define LRT_NDEBUG
	}

	return (lrt_false);
}

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_asset_when_true_and_ndebug_dont_raise						*/
/*	Goal : test lrt_assert when the expression is true and when LRT_NDEBUG	*/
/*	is defined (no abortion is expected)									*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : a boolean											(lrt_bool)	*/
/*				- lrt_true if lrt_assert did not abort						*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Test the lrt_assert macro when the expression is true (1 == 1) and when */
/*	LRT_NDEBUG is defined : lrt_assert is not expected to abort.			*/
/*	This test does not require LRT_NDEBUG to be previously defined.			*/
/* ------------------------------------------------------------------------ */
/*	WARNING : This function might abort program in case of failure.			*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert_when_true_and_ndebug_dont_raise	()
{
	lrt_bool	lrt_ndebug_defined;

	lrt_ndebug_defined = lrtest_init_lrt_ndebug_defined(lrt_true);

	printf("[LRTEST_ASSERT] Testing true expression		\
			when LRT_NDEBUG is defined :\t");
	lrt_assert(1 == 1);
	printf("OK\n");

	if (! lrt_ndebug_defined)
	{
		#undef LRT_NDEBUG
	}

	return (lrt_true);
}

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_assert_when_true_and_not_ndebug_dont_raise				*/
/*	Goal : test lrt_assert when the expression is true and when LRT_NDEBUG	*/
/*	is not defined (abortion is expected)									*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : None												(void)	*/
/*	Returns : a boolean											(lrt_bool)	*/
/*				- lrt_true if lrt_assert did not abort						*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Test the lrt_assert macro when the expression is true (1 == 1) and when */
/*	LRT_NDEBUG is not defined : lrt_assert is not expected to abort.		*/
/*	If LRT_NDEBUG is defined before running this test, this function will	*/
/*	disable it, and then redefine it after the test using the following		*/
/*	expression :	#define	LRT_NDEBUG										*/
/* ------------------------------------------------------------------------ */
/*	WARNING : This function might abort program in case of failure.			*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert_when_true_and_not_ndebug_dont_raise	()
{
	lrt_bool	lrt_ndebug_defined;

	lrt_ndebug_defined = lrtest_init_lrt_ndebug_defined(lrt_false);

	printf("[LRTEST_ASSERT] Testing true expression		\
			when LRT_NEBUG is not defined :\t");
	lrt_assert(1 == 1);
	printf("OK\n");

	if (lrt_ndebug_defined)
	{
		#define LRT_NDEBUG
	}

	return (lrt_true);
}

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_init_lrt_ndebug_defined									*/
/*	Goal : test if LRT_NDEBUG is defined and change it's state if necessary	*/
/*	Original library : -													*/
/* ------------------------------------------------------------------------ */
/*	Parameters : - define_lrt_ndebug, a boolean					(lrt_bool)	*/
/*	Returns : a boolean											(lrt_bool)	*/
/*				- lrt_true if LRT_NDEBUG was originaly defined				*/
/*				- lrt_false otherwise										*/
/* ------------------------------------------------------------------------ */
/*	Errors : No errors are defined.											*/
/* ------------------------------------------------------------------------ */
/*	Description :															*/
/*	Return lrt_true if LRT_NDEBUG is originaly defined, lrt_false otherwise.*/
/*	Define or undefine LRT_NDEBUG depending on the value of					*/
/*	define_lrt_ndebug. If define_lrt_ndebug is lrt_true and LRT_NDEBUG is	*/
/*	defined or define_lrt_ndebug is lrt_false and lrt_NDEBUG is not defined	*/
/*	then the state of lRT_NDEBUG will not change.							*/
/* ------------------------------------------------------------------------ */
/*	WARNING : This function was written to simplify the tests of the		*/
/*	lrt_assert macro, and should not be used for another purpose.			*/
/*	Calling this function might change the state of the LRT_NDEBUG macro.	*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_init_lrt_ndebug_defined	(lrt_bool define_lrt_ndebug)
{
	if (define_lrt_ndebug)
	{
		#ifdef LRT_NDEBUG
		return (lrt_true);
		#else
		#define	LRT_NDEBUG
		return (lrt_false);
		#endif
	}
	else
	{
		#ifndef LRT_NDEBUG
		return (lrt_false);
		#else
		#undef LRT_NDEBUG
		return (lrt_true);
		#endif
	}
}

