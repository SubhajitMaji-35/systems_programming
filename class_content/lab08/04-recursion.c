#include <stdio.h>

// Multiplication using recursion
unsigned multiply(unsigned a, unsigned b){

  if(a == 1)
    return b;
  else
    return b + multiply(a-1,b);

}

int main(){

  unsigned a = 10, b = 5;

  printf("a = %d\n", a);
  printf("b = %d\n", b);

  printf("Product = %d\n", multiply(a, b));

  return 0;
}

