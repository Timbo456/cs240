//
//
//  Project: HW2
//  Name   : Samuel G Taylor   
//  Date   : 09/24/2019
//  File   : histo.c
//  Notes  : Creates histogram of word 
//           frequency and longest word.
//
//


#include <stdio.h>

// Definition for managing state. 
// Easier for user to look at names vs 0's, 1's, etc.

#define SPACE 1
#define NOTSPACE 0
 
int main (void){

// Creating our variables and a couple arrays to store the long 
//   word and also our count array for each length

  int lettercounter = 0;
  int c, state;
  int words[28];
  char longword[28];

// Setting the initial state to SPACE

  state = SPACE;
 
// This loop initializes the words array, as
//   we need 0's to show up even if there are 
//   no words at a given length.

  for (int j = 0; j < 28; ++j){
      words[j] = 0;
      
  }
  
// This while loop reads a character at a time
//   until the end of file

  while ((c = getchar()) != EOF){
  
// Using numeric values to determine the character 
//   range for c, anything outside will be treated 
//   as a space and not included in the count. 

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') 
    || (c >= '0' && c <= '9')){
    
// This is our letter counter that counts how long each word is
      lettercounter = lettercounter + 1;
      
// This is simply adding the the char to the long word holder in
//   the appropriate place. They will be written over if it is not
//   the long 27 character word. 

      longword[lettercounter] = c;
      
// If this loop is being touched, than the character
//   is alphanumeric, and thus our state becomes NOTSPACE

      state = NOTSPACE;
      
// Loop to print out the long word 

      if (lettercounter == 27){
          printf("\n");
          for (int i = 0; i < 27; ++i){
              printf("%c", longword[i]);
          }
          printf("\n\n");
      }
 
    } 
    
    else {  
    
// This will catch our non alphanumeric chars
//   It will set state back to space after, as we
//   don't want to treat sequential spaces as a word

      if (state == NOTSPACE){
            words[lettercounter]++;
            lettercounter = 0;
            state = SPACE;
            
      }
      else{
         state = SPACE;
         
      }
 	
    }
 
  }

//  Here we loop through and print out the histogram
//  Making sure to print an astrick even if there is 
//    a value below 4,000 chars. 
//  We actually handle the 4,000 char astrick arithmitic
//    directly in the loop. 
 
  for (int k = 1; k < 28; ++k){
      printf("%2d %6d ",k , words[k]);
      if ((words[k] < 4000) && (words[k] > 0)){
          printf("*");
      }
      else{
          for (int b = 0; b < (words[k]/4000); ++b){
              printf("*");
          }
      }
      printf("\n");
  }
 
 
return 0;
 
}




