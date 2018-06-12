# lib_rt
A small C library with usual functions, freely inspired by [The Open Group Base Specifications Issue 7, 2018 edition](http://pubs.opengroup.org/onlinepubs/9699919799/).

**/!\\ Warning :** some parts of the documentation may temporary not be up to date, sorry :'(

## How can I use it ?
If you want to use the full library, including all modules can be done typing a single line :
``` C
#include "lib_rt/lib_rt.h"
```
However, this will not include the testing module. See the **_lib_rtest_** documentation for this module.

If you want to use only a few modules, it is possible to do more specific includes. You may refer to the corresponding documentation, or have a look at the list of the available modules in the next section.

**/!\\ Warning :** though parts of ```<stdio.h>``` are re-implemented, this library relies on it, and may rely in the future on other libraries.

This library also relies on ```<stdlib.h>``` for the **_lrt_assert_** module.

## What are the modules currently available ?
### lrt_assert
A free implementation of ```<assert.h>```.

To include this header, use :
``` C
#include "lib_rt/lrt_assert/lrt_assert.h"
```

### lrt_ctype (documentation may not be up to date)
A free implementation of ```<ctype.h>```.

To include this module, use :
```C
#include "lib_rt/lrt_ctype/lrt_ctype.h"
```
Tests are available separately in the **_lrtest_ctype_** repository (see **_lib_rtest_**).

### lrt_limits.h (partially implemented)
A free implementation of ```<limits.h>```.

To include this header, use :
```C
#include "lib_rt/lrt_limits.h"
```

### lrt_stdio.h (work in progress)
A free and partial implementation of ```<stdio.h>```.

To include this header, use :
```C
#include "lib_rt/lrt_stdio.h"
```

### lib_rtest (documentation may not be up to date)
Testing module of **_lib_rt_**.

To include all headers and sub-modules of this module, use :
```C
#include "lib_rt/lib_rtest/lib_rtest.h"
```

#### lrtest_ctype (documentation may not be up to date)
Testing functions for **_lrt_ctype_**.

To include this sub-module, use :
```C
#include "lib_rt/lib_rtest/lrt_ctype/lrt_ctype.h"
```
