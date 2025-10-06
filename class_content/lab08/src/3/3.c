#include <stdio.h>
#define ROWS 2
#define COLS 2

int main()
{
	int matrix[ROWS][COLS];

	//Get an integer from the user
	scanf("%d %d %d %d", &matrix[0][0], &matrix[0][1], &matrix[1][0], &matrix[1][1]);

	//Do not add/modify anything above this line
	//TODO: Complete the code
	
	float matrix2[ROWS][COLS];

	float det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

	if(det==0){
		printf("NOT INVERTIBLE");
	}else{
		matrix2[0][0] = matrix[1][1]/det;
		matrix2[0][1] = -1 * matrix[0][1]/det;
		matrix2[1][0] = -1 * matrix[1][0]/det;
		matrix2[1][1] = matrix[0][0]/det;

		for(int i =0 ; i <ROWS ; i++){
			for(int j = 0; j <COLS ; j++){
				printf("%.4f ", matrix2[i][j]);
			}
			printf("\n");
		}
	}
	
	
	//Do not add/modify anything below this line
	return 0;
}

