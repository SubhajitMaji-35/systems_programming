/*
 * Valgrind demo
 * Show summary of memory leaked
 * Error type:  X bytes in Y blocks are definitely lost
 */

#include <stdio.h>
#include <stdlib.h>

#define NROW 3
#define NCOL 4

int main(){
	// Uses 3 x 8 bytes
	// Block 1
	int** matrix = malloc(sizeof(int*)*NROW);
	for(int i = 0; i < NROW; i++){
		// Uses 4 x 4 bytes
		// Block (2, 3, 4)
		matrix[i] = malloc(sizeof(int)*NCOL);
	}

	// Total of 72 bytes
	
	// Accidently allocating new memory
	// Block 5
	matrix[0] =  malloc(sizeof(int));

	free(matrix);

	return 0;
}
