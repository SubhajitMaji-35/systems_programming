/*
 * 
 * Demo for realloc by implementing the list from python
 *
 *
 */

#include "list.h"
#include <stdlib.h>


/*
 * Helper function to grow a list
 */

int grow(List* l){
	size_t new_size ;

	if(l->max_count == 0){
		// When no space was allocated
		new_size = sizeof(int);
		l->array = malloc(new_size);
		l->max_count = 1;
	}else{
		// Do we have enough space ? If yes, nothing to do
		if(l->curr_count < l->max_count)
			return 0;

		// Double the allocation
		new_size = 2 * l->max_count * sizeof(int);

		// Reallocated and revert if it fails
		int* realloc_array = realloc(l->array, new_size);

		if(realloc_array == NULL)
			return 1;

		l->array = realloc_array;

		// Update max size upon successfull realloc
		l->max_count = 2*l->max_count;
	}
	return 0;
}

/*
 * Helper function to shrink a list
 *
 */

int shrink(List* l){
	size_t new_size ;

	if(l->curr_count < l->max_count / 2){
		new_size = l->max_count * sizeof(int) / 2;

		// Halve the memory
		int* realloc_array = realloc(l->array, new_size);

		if(realloc_array == NULL){
			return 1;
		}
		l->array = realloc_array;

		// Update max size upon successfull realloc
		l->max_count = l->max_count / 2;
	}

	return 0;
}

/*
 * Update an element at a given location in the list
 *
 *
 */
int update(List* l, int loc, int data)
{
	if(loc < l->curr_count){
		l->array[loc] = data;
		return 0;
	}
	else
		return 1;
}

/*
 * Remove an element at a given location in the list
 *
 *
 */
int delete(List* l, int loc)
{
	if(loc < l->curr_count){
		// Remove by shifting the contents left
		for(int i = loc; i < l->curr_count-1; i++){
			l->array[i] = l->array[i+1];
		}
		l->curr_count --;
	}

	// Shrink if half empty
	if(shrink(l)){
		return 1;
	}

	// If no contents, free the memory
	if(l->curr_count == 0){
		free(l->array);
		l->array = NULL;
		l->max_count = 0;
	}
	return 0;
}


int append(List* s, int data){

	// Grow if full
	if(grow(s) == 1){
		return 1;
	}

	s->array[s->curr_count] = data;
	s->curr_count++;
	return 0;
}

int insert(List* s, int loc, int data){

	// See if we can grow a bit ...
	if(grow(s) == 1){
		return 1;
	}

	for(int i = s->curr_count; i > loc; i--){
		s->array[i] = s->array[i-1];
	}
	s->curr_count ++;

	return update(s, loc, data);
}

