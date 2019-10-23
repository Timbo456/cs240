/*
 * stub driver for functions convert between int, quaternary, and
 * vigesimal number
 *
 * project: hw3
 * name: 
 * date: 
 * file: itoxDriver.c
 * notes:
 */

#include <stdio.h>
#include <string.h>
#include "itox.h"

#define LINELEN    1024
#define QUATERNARY (sizeof(int) * 4 + 1)
#define VIGESIMAL  (sizeof(int) * 2 + 1)

int main(void)
{
  char quaternaryStr[QUATERNARY];
  char vigesimalStr[VIGESIMAL];
  char line[LINELEN];
  int m, n;

  /*write a loop here*/
//   the != 0 is the EOF check
    while (fgets(line, LINELEN, stdin) != 0){
      sscanf(line, "%d", &n);
    //the following 9 lines are the loop body//
      itoq(quaternaryStr, n);
      m = qtoi(quaternaryStr);
      printf("input decimal int: %d\n", n);
      printf("quaternary representation: %s\n", quaternaryStr);
      printf("reconverted decimal : %d\n", m);
      itov(vigesimalStr, n);
      m = vtoi(vigesimalStr);
      printf("vigesimal representation: %s\n", vigesimalStr);
      printf("reconverted decimal : %d\n\n", m);
}

  return 0;
}
