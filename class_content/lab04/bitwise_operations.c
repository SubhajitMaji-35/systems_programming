#include <stdio.h>

int main() {
    int a1 = 2;
    int b1 = 3;
    unsigned int c1; 

    printf("Value of a1 = %d\n", a1);
    printf("Value of b1 = %d\n", b1);

    c1 = a1 & b1;
    printf("Bitwise AND: %d\n", c1);

    c1 = a1 | b1;
    printf("Bitwise OR: %d\n", c1);

    c1 = a1 ^ b1;
    printf("Bitwise XOR: %d\n", c1);

    printf("Bitwise flip of all bits: %d\n", ~c1);

    printf("Bitwise left shift by 1: %d\n", c1<<1);
    printf("Bitwise left shift by 2: %d\n", c1<<2);
    
    printf("Bitwise right shift by 1: %d\n", c1>>1);
    printf("Bitwise right shift by 2: %d\n", c1>>2);

    return 0;
}


