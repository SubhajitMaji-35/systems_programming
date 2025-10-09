#include <stdio.h>

// TODO: Include the linkedlist header
#include "linkedlist.h"
// TODO: Include appopriate header file for dynamic memory allocation
#include <stdlib.h>
int main()
{
	// Copy the code from the main() function from Lab 09 Question 1
	//TODO Complete the code
	
	int num;
	char op[2];
	Node* head = NULL;

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

	Node * ptr =head;
        while(ptr!=NULL){
                Node * temp = ptr;
                ptr=ptr->next;
                free(temp);
        }

	//Do not add/modify anything below this line
	return 0;
}


