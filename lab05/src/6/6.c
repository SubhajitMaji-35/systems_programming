#include <stdio.h>

int main()
{
	int a = 0;

	//Get an integer from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	float b=a;
	while (b>=3.0){
	b=b/3;
	}
	if(b==1){
	printf("Power of 3");
	}else{
	printf("Not power of 3");
	}	
	
	//Do not add/modify anything below this line
	return 0;
}

