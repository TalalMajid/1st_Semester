#include <stdio.h>
int main(){
	int n;
	printf("Enter the size of grids:");
	scanf("%d",&n);
	char gridA[n][n];
	char gridB[n][n];
	
	printf("Enter grid A:\n");
	for(int i = 0 ; i < n ; i++){
		scanf("%s",&gridA[i]);
	}
	
	printf("Enter grid B:\n");
	for(int i = 0 ; i < n ; i++){
		scanf("%s",&gridB[i]);
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(gridA[i][j] != gridB[i][j]){
				printf("Error in the row:%d and column:%d",i+1,j+1);
				return 0;
			}
		}
    }
    
	return 0;
}
