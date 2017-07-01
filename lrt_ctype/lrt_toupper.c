/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrt_toupper.c						LRT_CTYPE	*/
/*										*/
/*	By :	ChocolateCharlie						*/
/*	Updated :	2017-07-01	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/*
** Include lrt_ctype.h in order to use lrt_islower()
*/

#include "lrt_ctype.h"

/* **************************************************************************** */
/*	Name : lrt_toupper							*/
/*	Goal : convert a letter to upper-case, if possible			*/
/*	Original library : <ctype.h> - character operations			*/
/* ---------------------------------------------------------------------------- */
/*	Parameters : c, the character to test				(int)	*/
/*	Returns : an integer						(int)	*/
/*		- the upper-case letter corresponding to the argument passed	*/
/*		- otherwise, the argument unchanged				*/
/* ---------------------------------------------------------------------------- */
/*	Errors : No errors are defined.						*/
/* ---------------------------------------------------------------------------- */
/*	Description :								*/
/*	This function have as a domain type int, the value of which is		*/
/*	representable as an unsigned char or the value of EOF.			*/
/*	If the argument has any other value, the behavior is undefined.		*/
/*										*/
/* **************************************************************************** */

int	lrt_toupper	(int c)
{
	return (lrt_islower(c) ? (c - 32) : c);
}

