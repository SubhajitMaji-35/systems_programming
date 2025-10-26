#include <stdio.h>
#include <stdlib.h>

// TODO: Implement the binary tree, and the interactive traversal of the tree
/*
           2
         /   \
        7     9
       /     / \
      15    11  13
     /  \
    18  20
*/

struct tree_node{
	int data;
	struct tree_node *left_child;
	struct tree_node *right_child;
	struct tree_node *parent;
};

typedef struct tree_node Node;

Node* create_node(int data){
	Node* new_node= malloc(sizeof(Node));

	if(new_node == NULL){
		printf("error while creating");
		exit(1);
	}

	new_node->data=data;

	new_node->left_child=NULL;
	new_node->right_child=NULL;
	new_node->parent=NULL;

	return new_node;
}

Node* build_tree(){

	Node* root = create_node(2);
	Node* node7 = create_node(7);
	Node* node9 = create_node(9);
	Node* node11 = create_node(11);
	Node* node13 = create_node(13);
	Node* node15 = create_node(15);
	Node* node18 = create_node(18);
	Node* node20 = create_node(20);

	root->left_child=node7;
	root->right_child=node9;

	node7->left_child=node15;
	node7->parent=root;

	node9->left_child=node11;
	node9->right_child=node13;
	node9->parent=root;

	node11->parent=node9;

	node13->parent=node9;

	node15->left_child=node18;
	node15->right_child=node20;
	node15->parent=node7;

	node18->parent=node15;
	node20->parent=node15;

	return root;
}

void traverse_tree(Node* root){

	if(root==NULL){
		printf("Tree is empty");
		return;
	}

	char op[2];

	Node* ptr = root;

	do{
		printf("Enter l to move ptr the left child or enter r to move to the right child or p to move to the parent or q to quit\n");
                        if(ptr){
                                printf("ptr is pointing to the element %d\n", ptr->data);
                                if(ptr->left_child){
                                        printf("left child is %d\n", ptr->left_child->data);
                                }
                                if(ptr->right_child){
                                        printf("right child is %d\n", ptr->right_child->data);
                                }
                        }else{
                                printf("ptr is NULL. Press q to exit");
                        }

                        scanf("%s", op);

                        switch (op[0]){
                                case 'l':
                                        if(ptr){
                                                ptr = ptr->left_child;
                                        }
                                        break;
                                case 'r':
                                        if(ptr){
                                                ptr = ptr ->right_child;
                                        }
                                        break;
				case 'p':
					if(ptr){
						ptr = ptr->parent;
					}
					break;
                                case 'q':
                                        printf("Exiting interactive mode\n");
                                        break;
                                default:
                                        printf("Invalid option. Valid options are l (left), r (right), p (parent), q (quit) \n");
                                        break;
                        }

                }while
                (op[0] != 'q');
}

void free_tree(Node* node){

	if(node==NULL){
		return;
	}

	free_tree(node->left_child);
	free_tree(node->right_child);
	free(node);
}

int main(){
	Node* root = build_tree();
	printf("tree successfully created\n");
	printf("entering interactive mode\n");
	traverse_tree(root);

	free(root);
	printf("tree memory has been freed\n");

	 return 0;
}
