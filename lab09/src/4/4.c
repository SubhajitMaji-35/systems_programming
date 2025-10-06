#include <stdio.h>
//TODO: Answer question 6 here
#include <stdlib.h>

int main(int argc, char** argv){

	if(argc<=1){
		printf("atleast 1 filename expected");
		exit(1);
	}else{
		FILE* file= fopen(argv[1], "r");

		if(file == NULL){
			printf("Failed");
			exit(1);
		}

		int c;
		c= fgetc(file);

		while(c!=EOF){
			putchar(c);
			c=fgetc(file);
		}

		fclose(file);
	}
	return 0;
}

