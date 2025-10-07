#include <stdio.h>

#define ROWS 4
#define COLS 4

int main()
{
	int matrix[ROWS][COLS];

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	for (int i=0; i<ROWS; i++){
		for (int j=0; j<COLS; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int j=0; j<COLS; j++){
		for (int i=0; i<ROWS; i++){
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}


	//Do not add/modify anything below this line
	return 0;
}

