/*
 * stack.c
 *
 * stack routines
 */

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAXVAL 1024  /* maximum depth of val stack */

static double val[MAXVAL];    /* value stack */
static unsigned stackTop = 0; /* next free stack position */

/* push: push f onto value stack */
void push(double f)
{
  if (stackTop < MAXVAL)
    val[stackTop++] = f;
  else {
    fprintf(stderr, "error: stack full, can't push %d\n", f);
    exit(1);
  }
}

/* pop: pop and return top value from stack */
double pop(void)
{
  if (stackTop > 0)
    return val[--stackTop];
  else {
    fprintf(stderr, "error: stack empty\n");
    exit(1);
  }
}
