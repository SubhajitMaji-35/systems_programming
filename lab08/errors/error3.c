/**
 * Following is a program to sort a set of items.
 * The program uses bubble sort. If you have not seen what a bubble sort is
 * please read the file bubble.c for a sample implementation with explanation.
 *
 * Figure out what is the issue and fix it using GDB */

#include <stdio.h>

struct item{
	char *data;
	int key;
};

typedef struct item item;

void sort(item* , int);

item array[] = {
	{"Bharat", 62},
	{"Habib", 60},
	{"Dundo", 105},
	{"Monu", 1},
	{"Nisha", 1},
	{"Anu", 1},
	{"Stephi", 1},
	{"Bittu", 42},
};


int main()
{

	sort(array,8); 
	
	for(int i =0; i<8; i++){
		printf("%s, %d\n", array[i].data, array[i].key);
	}

	return 0;
}

void sort(item *a, int n) { 
	int i = 0, j = 0;
	int s;

	for (; i < n && s != 0; i++) {
		s = 0;
		for (j = 0; j < n-i-1; j++) {
			if (a[j].key > a[j+1].key) {
				item t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				s++;
			}
		}
	}
}

