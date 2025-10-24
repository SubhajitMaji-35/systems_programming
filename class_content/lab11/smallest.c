/*
 * Demo code for conditional statements
 *
 */

#include <stdio.h>

int getSmallest(int x, int y) {
    int smallest;
    if ( x > y ) {
        smallest = y;
    }
    else {
        smallest = x;
    }
    return smallest;
}

int main(){
	printf("%d", getSmallest(2, 3));
	return 0;
}
