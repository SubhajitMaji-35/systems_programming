// Strings Character pointers
// Initialize strings
//
// Traversal using pointers
// Writing a sentence - array of pointers
//
// String operations and string.h

#include <stdio.h>
#define SIZE 100

int main(){

	char array[SIZE] ="IIT Palakkad";
	printf("Content of array is %s\n", array);

	// Null character \0

	char* ptr = array;

	printf("Printing using pointers\n");
	while(*ptr != '\0'){
		printf("%c", *ptr);
		ptr++;
	}

	return 0;
}


