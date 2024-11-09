#include <stdio.h>
int main() {
    int rows ;
   
    printf("Enter the number of rows for Pascal's triangle:");
    scanf("%d",&rows);
    int triangle[rows][rows];
   
    for(int i = 0 ; i < rows ; i++){
    	for (int j = 0; j < 2*(rows-i) ; j++) {
            printf(" ");
        }
        
        for(int  j = 0 ; j <= i ; j++){
            if(j == 0 || i ==j){
                triangle[i][j] = 1;
            }
            else{
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
            printf("%3d ",triangle[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
