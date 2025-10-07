#include <stdio.h>

#define SIZE 5

int main()
{
	char input[SIZE];
	int result;

	// Read the input
	scanf("%s", input);

	//Do not add/modify anything above this line
	//TODO: Complete the code
	int z=input;
	int x=z;
	for(int i=0; i<SIZE; i++){
		for(int j=i; j<SIZE; j++){
			if((int)x[i]>(int)x[j]){
				int temp = x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	
	int y=z;
	for (int i=0; i<SIZE; i++){
		for(int j=i; j<SIZE; j++){
			if((int)y[i]<(int)y[j]){
				int temp = y[i];
				y[i]=y[j];
				y[j]=temp;
			}
		}
	}
	int d = (int)y-(int)x;


	//Do not add/modify anything below this line
	//Print the answer
	printf("%d\n", result);
	return 0;
}

