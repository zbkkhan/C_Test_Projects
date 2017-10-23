#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	int* number_to_flip = (int*) malloc(sizeof(int));
	char* input = (char*) malloc(sizeof(char) * 25);
	int flipped_num = 0;
	int i;
	printf("Type in a Number to bitwise flip \n");
	scanf("%s", input);
	
	free(number_to_flip);
	printf("%lu %s\n", sizeof(int), input);

	return 0;	



}
