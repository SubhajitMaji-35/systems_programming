/** 
 * Demo for pointers
 */

#include <stdio.h>

int main(){

  // Declaring a pointer

  int variable = 10;
  int* pointer_to_variable;

  pointer_to_variable = &variable;

  printf("Address of the pointer is %x and value is %d\n", 
		  (unsigned int) pointer_to_variable, *pointer_to_variable); return 0;
}
