#include <stdio.h>

#define BASE 10
#define OFFSET 5
#define ABSOLUTE BASE + OFFSET

int main () {
  printf("ABSOLUTE     = %d\n", ABSOLUTE    );
  printf("ABSOLUTE * 2 = %d\n", ABSOLUTE * 2);
}

