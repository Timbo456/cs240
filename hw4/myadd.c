/*
 * implement of myAdd() using fullAdderSum() and fullAdderCarry()
 *
 * project: hw4
 * name: Samuel G Taylor    
 * date: 10/28/2019
 * file: myAdd.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "adder.h"

/*
 * use fullAdderSum() and fullAdderCarry() to add two numbers bit by bit
 * p and q are nonnegative
 * assume their sum does not cause overflow of a 32-bit unsigned int
 */
unsigned int myAdd(unsigned int p, unsigned int q)
{
  unsigned int mySum;
  unsigned int Cout;
  unsigned int Cin;
  unsigned int b;
  Cin = 0;
  for (int i = 0; i < 32; i++){
     (p & 1 << i) != 0;
     (q & 1 << i) != 0;
     //Setting up the Cin. 
     Cin = fullAdderCarry(p, q, Cin);
     //Passing args to the full adder
     b = fullAdderSum(p, q, Cin);
    
     mySum = mySum | b << i;
     //mySum = mySum | Cout << i;
     mySum = (p + q);
 
  }
   
 
  return mySum;
}


















