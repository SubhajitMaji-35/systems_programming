#include <stdio.h>
# include <math.h>
#include <stdlib.h>
/**
 * determinant.c
 *
 * For computating determinant of an nxn integer matrix
 *
 */

#define SIZE 100

/**
 * Computes the sign of an entry in determinant computation
 * @param i The index corresponding to row
 * @param j The index corresponding to column
 * @param size Order of the matrix
 * @return The value of the sign
 */

int sign(const int i, const int j, const int size){

// TODO: Complete the code
	
	int k = (i+j)%2;
	if (k==0){
		return 1;
	}else{
		return -1;
	}
	
}


/**
 * Computes the determinant of a matrix
 * @param matrix The input matrix
 * @param size Order of the matrix
 * @return The value of the sign
 */

long determinant(const int** matrix, int size){

// TODO: Complete the code. Use recursion to compute the determinant.
// Use dynamic memory allocation for submatrix creation
// Do not forget to free the memory once the use is over
	
	if (size == 2){
		return (long)matrix[0][0] * (long)matrix[1][1] - (long)matrix[0][1] * (long)matrix[1][0];
	}else{
		long d =0;
		for (int i=0; i<size; i++){
			int** submatrix=malloc((size-1)*(size-1));

			for (int j =1; j<size; j++){
				int l=0;
				for (int k =0; k<size; k++){
					if(k!=i){
						submatrix[j][l]= matrix[j][k];
					}
					l++;
				}
			}
			d+=sign(0,i,size) * matrix[0][i] * determinant(**submatrix, size-1);
			for (int i =0; i<size-1; i++){
				free(submatrix[i]);
		}
			free(submatrix);

		}
		return d;
	}

}

// Main procedure
int main(){
	
	int size = 0;
	int matrix[SIZE][SIZE];
	long det;

	scanf("%d", &size);

	// Read the matrix
	
	for(int i = 0 ; i< size; i++) {
		for(int j = 0; j < size; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	det = determinant(**matrix,size);
	printf("%ld", det);
	return 0;
}
