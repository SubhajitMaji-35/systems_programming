#include <stdio.h>

int main()
{
	int a=0, b=0, c=0;

	//Get three integers from the user
	scanf("%d %d %d", &a, &b, &c);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	int d = b*b - 4*a*c;
	if(d<0){
	printf("complex");
	}else{
	printf("real");
	}	


	//Do not add/modify anything below this line
	return 0;
}

