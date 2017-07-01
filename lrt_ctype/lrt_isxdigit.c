/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrt_isxdigit.c						LRT_CTYPE	*/
/*										*/
/*	By :	ChocolateCharlie						*/
/*	Updated :	2017-07-01	by : ChocolateCharlie			*/
/*										*/
/* **************************************************************************** */

/*
** Include lrt_ctype.h in order to use lrt_isdigit()
*/

#include "lrt_ctype.h"

/* **************************************************************************** */
/*	Name : lrt_isxdigit							*/
/*	Goal : test for a hexadecimal digit					*/
/*	Original library : <ctype.h> - character operations			*/
/* ---------------------------------------------------------------------------- */
/*	Parameters : c, the character to test				(int)	*/
/*	Returns : an integer						(int)	*/
/*		- non-zero if c is a hexadecimal digit				*/
/*		- otherwise zero						*/
/* ---------------------------------------------------------------------------- */
/*	Errors : No errors are defined.						*/
/* ---------------------------------------------------------------------------- */
/*	Description :								*/
/*	This function shall test whether c is a character of class xdigit in	*/
/*	the standard C locale.							*/
/*	The c argument is an int, the value of which the application shall	*/
/*	ensure is representable as an unsigned char or equal to the value of	*/
/*	the macro EOF. If the argument has any other value, the behavior is	*/
/*	undefined.								*/
/*										*/
/* **************************************************************************** */

int	lrt_isxdigit	(int c)
{
	return (lrt_isdigit(c) || ((c > 0100) && (c < 0107)));
}

