#include <stdio.h>


/**
 * SumDigits is a recursive function takes in a positive number and computes
 * the sum of all its digits till it becomes a single digit number.
 *
 * @arg num An integer
 */ 
int SumDigits(const int num){
	if(num/10==0){
		return num%10;
	}else{
		int a;
		int b = num;
		int sum =0;
		
		while(b!=0){
			a=b%10;
			b=b/10;
			sum+=a;
		}

		return SumDigits(sum);
	}
}

int main()
{
	int input, result;

	scanf("%d", &input);
	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	result=SumDigits(input);

	//Do not add/modify anything below this line
	printf("%d\n", result);
	return 0;
}

