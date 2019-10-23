
/*
 * functions that convert between int, quaternary, and vigesimal numbers
 * 
 * project: hw3
 * name: 
 * date: 
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
        quaternaryStr[i] = quotient;
        
        printf("quotient = %d\n", quotient);
        printf("stuff = %d\n", stuff);
        printf("i = %d\n", i);
        printf("value of quantstr[i] %d\n\n", quaternaryStr[i]);
        
    }
    
    quaternaryStr[16] = '\0';
    
    
}

/* function converts a quaternary string to its int value  */
int qtoi(char quaternaryStr[])
{
  int n = 0;
  
    for (int i = 4 ; i <= 1; i--){
        n += (quaternaryStr[i] * 4 * i);
      
    }
  return n;
}

/* function converts int n to a vigesimal string in the
   hexstring array */
void itov(char vigesimalStr[], int n)
{
    int quotient = 0;
    int stuff = n;
    for (int i = 19; i >= 0; i--){
        
        quotient = stuff % 20;
        stuff = stuff / 20;
        vigesimalStr[i] = quotient;
        
    }
}

/* function converts a vigesimal string to its int value  */
int vtoi(char vigesimalStr[])
{
  int n = 0;
  for (int i = 20; i <= 1; i--){
        n += (vigesimalStr[i] * 20 * i);
        
    }

  return n;
}
