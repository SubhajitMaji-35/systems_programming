/** 
 * Demo for pointers
 */

#include <stdio.h>

#define SIZE 10

int main(){

  // Declaring a pointer
  //int* pointer_to_variable;

  // DANGER: Trying to read an uninitalized pointer leads to runtime error
  // printf("Address of the pointer is %x and value is %d\n", (unsigned int) pointer_to_variable, *pointer_to_variable);

  // DANGER: Trying to access value to an unassigned pointer
  // *pointer_to_variable = 10;
  // printf("Address of the pointer is %x and value is %d\n", (unsigned int) pointer_to_variable, *pointer_to_variable);

  // Two pointers pointing to the same location.
  
  int variable = 10;
  int* ptr1_variable = &variable;
  int* ptr2_variable = &variable;

  *ptr1_variable = 20;
  printf("Value of the variable is %d\n", *ptr2_variable);
  printf("Value of the variable using variable is %d\n", variable);
  
  return 0;
}
