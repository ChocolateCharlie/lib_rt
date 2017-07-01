/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrt_isascii.c						LRT_CTYPE	*/
/*										*/
/*	By : ChocolateCharlie							*/
/*	Updated :	2017-07-01	by : ChocolateCharlie			*/
/*										*/
/* **************************************************************************** */

/* **************************************************************************** */
/*	Name : lrt_is-ascii							*/
/*	Goal : test for a 7-bit US-ASCII character				*/
/*	Original library : <ctype.h> - character operations			*/
/* ---------------------------------------------------------------------------- */
/*	Parameters : c, the character to test				(int)	*/
/*	Returns : an integer						(int)	*/
/*		- non-zero if c is a 7-bit US-ASCII character code between 0	*/
/*			and octal 0177 inclusive				*/
/*		- otherwise zero						*/
/* ---------------------------------------------------------------------------- */
/*	Errors : No errors are defined.						*/
/* ---------------------------------------------------------------------------- */
/*	Description :								*/
/*	This function shall test whether c is a 7-bit US-ASCII character code.	*/
/*	It is defined on all integer values.					*/
/* **************************************************************************** */

int	lrt_isascii	(int c)
{
	return ((c >= 0) && (c <= 0177));
}

