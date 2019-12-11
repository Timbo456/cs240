
/*
 * functions that convert between int, quaternary, and vigesimal numbers
 * 
 * project: hw3
 * name: Samuel Taylor  
 * date: 10/23/2019
 * file: itox.c
 * notes: 
 */

#include <stdio.h>
#include <string.h>
#include "itox.h"

/* function converts int n to a quaternary string in the
   hexstring array */
void itoq(char quaternaryStr[], int n)
{   
    
    int quotient = 0;
    int stuff = n;
    for (int i = 15; i >= 0; i--){
        
        quotient = stuff % 4;
        stuff = stuff / 4;
        quaternaryStr[i] = quotient + '0';
           
    }
    
    quaternaryStr[16] = '\0';
    
    
}

/* function converts a quaternary string to its int value  */
int qtoi(char quaternaryStr[])
{
  int n = 0;
  
    for (int i = 15; i >= 1; i--){
        int stuff = quaternaryStr[i];
        n += stuff * 4 * i; 
        //n += (quaternaryStr[i] * 4 * i);
      
    }
  return n;
}

/* function converts int n to a vigesimal string in the
   hexstring array */
void itov(char vigesimalStr[], int n)
{

   int quotient = 0;
    int stuff = n;
    for (int i = 15; i >= 0; i--){
        //This converts it to hex, as it has 20, other one had 4 max. 
        quotient = stuff % 20;
        stuff = stuff / 20;
        if (quotient > 9){
          vigesimalStr[i] = quotient + 55;
        }
        else{
          vigesimalStr[i] = quotient + '0';
        }
        
                     
    }
    
    vigesimalStr[16] = '\0';

    
}

/* function converts a vigesimal string to its int value  */
int vtoi(char vigesimalStr[])
{
  int n = 0;
  for (int i = 15; i >= 1; i--){
        int stuff = vigesimalStr[i];
        n += stuff * 20 * i;
        //n += (vigesimalStr[i] * 20 * i);
        
    }

  return n;
}
