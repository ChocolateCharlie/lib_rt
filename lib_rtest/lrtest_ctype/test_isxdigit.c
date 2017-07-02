/* ************************************************************************** */
/*                                                                  LIB_RT    */
/*    lrtest_isxdigit.c                                                       */
/*                                                                            */
/*    By: ChocolateCharlie                                                    */
/*    Updated: 2017-04-07 20:29 by ChocolateCharlie                           */
/*                                                                            */
/* ************************************************************************** */

/*
**  Include:
**    - string.h    in order to use EOF macro
**    - lib_rt.h    in order to use lrt_isxdigit()
**    - lib_rtest.h in order to use lrt_assert()
*/

#include <string.h>
#include "lib_rt.h"
#include "lib_rtest.h"

/* ************************************************************************** */
/*  Name: lrtest_isxdigit                                                     */
/*  Goal: test lrt_isxdigit                                                   */
/*  Original library: -                                                       */
/* -------------------------------------------------------------------------- */
/*  Parameters: Nothing                                             (void)    */
/*  Returns: an integer                                              (int)    */
/*    - non-zero if all tests passed                                          */
/* -------------------------------------------------------------------------- */
/*  Errors: No errors are defined.                                            */
/* -------------------------------------------------------------------------- */
/*  Description: -                                                            */
/* ************************************************************************** */

int     lrtest_isxdigit (void)
{
    int i;

    i = EOF;
/* EOF macro */
    lrt_assert(!lrt_isxdigit(i));

    i = -1;
    while (++i < 256)
    {
/* True assertions */
        if ((i >= '0' && i <= '9')
         || (i >= 'A' && i <= 'F'))
        { lrt_assert(lrt_isxdigit(i)); }
/* False assertions */
        else
        { lrt_assert(!lrt_isxdigit(i)); }
    }

    return (1);
}
