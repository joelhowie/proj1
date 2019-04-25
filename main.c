#include <stdio.h>

int main()
{
    int x;
    printf("please select either option by typing '1' or '2'\n");
    printf("(1)encrpytion\n");
    printf("(2)decrpytion\n");
    printf("choose your option?: ");
    scanf("%d", &x);
    if (x == 1)
    {
    x=1;
    }
    else if (x==2)
    {
    printf("(1) Decryption given an algorithm, cipher text, and key\n");
    printf("(2)Decryption given cipher text and some assumptions of its contents without the key \n");
    printf("choose your option?: ");
    scanf("%d", &x);
    x++;
    }
    else
    {
    printf("did not choose '1' or '2'\n");
    return 0;
    }
    
	
	if (x == 1)
    {
    char message[100], ch;
	int i, key;
	
	printf("Enter a message to encrypt: ");
	scanf("%s", message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Encrypted message: %s", &message);
	
	return 0;
    }
    else if (x==2)
    {
       char message[100], ch;
	int i, key;
	
	printf("Enter a message to decrypt: ");
	scanf("%s", &message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Decrypted message: %s", message); 
    }
    else
    {
    printf("did not choose '1' or '2'\n");
    }
	
	
	
	
	
	return 0;
}
 
