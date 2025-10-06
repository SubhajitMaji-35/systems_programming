/*
 * Valgrind demo
 * Missing free() call
 */

#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
    char *s;

    s = malloc(26);
    s[0] = '\0';

    printf("%s", s);

    free(s);

    return 0;
}
