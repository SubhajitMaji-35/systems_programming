#include <stdio.h>
//TODO: Include appropriate header file for dynamic memory allocation

#include <stdlib.h>

int main()
{
	long n;

	//Get the number of integers from the user
	scanf("%ld", &n);

	//Do not add/modify anything about this line
	//TODO: Complete the code
		
	int * array = malloc(sizeof(long)*n);

	for(long i =0; i<n; i++){
		scanf("%d", &array[i]);
	}

	int* ptr = array;
	long count=0;

	while(count != n){
		printf("%d ", *ptr);
		ptr++;
		count++;
	}
	
	//TODO: DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
	// free()
		
	free(array);
	array = NULL;

	//Do not add/modify anything below this line
	return 0;
}

