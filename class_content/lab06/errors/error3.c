/* Find out and correct errors in the following C code. The program should take
 * an integer as input and double it. */

#include<stdio.h>
int main()
{
	int a, ta;
	scanf("%d", &a);
	ta = a<<1;
	printf("%d", ta);
	return 0;
}
