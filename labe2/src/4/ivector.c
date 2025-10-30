// TODO: Include appropriate headers
#include "ivector.h"

unsigned int inner_product(Ivector* v1, Ivector* v2, int* invalid){  
  // TODO: Complete the code

	if(v1==NULL || v2==NULL || v1->size != v2->size){
		*invalid =1;
		return 0;
	}else{
		unsigned int size= v1->size;
		
		unsigned int inprod=0;

		for(int i=0; i<size; i++){
			unsigned int value = v1->vec[i] *  v2->vec[i];
			inprod+= value;
		}

		*invalid =0;
		return inprod;
	}
}


Ivector* add(Ivector* v1, Ivector* v2){
  // TODO: Complete the code

	if(v1==NULL || v2==NULL || v1->size != v2->size){
		return NULL;
	}else{
		unsigned int size=v1->size;
		Ivector* sum;
		sum=malloc(sizeof(Ivector));
		sum->size=size;
		unsigned int* sumvec = malloc(sizeof(unsigned int)*size);
		if(sumvec==NULL){
			return NULL;
		}else{
			sum->vec=sumvec;
		}

		for(int i = 0; i<size; i++){
			sum->vec[i] = v1->vec[i] + v2->vec[i];
		}

		return sum;
	}
}


Ivector* scalarmult(Ivector* v, unsigned int c){
  // TODO: Complete the code
  	
	if(v==NULL){
		return NULL;
	}else{
		unsigned int size=v->size;
		Ivector* mult;
		mult=malloc(sizeof(Ivector));
		mult->size=size;
		unsigned int* multvec = malloc(sizeof(unsigned int)*size);
		if(multvec==NULL){
			return 0;
		}else{
			mult->vec=multvec;
		}

		for(int i=0;i<size; i++){
			mult->vec[i] = c * v->vec[i];
		}

		return mult;
	}

}

void print(Ivector* v){
  // TODO: Complete the code

	if(v==NULL){
		printf("Empty vector");
		return;
	}else{
		for(int i = 0; i< v->size; i++){
			printf("%u ", v->vec[i]);
		}
	}
}

