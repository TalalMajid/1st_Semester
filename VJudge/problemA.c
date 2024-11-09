#include <stdio.h>
#include <string.h>
int main(){
	char num[100];
	
	printf("Enter the expression:");
	scanf("%s",&num);
	int len = strlen(num);
	
	
	char digits[len];
	int n = 0;
	for(int i = 0 ; i < len ; i++){
		if(num[i] != '+'){
			digits[n] = num[i];
			n++;
		}
	}
	
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = 0 ; j < n-1-i ; j++){
			if(digits[j] > digits[j+1]){
				int temp = digits[j];
				digits[j] = digits[j+1];
				digits[j+1] = temp;
			}
		}
	}
	
	for(int i = 0 ; i < n; i++){
		printf("%c",digits[i]);
		if(i != n-1){
			printf("+");
		}
	}
	
	return 0;
}
