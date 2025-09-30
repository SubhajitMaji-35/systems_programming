/* 
 * mystring.h 
 * Header file for mystring.h
 *
 *
 * (Re)implementation of standard C string functions
 * Contains the function prototypes
 *
 */

#ifndef MYSTRING_H
#define MYSTRING_H

#include <stddef.h>


size_t mystrlen(const char* str);

char* mystrcpy(char* dest, char* src);

char* mystrncpy(char* dest, char* src, size_t n);

size_t mystrspn(const char* s, const char* accept);

char* mystrstr(const char* string, const char* pattern);

char* mystrncat(char* dest, char* src, size_t n);

#endif
