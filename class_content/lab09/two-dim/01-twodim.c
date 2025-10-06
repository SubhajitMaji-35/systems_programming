/*
 * Demo for dynamic creation of two dimensional arrays
 */


#include <stdio.h>
#include <stdlib.h>


int main(){
	int n, m;

	// Ask user for entering the number of rows and cols
	scanf("%d %d", &n, &m);

	// Create an array of int* pointers
	int** matrix = malloc(sizeof(int*)*n);

	// Populate an array of size m in each of these pointers
	for(int i = 0; i < n; i++){
		matrix[i] = malloc(sizeof(int)*m);
	}

	// Read an array
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &(matrix[i][j]));
		}
	}

	// Display the array
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	// Do you see any issue with this code ?
	//
	

	for(int i = 0; i < n; i++){
		free(matrix[i]);
	}

	free(matrix);

	return 0;
}



