/*
 * Unit testing for the add library
 *
 */

#include <stdio.h>
#include "myadd.h"
#include "mymod.h"

// Test cases for add is written below
// Returns 0 if success and 1 if fail
int testAdd(){

	int a = 10;
        int b = -20;
	int c = add(a,b);
	int check1 = !(c == -10);

        a = 40;
        b = 2;
        c = add(a,b);
        int check2 = !(c == 42);

	return (check1 || check2);
}

int testMod(){

	int a = 10;
        int b = -20;
	int c = mod(a,b);
	int check1 = !(c == 0);

        a = 40;
        b = 3;
        c = mod(a,b);
        int check2 = !(c == 1);

	return (check1 || check2);
}

int test(){
	int result = 1;

	if(testAdd()){
		printf("\tadd() failed\n");
		result = 0;
	}else{
		printf("add() passed\n");
	}

	if(testMod()){
		printf("\tmod() failed\n");
		result = 0;
	}else{
		printf("mod() passed\n");
	}


	return result;
}


int main(){

	printf("Running all test cases\n\n");
	if(test()){
		printf("\nAll test cases passed\n");
	}else{
		printf("\nSome test cases did not pass\n");
	}

	return 0;
}
