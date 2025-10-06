#include <stdio.h>

int main()
{
	int a;

	//Get an integer from the user
	scanf("%d", &a);

	
	long fib0 = 0, fib1 = 1;
        int fib2;

	printf("%ld\n", fib0);
	printf("%ld\n", fib1);

	fib2 = fib0+fib1;
	while(fib2 <= a){
		printf("%d\n", fib2);
		fib0 = fib1;
		fib1 = fib2;
		fib2 = fib0 + fib1;
	}
	
	return 0;
}

