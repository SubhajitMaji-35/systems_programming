/*
 * 
 * Demo for realloc by implementing the list from python
 *
 *
 */

#ifndef LIST_H
#define LIST_H


struct list {
	  int* array;
	  int curr_count;
	  int max_count;
};

typedef struct list List;

/*
 * Helper function to grow a list
 */

int grow(List* l);

/*
 * Helper function to shrink a list
 *
 */

int shrink(List* l);

/*
 * Update an element at a given location in the list
 *
 *
 */
int update(List* l, int loc, int data);


/*
 * Remove an element at a given location in the list
 *
 *
 */
int delete(List* l, int loc);

/*
 * Append to the end of the list
 *
 *
 */
int append(List* s, int data);

/*
 * Insert at a specified location
 *
 */
int insert(List* s, int loc, int data);



#endif
