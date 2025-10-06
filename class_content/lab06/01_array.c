/**
 * Demo for arrays
 */


#include <stdio.h>
#define SIZE 10

int main() {
  
  // Declaration
  // Must know the size of array in advance
  // Same works for float, double and char
  int integer_array[SIZE];
  int integer_array_uninitialized[SIZE];


  // Initialize array elements
  // If not done, values can be junk
  for(int i = 0; i < SIZE; i++){
    integer_array[i] = 0;
  }

  // Printing array
  printf("Contents of integer_array\n");
  for(int i = 0; i < SIZE; i++){
    printf("Value at location %d is %d\n",i , integer_array[i]);
  }
  // For a newline after displaying the contents
  printf("\n");

  
  // Will print some junk values
  // Shows why initialization is necessary
  printf("Contents of integer_array_uninitialized\n");
  for(int i = 0; i < SIZE; i++){
    printf("Value at location %d is %d\n",i , integer_array_uninitialized[i]);
  }
  // For a newline
  printf("\n"); 
  
  return 0;
}

