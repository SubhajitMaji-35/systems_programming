/*
 * Implementation of Big Integer using list in C. For details on implementation
 * of the functions, see the docstring in bigint.h.
 *
 */

//TODO: Add appropriate header files

// Number stored as a list with each storing 9 digits of the number
// Why 9 ? 9 = 32*log(2)/log(10)
#define POWNINE 1000000000


/*
 * Function to free memory used for a big integer
 */

void free_bigint(Bigint* bi_ptr){
	// TODO: Complete the function
}

/*
 * Initializes a big integer
 *
 */
void initialize(Bigint* bi_ptr){
	// TODO: Complete the function
}

/*
 * Check if two big integers are equal or not
 *
 */

int equal(Bigint* a_ptr, Bigint* b_ptr){
	// TODO: Complete the function
}


/*
 * Adds two big integer numbers and returns a pointer to the resulting sum
 *
 */
Bigint* add(Bigint* a_ptr, Bigint* b_ptr)
{
	// TODO: Complete the function
}
/*
 * Print a big integer passed as argument
 */

void print(Bigint* num_ptr){
	//TODO: Complete the function
}

/*
 * Read a big integer
 *
 */

int read(Bigint *num){
}
