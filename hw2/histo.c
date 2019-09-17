#include <stdio.h>

#define IN 1
#define OUT 0
#define WORDS 28


int main(void){
	
	int c, state;
	int wordlength[WORDS];
	int word = 0;
	
	
	for (int a = 0; a < WORDS; ++a){
		wordlength[a] = 0;
	}

	while ((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			
			++wordlength[word];
			word = 0;
		}
		else {
			
			word = word + 1;
		}
		
	}
	for (int i = 0; i < 28; ++i){
		printf("%2d %4d:",i , wordlength[i]);
		for (int b = 0; b < wordlength[i]; ++b){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;


}




