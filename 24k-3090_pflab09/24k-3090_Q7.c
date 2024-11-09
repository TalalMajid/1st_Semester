#include <stdio.h>
#include <string.h>

void reverse_str(char str[]){
	int len = strlen(str);
    
    printf("Reversed string : ");
	for(int i = len ; i > 0 ; i--){
		printf("%c",str[i-1]);
	}
}

int main(){
	char str[100];
	
	printf("Enter a string to reverse:");
	scanf("%s",&str);
	reverse_str(str);
	return 0;
}
