/* ************************************************************************** */
/*                                                                  LIB_RT    */
/*    lrtest_isupper.c                                                        */
/*                                                                            */
/*    By: ChocolateCharlie                                                    */
/*    Updated: 2017-04-07 20:26 by ChocolateCharlie                           */
/*                                                                            */
/* ************************************************************************** */

/*
**  Include:
**    - string.h    in order to use EOF macro
**    - lib_rt.h    in order to use lrt_isupper()
**    - lib_rtest.h in order to use lrt_assert()
*/

#include <string.h>
#include "lib_rt.h"
#include "lib_rtest.h"

/* ************************************************************************** */
/*  Name: lrtest_isupper                                                      */
/*  Goal: test lrt_isupper                                                    */
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

int     lrtest_isupper  (void)
{
    int i;

    i = EOF;
/* EOF macro */
    lrt_assert(!lrt_isupper(i));

    i = -1;
    while (++i < 256)
    {
/* True assertions */
        if (i >= 'A' && i <= 'Z')
        { lrt_assert(lrt_isupper(i)); }
/* False assertions */
        else
        { lrt_assert(!lrt_isupper(i)); }
    }

    return (1);
}
