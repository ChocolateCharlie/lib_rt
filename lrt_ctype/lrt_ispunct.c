/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrt_ispunct.c						LRT_CTYPE	*/
/*										*/
/*	By :	ChocolateCharlie						*/
/*	Updated :	2017-07-01	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/*
** Include lrt_ctype.h in order to use lrt_isgraph() and lrt_isalnum()
*/

#include "lrt_ctype.h"

/* **************************************************************************** */
/*	Name : lrt_ispunct							*/
/*	Goal : test for a punctuation character					*/
/*	Original library : <ctype.h> - character operations			*/
/* ---------------------------------------------------------------------------- */
/*	Parameters : c, the character to test				(int)	*/
/*	Returns : an integer						(int)	*/
/*		- non-zero if c is a punctuation character			*/
/*		- otherwise zero						*/
/* ---------------------------------------------------------------------------- */
/*	Errors : No errors are defined.						*/
/* ---------------------------------------------------------------------------- */
/*	Description :								*/
/*	This function shall test whether c is a character of class punct in the	*/
/*	standard C locale.							*/
/*	The c argument is an int, the value of which the application shall	*/
/*	ensure is representable as an unsigned char or equal to the value of	*/
/*	the macro EOF. If the argument has any other value, the behavio is	*/
/*	undefined.								*/
/*										*/
/* **************************************************************************** */

int	lrt_ispunct	(int c)
{
	return (lrt_isgraph(c) && (!lrt_isalnum(c)));
}

