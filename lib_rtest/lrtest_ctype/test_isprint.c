/* ************************************************************************** */
/*                                                                  LIB_RT    */
/*    lrtest_isprint.c                                                        */
/*                                                                            */
/*    By: ChocolateCharlie                                                    */
/*    Updated: 2017-04-07 19:26 by ChocolateCharlie                           */
/*                                                                            */
/* ************************************************************************** */

/*
**  Include:
**    - string.h    in order to use EOF macro
**    - lib_rt.h    in order to use lrt_isprint()
**    - lib_rtest.h in order to use lrt_assert()
*/

#include <string.h>
#include "lib_rt.h"
#include "lib_rtest.h"

/* ************************************************************************** */
/*  Name: lrtest_isprint                                                      */
/*  Goal: test lrt_isprint                                                    */
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

int     lrtest_isprint  (void)
{
    int i;

    i = EOF;
/* EOF macro */
    lrt_assert(!lrt_isprint(i));

    i = -1;
    while (++i < 256)
    {
/* True assertions */
        if ((i > 037) && (i < 0177))
        { lrt_assert(lrt_isprint(i)); }
/* False assertions */
        else
        { lrt_assert(!lrt_isprint(i)); }
    }

    return (1);
}
