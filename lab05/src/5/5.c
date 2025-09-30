#include <stdio.h>

int main()
{
	int a=0;

	//Get an integer from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	int d=a%17;
	
	if(d==0){
	printf("Divisible");
	}else{
	printf("Not divisible");
	}	
	
	
	//Do not add/modify anything below this line
	return 0;
}

