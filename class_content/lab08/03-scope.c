#include <stdio.h>
#include <limits.h>

// Global scope (usually set to zero)
int result;

// Function definition
int average(const int a, const int b){

  // Local scope
  // variable result is alive only within the function
  int result = (b+(a-b)/2);
  return result;
}

int main(){

  int x = INT_MAX/2+3;
  int y = INT_MAX/2-1;

  // Compute average without overflow
  int a = average(x,y);
  printf("a = %d\n", x);
  printf("b = %d\n", y);

  printf("Average = %d\n", a);
  printf("Direct average=%d\n", (x+y)/2);

  printf("Result from function = %d\n", result);
  return 0;

}


