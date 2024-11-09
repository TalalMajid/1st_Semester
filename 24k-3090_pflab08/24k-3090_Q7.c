#include <stdio.h>
int main(){
    int c , r;
    
	printf("Enter the number of rows of the matrix:");
    scanf("%d",&r); 
    printf("Enter the number of columns of the matrix:");
    scanf("%d",&c);
    
    if(r < 1 || c < 1){
    	printf("Rows and columns must be greater tha zero!");
	}
    int matrix[r][c];
   
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("Enter the element at row#%d and column#%d : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    int transpose[c][r];
    printf("\nTranspose of the matrix is : \n");
    for(int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
            transpose[i][j] = matrix [j][i];
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
