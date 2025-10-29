#include <stdio.h>

// TODO: Add appropriate headers, if needed

#define LASTSIX 1000000
#define SIZE 32

unsigned int modpow(unsigned int a, unsigned int b){
  unsigned int result = 1;
  // TODO: Complete the function
  return result;
}


int main()
{
        // DO NOT EDIT THE CODE BELOW

	int length;
        int a, b;

	scanf("%d", &length);

        for(int i = 0; i< length; i++){
          scanf("%u %u", &a, &b);
          printf("%u ", modpow(a,b));
        }
        printf("\n");
	
	return 0;
}
