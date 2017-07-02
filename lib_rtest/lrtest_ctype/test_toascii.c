/* ************************************************************************** */
/*                                                                  LIB_RT    */
/*    lrtest_toascii.c                                                        */
/*                                                                            */
/*    By: ChocolateCharlie                                                    */
/*    Updated: 2017-04-07 20:37 by ChocolateCharlie                           */
/*                                                                            */
/* ************************************************************************** */

/*
**  Include:
**    - lib_rt.h    in order to use lrt_isascii() and lrt_toascii()
**    - lib_rtest.h in order to use lrt_assert()
*/

#include "lib_rt.h"
#include "lib_rtest.h"

/* ************************************************************************** */
/*  Name: lrtest_toascii                                                      */
/*  Goal: test lrt_toascii                                                    */
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

int     lrtest_toascii  (void)
{
    int i;

    i = -2147483649;

    while (++i < 2147483648)
    {
        lrt_assert(lrt_isascii(lrt_toascii(i)));
    }

    return (1);
}
