#include <stdio.h>

int main()
{
	long a,b,tmp;

	//Get two integers from the user
	scanf("%ld %ld", &a, &b);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	if(a<b){
		a = a^b;
		b = a^b;
		a = a^b;
	}

	while(b!=0){
		tmp = b;
		b = a%b;
		a = tmp;
	}

	if(b==0){
		printf("%ld", a);
	}
	
	//Do not add/modify anything below this line
	return 0;
}

