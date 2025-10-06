

/* C dangers of equality */
#include <stdio.h>

int main(void) {
    int num, val;
    num = 5;
    val = 6;

    if (num == val) {
    	printf("Variables num and val are equal\n");
    } else {
	printf("Variables num and val are unequal\n");
    }

    return 0;
}


