#include <stdio.h>
int main() {
    int start;
   
    printf("Enter the starting number:");
    scanf("%d",&start);
   
    for(int i = start ; i > 0 ; i-=2){
        for(int j = i ; j > 0 ; j--){
            if(j % 2 != 0){
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}
