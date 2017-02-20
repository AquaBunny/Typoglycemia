/***********************************************************************
* Daniel Bachler
* 11-9-15
* Typoglycemia.c
* 
* 
************************************************************************/
#include <stdio.h> /*printf fgets*/
#include <stdlib.h>
#define SIZE 512
void typoglycemia(char * sentence, int size);

void wordScramble(char * word, int size);

int main(void) {
	char sentence[SIZE];
	
	printf("Please enter a sentance for scrambling:\n");
	
	fgets(sentance, SIZE, stdin);
	
	typoglycemia(sentance, SIZE);
	
	puts(sentance);
	return 0;
}
