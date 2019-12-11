/*
 * implement fullAdderSum() fullAdderCarry()
 *
 * project: hw4
 * name: Samuel G Taylor
 * date: 10/28/2019
 * file: adder.c
 */

#include "adder.h"

/*
 * add two bits P and Q
 * return the sum bit
 */
enum bits halfAdderSum(enum bits P, enum bits Q)
{
    
  return P ^ Q;
}

/*
 * add two bits P and Q
 * return the carry bit
 */
enum bits halfAdderCarry(enum bits P, enum bits Q)
{
  return P & Q;
}

/*
 * add three bits P, Q, and Cin
 * return the sum bit
 */
enum bits fullAdderSum(enum bits P, enum bits Q, enum bits Cin)
{
  enum bits sum = P + Q + Cin;
  // Getting total of all bits, we return sum
  enum bits stuff = 0;
  if (sum == 3){
      stuff = 1;
  }
  if (sum == 1 ){
      stuff = 1;
  }
  return stuff;
}

/*
 * add three bits P, Q, and Cin
 * return the carry bit
 */
enum bits fullAdderCarry(enum bits P, enum bits Q, enum bits Cin)
{
    enum bits sum = P + Q + Cin;
    //Check if there is carryover
    enum bits stufff;
    stufff = 0;

     if (sum == 2 || sum == 3){
         stufff = 1;
     }
   
 return stufff;
}




