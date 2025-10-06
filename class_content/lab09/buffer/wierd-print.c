#include <stdio.h>
#include <stdlib.h>

int main(){

	// stdout is buffered
	printf("This test message comes first.\n");
	
	printf("\nOutput of ls\n");
	
	fflush(stdout);
	// Results in executing the program ls and display the output
	system("ls -m");
  	
	return 0;
}

