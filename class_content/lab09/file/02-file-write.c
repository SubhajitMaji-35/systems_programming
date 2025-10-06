/*
 * Program to create a file named test.txt and write some contents
 */

#include <stdio.h>

#define FNAME "test.txt"

int main(){

	int num = 10;
	FILE* file = fopen(FNAME, "w");

	// Error handling in case the `open` did not succeed
	if (file == NULL) {
		// Automatically identifies what is the error and prints
		// appropriate message
		perror("Error opening file");

		// Stops further execution of the program
		return 1;
	}

	// To write contents to the file ...
	fprintf(file, "This-is-a-number %d\n", num);

	// If there is any error during write ...
	if(ferror(file)){
		perror("Error while writing to the file");

		// Stop futher execution of the program
		return 1;
	}

	// Close a file 
	// It is a good practise to close opened files
	
	fclose(file);
	return 0;
}


		
