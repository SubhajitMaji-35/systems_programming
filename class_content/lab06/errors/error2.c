/* Find out and correct errors in the following C code. The program should print as
output sum of the first two numbers divided by the third number. For eg., a=2, b=4,
c=2, so, d should be 3.: */


#include<stdio.h>
int main()
{
	int a, b, c;
	double d;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	d = ((double)a+(double)b)/(double)c;
	printf("%lf\n" , d);
}



