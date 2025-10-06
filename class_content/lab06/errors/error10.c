/*
 *  Find errors in the following code for swapping:
 */

#include <stdio.h>
void swap (char **x, char **y)
{
    char *t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    char *x = "hello";
    char *y = "world";
    char *t = "temp";
    swap(&x, &y);
    printf("(%s, %s)\n", x, y);
    t = x;
    x = y;
    y = t;
    printf("(%s, %s)", x, y);
    return 0;
}

