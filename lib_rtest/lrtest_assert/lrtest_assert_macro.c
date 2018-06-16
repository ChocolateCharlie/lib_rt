/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_assert_macro.c                                 LRTEST_ASSERT    */
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
/*	Name : lrtest_assert_macro()											*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert_macro()
{
	return(lrtest_assert_when_false_and_ndebug_dont_raise()
		&& lrtest_assert_when_true_and_ndebug_dont_raise()
		&& lrtest_assert_when_true_and_not_ndebug_dont_raise());
}

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_assert_when_false_and_ndebug_dont_raise()					*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert_when_false_and_ndebug_dont_raise	()
{
	lrt_bool	lrt_ndebug_defined;

	lrt_ndebug_defined = lrtest_init_lrt_ndebug_defined(lrt_true);

	printf("[LRTEST_ASSERT] Testing false expression	\
			when LRT_NDEBUG is defined :\t");
	lrt_assert(1==0);
	printf("OK\n");

	if (! lrt_ndebug_defined)
	{
		#undef LRT_NDEBUG
	}

	return (lrt_true);
}

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_when_false_and_not_ndebug_raise()							*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert_when_false_and_not_ndebug_raise	()
{
	lrt_bool	lrt_ndebug_defined;

	lrt_ndebug_defined = lrtest_init_lrt_ndebug_defined(lrt_false);

	printf("[LRTEST_ASSERT] Testing false expression	\
			when LRT_NDEBUG is not defined.\n			\
			WARNING : The expected behavior is abortion.\n");
	lrt_assert(1==0);
	printf("Error, an abortion was expected.\n");

	if (lrt_ndebug_defined)
	{
		#define LRT_NDEBUG
	}

	return (lrt_false);
}

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_when_true_and_ndebug_dont_raise()							*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert_when_true_and_ndebug_dont_raise	()
{
	lrt_bool	lrt_ndebug_defined;

	lrt_ndebug_defined = lrtest_init_lrt_ndebug_defined(lrt_true);

	printf("[LRTEST_ASSERT] Testing true expression		\
			when LRT_NDEBUG is defined :\t");
	lrt_assert(1==1);
	printf("OK\n");

	if (! lrt_ndebug_defined)
	{
		#undef LRT_NDEBUG
	}

	return (lrt_true);
}

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_assert_when_true_and_not_ndebug_dont_raise()				*/
/* ------------------------------------------------------------------------ */

lrt_bool	lrtest_assert_when_true_and_not_ndebug_dont_raise	()
{
	lrt_bool	lrt_ndebug_defined;

	lrt_ndebug_defined = lrtest_init_lrt_ndebug_defined(lrt_false);

	printf("[LRTEST_ASSERT] Testing true expression		\
			when LRT_NEBUG is not defined :\t");
	lrt_assert(1==1);
	printf("OK\n");

	if (lrt_ndebug_defined)
	{
		#define LRT_NDEBUG
	}

	return (lrt_true);
}

/* ------------------------------------------------------------------------ */
/*	Name : lrtest_init_lrt_ndebug_defined()									*/
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

