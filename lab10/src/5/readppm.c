#include <stdio.h>

// TODO Include appopriate headers for dynamic memory allocation
#include <stdlib.h>

struct RBG{
	int r;
	int b;
	int g;
};

typedef struct RBG pixel;

int main(int argc, char** argv){
	
	if(argc !=3){
		printf("2 arguments expected");
	}

	FILE* from=fopen(argv[1], "r");
	if(from==NULL){
		printf("Error while opening source file");
		exit(1);
	}

	FILE* into=fopen(argv[2], "w");
	if(into==NULL){
		printf("Error while opening destinantion file");
		exit(1);
	}

	char magic[10];
	fgets(magic, 10, from);
	fprintf(into,"%s", magic);

	int column, row;

	fscanf(from, "%d %d", &column, &row);
	fprintf(into, "%d %d\n", column, row);

	int max;

	fscanf(from, "%d", &max);
	fprintf(into, "%d\n", max);

	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			pixel temp;
			fscanf(from, "%d %d %d", &temp.r, &temp.b, &temp.g);
			fprintf(into, "%d %d %d  ", temp.r, temp.b, temp.g);
		}
	}
	
	fclose(from);
	fclose(into);
	
	return 0;	

}


