#include <stdio.h>

int matchsticks(int n){
    if(n % 5 == 0){
        return -1;
    }
    else{
        return n % 5;
    }
}
int main() {
    int n , result ;
   
    printf("Enter the number of matchsticks : ");
    scanf("%d",&n);
    if(n <= 0){
    	printf("Number of matchsticks must be greater than zero");
	}
    
    result = matchsticks(n);
    
    if(result == -1){
    	printf("Impossible for A to win the game");
	}
	else{
		printf("A has to pick %d matchsticks to win the game",result);
	}
   
    return 0;
}
