#include <stdio.h>
int main() {
    int arr[2][3][3];
    int sum_page1 = 0 , sum_page2 = 0 , total_sum;
   
    for(int page = 0 ; page < 2 ; page++){
        for(int row = 0 ; row < 3 ; row++){
            for(int col = 0 ; col < 3 ; col++){
                printf("Enter the element at page#%d, row#%d and column#%d : ",page+1,row+1,col+1);
                scanf("%d",&arr[page][row][col]);
                if(page == 0){
                    sum_page1 += arr[page][row][col];
                }
                else{
                    sum_page2 += arr[page][row][col];
                }
            }
        }
    }
    printf("\nSum of elements of page#1 : %d",sum_page1);
    printf("\nSum of elements of page#2 : %d",sum_page2);
    total_sum = sum_page1 + sum_page2;
    printf("\nTotal sum = %d",total_sum);
   
    return 0;
}
