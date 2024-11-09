#include <stdio.h>
#include <string.h>
int main(){
	char words[5][20];
	
	printf("Enter 5 words to check if they are palindrome:\n");
	for(int i = 0 ; i < 5 ; i++){
		printf("Enter word#%d : ",i+1);
		scanf("%s", &words[i]);
	}
	
	for(int i = 0 ; i < 5 ; i++){
		int is_palindrome = 1;
		int len = strlen(words[i]); 
		for(int j = 0 ; j < len/2 ; j++){
			if(words[i][j] != words[i][len-j-1]){
				is_palindrome = 0;	
			}
		}
		if(is_palindrome){
			printf("Word#%d : Palindrome\n",i+1);
		}
		else{
			printf("Word#%d : Not Palindrome\n",i+1);
		}
	}
	
	return 0;
}
