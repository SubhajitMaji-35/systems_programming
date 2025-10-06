/*
 * Valgrind demo
 *
 * Error type: Invalid read/write of size X
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(){

	int* array = malloc(sizeof(int)*SIZE);
	free(array);

	// Accidently use array
	array[9] = 10;

	return 0;
}

