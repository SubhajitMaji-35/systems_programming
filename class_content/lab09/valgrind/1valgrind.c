/* 
 * Valgrind demo
 * Uninitialized value
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char a[2];

    a[0] = 'a';
    a[1] = '\0';

    if(!strcmp(a, "a")) {
        printf("a is \"a\"");
    }

    return 0;
}
