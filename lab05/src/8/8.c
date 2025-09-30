#include <stdio.h>

int main()
{
	int a = 0;
	int sum = 0;

	//Get three integers from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	int c;
	while(a != 0){
	c=a%10;
	a=a/10;
	sum = sum + c;
	}
	
	//Do not add/modify anything below this line
	//Print the sum
	printf("%d\n", sum);
	return 0;
}

