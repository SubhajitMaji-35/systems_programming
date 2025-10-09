//TODO Include macros to avoid multiple inclusions
#ifndef STACK_H
#define STACK_H
// Size of the stack is fixed
#define SIZE 1000

// !! WARNING !!
// Do not declare any variables (like stack array) here.
// Variable declarations are to be done in .c file alone
// Not following this, will result in linker error during compilation


// Function definitions

/* Returns the head of the stack. 
 *
 * @param *data_ptr Pointer to the variable where the head value of the stack
 * is stored
 * @return Returns 0 if the stack is non-empty and 1 otherwise 
 */
int stack_head(int *data_ptr);

/* Pushes data at the head of the stack.
 *
 * @arg data Data that needs to be pushed
 * @return Returns 0 if the push was success. If the stack is full, the push
 * fails and a 1 is returned.
 */
int push(int data);

/* Pops data from the stack
 *
 * @arg data_ptr Stores the popped value in the variable pointed by data_ptr
 * @return Returns 0 if the pop was a success. If the stack is empty, the pop
 * fails and a 1 is returned
 */
int pop(int* data_ptr);

//TODO: Include macro to close #ifndef
#endif
