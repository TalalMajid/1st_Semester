#include <stdio.h>
int main(){
    int matrix1[3][3] , matrix2[3][3] , product[3][3];
    int row , col;
   
    printf("Enter the elements in Matrix#1:\n");
    for(row = 0 ;  row < 3 ; row++){
        for(col = 0 ; col < 3 ; col++){
            printf("Row#%d and column#%d : ",row+1,col+1);
            scanf("%d",&matrix1[row][col]);
        }
    }
   
    printf("\nEnter the elements in Matrix#2:\n");
    for(row = 0 ;  row < 3 ; row++){
        for(col = 0 ; col < 3 ; col++){
            printf("Row#%d and column#%d : ",row+1,col+1);
            scanf("%d",&matrix2[row][col]);
        }
    }
    printf("\nProduct:\n");
    for(row = 0 ; row < 3 ; row++){
        for(col = 0 ; col < 3 ; col++){
            product[row][col] = 0;
            for(int n = 0 ; n < 3 ; n++){
                product[row][col] += matrix1[row][n] * matrix2[n][col];
            }
            printf("%d\t",product[row][col]);
        }
        printf("\n");
    }
    return 0;
}
