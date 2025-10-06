/**
 * mystring.c 
 * 
 * Implementation of all C functions described in mystring.h
 *
 */

#include "mystring.h"

/**
 * Compute the length of the string given as input
 * Length excludes the terminating null byte ('\0')
 * @param *s A const character string 
 * @return The number of characters in the string provided by s
 */

size_t mystrlen1(const char* str)
{
	// TODO: Complete the code
	int c =0;
	const char* ptr = str;
	while(*ptr != '\0'){
		c++;
		ptr++;
	}
	return c;

}


/**
 * Copies the string contents from source to destination
 * The null byte ('\0') is also copied.
 * @param dest Pointer to the destination
 * @param src Pointer to the source
 * @return A pointer to the destination string
 */

char* mystrcpy(char* dest, char* src)
{
	// TODO: Complete the code
	char* o_dest = dest;
	while(*src != '\0'){
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;

	return o_dest;
}

/**
 * Copies the string contents from source to destination.
 * Note that only the first n characters of the source will be copied
 * to the destination. The null byte ('\0') is also copied.
 * @param dest Pointer to the destination
 * @param src Pointer to the source
 * @param n The size of the data to be copied.
 * @return A pointer to the destination string
 */

char* mystrncpy(char* dest, char* src, size_t n)
{
	// TODO: Complete the code
	char* o_dest = dest;
	int c =0;

	while(c<n && *src!='\0'){
		*dest = *src;
		src++;
		dest++;
		c++;
	}

	if(c<n){
		*dest='\0'
	}

	return o_dest;

/**
 * Computes the length of the largest prefix of first string consisting
 * entirely of the second string. 
 * @param dest Pointer to the destination
 * @param src Pointer to the source
 * @return Number of bytes in the largest prefix of s that contains only the
 * characters from accept
 */

size_t mystrspn(const char* s, const char* accept)
{
	// TODO: Complete the code
	int c = 0;
	int b;
	const char* p;

	while(*s != '\0'){
		b=0;
		for(p=accept; *p != '\0'; p++){
			if(*s == *p){
				b=1;
				break;
			}
		}
		if(b == 1){
			c++;
			s++;
		}else{
			break;
		}
	}

	return c;

}


/**
 * Finds the first occurence of the second string in the first string
 * @param string Pointer to the string which needs to be searched
 * @param pattern Pointer to the pattern that is to be searched.
 * @return Finds the first occurance of `pattern` in `string` and returns to
 * that occurance. Returns NULL if pattern is not found.
 */

char* mystrstr(const char* string, const char* pattern)
{
	// TODO: Complete the code
	
	const char* p1;
	const char* p2;

	while(*string != '\0'){
		if(*string == *pattern){
			p1=string;
			p2=pattern;
			while(*p1 == *p2 && *p1 !='\0' && *p2 !='\0'){
				p1++;
				p2++;
				if(*p2 == '\0'){
					return string;
				}
			}
		}
		string++;
	}
	
	return NULL;



}

/**
 * A function used to concatenate two parts of strings together. Copy up to n bytes.
 * @param dest The pointer to destination
 * @param src The pointer to source 
 * @param n Amount of data to copy
 * @return A char pointer to the destination of the string.
 */
char* mystrncat(char* dest, char* src, size_t n)
{
	// TODO: Complete the code
	char* 0_dest = dest;
	while(*dest!= '\0'){
		dest++;
	}

	while(*src != '\0' && n>0){
		*dest = *src;
		n--;
		src++;
		dest++;
	}
	*dest = '\0';

	return 0_dest;

}
