#include <stdio.h>
#define SPACE 1
#define NOTSPACE 0
 
int main (void){
  int lettercounter = 0;
  int c, state;
  int words[28];
  char longword[28];
  
  state = SPACE;
 
  for (int j = 0; j < 28; ++j){
      words[j] = 0;
      
  }
  while ((c = getchar()) != EOF){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
      lettercounter = lettercounter + 1;
      longword[lettercounter] = c;
      state = NOTSPACE;
 
 
      if (lettercounter == 27){
          printf("\n");
          for (int i = 0; i < 27; ++i){
              printf("%c", longword[i]);
          }
          printf("\n\n");
      }
 
    } 
    
    else {  
 	
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
