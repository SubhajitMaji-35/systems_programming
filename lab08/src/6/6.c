#include <stdio.h>

//TODO: Add appropriate header files for doing math function and to get the value of pi
#include <math.h>

int main()
{

	float y, rad;
	double value;

	//Get an odd integer from the user
	scanf("%f", &y);

	// Use the constant M_PI to get the value of pi approximated to 20 digits.
	
	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	float pi = M_PI;

	rad = y * pi / 180;

	value = pow(sin(rad),3) + pow(cos(rad),3);

	printf("%.4lf", value);

	//Do not add/modify anything below this line
	return 0;
}

