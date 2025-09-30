#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
	int mat1[ROWS][COLS];
	int mat2[ROWS][COLS];
	int mat3[ROWS][COLS];
	int tmp;

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	for(int i=0; i<ROWS; i++){
		for (int j=0; j<COLS; j++){
			scanf("%d", &mat1[i][j]);
		}
	}
	
	for(int i=0; i<ROWS; i++){
		for (int j=0; j<COLS; j++){
			scanf("%d", &mat2[i][j]);
		}
	}

	for (int i=0; i<ROWS; i++){
		for (int j=0; j<COLS; j++){
			tmp=0;
			for (int k=0; k<3; k++){
				tmp += mat1[i][k] * mat2[k][j];
				mat3[i][j] = tmp;
			}
		}
	}

	for(int i=0; i<COLS; i++){
		for (int j=0; j<ROWS; j++){
			printf("%3d", mat3[j][i]);
		}
		printf("\n");
	}	

	
	//Do not add/modify anything below this line
	return 0;
}

