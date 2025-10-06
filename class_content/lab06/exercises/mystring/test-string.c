/** 
 * test-string.c
 *
 * Unit tests for testing operations in mystring
 *
 */


#include <stdio.h>
#include "mystring.h"
#include <string.h>

int testMystrlen(){

	int result = 1;

	char* s1 = "Some sample string.";
	size_t s1a = strlen(s1); 
	size_t s1b = mystrlen1(s1);
	
	if(s1a != s1b){
		result = 0;
	}

	char* s2 = "";
	size_t s2a = strlen(s2); 
	size_t s2b = mystrlen1(s2);
	
	if(s2a != s2b){
		result = 0;
	}

	return result;
}

int testMystrcpy(){
	int result = 0;
	
	char s1[] = "Some sample string."; // String we will copy.
	char s2[30]; 			  // Empty string we will copy into

	char* s3 = mystrcpy(s2, s1); 
	if (strcmp(s1, s2) == 0) { 
		result = 1; 	
	}

	return result;
}


int testMystrncpy(){

	int result = 1;

	char s1a[] = "012345678901234567890123456789";
	char s2a[] = "ABCDEF"; 
	char* s3a = strncpy(s1a, s2a, 6); 

	char s1b[] = "012345678901234567890123456789"; 
	char s2b[] = "ABCDEF"; 
	char* s3b = mystrncpy(s1b, s2b, 6); 

	if (strcmp(s3a, s3b) != 0) {
		result = 0;
	}
}

int testMystrspn(){
	int result = 1;

	char* s = "Design your own IITPKDA storage systems";
	char* accept = "Design your IITPKDA";
	size_t span = mystrspn(s, accept); 
	if(span != strspn(s,accept)){
		result = 0;
	}

	span = mystrspn("abcde", "ac"); 
	if(span != strspn("abcde", "ac")){
		result = 0;
	}

	span = mystrspn("123456", "ab");  
	if(span != strspn("123456", "ab")){
		result = 0;
	}

	span = mystrspn("hello", "hel"); 
	if(span != strspn("hello", "hel")){
		result = 0;
	}
	return result;
}

int testMystrstr(){
	// TODO: Write your own test cases
}

int testMystrncat(){
	// TODO: Write your own test cases
}

int test(){

	int result = 1;

	if(testMystrlen()){
		printf("mystrlen() passed\n");
	}else{
		printf("mystrlen() failed\n");
		result = 0;
	}


	if(testMystrcpy()){
		printf("mystrcpy() passed\n");
	}else{
		printf("mystrcpy() failed\n");
		result = 0;
	}

	if(testMystrncpy()){
		printf("mystrncpy() passed\n");
	}else{
		printf("mystrncpy() failed\n");
		result = 0;
	}

	if(testMystrspn()){
		printf("mystrspn() passed\n");
	}else{
		printf("mystrspn() failed\n");
		result = 0;
	}

	if(testMystrstr()){
		printf("mystrstr() passed\n");
	}else{
		printf("mystrstr() failed\n");
		result = 0;
	}

	if(testMystrncat()){
		printf("mystrncat() passed\n");
	}else{
		printf("mystrncat() failed\n");
		result = 0;
	}

	return result;
}

int main()
{
	printf("Running test cases for mystring\n");
	if(test()){
		printf("All tests succeeded\n");
	}else{
		printf("Tests did not succeed\n");
	}

	return 0;
}
