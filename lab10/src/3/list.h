/*
 * 
 * Demo for realloc by implementing the list from python
 *
 *
 */

// TODO Add macros to avoid repeated inclusion


struct list {
	  int* array;
	  int curr_count;
	  int max_count;
};

typedef struct list List;

/*
 * Helper function to grow a list.
 *
 * If the list l passed as argument is empty, the allocate a new element. Else,
 * check if the list is full. If yes, double the allocation space using
 * realloc() function and update the max_count appropriately. Make sure that
 * appropriate code is added to handle realloc failures.
 *
 * This function will be called in (the beginning of) append() or insert()
 * functions to expand the list.
 *
 * @arg l Takes in a pointer to a list.
 * @return If the grow happened successfully, then 0 is returned. If there is
 * error during realloc, a 1 is returned.
 */

int grow(List* l);

/*
 * Helper function to shrink a list.
 *
 * If the list l passed as argument is half empty, then reduce memory needed by
 * doing a realloc. Make sure that appropriate code is added to handle realloc
 * failures.
 *
 * This function will be called in delete after an element is deleted.
 *
 * @arg l Takes in a pointer to a list. Pointer may be null.
 *        However the array associated with the list may be NULL. 
 * @return If the shrink happened successfully, then 0 is returned. If there is
 * error during realloc or if the list is NULL, a 1 is returned.
 *
 */

int shrink(List* l);

/*
 * Update an element at a given location in the list.
 *
 * Given a list pointer, update function checks if the loc is within the
 * curr_count of the list. If yes, the data passed is updated. The curr_count
 * is also updated accordingly.
 *
 * @arg *l Takes in a pointer to a list. It may be NULL.
 * @arg loc Index of the location (index starts with 0) in the l->array to be
 * updated
 * @arg data Value to be stored in the location loc
 * @return Returns 0 if the update was successful. If invalid argument is
 * passed or update to a location outside the l->curr_count is given, a 1 is
 * returned.
 *
 */
int update(List* l, int loc, int data);


/*
 * Remove an element at a given location in the list.
 *
 * Given a list pointer and a location, delete function checks if the location
 * is within curr_count of the list. If yes, it deletes the element (moves all
 * remaining elements by one position. The variable l->curr_count is also
 * updated accordingly. Also, shrink the list by calling shrink().
 *   
 * If deletion caused curr_count to be 0, then the memory allocated in the
 * array of the list is freed and set to NULL.
 *
 * @arg *l Takes in a pointer to a list. It may be NULL.
 * @arg loc Index of the location (index starts with 0) in the l->array to be
 * deleted. 
 * @return Returns 0 if the delete was successful. If invalid argument is
 * passed or update to a location outside the l->curr_count is given or
 * shrink() called failed, a 1 is returned.
 */
int delete(List* l, int loc);

/*
 * Append an element to the end of the list.
 *
 * Given a list pointer, append function checks if the loc is within the
 * curr_count of the list. If yes, the data passed is added to the end of the
 * array and curr_count is also updated accordingly. Before appending, the
 * function calls grow() to ensure that there is enough space.
 *
 * @arg *s Takes in a pointer to a list. It may be NULL.
 * @arg data Value to be appended to the list
 * @return Returns 0 if the update was successful. If invalid argument is
 * passed or update to a location outside the l->curr_count or call to grow
 * fails, a 0 is returned.
 *
 */
int append(List* s, int data);

/*
 * Insert at a specified location
 *
 * Given a list pointer, insert function checks if the loc is within the
 * curr_count of the list. If yes, remaining data is pushed to make space in
 * the s->array and the data passed is inserted in its index loc. The variable
 * curr_count is also updated accordingly. Before appending, the
 * function calls grow() to ensure that there is enough space.
 *
 * @arg *s Takes in a pointer to a list. It may be NULL.
 * @arg loc Index of the location (index starts with 0) in the l->array to be updated
 * @arg data Value to be appended to the list
 * @return Returns 0 if the update was successful. If invalid argument is
 * passed or update to a location outside the l->curr_count or call to grow
 * fails, a 0 is returned.

 */
int insert(List* s, int loc, int data);

//TODO Complete closing of #ifndef
