#include <stdio.h>

int gcd(int x, int y){
  if(y == 0)
    return x;
  else{
    if (x > y)
      return gcd(y, x % y);
    else
      return gcd(x, y % x);
  }
}

int main(){

    int a = 5;
    int b = 7;

    printf("GCD is %d\n", gcd(a,b));

    return 0;
}

