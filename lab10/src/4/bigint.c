/*
 * Implementation of Big Integer using list in C. For details on implementation
 * of the functions, see the docstring in bigint.h.
 *
 */

//TODO: Add appropriate header files
#include "bigint.h"

// Number stored as a list with each storing 9 digits of the number
// Why 9 ? 9 = 32*log(2)/log(10)
#define POWNINE 1000000000


/*
 * Function to free memory used for a big integer
 */

void free_bigint(Bigint* bi_ptr){
	// TODO: Complete the function
	
	if(bi_ptr != NULL){
		if(bi_ptr->numbers != NULL){
			if(bi_ptr-> numbers-> array != NULL){
				free(bi_ptr->numbers->array);
			}
			free(bi_ptr->numbers);
		}
		free(bi_ptr);
	}
}

/*
 * Initializes a big integer
 *
 */
void initialize(Bigint* bi_ptr){
	// TODO: Complete the function
	
	List* temp = malloc(sizeof(List));

	if(temp==NULL){
		return;
	}else{
		bi_ptr->numbers=temp;
		bi_ptr->sign=0;
	}


}

/*
 * Check if two big integers are equal or not
 *
 */

int equal(Bigint* a_ptr, Bigint* b_ptr){
	// TODO: Complete the function
	
	if(a_ptr == NULL || b_ptr == NULL){
		return -1;
	}

	if(a_ptr->sign != b_ptr->sign){
		return 1;
	}

	if(a_ptr->numbers->curr_count != b_ptr->numbers->curr_count){
		return 1;
	}

	for(int i =0 ; i<a_ptr->numbers->curr_count; i++){
		if(a_ptr->numbers->array[i] != b_ptr->numbers->array[i]){
			return 1;
		}
	}
	return 0;
}


/*
 * Adds two big integer numbers and returns a pointer to the resulting sum
 *
 */
Bigint* add(Bigint* a_ptr, Bigint* b_ptr)
{
	// TODO: Complete the function
	
	int eq = equal(a_ptr, b_ptr);

	if(eq==-1){
		return NULL;
	}else if(eq == 0){

		Bigint* sum = malloc(sizeof(Bigint));
		initialize(sum);

		int count = a_ptr->numbers->curr_count;

		int carry=0;
		long value;

		for(int i =0; i<count; i++){
			value= 2*a_ptr->numbers->array[i] + carry;
			append(sum->numbers, value%POWNINE);
			carry= value/POWNINE;
		}
		if(carry>0){
			append(sum->numbers, carry);
		}
		return sum;
	}else{

		Bigint* sum = malloc(sizeof(Bigint));
		initialize(sum);

		int maxcount;

		if(a_ptr->numbers->curr_count>b_ptr->numbers->curr_count){
			maxcount = a_ptr->numbers->curr_count;
		}else{
			maxcount= b_ptr->numbers->curr_count;
		}

		int carry =0;
		long value;
		long val1;
		long val2;

		for(int i=0; i<maxcount; i++){
			if(i>= a_ptr->numbers->curr_count){
				val1=0;
			}else{
				val1= a_ptr->numbers->array[i];
			}

			if(i>= b_ptr->numbers->curr_count){
				val2=0;
			}else{
				val2= b_ptr->numbers->array[i];
			}

			value= val1+val2+carry;

			append(sum->numbers, value%POWNINE);

			carry=value/POWNINE;
		}
		if(carry>0){
			append(sum->numbers, carry);
		}
		return sum;
	}
	
}
/*
 * Print a big integer passed as argument
 */

void print(Bigint* num_ptr){
	//TODO: Complete the function
	
	if(num_ptr== NULL || num_ptr->numbers== NULL){
		return;
	}
	int count= num_ptr->numbers->curr_count;

	for(int i = count-1; i>=0; i--){
		if(i==count-1){
			printf("%d", num_ptr->numbers->array[i]);
		}else{
			printf("%09d", num_ptr->numbers->array[i]);
		}
	}
	printf("\n");
}

/*
 * Read a big integer
 *
 */

int read(Bigint *num){
	if(num == NULL){
		Bigint* realloc_bigint = realloc(num, sizeof(Bigint));
		if(realloc_bigint == NULL){
			return 1;
		}else{
			num= realloc_bigint;
		}
	}

	int number;
	char op;

	while(1){
		scanf("%d", &number);
		insert(num->numbers,0, number);

		scanf("%c", &op);
		if(op == '\n'){
			break;
		}
	}
	return 0;

}
