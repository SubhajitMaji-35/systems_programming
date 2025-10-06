#include <stdio.h>

// Function that takes two integer pointers and swap the contents using
// arithmetic operations without using any extra variables
//
// TODO: Explain why does this function work correctly ?
void swap(int* x, int* y){
	*x = *x + *y;
	*y = *x - *y;
	*x =  *x - *y;	
}

int main(){
	int x = 100;
	int y = 200;

	swap(&x,&y);

	printf("%d %d\n", x, y);
	return 0;
}
