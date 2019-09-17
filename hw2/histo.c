#include <stdio.h>

#define IN 1
#define OUT 0

int main(void){
	
	int c, state;
	int wordlength[28];
	int word = 0;
	state = OUT;

	while ((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			wordlength[word]++;
			word = 0;
		}
		else if (state == OUT){
			state = IN;
			word = word + 1;
		}
		
	}
	for (int i = 0; i < 28; i++){
		printf("Count %d: %d\n", i, wordlength[i]);
	}
	
	return 0;


}




