#include <stdio.h>
//TODO: Include appropriate header file for dynamic memory allocation
#include <stdlib.h>

int main()
{
	int n;
        long result = 1;

	//Get the order of the tensor from the user
	scanf("%d", &n);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	int ***array= malloc(sizeof(int**) * n);

	for(int i=0; i<n; i++){
		array[i]= malloc(sizeof(int*) * n);

		for(int j=0; j<n; j++){
			array[i][j]= malloc(sizeof(int) * n);
		}
	}

	for(int i =0; i<n; i++){
		for(int j =0;j<n; j++){
			for(int k =0;k<n; k++){
				scanf("%d", &array[i][j][k]);
				
				result= (result * array[i][j][k] ) % 101010;
			}
		}
	}

        printf("%ld\n", result);

	//TODO: DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
	// free()
	
       	for(int i=0; i<n; i++){
		for(int j =0; j<n; j++){
	 		free(array[i][j]);
		}
		free(array[i]);
       	}
	free(array);
			
	//Do not add/modify anything below this line
	return 0;
}

