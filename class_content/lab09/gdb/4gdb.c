/*
 * GDB demo
 * Dealing with segmentation faults
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int * a = malloc(10*sizeof(int));
    int i;

    i = -1034500;

    printf("%d\n", a[i]);

    return 0;
}
