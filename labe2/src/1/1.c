#include <stdio.h>

// TODO: Add appropriate headers
#include <stdlib.h>
#include <string.h>

int main()
{

	//TODO: Complete the code
	
	char string[100000];
	int i=0;
	char c;
	c=getchar();
	while(c!='\n'){
		string[i] = c;
		i++;
		c=getchar();
	}

	i--;

	while(i>=0){
		for(int j = i; j>=0; j--){
			if(string[j] == ' '){
				for(int k=j+1; k<=i; k++){
					printf("%c",string[k]);
				}
				i=j-1;
				printf(" ");
				break;
			}
			else if(j==0){
				for(int k =j; k<=i; k++){
					printf("%c", string[k]);
				}
				i=-1;
				printf(" ");
				break;
			}
		}
	}
	//Do not add/modify anything below this line

        return 0;
}

