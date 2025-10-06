#include <stdio.h>

int main()
{
	double value;

	//Get three integers from the user
	scanf("%lf", &value);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	if(value<0){
	value = -value;
	}

	printf("%.5lf", value);

	//Do not add/modify anything below this line
	return 0;
}

