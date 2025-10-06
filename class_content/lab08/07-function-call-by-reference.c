#include <stdio.h>

void div_rem(int a, int b, int *q, int *r){
  *q = a / b;
  *r = a % b;
}

int main(){

    int a = 7;
    int b = 5;

    int q, r;

    div_rem(a, b, &q, &r);
    printf("Quotient is %d\n", q);
    printf("Reminder is %d\n", r);

    return 0;
}

