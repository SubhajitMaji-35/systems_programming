#include <stdio.h>

int main()
{
	int a = 0, iters;

	//Get an odd integer from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	iters = a/2 +1;
	for(int i = iters; i>0; i--){
		for(int k = iters; k <= a; k++){
			printf("%d", k);
		}
		printf("\n");
		a-=2;
		iters = iters-1;
	}
	
	//Do not add/modify anything below this line
	return 0;
}

