#include <stdio.h>


#define WORDS 28


int main(void){
	
	int c, state;
	int wordlength[WORDS];
	int word = 0;
	
	
	
	for (int a = 0; a < WORDS; ++a){
		wordlength[a] = 0;
	}

	while ((c = getchar()) != EOF){
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 
		'Z') || (c >= 0 && c <= 9)){
		 	word = word + 1;	
			
		}
		
		else {
			
			wordlength[word]++;
			word = 0;
			
		}
		
	}
	
	for (int i = 0; i < WORDS; ++i){
		printf("%2d %6d ",i , wordlength[i]);
		if ((wordlength[i] < 4000) && (wordlength[i] > 0)){
			printf("*");
		}
		else{
			for (int b = 0; b < (wordlength[i]/4000); ++b){
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;


}




