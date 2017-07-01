/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrt_iscntrl.c						LRT_CTYPE	*/
/*										*/
/*	By : ChocolateCharlie							*/
/*	Updated :	2017-07-01	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/* **************************************************************************** */
/*	Name : lrt_iscntrl							*/
/*	Goal : test for a control character					*/
/*	Original library : <ctype.h> - character operations			*/
/* ---------------------------------------------------------------------------- */
/*	Parameters : c, the character to test				(int)	*/
/*	Returns : an integer						(int)	*/
/*		- non-zero if c is a control character				*/
/*		- otherwise zero						*/
/* ---------------------------------------------------------------------------- */
/*	Errors : No errors are defined.						*/
/* ---------------------------------------------------------------------------- */
/*	Description :								*/
/*	This function shall test whether c is a character of class cntrl in the	*/
/*	standard C locale.							*/
/*	The c argument is an int, the value of which the application shall	*/
/*	ensure is representable as an unsigned char of equal to the value of	*/
/*	the macro EOF. If the argument has any other value, the behavior is	*/
/*	undefined.								*/
/*										*/
/* **************************************************************************** */

int	lrt_iscntrl	(int c)
{
	return (((c >= 0) && (c < 040)) || (c == 0177));
}

