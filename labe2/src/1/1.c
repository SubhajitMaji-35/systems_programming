#include <stdio.h>

// TODO: Add appropriate headers
#include <stdlib.h>
#include <string.h>

int main()
{

	//TODO: Com	plete the code
	
	int c;
	char string[1000];
	int i=0;
	c=getchar();
	while(c!=EOF){
		string[i] = c;
		i++;
	}
	
	printf("%s", string);

	char* ptr= string;

	while(*ptr!='\0'){
		ptr++;
	}
	ptr--;

	char* ptr1;
	char*ptr2;

	ptr1=ptr;

	while(*ptr!=*string){
		if(*ptr==(char)' '){
			ptr2=ptr;
			while(ptr1!=ptr2){
				printf("%c", *ptr1);
				ptr1--;
			}
			printf("%c", *ptr1);
			ptr1--;
		}
		ptr--;
	}		


	//Do not add/modify anything below this line

        return 0;
}

