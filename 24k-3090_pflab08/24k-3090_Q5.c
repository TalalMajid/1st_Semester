#include <stdio.h>
int main(){
	int rows;
	
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	
	for(int i = 0 ; i < rows; i++){
		for(int j = 0 ; j < rows-i ; j++){
				printf(" ");
		}
		for(int k = 0 ; k <= i ; k++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i = rows ; i >= 0  ; i--){
		for(int j = 0 ; j < rows-i ; j++){
				printf(" ");
		}
		for(int k = 0 ; k <= i ; k++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}

