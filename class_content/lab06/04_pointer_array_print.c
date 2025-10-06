/**
 * Demo for pointers 
 *
 * Printing array using pointers Also, the difference between memory allocation
 * for char and int
 */

#include <stdio.h>

#define SIZE 10

int main(){
  
  // Declaration
  int int_array[SIZE];

  // Initalization of array. Entry i has value i
  for(int i = 0; i < SIZE; i++){
    int_array[i] = i;
  }

  int* ptr = int_array;
  for(int i = 0; i < SIZE; i++){
    printf("int_array[%d] is %d at memory location %ld\n", i, *ptr, (unsigned
			    long int)ptr); ptr++;
  }

  // Do the same with a character array
  
  char char_array[SIZE]; 
  
  // Initalization of array. Entry i has value i
  for(int i = 0; i < SIZE; i++){
    char_array[i] = 'A'+i;
  }

  char* char_ptr = char_array;
  for(int i = 0; i < SIZE; i++){
    printf("char_array[%d] is %c at memory location %ld\n", i, *char_ptr,
		    (unsigned long int)char_ptr); char_ptr++;
  }

  return 0;
}
