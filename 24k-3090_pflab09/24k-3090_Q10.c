#include <stdio.h>
void uppercase(char str[]){
	for(int i = 0 ; str[i] != '\0' ; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){   //checking the ASCII value of the character
			str[i] = str[i] - 32;            //subtracting the difference between uppercase and lowercase characters
		}
	}
	printf("Uppercase string : %s",str);
}

int main(){
	char str[100];

	printf("Enter a string : ");
	scanf("%[^\n]",&str);
	uppercase(str);
}
