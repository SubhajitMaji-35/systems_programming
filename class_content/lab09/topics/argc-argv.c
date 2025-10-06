#include <stdio.h>

int main(int argc, char** argv){

	// Program name is an argument by default
	if (argc == 1){
		printf("At least one argument expected\n");
		return 1;
	}else{
		printf("Got %d arguments\n", argc - 1);

		// Program name is usually the first argument
		printf("Program name : %s\n", argv[0]);
		for(int i = 1; i < argc; i++){
			printf("Argument %d: %s\n", i, argv[i]);
		}
	}
	return 0;
}

