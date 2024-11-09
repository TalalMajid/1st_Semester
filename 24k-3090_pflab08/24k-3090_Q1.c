#include <stdio.h>
int main() {
    int start , end , prime ;
   
    printf("Enter the starting value of the range:");
    scanf("%d",&start);
    printf("Enter the ending value of the range:");
    scanf("%d",&end);
    if(start>end || start < 0 || end < 0){
        printf("Invalid range!");
        return 0;
    }
    if(start == 1){
        start++;
    }
    printf("The prime numbers in the given range are:");
    for(int i = start ; i <= end ; i++){
        prime = 1;
        for(int j = 2 ; j <= i/2 ; j++){
            if(i % j == 0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
           printf("%d ",i);
        }
    }
   
    return 0;
}
