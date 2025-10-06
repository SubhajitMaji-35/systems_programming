#include <stdio.h>
#include <limits.h>

unsigned long fac(unsigned int);

int main()
{
	unsigned long fact = 1;
        unsigned int input;

	scanf("%d", &input);
	// Do not modify anything above this line
	// TODO: Complete the code
	
	if(input == fact || input == fact-1){
		printf("%ld", fact);
	}else{
		unsigned long factorial = fac(input);
		if(factorial == 0){
			printf("TOO LARGE TO COMPUTE");
		}else{
			printf("%ld", factorial);
		}
	}

	//Do not add/modify anything below this line
	return 0;
}

unsigned long fac(unsigned int n ){
	if(n>LONG_MAX){
		return 0;
	}else{
		if( n == 0){
			return 1;
		}else{
			return n * fac(n-1);
		}
	}
}


