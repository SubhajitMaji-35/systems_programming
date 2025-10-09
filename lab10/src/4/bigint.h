/*
 * Header file for Big Integer implementation
 *
 */

// TODO:Add macros to prevent duplicate inclusion
//
// TODO: Add appropriate header files needed

struct bigint {
	List *numbers;
	int sign;
};

typedef struct bigint Bigint;
/*
 * Function to free memory used for a big integer
 *
 * Takes in a pointer to a Big integer and clears up the array allocated as a
 * part of list, the list struct itself and finally the big integer pointer.
 *
 * @arg *bi_ptr Pointer to a big integer object that needs to be freed. This
 *      variable can be NULL
 *
 */

void free_bigint(Bigint* bi_ptr);

/*
 * Initializes a big integer by dynamic allocating memory for the List object
 * and setting the List object to empty
 *
 * @arg *bi_ptr Pointer to a big integer object that needs to be initialized. This
 *      variable can be NULL.
 *
 */

void initialize(Bigint* bi_ptr);


/*
 * Check if two big integers are equal or not
 *
 * Given pointers to two big integer (which may or may not be NULL) check if
 * the two are equal or not
 *
 * @arg *a_ptr Pointer to the first big integer. Can be NULL
 * @arg *b_ptr Pointer to the second big integer. Can be NULL
 * @return Returns 0 if the numbers are equal and 1 otherwise. If any of the
 * pointers are NULL, the function returns a -1.
 *
 */
int equal(Bigint* a_ptr, Bigint* b_ptr);



/*
 * Adds two big integer numbers and returns a pointer to the resulting sum.
 *
 * Given pointers to two big integer (which may or may not be NULL) check if
 * the two are equal or not
 *
 * @arg *a_ptr Pointer to the first big integer. Can be NULL
 * @arg *b_ptr Pointer to the second big integer. Can be NULL
 * @return Returns a big integer whose value equal to the sum of the arguments.
 * If any of the pointers are NULL, the function returns a NULL.
 *
 */
Bigint* add(Bigint* a_ptr, Bigint* b_ptr);

/* Prints a big integer passed as argument
 *
 * Prints a big integer such that if there are more than 1 number in the List,
 * appopriate number of zeros are padded. For example if num->numbers->array[1]
 * = 123456 and num->numbers->array[0] = 98765, then this will be printed as
 *
 * 123456000098765
 *
 * On the other hand, if the array has only one number, it should be printed as
 * it is without any zeros padded.
 *
 * @arg *a_ptr Pointer to a big integer. Can be NULL.
 *
 */

void print(Bigint* num_ptr);

/*
 * Reads a big integer
 *
 * Reads a big integer from the console where the number is assumed to be given
 * as 9 digits (at a time) separated by space. For example, if the input is
 *
 * 123456789 987654321 (followed by a new line)
 *
 * Then a print on num_ptr should output
 *
 * 123456789987654321
 *
 * Hint: Try doing scanf an integer and a character. Based on whether the
 * character is a space or a new line, continue reading or stop (respectively).
 *
 * @arg *a_ptr Pointer to a big integer. Can be NULL.
 * @return If the argument passed is NULL of there is any error while using the
 * list to store the number is encountered, a 1 is returned. If the read is
 * successfull, then a 0 is returned
 *
 */

int read(Bigint* num_ptr);

#endif
