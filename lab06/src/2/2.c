#include <stdio.h>

#define SIZE 7

int main()
{
	char input [SIZE];
	int result;

	//Get two floating point values from the user
	scanf("%s", input);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	result =0;
	int d;
	for(int i =2; i<=5; i++){
		if((int)input[i] >=(int) 'A'){
			d= (int)input[i] -(int) 'A' + 10;
		}else{
			d = (int)input[i]-(int)'0';
		}
		result = result <<4;
		result = result | d;
	}
	

	//Do not add/modify anything below this line
	printf("%d\n", result);
	return 0;
}

