#include <stdio.h>

#define SIZE 100

int main()
{
	char input[SIZE];
	int count;

	//Get an integer from the user
	scanf("%s", input);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	char *ptr = input;
	count =0;

	while(*ptr!='\0'){
		if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'){
			count++;
		}
		ptr++;
	}


	//Do not add/modify anything below this line
	printf("%d\n", count);
	return 0;
}

