#include <stdio.h>

// TODO: Add appropriate headers
#include <stdlib.h>


// TODO: Write the encryption() function

void encryption(char* message, int key){
	char c;

	char* ptr;
	ptr=message;

	while(*ptr!='\0'){
		c=*ptr;
		if(c>='A' && c<='Z'){
			c=c+key;
			if(c>'Z'){
				c=c-'Z'+'A'-1;
			}
			*ptr=c;
		}else if(c>='a' && c<='z'){
			c=c+key;
			if(c>'z'){
				c=c-'z'+'a'-1;
			}
			*ptr=c;
		}
		ptr++;
	}
}



// TODO: Write the decryption() function

void decryption(char* message, int key){
	char c;

	char* ptr;
	ptr=message;

	while(*ptr!='\0'){
		c=*ptr;
		if(c>='A' && c<='Z'){
			c=c-key;
			if(c<'A'){
				c=c+'Z'-'A'+1;
			}
			*ptr=c;
		}else if(c>='a' && c<='z'){
			c=c-key;
			if(c<'a'){
				c=c+'z'-'a'+1;
			}
			*ptr=c;
		}
		ptr++;
	}
}

int main()
{
        // TODO Complete the code below
	
	int len;
	scanf("%d", &len);
	char *string = malloc(sizeof(char)*len);
	int key;
	char op;

	scanf("%s %d %c", string, &key, &op);

	if(op=='e'){
		encryption(string, key);
	}else if(op=='d'){
		decryption(string, key);
	}

	printf("%s", string);

	//TODO: prevent memory leaks
	free(string);
	
        // Do not modify any line below
	return 0;
}
