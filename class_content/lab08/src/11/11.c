#include <stdio.h>
//TODO: Add appropriate headers for dynamic memory allocation and string ops
#include <stdlib.h>
#include <string.h>

#define SIZE 50

//TODO: Define struct Student

struct Student {
	char name[SIZE];
	short age;
	long roll;
	int marks;
};

typedef struct Student Student;

//TODO: Complete the function
// void print_details(//TODO: Add appropriate arguments)
void print_details(Student * s){
	printf("Name: %s\nAge: %hi\nRoll: %ld\nMarks: %d\n", s->name, s->age, s->roll, s->marks);
}

int main()
{
	Student s;

	//Read data 
	scanf("%s", s.name);
	scanf("%hi", &s.age);
	scanf("%ld", &s.roll);
	scanf("%d", &s.marks);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	Student * s1 =malloc(sizeof(Student));
	
	s1->roll= s.roll + 100000;
	strcpy(s1->name, s.name);
	s1->age=s.age;
	s1->marks=s.marks;

	print_details(s1);
	
        //TODO DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
        // free()
	
	free(s1);

	//Do not add/modify anything below this line
	return 0;
}

