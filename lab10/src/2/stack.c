//TODO: Include appropriate header files
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

// TODO complete the stack.c file by giving definitions of the functions
// declared in stack.h

// Declare variables here
// Stack memory
int stack[SIZE];

// Index of the head of the stack. If the stack is empty, the variable stores
// the value -1
int head = -1;

// TODO: Give function definitions
// Check stack.h file to see the declaration and what each of the function is
// expected to do

int stack_head(int *data_ptr){
	if(data_ptr==NULL){
		return 1;
	}else{
		return 0;
	}
}

int push(int data){




