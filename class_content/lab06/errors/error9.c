#include<stdio.h>
int main()
{
	int i=1;
	printf("Natural numbers under 100 divisible by 7 are:\n");
	do
	{
		if(i%7==0)
		{
			printf("%d\n",i);
		}
		++i;
	} while(i<100);
}
