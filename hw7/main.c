/*
 * main.c
 *
 * reverse polish calculator
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h" /* header file */

#define MAXOP 128

int main(int argc, char *argv[])
{
  int type;
  double op2;
  char s[MAXOP];
  
  while ((type = getop(s)) != EOF) {
    switch(type) {
    case NUMBER:
      push(atof(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '-':
      op2 = pop();
      push(pop() - op2);
      break;
    case '*':
      push(pop() * pop());
      break;
    case '/':
      op2 = pop();
      if (op2 != 0.0)
	push(pop() / op2);
      else {
	printf("error : zero divisor\n");
	exit(1);
      }
      break;
    case '\n':
      printf("The answer is %.8g.\n", pop());
      break;
    default:
      printf("error: unknown command %s\n", s);
      exit(1);
    }
  }
}
