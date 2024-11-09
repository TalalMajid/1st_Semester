#include <stdio.h>
#include <string.h>
void replace_vowels(char str[][20],int n){
	for(int i = 0 ; i < n ; i++){
		int len = strlen(str[i]);
		for(int j = 0 ; j < len ; j++){
			if(str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u' ){
				str[i][j] = '*';
			}
		}
		printf("String#%d : %s\n",i+1,str[i]);
	}
}

int main(){
	int n;
	printf("Enter the number of strings : ");
	scanf("%d",&n);
	
	char str[n][20];
	for(int i = 0 ; i < n ; i++){
		printf("Enter string#%d : ",i+1);
		scanf("%s",&str[i]);
	}
	replace_vowels(str,n);
}
