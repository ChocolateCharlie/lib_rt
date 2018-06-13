/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_assert.h                                       LRTEST_ASSERT    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-13     by ChocolateCharlie                        */
/*                                                                           */
/* ************************************************************************* */

#ifndef	LRTEST_ASSERT_H_INCLUDED
#define	LRTEST_ASSERT_H_INCLUDED

/*
** Include :
**	EXTERNAL HEADERS : (1)
**	- stdio.h	in order to use printf()
**	INTERNAL HEADERS : (2)
**	-lrt_assert.h	the tested header
**	-lrt_stdbool.h	in order to use booleans
*/

#include <stdio.h>
#include "../../lrt_assert/lrt_assert.h"
#include "../../lrt_stdbool/lrt_stdbool.h"

lrt_bool	lrtest_assert_h();

/*
** Testing the assert() macro
*/
lrt_bool	lrtest_assert();
lrt_bool	lrtest_assert_when_false_and_ndebug_dont_raise();
lrt_bool	lrtest_assert_when_false_and_not_ndebug__raise();
lrt_bool	lrtest_assert_when_true_and_ndebug_dont_raise();
lrt_bool	lrttest_assert_when_true_and_not_ndebug_dont_raise();

/*
** Testing the LRT_FAILURE and LRT_SUCCESS macro
*/
lrt_bool	lrtest_failure_macro();
lrt_bool	lrtest_success_macro();

#endif

