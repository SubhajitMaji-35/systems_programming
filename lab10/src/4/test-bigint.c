/*
 * Unit testing for the list library
 *
 */

// TODO: Add appropriate header files


int testEqual(){
	Bigint * a = malloc(sizeof(Bigint));
        initialize(a);
        append(a->numbers, 100000000);

        Bigint * b = malloc(sizeof(Bigint));
        initialize(b);
        append(b->numbers, 900000000);

	int res = !(equal(a,b) == 0);

	free_bigint(a);
	free_bigint(b);

	return res;
}


int testAdd(){

	// TODO: Complete the function
}

int testRead(){
	Bigint * a = malloc(sizeof(Bigint));
        initialize(a);
	
	int ret1 = read(a);
	print(a);
	printf("\n");

	free_bigint(a);

	return ret1;
}


///////////////////////////////////////
// Do not modify the functions below //
//////////////////////////////////////

int test(){
	int result = 1;

	if(testAdd()){
		printf("\tadd() failed\n");
		result = 0;
	}else{
		printf("add() passed\n");
	}

	if(testEqual()){
		printf("\tequal() failed\n");
		result = 0;
	}else{
		printf("equal() passed\n");
	}

	if(testRead()){
		printf("\tread() failed\n");
		result = 0;
	}else{
		printf("read() passed\n");
	}


	return result;
}



int main(){

	printf("Running all test cases\n\n");
	if(test()){
		printf("\nAll test cases passed\n");
	}else{
		printf("\nSome test cases did not pass\n");
	}

	return 0;
}
