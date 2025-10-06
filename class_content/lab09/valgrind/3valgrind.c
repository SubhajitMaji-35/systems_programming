/*
 * Valgrind demo
 *
 * Reading an invalid memory location
 * can be caught with valgrind
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *s;

    s = malloc(1*sizeof(char));
    // s = malloc(1*sizeof(char));
    s[0] = 'a';
    s[1] = '\0';

    puts(s);

    // free(s);

    return 0;
}
