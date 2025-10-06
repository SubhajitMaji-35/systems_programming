/*
 * Demo for linked list
 */

#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

typedef struct node Node;

void free_node(Node* ptr){
	if(ptr){
		free_node(ptr->next);
		free(ptr);
	}
}


int main(){

	// Creating a node
	Node* node1 = malloc(sizeof(Node));

	node1->data = 1;
	node1->next = NULL;

	// Creating more node and linking them
	// TODO: Write code

	Node* node2 = malloc(sizeof(Node));
	node2->data = 2;
	node2->next = NULL;

	// Linking
	node1->next = node2;


	// Traverse the list
	// TODO: Write code

	// Freeing memory

	return 0;
}

