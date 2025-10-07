#include <stdio.h>

int main()
{

	//Get an integer from the user
	//TODO: Complete the code
	
	int n;
	scanf("%d",&n);

	printf("%d ", n);

	while(n!=1){
		if (n%2==0){
			n=n/2;
		}else{
			n=3*n+1;
		}
		printf("%d ", n);
	}
		
	
	//Do not add/modify anything below this line
	return 0;
}

