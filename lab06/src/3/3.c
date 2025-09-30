#include <stdio.h>

int main()
{
	int a;

	//Get an integer from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	long fib0 = 0, fib1 = 1, fib2 = fib0+fib1;

	if(a>=0){
		printf("%ld\n", fib0);
	}
	if(a>=1){
		printf("%ld\n", fib1);

		while(fib2<=a){
			printf("%ld\n", fib2);
			fib0 = fib1;
			fib1 = fib2;
			fib2 = fib0 + fib1;
		}
	}


	
	//Do not add/modify anything below this line
	return 0;
}

