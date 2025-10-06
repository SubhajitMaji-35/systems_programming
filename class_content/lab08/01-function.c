#include <stdio.h>
#include <limits.h>

// Function declaration
int average(int, int);

int main(){

  int x = INT_MAX/2+3;
  int y = INT_MAX/2-1;

  // Compute average without overflow
  int a = average(x,y);
  printf("a = %d\n", x);
  printf("b = %d\n", y);

  printf("Average = %d\n", a);
  printf("Direct average=%d\n", (x+y)/2);

  return 0;

}

// Function definition
int average(int a, int b){
  return (b+(a-b)/2);
}











