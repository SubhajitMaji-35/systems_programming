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
			scanf("%d", matrix[i][j]);
		}
	}

	det = determinant(matrix,size);
	printf("%d", det);
	return 0;
}
