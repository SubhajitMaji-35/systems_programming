#include <stdio.h>

int main()
{
	long a=0, factor_sum = 0;

	//Read an integer from the user
	scanf("%ld", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	for(long i=1; i<a; i++){
	if(a%i==0){
	factor_sum = factor_sum + i;
	}
	}
	
	if(factor_sum == a){
	printf("Yes");
	}else{
	printf("No");
	}

	//Do not add/modify anything below this line
	return 0;
}

