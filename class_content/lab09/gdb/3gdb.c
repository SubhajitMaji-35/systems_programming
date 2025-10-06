/*
 * GDB demo stepping through functions
 */

#include <stdio.h>
#include <assert.h>

int parity(const int x){
	if (x % 2)
		return 1;
	else
		return 0;
}

int main(int argc, char** argv)
{
    int x;

    x = 3;

    int res = parity(x);
    printf("Result = %d", res);

    return 0;
}
