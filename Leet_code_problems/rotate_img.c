#include <stdio.h>
void rotate(int matrix[3][3], int n){
    printf("Matrix:\n");
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("| %d ",matrix[i][j]);
		}
		printf("|\n");
	}
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n/2 ; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n-1-j];
            matrix[i][n-1-j] = temp;
        }
    }
    printf("Rotated Matrix:\n");
    for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("| %d ",matrix[i][j]);
		}
		printf("|\n");
	}
}
int main(){
	int size = 3;
	int matrix[3][3] = { {1,2,3,} , {4,5,6,} , {7,8,9} };
	rotate(matrix,size);
	
	return 0;
}
