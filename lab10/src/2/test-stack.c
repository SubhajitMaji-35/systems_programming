/*
 * Unit testing for the stack library
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Test cases for push is written below
// TODO: Add two more test cases and modify the code appropriately
int testPush(){

	int ret1 = push(1);
	int ret2 = push(2);
	int head;
	int ret3 = stack_head(&head);
	int check3 = !(head == 2);

	return (ret1 || ret2 || ret3|| check3) ;
}

// TODO: Write test cases for pop
int testPop(){
}

// TODO: Write test cases for stack_head
int testHead(){
}


int test(){
	int result = 1;

	if(testPush()){
		printf("\tpush() failed\n");
		result = 0;
	}else{
		printf("push() passed\n");
	}

	if(testPop()){
		printf("\tpop() failed\n");
		result = 0;
	}else{
		printf("pop() passed\n");
	}

	if(testHead()){
		printf("\tstach_head() failed\n");
		result = 0;
	}else{
		printf("stack_head() passed\n");
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
