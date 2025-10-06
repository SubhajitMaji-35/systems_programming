#include <stdio.h>

// TODO: Complete the code for the function along with its arguments
// void swap( //TODO add arguments properly  )

void swap(int* x, int* y){
	
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
	
//
int main()
{
	int x,y;

	//Read two numbers from the user
	scanf("%d %d", &x, &y);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	swap(&x,&y);
	
	//Do not add/modify anything below this line
	printf("%d %d\n", x,y);
	return 0;
}

