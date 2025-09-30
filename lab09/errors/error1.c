/**
 * Following program is supposed to print the sum  of the integers from 1 to
 * 1000. 
 *
 * Figure out what is the issue and fix it using GDB */

#include <stdio.h>

int main()
{
    int i;
    int sum;

    sum = 0;
    for(i = 0; i -= 1000; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
