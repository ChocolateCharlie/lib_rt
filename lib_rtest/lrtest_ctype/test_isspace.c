/* ************************************************************************** */
/*                                                                  LIB_RT    */
/*    lrtest_isspace.c                                                        */
/*                                                                            */
/*    By: ChocolateCharlie                                                    */
/*    Updated: 2017-04-07 20:22 by ChocolateCharlie                           */
/*                                                                            */
/* ************************************************************************** */

/*
**  Include:
**    - string.h    in order to use EOF macro
**    - lib_rt.h    in order to use lrt_isspace()
**    - lib_rtest.h in order to use lrt_assert()
*/

#include <string.h>
#include "lib_rt.h"
#include "lib_rtest.h"

/* ************************************************************************** */
/*  Name: lrtest_isspace                                                      */
/*  Goal: test lrt_isspace                                                    */
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

int     lrtest_isspace  (void)
{
    int i;

    i = EOF;
/* EOF macro */
    lrt_assert(!lrt_isspace(i));

    i = -1;
    while (++i < 256)
    {
/* True assertions */
        if ((i > 010 && i < 016) || (i == 040))
        { lrt_assert(lrt_isspace(i)); }
/* False assertions */
        else
        { lrt_assert(!lrt_isspace(i)); }
    }

    return (1);
}
