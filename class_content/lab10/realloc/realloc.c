#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int main(){

  int * array = malloc(sizeof(int)*SIZE);

  for(int i = 0; i < SIZE; i++){
    array[i] = 2*i;
  }

  for(int i = 0; i < SIZE; i++){
    printf("Value at location %d is %d\n", i, array[i]);
  }


  // Need more memory

  int * new_array = realloc(array, sizeof(int)*2*SIZE);

  if(new_array == NULL){
      printf("realloc() failed\n");
      free(array);
      return 1;
  }else{
    array = new_array;
  }

  printf("\n After realloc()\n");


  for(int i = SIZE; i < 2*SIZE; i++){
    array[i] = 3*i;
  }

  for(int i = 0; i < 2*SIZE; i++){
    printf("Value at location %d is %d\n", i, array[i]);
  }

  free(array);

  return 0;
}

