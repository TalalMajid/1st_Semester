#include <stdio.h>
int main(){
	int rows;
	
	printf("Enter the number of rows for pattern:");
	scanf("%d",&rows);
	
	if(rows < 1){
		printf("Rows must be greater than zero!");
	}
	
	for(int i = 1 ; i <= rows ; i++){
		for(int j = 0 ; j < i ; j++){
			printf("%d ",j+1);
		}
		printf("\n");
	}
	
	return 0;
}

