/* **************************************************************************** */
/*										*/
/*							THE LIB_RT PROJECT	*/
/*	lrt_toascii.c						LRT_CTYPE	*/
/*										*/
/*	By : ChocolateCharlie							*/
/*	Updated :	2017-07-01	by :	ChocolateCharlie		*/
/*										*/
/* **************************************************************************** */

/* **************************************************************************** */
/*	Name : lrt_toascii							*/
/*	Goal : convert an integer to a 7-bit ASCII character			*/
/*	Original library : <ctype.h> - character operations			*/
/* ---------------------------------------------------------------------------- */
/*	Parameters : c, the character to test				(int)	*/
/*	Returns : the value (c &0x7f)					(int)	*/
/* ---------------------------------------------------------------------------- */
/*	Errors : No errors are defined.						*/
/* ---------------------------------------------------------------------------- */
/*	Description :								*/
/*	This function converts c to a 7-bit unsigned char value that fits into	*/
/*	the ASCII character set, by clearing the high-order bits.		*/
/*										*/
/* **************************************************************************** */

int	lrt_toascii	(int c)
{
	return (c &0x7f);
}

