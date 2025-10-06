/**
 * Demo for arrays - Reading an input into an array
 */


#include <stdio.h>
#define SIZE 10

int main() {
  
  // Declaration
  // Must know the size of array in advance
  // Same works for float, double and char
  int integer_array[SIZE];


  // Initialize array elements
  // If not done, values can be junk
  for(int i = 0; i < SIZE; i++){
    integer_array[i] = 0;
  }

  // Read an array
  printf("Enter %d integer values for integer_array\n", SIZE);
  for(int i = 0; i < SIZE; i++){
    scanf("%d", &integer_array[i]);  // Use & as before
  }

  // Will print some junk values
  printf("Contents of integer_array\n");
  for(int i = 0; i < 2*SIZE; i++){
    printf("Value at location %d is %d\n",i , integer_array[i]);
  }
  // For a newline
  printf("\n");

  return 0;
}

