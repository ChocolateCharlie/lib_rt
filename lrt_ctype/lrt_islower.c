/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrt_islower.c						LRT_CTYPE	*/
/*										*/
/*	By : ChocolateCharlie							*/
/*	Updated :	2017-07-01	by : ChocolateCharlie			*/
/*										*/
/* **************************************************************************** */

/* **************************************************************************** */
/*	Name : lrt_islower							*/
/*	Goal : test for a lower-case character					*/
/*	Original library : <ctype.h> - character operations			*/
/* ---------------------------------------------------------------------------- */
/*	Parameters : c, the character to test				(int)	*/
/*	Returns : an integer						(int)	*/
/*		- non-zero if c is a lower-case character			*/
/*		- otherwise zero						*/
/* ---------------------------------------------------------------------------- */
/*	Errors : No errors are defined.						*/
/* ---------------------------------------------------------------------------- */
/*	Description :								*/
/*	This function shall test whether c is a character of class lower in the	*/
/*	standard C locale.							*/
/*	The c argument is and int, the value of which the application shall	*/
/*	ensure is representable as an unsigned char or equal to the value of	*/
/*	the macro EOF. If the argument has any other value, the behavior is	*/
/*	undefined.								*/
/*										*/
/* **************************************************************************** */

int	lrt_islower	(int c)
{
	return ((c > 0140) && (c < 0173));
}

