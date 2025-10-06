#include <stdio.h>
#include <stdlib.h>

#define DEBUG 
int main(){

	// stderr is not buffered
	
	#ifdef DEBUG
	fprintf(stderr, "This test message comes first.\n");
	fprintf(stderr, "\nOutput of ls\n");
	#endif
	// Results in executing the program ls and display the output
	system("ls -m");
  	
	return 0;
}

