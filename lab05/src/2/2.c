#include <stdio.h>

int main()
{
	float a=0, b=0;
	float area, perimeter;

	//Get two floating point values from the user
	scanf("%f %f", &a, &b);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	if(a<=0 || b<=0){
	printf("Invalid Input");
	}else{
	area = a*b;
	perimeter= 2*(a+b);
	printf("%.3f",area);
	printf("%.3f",perimeter);
	}


	//Do not add/modify anything below this line
	return 0;
}

