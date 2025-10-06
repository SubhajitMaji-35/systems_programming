#include <stdio.h>

#define SIZE 10

int main()
{
	unsigned int input;

	/* The hex_str should finally look like "0xPQRS"
	 * where P,Q,R,S are one of {0,..,9,A,..,F}
	 */
	char hex_str [SIZE]; 

	//Get two integers and operation from the user
	scanf("%d", &input);

	//Do not add/modify anything about this line
	//TODO: Complete the code

	unsigned int shift = 15;
	unsigned int hex3 = input & shift; 

	hex_str[0] = '0';
	hex_str[1] = 'x';
	hex_str[6] = '\0';

	for(int i = 5; i>=2; i--){
		char t ='A';
		if (hex3 >= 10){
			t = t + hex3 -10;
			hex_str[i]= t;
		}else{
			t = '0' + hex3;
			hex_str[i]= t;
		}
		input= input>>4;
		hex3 = input & shift;
	}

	//Do not add/modify anything below this line
	//Print the answer
	printf("%s\n", hex_str);
	return 0;
}

