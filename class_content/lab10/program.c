#include <stdio.h>	// Search in standard C lib location
#include "myadd.h"	// Search for myadd.h in the current directory
#include "mymod.h"

int main(){

	int a = 10;
	int b = 20;
	printf("Sum = %d\n", add(a,b));
	printf("Mod Sum = %d\n", mod(a,b));

	return 0;
}


