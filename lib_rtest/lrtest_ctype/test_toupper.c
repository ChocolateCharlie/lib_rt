/* ************************************************************************** */
/*                                                                  LIB_RT    */
/*    lrtest_toupper.c                                                        */
/*                                                                            */
/*    By: ChocolateCharlie                                                    */
/*    Updated: 2017-04-07 20:48 by ChocolateCharlie                           */
/*                                                                            */
/* ************************************************************************** */

/*
**  Include:
**    - string.h    in order to use EOF macro
**    - lib_rt.h    in order to use lrt_isalpha(), lrt_isupper() and lrt_toupper()
**    - lib_rtest.h in order to use lrt_assert()
*/

#include <string.h>
#include "lib_rt.h"
#include "lib_rtest.h"

/* ************************************************************************** */
/*  Name: lrtest_toupper                                                      */
/*  Goal: test lrt_toupper                                                    */
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

int     lrtest_toupper  (void)
{
    int i;

    i = EOF;

    lrt_assert(!lrt_isupper(lrt_toupper(i)));

    i = -1;

    while (++i < 256)
    {
        if (lrt_isalpha(i))
        { lrt_assert(lrt_isupper(lrt_toupper(i))); }
        else
        { lrt_assert(!lrt_isupper(lrt_toupper(i))); }
    }

    return (1);
}
