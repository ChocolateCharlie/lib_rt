/* ******************************************************************** */
/*									*/
/*						THE LIB_RT PROJECT	*/
/*	lrt_ctype.h					LRT_CTYPE	*/
/*									*/
/*	By :	ChocolateCharlie					*/
/*	Updated :	2017-07-01	by :	ChocolateCharlie	*/
/*									*/
/* ******************************************************************** */

#ifndef	LRT_CTYPE_H_INCLUDED
#define	LRT_CTYPE_H_INCLUDED

/*
**	Character classification routines
*/

int	lrt_isalnum	(int c);
int	lrt_isalpha	(int c);
int	lrt_isascii	(int c);
int	lrt_isblank	(int c);
int	lrt_iscntrl	(int c);
int	lrt_isdigit	(int c);
int	lrt_isgraph	(int c);
int	lrt_islower	(int c);
int	lrt_isprint	(int c);
int	lrt_ispunct	(int c);
int	lrt_isspace	(int c);
int	lrt_isupper	(int c);
int	lrt_isxdigit	(int c);

/*
**	Character conversion routines
*/

int	lrt_toascii	(int c);
int	lrt_tolower	(int c);
int	lrt_toupper	(int c);

#endif

