#include <stdio.h>
int main(){
    int matrix[3][3];
    int saddle_found;
    int n = 0;    //n is the number of saddle points found

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter the element of row#%d and column#%d: ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        	saddle_found = 1;
            for(int k = 0; k < 3; k++){
                if(matrix[i][j] > matrix[i][k]){
                    saddle_found = 0;
                    break;
                }
            }
            if(saddle_found){
                for(int k = 0; k < 3; k++){
                    if(matrix[i][j] < matrix[k][j]){
                        saddle_found = 0;
                        break;
                    }
                }
            }
            if(saddle_found){
                printf("\nSaddle point found at row#%d column#%d : %d\n",i+1,j+1,matrix[i][j]);
                n++;
            }
        }
    }
    if(n == 0){
    	printf("\nSaddle point not found in the matrix!");
	}
    return 0;
}
