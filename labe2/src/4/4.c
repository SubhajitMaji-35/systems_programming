
// TODO: Include header files as necessary
#include <stdio.h>
#include <stdlib.h>


int main()
{
        // Illustration of various options available as example
        // a 3 11 12 13 3 81 82 83 - add two vectors of length 3, prints
        //    Resulting vector is (92, 94, 96)
        // m 4 11 12 13 14 2 - multiply a vector of length 3 by scalar -1, prints
        //    Resulting vector is (22, 24, 26, 28)
        // i 2 100 50 2 1 2 - computing inner product of two vectors and prints
        //    Resulting inner product is 200
        // q -1		      - stop processing and exit the program, second
	//                      argument is ignored.
   
	unsigned int dim;
	char op[2];

        Ivector* v1;
        Ivector* v2;
        Ivector* v3;
        
        do {
                scanf("%s %d", op, &dim);

                switch(op[0]){
                    case 'a':
                      // Read the dimension and vector contents
                      v1 = malloc(sizeof(Ivector));
                      v1->size = dim;
                      v1->vec = malloc(sizeof(unsigned int)*dim);
                      for(unsigned int i = 0; i < v1->size; i++){
                        scanf("%u", &v1->vec[i]);
                      }

                      // Read the dimension and vector contents of second
                      // vector
                      scanf("%u", &dim);

                      v2 = malloc(sizeof(Ivector));
                      v2->size = dim;
                      v2->vec = malloc(sizeof(unsigned int)*dim);
                      for(unsigned int i = 0; i < v2->size; i++){
                        scanf("%u", &v2->vec[i]);
                      }

                      v3 = add(v1, v2);
                      if(v3){
                        print(v3);
                        printf("\n");
                      }else{
                        printf("Invalid operation. Dimension mismatch\n");
                      }

                      // TODO: Prevent memory leaks

                      break;

                    case 'm':
                      unsigned int s;
                      // Read the dimension and vector contents
                      v1 = malloc(sizeof(Ivector));
                      v1->size = dim;
                      v1->vec = malloc(sizeof(unsigned int)*dim);
                      for(unsigned int i = 0; i < v1->size; i++){
                        scanf("%u", &v1->vec[i]);
                      }

                      // Read the scalar
                      scanf("%u", &s);

                      v2 = scalarmult(v1, s);
                      if(v2){
                        print(v2);
                        printf("\n");
                      }

                      // TODO: Prevent memory leaks
                      
                      break;

                    case 'i':
                      // Read the dimension and vector contents
                      v1 = malloc(sizeof(Ivector));
                      v1->size = dim;
                      v1->vec = malloc(sizeof(unsigned int)*dim);
                      for(int i = 0; i < v1->size; i++){
                        scanf("%d", &v1->vec[i]);
                      }

                      // Read the dimension and vector contents of second
                      // vector
                      scanf("%d", &dim);

                      v2 = malloc(sizeof(Ivector));
                      v2->size = dim;
                      v2->vec = malloc(sizeof(unsigned int)*dim);
                      for(int i = 0; i < v2->size; i++){
                        scanf("%u", &v2->vec[i]);
                      }

		      int invalid = 0;
                      unsigned int ip = inner_product(v1, v2, &invalid);
                      if(!invalid){
                        printf("%u\n", ip);
                      }else{
                        printf("Invalid operation / Dimension mismatch\n");
                      }

                      // TODO: Prevent memory leaks
                     
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


