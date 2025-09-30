#include <stdio.h>
//TODO: Include appropriate header file for dynamic memory allocation
#include <stdlib.h>

int main()
{
	long size = 0;
	//char* str = NULL;

	scanf("%ld", &size);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	char * array = malloc(sizeof(char)*size);

	scanf("%s", array);

	char* ptr1 = array;
	char* ptr2 = array;

	while(*ptr2!='\0'){
		ptr2++;
	}
	ptr2--;

	while(ptr2>ptr1){
		char temp;
		temp=*ptr2;
		*ptr2=*ptr1;
		*ptr1=temp;

		ptr2--;
		ptr1++;
	}

	printf("%s", array);

	
        //TODO: DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
        // free() 
	
	free(array);
	array = NULL;

	//Do not add/modify anything below this line
	return 0;
}

