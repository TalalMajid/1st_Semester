#include <stdio.h>

int main(){
	int n;
	
	printf("Enter the number of words for list:");
	scanf("%d",&n);
	
	char list[n][20];
	for(int i = 0 ; i < n ; i++){
		printf("Enter word#%d : ",i+1);
		scanf("%s",&list[i]);
	}
	
	char target[20];
	printf("Enter the word you want to find : ");
	scanf("%s",&target);
	
	for(int i = 0 ; i < 3 ; i++){
		if ( strstr(list[i],target) != NULL ){
			printf("Found");
			return 0;
		}
	}
	printf("Not Found");
	return 0;
}
