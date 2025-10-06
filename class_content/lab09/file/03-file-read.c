/*
 * Program to read and display contents of a file named test.txt
 */

#include <stdio.h>

#define FNAME "test.txt"
#define SIZE 100

int main(){

	int num = 10;
	char string [SIZE];
	FILE* file = fopen(FNAME, "r");

	// Error handling in case the `open` did not succeed
	if (file == NULL) {
		// Automatically identifies what is the error and prints
		// appropriate message
		perror("Error opening file");

		// Stops further execution of the program
		return 1;
	}

	// Read till end of file
	while(!feof(file)){
		fscanf(file, "%s %d\n", string, &num);
		if(ferror(file)){
			printf("Error while reading the file");
		}
		printf("Contents: %d %s\n", num, string);
	}


	// Close a file 
	// It is a good practise to close opened files
	
	fclose(file);
	return 0;
}


		
