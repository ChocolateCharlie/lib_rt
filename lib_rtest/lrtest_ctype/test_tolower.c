/* ************************************************************************** */
/*                                                                  LIB_RT    */
/*    lrtest_tolower.c                                                        */
/*                                                                            */
/*    By: ChocolateCharlie                                                    */
/*    Updated: 2017-04-07 20:45 by ChocolateCharlie                           */
/*                                                                            */
/* ************************************************************************** */

/*
**  Include:
**    - string.h    in order to use EOF macro
**    - lib_rt.h    in order to use lrt_isalpha(), lrt_islower() and lrt_tolower()
**    - lib_rtest.h in order to use lrt_assert()
*/

#include <string.h>
#include "lib_rt.h"
#include "lib_rtest.h"

/* ************************************************************************** */
/*  Name: lrtest_tolower                                                      */
/*  Goal: test lrt_tolower                                                    */
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

int     lrtest_tolower  (void)
{
    int i;

    i = EOF;

    lrt_assert(!lrt_islower(lrt_tolower(i)));

    i = -1;

    while (++i < 256)
    {
        if (lrt_isalpha(i))
        { lrt_assert(lrt_islower(lrt_tolower(i))); }
        else
        { lrt_assert(!lrt_islower(lrt_tolower(i))); }
    }

    return (1);
}
