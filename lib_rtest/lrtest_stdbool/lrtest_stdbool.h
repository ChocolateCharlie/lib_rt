/* ************************************************************************* */
/*                                                                           */
/*                                                     THE LIB_RT PROJECT    */
/*    lrtest_stdbool.h                                     LRTEST_STDBOOL    */
/*                                                                           */
/*    By :    ChocolateCharlie                                               */
/*    Updated :    2018-06-13    by ChocolateCharlie                         */
/*                                                                           */
/* ************************************************************************* */

#ifndef	LRTEST_STDBOOL_H_DEFINED
#define	LRTEST_STDBOOL_H_DEFINED

/*
** Include :
**	EXTERNAL HEADERS : none
**	INTERNAL HEADERS : (2)
**	- lrt_assert.h
**	- lrt_stdbool.h
*/

#include "../../lrt_assert/lrt_assert.h"
#include "../../lrt_stdbool/lrt_stdbool.h"


/*
** Do all the tests available for this header
*/

int		lrtest_stdbool();

/*
** Testing the lrt_true, lrt_false and LRT_BOOL_TRUE_FALSE_DEFINED macros
*/

int		lrtest_bool_true_false_defined_macro();
int		lrtest_false_macro();
int		lrtest_true_macro();

#endif

