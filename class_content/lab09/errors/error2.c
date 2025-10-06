/** 
 * This program is supposed to compute the factorial
 *
 * Figure out what is the issue and fix it using GDB 
 *
 **/


#include <stdio.h>

int main()
{
    int n(0);
    scanf("%d",&n);
    long val=factorial(n;
    print("%d\n",val);
    return 0;
}
      
long factorial(int n)
{
    long result(1);
    while(n--)
    {
        result*=n;
    }
    return result;
}
