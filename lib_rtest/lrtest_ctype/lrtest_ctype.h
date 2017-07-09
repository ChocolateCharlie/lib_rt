/* ******************************************************************** */
/*									*/
/*						THE LIB_RT PROJECT	*/
/*	lrtest_ctype.h					LRTEST_CTYPE	*/
/*									*/
/*	By : ChocolateCharlie						*/
/*	Updated :	2017-07-09	by :	ChocolateCharlie	*/
/*									*/
/* ******************************************************************** */

#ifndef	LRTEST_CTYPE_H_INCLUDED
#define	LRTEST_CTYPE_H_INCLUDED

/*
** Include :
**	- lrt_ctype.h	in order to test the functions
**	- lrt_assert.h	in order to use lrt_assert() and LRT_SUCCESS
**	- lrt_stdio.h	in order to use LRT_EOF
**	- lrt_limits.h	to avoid hardcoding limits
*/

#include "../../lrt_ctype/lrt_ctype.h"
#include "../../lrt_assert/lrt_assert.h"
#include "../../lrt_stdio/lrt_stdio.h"
#include "../../lrt_limits.h"

/* Testing function for all lrt_ctype */
int	lrtest_ctype	(void);

/* lrt_ctype testing functions */
int	lrtest_isalnum	(void);
int	lrtest_isalpha	(void);
int	lrtest_isascii	(void);
int	lrtest_isblank	(void);
int	lrtest_iscntrl	(void);
int	lrtest_isdigit	(void);
int	lrtest_isgraph	(void);
int	lrtest_islower	(void);
int	lrtest_isprint	(void);
int	lrtest_ispunct	(void);
int	lrtest_isspace	(void);
int	lrtest_isupper	(void);
int	lrtest_isxdigit	(void);
int	lrtest_toascii	(void);
int	lrtest_tolower	(void);
int	lrtest_toupper	(void);

#endif

