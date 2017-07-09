# lib_rt
A small C library with usual functions.

To include all headers and modules, except the testing module, use ```#include "lib_rt/lib_rt.h"```.

See **_lib_rtest_** for the testing module.

### lrt_assert (work in progress)
A free implementation of *<assert.h>*

To include this header, use ```#include "lib_rt/lrt_assert/lrt_assert.h"```.

### lrt_ctype
A free implementation of *<ctype.h>*

To include this module, use ```#include "lib_rt/lrt_ctype/lrt_ctype.h"```.

Tests are available separately in the **_lrtest_ctype_** repository (see **_lib_rtest_**).

### lrt_limits.h (work in progress)
A free implementation of *<limits.h>*

To include this header, use ```#include "lib_rt/lrt_limits.h"```.

## lib_rtest
Testing module of **_lib_rt_**.

To include all headers and sub-modules of this module, use ```#include "lib_rt/lib_rtest/lib_rtest.h"```.

### lrtest_ctype
Testing functions for **_lrt_ctype_**.

To include this sub-module, use ```#include "lib_rt/lib_rtest/lrt_ctype/lrt_ctype.h"```.
