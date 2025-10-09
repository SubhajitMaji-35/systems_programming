
// TODO: Include the stack header file
#include <stdio.h>

int main()
{
        // Illustration of various options available as example
        // u 10 (push 10) the stack
        // o -1 (pop and print the content, the second arg is ignored)
        // h -1 (print the current head, the second arg is ignored)
        // q -1 (program exists, the second arg is ignored)

	int num;
	char op[2];
        int data;
        
        do {
                scanf("%s %d", op, &num);

                switch(op[0]){
                    case 'u':
                      if(push(num)){
			      printf("Stack full\n");
		      }
                      break;

                    case 'o':

                      if(!pop(&data)){
                        printf("%d\n", data);
                      }else{
                        printf("Stack empty\n");
                      }
                      break;

                    case 'h':

                      if(!stack_head(&data)){
                        printf("%d\n", data);
                      }else{
                        printf("Stack empty\n");
                      }
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


	//Do not add/modify anything below this line
	return 0;
}


