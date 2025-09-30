#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
	char str1 [SIZE];
	char str2 [SIZE];
	char destination [2*SIZE];

	//Read two strings from the user
	scanf("%s %s", str1, str2);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	char* ptr1 = str1;
	char* ptr2 = str2;
	char* dest =destination;
	
	dest = strcat(dest,ptr1);
	dest = strcat(dest,ptr2);

	printf("%s", destination);
		
	
	//Do not add/modify anything below this line
	return 0;
}

