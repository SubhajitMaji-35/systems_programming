#include <stdio.h>

/**
 * Code illustrating do while, switch case
 * break and continue.
 *
 * TODO You must fix any compile errors in the code
 */

int main(){

	// Q1. Read the code to use while loop to print 1 to 10 and answer the
	// question at the end
	
	int i = 0;

	while (i <= 10){
		printf("%d\n", i);
		i++;
	}

	//TODO: Rewrite the above code using do-while so that the output stays
	//the same
	

	// Q2. Read the code to print based on if-else below and answer the 
	// task at the end.
	int total = 50;

	if(total >= 90){
		printf("S\n");
	}else if (total >= 80){
		printf("A\n");
	}else if (total >= 70){
		printf("B\n");
	}else if (total >= 60){
		printf("C\n");
	}else if (total >= 50){
		printf("D\n");
	}else if (total >=40){
		printf("E\n");
	}else{
		printf("F\n");
	}

	//TODO: Rewrite the code above using switch-case so that the output
	//remains the same.
	

	//Q3. Read the code below to and modify the code as per the requirement
	
	for (int i = 0; i < 10; i++) {
	        if (i == 5) {	
        	    // TODO: Add appropriate code
	        }
        	printf("%d ", i);
	}
	return 0;

	//TODO: Rewrite the above code so that it prints 0 1 2 3 4 only. You
	//are allowed to modify only those lines with a TODO written.
	
	
	//Q4. Read the code below to and modify the code as per the requirement
	
	for (int i = 0; i < 10; i++) {
	        if (i) { // TODO: Modify check done appropriately	
        	    // TODO: Add appropriate code
	        }
        	printf("%d ", i);
	}
	return 0;

	//TODO: Rewrite the above code so that it prints only odd valued
	// integers. You are allowed to modify only those lines with a TODO 
	// written.


}
