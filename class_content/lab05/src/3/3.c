#include <stdio.h>

int main()
{
	int a;

	//Get an integer from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	if(a<0){
	printf("negative");
	}else if(a>0){
	printf("positive");
	}else{
	printf("zero");
	}
	
	//Do not add/modify anything below this line
	return 0;
}

