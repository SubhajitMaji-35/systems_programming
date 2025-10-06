/**
 * Demo for arrays - Reading an input into a two dimensional array
 */


#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() {
  
  // Declaration
  // Must know the size of array in advance
  // Same works for float, double and char
  int integer_array[ROWS][COLS];


  // Initialize array elements
  // Not required as the data will be overwritten
  

  // Read an array
  printf("Enter %dx%d integer values for integer_array\n", ROWS, COLS);
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLS; j++){
        scanf("%d", &integer_array[i][j]);  // Use & as before
    }
  }

  // Print two dimensional array
  for(int i = 0; i < ROWS; i++){
     for(int j = 0; j < COLS; j++){
           printf("Value at integer_array[%d][%d] is %d\n",i, j, integer_array[i][j]);
     }
  }

  // For a newline
  printf("\n");

  // Printing array like a matrix
  for(int i = 0; i < ROWS; i++){
     for(int j = 0; j < COLS; j++){
           printf("%d ", integer_array[i][j]);
     }
     printf("\n");
  }

  return 0;
}

