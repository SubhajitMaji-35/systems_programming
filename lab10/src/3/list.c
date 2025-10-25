/*
 * Demo for realloc by implementing the list from python.
 * For documentation for each function, see list.h
 */

//TODO: Add appropriate header files as needed
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
/*
 * Helper function to grow a list. 
 */

int grow(List* l){
	// TODO: Complete the function
	
	size_t size;

	if(l->max_count ==0){
		size = sizeof(int);
		l->array= malloc(size);
		l->max_count=1;
		return 0;
	}
	
	if(l->curr_count == l->max_count){
		size = l->max_count * 2 * sizeof(int);
		int * realloc_array= realloc(l->array, size);
		if(realloc_array ==NULL){
			return 1;
		}else{
			l->array = realloc_array;
			l->max_count = 2 * l->max_count;
		}
	}
	return 0;
}

/*
 * Helper function to shrink a list
 *
 */

int shrink(List* l){
	// TODO: Complete the function
	
	size_t size;

	if(l->curr_count < max_count/2){
		size = l-> max_count * sizeof(int) / 2;
		int * rearray = realloc(l->array, size);
		if(rearray == NULL){
			retrun 1;
		}else{
			l->array= rearray;
			l->max_count = l-> max_count /2;
		}
	}
	return 0;
}

/*
 * Update an element at a given location in the list
 *
 */
int update(List* l, int loc, int data)
{
	// TODO: Complete the function
	
	if(loc < l->curr_count){
		l->array[loc] = data;
		return 0;
	}
	
	return 1;
}

/*
 * Remove an element at a given location in the list
 *
 */
int delete(List* l, int loc)
{
	// TODO: Complete the function
	
	if(loc < l->curr_count){
		for(i=loc; i<curr_count+1; i++){
			l->array[i]=l->array[i+1];
		}
		l->curr_count --;
	}

	if(shrink(l)){
		return 1;
	}

	if(l->curr_count == 0){
		free(l->array);
		l->max_count = 0;
		l->array = NULL;
	}
	return 0;
}

/*
 * Append an element at a given location in the list
 *
 */

int append(List* s, int data){

	// TODO: Complete the function
	
	if(grow(s)){
		return 1;
	}

	s->array[s->curr_count] = data;
	s->curr_count++;

	return 0;
}

/*
 * Insert an element at a given location in the list
 *
 */

int insert(List* s, int loc, int data){

	// TODO: Complete the function
	
	if(grow(s)){
		return 1;
	}

	for(int i = s->curr_count; i>loc; i--){
		s->array[i]=s->array[i-1];
	}
	
	s->curr_count++;
	update(s,loc,data);
}

