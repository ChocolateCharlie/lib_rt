/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrt_isdigit.c						LRT_CTYPE	*/
/*										*/
/*	By : ChocolateCharlie							*/
/*	Updated :	2017-07-01	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/* **************************************************************************** */
/*	Name : lrt_isdigit							*/
/*	Goal : test for a digit							*/
/*	Original library : <ctype.h> - character operations			*/
/* ---------------------------------------------------------------------------- */
/*	Parameters : c, the character to test				(int)	*/
/*	Returns : an integer						(int)	*/
/*		- non-zero if c is a digit					*/
/*		- otherwise zero						*/
/* ---------------------------------------------------------------------------- */
/*	Errors : No errors are defined.						*/
/* ---------------------------------------------------------------------------- */
/*	Description :								*/
/*	This fuction shall test whether c is a character of class figit in the	*/
/*	standard C locale.							*/
/*	The c argument is an int, the value of which the application shall	*/
/*	ensure is representable as an unsigned char or equal to the value of	*/
/*	the macro EOF. If the argument has any other value, the behavior is	*/
/*	undefined.								*/
/*										*/
/* **************************************************************************** */

int	lrt_isdigit	(int c)
{
	return ((c >= (int)'0') && (c <= (int)'9'));
}

