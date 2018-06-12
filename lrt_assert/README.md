## THE LIB_RT PROJECT - DOCUMENTATION : LRT_ASSERT
Updated : 2018-06-12 by : ChocolateCharlie

This file contains informations about :

	- the <lrt_assert.h> header
	- the lrt_assert() macro
	- the LRT_FAILURE and LRT_SUCCESS macros

Most of these informations are issued from :
[The Open Group Base Specifications Issue 7, 2018 edition,
IEEE Std 1003.1-2017 (Revision of IEEE Std 1003.1-2008)
Copyright © 2001-2018 The IEEE and The Open Group
](pubs.opengroup.org/onlinepubs/9699919799)

**/!\\ WARNING :** ```<lrt_assert.h>``` relies on ```<stdio.h>``` and
```<stdlib.h>```.

### lrt_assert.h - verify program assertion

Description : define the ```lrt_assert()``` macro

The ```lrt_assert()``` macro refers to the macro ```LRT_NDEBUG``` which is not
defined in the header : if ```LRT_NDEBUG``` is defined as a macro name before
the inclusion of this header, the ```lrt_assert()``` macro shall be defined
simply as :
```C
#define lrt_assert(ignore)((void) 0)
```
which will have for effect to disable assertions.

Otherwise, the macro behaves as described in ```lrt_assert()```.
The ```lrt_assert()``` macro shall be redefined according to the current state
of ```LRT_NDEBUG``` each time ```<lrt_assert.h>``` is included.

**/!\\ WARNING :** if the macro definition is suppressed in order to access an
actual function, the behavior is undefined.

### lrt_assert - insert program diagnostics

Synopsis :
```C
void lrt_assert (scalar expression);
```

Description :
If expression (which shall have a scalar type) is false (that is, compares
equal to 0), ```lrt_assert()``` shall write informations about the particular
call that failed on ```stderr``` and shall call ```abort()```.
The informations written about the call that failed shall include :

	- the text of the argument
	- the name of the source file (__FILE__)
	- the source file line number (__LINE__)
	- the name of the enclosing function (__func__)

Forcing a definition of the name ```LRT_NDEBUG```, either from the compiler
command line or with the preprocessor control statement :
```C
#define LRT_NDEBUG
```
ahead of the ```#include <lrt_assert.h>``` statement shall stop assertions
from being compiled into the program.

Return value : The ```lrt_assert()``` macro shall not return a value.

Errors : No errors are defined.

### LRT_FAILURE and LRT_SUCCESS - state macros

- ```LRT_FAILURE``` : an integer (int) equal to zero
- ```LRT_SUCCESS``` : an integer (int) equal to non-zero

