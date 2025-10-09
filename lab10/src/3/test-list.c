/*
 * Unit testing for the list library
 *
 */

// TODO: Add appropriate header files


int testAppend(){

	// TODO: Complete the function
}

int testInsert(){
	// TODO: Complete the function
}

int testDelete(){
	// TODO: Complete the function
}

int testUpdate(){
	// TODO: Complete the function
}

///////////////////////////////////////
// Do not modify the functions below //
//////////////////////////////////////
int test(){
	int result = 1;

	if(testAppend()){
		printf("\tappend() failed\n");
		result = 0;
	}else{
		printf("append() passed\n");
	}

	if(testInsert()){
		printf("\tinsert() failed\n");
		result = 0;
	}else{
		printf("insert() passed\n");
	}

	if(testDelete()){
		printf("\tdelete() failed\n");
		result = 0;
	}else{
		printf("delete() passed\n");
	}

	if(testUpdate()){
		printf("\tupdate() failed\n");
		result = 0;
	}else{
		printf("update() passed\n");
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
