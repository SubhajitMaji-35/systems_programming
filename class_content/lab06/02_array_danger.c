/**
 * Demo for arrays - dangers and alternate ways to initialize.
 */


#include <stdio.h>
#include <stddef.h>

#define SIZE 10

int main(){
  
  // Declaration
  
  float float_array[SIZE];

  // Initialize

  for(int i = 0; i < SIZE; i++){
    float_array[i] = 0;
  }
 
  // Quick way to initialize an array all empty !
  // Allowed only during initalization
  int int_array[SIZE] = {0};

  // Another way to initalize
  int new_int_array[SIZE] = {1,2,3,4,5};
  // Value of new_int_array at index 4 is 5. From index 5 onwards, it will be 0
  //
  // Printing the contents of int_array and new_int_array
  for(int i = 0; i < SIZE; i++){
	  printf("Value of int_array[%d] is %d\n", i, int_array[i]);
  }

  for(int i = 0; i < SIZE; i++){
	  printf("Value of new_int_array[%d] is %d\n", i, new_int_array[i]);
  }


  // Cannot do int_array = {1,2,3,4,5};
 
  // C does not check for array bounds !

  for(int i = 0; i < 2*SIZE; i++){
    printf("Value at location %d is %f\n", i, float_array[i]);
  }

  // Finding how much memory (in bytes) an array occupies

  printf("Size of float_array is %ld\n", sizeof(float_array));

  // Finding number of entries of an array
  // Useful is an array is passed to you, but you did not know how large it
  // was.

  size_t size_float_array = sizeof(float_array)/sizeof(float_array[0]);

  printf("Size of float_array is %ld\n", size_float_array);

  return 0;
}

