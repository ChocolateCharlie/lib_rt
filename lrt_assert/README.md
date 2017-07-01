## THE LIB_RT PROJECT - DOCUMENTATION : LRT_ASSERT
Updated :	2017-07-01	by : ChocolateCharlie

This file contains informations about :

	- the <lrt_assert.h> header
	- the lrt_assert() macro

Most of these informations are issued from :	The OpenGroup Base Specifications Issue 7, IEEE Std 1003.1-2007, 2016 Edition,  Copyright © 2001-2016 The IEEE and The Open Group

### lrt_assert.h - verify program assertion

Description : define the lrt_assert() macro.

The lrt_assert() macro refers to the macro LRT_NDEBUG which is not defined in the header : if LRT_NDEBUG is defined as a macro name before the inclusion of this header, the lrt_assert() macro shall be defined simply as : #define lrt_assert(ignore)((void) 0), which will have for effect to disable assertions. Otherwise, the macro behaves as described in lrt_asser().
The lrt_assert() macro shall be redefined according to the current state of LRT_NDEBUG each time <lrt_assert.h> is included.

WARNING : If the macro definition is suppressed in order to access an actual function, the behavior is undefined.

### lrt_assert - insert program diagnostics

Synopsis : void lrt_assert (scalar expression);

Description :

If expression (which shall have a scalar type) is false (that is, compares equal to 0), lrt_assert() shall write informations about the particular call that failed on stderr and shall call abort(). The informations written about the call that failed shall include :

	- the text of the argument
	- the name of the source file (__FILE__)
	- the source file line number (__LINE__)
	- the name of the enclosing function (__func__)

Forcing a definition of the name LRT_NDEBUG, either from the compiler command line or with the preprocessor control statement #define LRT_NDEBUG ahead of the #include <lrt_assert.h> statement shall stop assertions from being compiled into the program.

Return value : The lrt_assert() macro shall not return a value.

Errors : No errors are defined.

