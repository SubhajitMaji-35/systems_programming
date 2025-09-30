#include <stdio.h>

int main() {
  int x = 1;
  int y = 1;
  int z = 1;
  printf("x(%d) == y(%d) == z(%d) ==> ", x, y, z);
  if (x == y == z) printf("true\n");
  else printf("false\n");

  x = y = z = 2;
  printf("x(%d) == y(%d) == z(%d) ==> ", x, y, z);
  if (x == y == z) printf("true\n");
  else printf("false\n");

  x = 1; y = z = 0;
  printf("x(%d) == y(%d) == z(%d) ==> ", x, y, z);
  if (x == y == z) printf("true\n");
  else printf("false\n");
}

