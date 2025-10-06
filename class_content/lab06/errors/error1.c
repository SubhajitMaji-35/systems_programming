#include <stdio.h>
int main()
{
	int value = 0;
	printf("Enter a positive number: ");
	scanf("%d", &value);

	if(value%2  != 0)
		printf("The number was odd\n");
	else
		printf("The number was even\n");
	return 0;
}

