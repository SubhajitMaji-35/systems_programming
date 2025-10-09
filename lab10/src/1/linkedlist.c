#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

//TODO Complete the code by giving the function definitions


void insert(Node** ref_to_head, int num){

	Node * temp = malloc(sizeof(Node));
	temp->data=num;
	temp->next=*ref_to_head;
	*ref_to_head=temp;
}

Node* search(Node* head, int num){

	Node* ptr;
	ptr=head;

	while(ptr!=NULL){
		if(ptr->data==num){
			return ptr;
		}
		ptr=ptr->next;
	}
	return NULL;
}

int delete(Node** ref_to_head, int num){

	Node* prev=NULL;

	Node* curr = *ref_to_head;

	if(curr==NULL){
		return 0;
	}
	if(curr->data==num){
		*ref_to_head=curr->next;
		free(curr);
		return 1;
	}

	while(curr!=NULL){
		if(curr->data==num){
			prev->next=curr->next;
			free(curr);
			return 1;
		}
		prev=curr;
		curr=curr->next;
	}
	return 0;
}

void reverse(Node** ref_to_head){
	Node* ptr0;
	Node* ptr1=*ref_to_head;
	Node* ptr2;

	ptr0=NULL;
	if(ptr1!=NULL){
		while(ptr1!=NULL){
			ptr2=ptr1->next;
			ptr1->next=ptr0;
			
			ptr0=ptr1;
			ptr1=ptr2;
			}
	}
	*ref_to_head=ptr0;
}

void print(Node* head){

	if(head){
		Node* ptr=head;

		while(ptr!=NULL){
			printf("%d ", ptr->data);
			ptr=ptr->next;
		}
	}else{
		printf("-1");
	}
	
	printf("\n");
}

