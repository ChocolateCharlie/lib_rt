/* ************************************************************************** */
/*                                                                  LIB_RT    */
/*    lrtest_ispunct.c                                                        */
/*                                                                            */
/*    By: ChocolateCharlie                                                    */
/*    Updated: 2017-04-07 19:33 by ChocolateCharlie                           */
/*                                                                            */
/* ************************************************************************** */

/*
**  Include:
**    - string.h    in order to use EOF macro
**    - lib_rt.h    in order to use lrt_ispunct()
**    - lib_rtest.h in order to use lrt_assert()
*/

#include <string.h>
#include "lib_rt.h"
#include "lib_rtest.h"

/* ************************************************************************** */
/*  Name: lrtest_ispunct                                                      */
/*  Goal: test lrt_ispunct                                                    */
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

int     lrtest_ispunct  (void)
{
    int i;

    i = EOF;
/* EOF macro */
    lrt_assert(!lrt_ispunct(i));

    i = -1;
    while (++i < 256)
    {
/* True assertions */
        if ((i > 32 && i < 48)
         || (i > 57 && i < 65)
         || (i > 90 && i < 97)
         || (i > 122 && i < 127))
        { lrt_assert(lrt_ispunct(i)); }
/* False assertions */
        else
        { lrt_assert(!lrt_ispunct(i)); }
    }

    return (1);
}
