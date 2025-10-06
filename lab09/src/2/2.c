#include <stdio.h>

// TODO: Include appopriate header file for dynamic memory allocation
#include <stdlib.h>

// TODO: Define the struct node appropriately

struct node{
	int data;
	struct node* next;
	struct node* prev;
};

// Avoids the need to type `struct node` each time
typedef struct node Node;


/* 
 * Interactively traverse the list, displaying the elements in the list. This
 * function can be called from anywhere in the program.
 *
 * NOTE: This is a helper function for helping in examining the doubly linked list and
 * is NOT used by the main().
 *
 *
 * @param *head Pointer to the head of the doubly linked list. It may be NULL.
 */ 

void interactive(Node* head){
        // TOOD Modify this procedure suitably to allow for traversal of the
        // doubly linked list in forward and reverse direction

	char op[2];
	if (head){
		Node* ptr = head;

		do{
			printf("Enter n to move ptr the next element or or enter p to move to the previous element q to quit\n");
			if(ptr){
				printf("ptr is pointing to the element %d\n", ptr->data);
				if(ptr->next){
					printf("Next element is %d\n", ptr->next->data);
				}
				if(ptr->prev){
					printf("Previous element was %d\n", ptr->prev->data);
				}
			}else{
				printf("ptr is NULL. Press q to exit");
			}

			scanf("%s", op);

			switch (op[0]){
				case 'n':
					if(ptr){
						ptr = ptr->next;
					}
					break;
				case 'p':
					if(ptr){
						ptr = ptr ->prev;
					}
					break;
				case 'q':
					printf("Exiting interactive mode\n");
					break;
				default:
					printf("Invalid option. Valid options are n (forward), p (backward), q (quit) \n");
					break;
			}

		}while
		(op[0] != 'q');

	}else{
		printf("List is empty. Exiting ...\n");
	}
	
}



/* 
 * Inserts an element at the head of the doubly linked list and update the head.
 *
 * This operation can modify the head of the doubly linked list. Hence the head is
 * passed by reference.
 * 
 * For example, if the list is
 *      10->2->3->NULL
 * with head point to 10. Suppose insert(&head, 12) is called. Then the new list
 * looks as follows with head pointing to 12.
 *      12->10->2->3->NULL
 *
 * @param **ref_to_head Pointer to the head of the doubly linked list is passed by
 *        reference (to allow for modifying the head). 
 * @param num The data to be addedPointer to the head of the doubly linked list. 
 */ 

void insert(Node** ref_to_head, int num){

  // TODO: Read the docstring above and complete the code
	
	Node* temp = malloc(sizeof(Node));
	temp->data=num;
	temp->next=*ref_to_head;
	temp->prev=NULL;
	if(*ref_to_head!=NULL){
		(*ref_to_head)->prev=temp;
	}
	*ref_to_head=temp;
}

/* 
 * Searches for an element starting from the head of the doubly linked list and return
 * a pointer to the first occurrence.  If the element is not found, a NULL
 * pointer is returned.
 *
 * This operation does not modify the doubly linked list. Hence the head is passed by
 * value.
 *
 * For example, if the list is
 *      10->2->3->NULL
 * with head point to 10. Suppose search(head, 3) is called. Then, a pointer to
 * the node 3 is returned.
 *
 * @param *head Pointer to the head of the doubly linked list. It may be NULL.
 * @param num The data to be added
 * @return A pointer to the node (if found) and NULL otherwise
 */ 

Node* search(Node* head, int num){

  // TODO: Read the docstring above and complete the code

	Node* curr= head;

	while(curr!=NULL){
		if(curr->data==num){
			return curr;
		}
		curr=curr->next;

	}
	return NULL;
}


/* 
 * Searches for an element starting from the head of the doubly linked list and
 * deletes the element if found and deallocates the memory. It should also
 * adjust the pointers around the deleted node (next and prev) correctly after
 * the deletion. If the element is not found, it does not modify the list.
 *
 * This operation can modify the doubly linked list head. Hence the head is passed by
 * reference.
 *
 * For example, if the list is
 *      10->2->3->NULL
 * with head point to 10. Suppose delete(head, 3) is called. Then, the
 * outcome will be 
 *      10->2->NULL
 *
 * Another example, if the list is 
 *      10->NULL
 * with the head pointing to 10, calling delete(head, 10) will give
 *      NULL
 * with the head pointing to NULL.
 *
 * @param **ref_to_head Pointer to the head of the doubly linked list passed by
 *        reference. 
 * @param num The data to be added
 * @return Returns 1 if the delete occured and returns 0 otherwise
 */ 

int delete(Node** ref_to_head, int num){

  Node* prev = NULL;
  // TODO: Read the docstring above and complete the code
	
  	if(ref_to_head==NULL || *ref_to_head==NULL){
		return 0;
	}

	Node* curr=*ref_to_head;

	if(curr->next==NULL && curr->data==num){
		*ref_to_head=curr->next;
		free(curr);
		return 1;
	}
	while(curr!=NULL){
		if(curr->data == num){
			prev->next=curr->next;
			if(curr->next){
				curr->next->prev=prev;
			}
			free(curr);
			return 1;
		}
		prev=curr;
		curr= curr->next;
	}
	return 0;


}

/* 
 * Takes a doubly linked list and reverses all the direction of the arrows and updates
 * the head appropriately. If the doubly linked list is empty, it does nothing.
 *
 * This operation can modify the doubly linked list head. Hence the head is passed by
 * reference.
 *
 * For example, if the list is
 *      10->2->3->NULL
 * with head point to 10. Then, calling reverse(head) will give a doubly linked list
 *      3->2->10->NULL
 * with the head now pointing to 3.
 *
 * @param **ref_to_head Pointer to the head of the doubly linked list passed by
 *        reference.
 */ 

void reverse(Node** ref_to_head){

  // TODO: Read the docstring above and complete the code

	Node* curr= *ref_to_head;
	Node* last_node=NULL;

	while(curr!=NULL){
		Node* temp= curr->next;
		curr->next=curr->prev;
		curr->prev=temp;
		last_node=curr;
		curr=curr->prev;
	}
	*ref_to_head=last_node;
}

/* 
 * Prints the doubly linked list starting from the head. Prints -1 if the list is
 * empty
 *
 * For example, if the list is
 *      10->2->3->NULL
 * the output will be
 *      10 2 3
 *
 * @param *head Pointer to the head of the doubly linked list. It may be NULL.
 */ 

void print(Node* head){

	if(head==NULL){
		printf("-1");
	}else{
	
	while(head!=NULL){
		printf("%d ", head->data);
		head=head->next;
	}
	}
  printf("\n");
}



int main(){
        int num;
        char op[2];
        Node* head = NULL;


        // Illustration of various options available as example
        // i 10 (insert 10) at the head of the list
        // s 8 (search for 8 in the list, prints True/False
        // d 8 (deletes 8 if present in the list)
        // r -1 (reverse the entire list, second arg is ignored)
        // p -1 (print the list, the second arg is ignored)
        // q -1 (program exists, the second arg is ignored)

        
        do {
                scanf("%s %d", op, &num);

                switch(op[0]){
                    case 'i':
                      insert(&head, num);
                      break;

                    case 's':
                      if(search(head, num)){
                        printf("True\n");
                      }else{
                        printf("False\n");
                      }
                      break;

                    case 'd':
                      if(delete(&head, num)){
                        printf("Deleted\n");
                      }else{
                        printf("Failed\n");
		      }
                      break;

                    case 'r':
                      reverse(&head);
                      break;

                    case 'p':
                      print(head);
                      break;

                    case 'q':
                      // do ... while check will exit
                      // Do nothing
                      break;

                    default:
                      // Invalid option. 
                      printf("Invalid op %s\n", op); 
                      break;
		}
        }while(op[0] != 'q');

	// END	
        
        // TODO: Write appropriate code to free up memory allocated for
        // creating doubly linked list
	
	Node* ptr = head;
	while(ptr!=NULL){
		Node* temp = ptr;
		ptr=ptr->next;
		free(temp);
	}

	//Do not add/modify anything below this line
	return 0;
}
