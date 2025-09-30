#include <stdio.h>

#define ROWS 3
#define COLS 4

int main()
{
	int mat1[ROWS][COLS];
	int mat2[ROWS][COLS];
	int mat3[ROWS][COLS];

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	for( int i =0; i< ROWS; i++){
	       for( int j =0; j < COLS; j++){
	       		scanf( "%d", &mat1[i][j]);
	 	}
	}
		
	for( int i =0; i< ROWS; i++){
	       for( int j =0; j < COLS; j++){
	       		scanf( "%d", &mat2[i][j]);
	 	}
	}

	for( int i =0; i< ROWS; i++){
	       for( int j =0; j < COLS; j++){
	       		mat3[i][j] = mat1[i][j] + mat2[i][j];
	 	}
	}
	
	for( int i =0; i< ROWS; i++){
	       for( int j =0; j < COLS; j++){
	       		printf( "%d", mat3[i][j]);
	 	}
	       printf("\n");
	}


	
	//Do not add/modify anything below this line
	return 0;
}

