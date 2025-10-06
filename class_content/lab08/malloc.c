#include <stdio.h>

// For using dynamic memory allocation (malloc and free)
#include <stdlib.h>

int main(){

  int n;
  scanf("%d", &n);

  // Dynamically allocates an array of size n of type int from the heap
  // Dynamic allocation = Allocation happens at runtime and not compile time

  int * array = malloc(sizeof(int)*n);

  printf("Enter %d numbers\n", n);
  for(int i = 0; i< n; i++){
    array[i] = i + 100;
  }


  // Print the contents
  printf("Numbers entered are\n");
  for(int i = 0; i< n; i++){
    printf("%d\n", array[i]);
  }

  // Free the memory
  free(array);

  return 0;
}
