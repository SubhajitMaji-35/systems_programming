#include <stdio.h>

int main()
{
	int a=0, octal = 0;

	//Get an integer from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	int t = 1;
	while(a >0){
		octal =  octal + (a%8)*t;
		a= a/8;
		t *=10;	
	}


	//Do not add/modify anything below this line
	printf("%d\n", octal);
	return 0;
}

