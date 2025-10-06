#include <stdio.h>

#define SIZE 100

int main()
{
	char string [SIZE];
	char* ptr = NULL;
	char* head = NULL;

	//Get a string from user
	scanf("%s", string);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	head = string;
	ptr = string;
	
	int b = 1;

	while( *ptr != '\0' ){
		ptr++;
	}
	
	ptr--;

	while( ptr > head ){
		if( *ptr != *head ){
			b = 0;
		}
		ptr--;
		head++;
	}

	if (b==1){
		printf("Palindrome");
	}
	else{
		printf("Not palindrome");
	}
	


	//Do not add/modify anything below this line
	return 0;
}

