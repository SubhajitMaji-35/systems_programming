/**
 * Demo for pointers 
 * Connection between pointers and arrays
 */

#include <stdio.h>

#define SIZE 10

int main(){
  
  // Declaration
  int array[10];

  // Initalization of array. Entry i has value i
  for(int i = 0; i < SIZE; i++){
    array[i] = i;
  }

  // array is the pointer to the element a[0]

  printf("Access value of location 0 using array index gives %d\n", array[0]);
  printf("Access value of location 0 using array pointer gives %d\n", *array);

  printf("\n");

  // Modify value of array the element a[0] and print once again

  array[0] = 100;
  // Same can be done using *array = 0

  printf("Access value of location 0 using array index gives %d\n", array[0]);
  printf("Access value of location 0 using array pointer gives %d\n", *array);


  int* pointer = array;
  
  *pointer = *pointer + 100; 
  // Value of array[0] is now 200
  printf("Value of array[0] is now %d\n", array[0]);
  

  *(pointer+2) = *(pointer +2) + 500; 
  // Value of array[2] is now 502
  printf("Value of array[2] is now %d\n", array[2]);
  

  return 0;
}
