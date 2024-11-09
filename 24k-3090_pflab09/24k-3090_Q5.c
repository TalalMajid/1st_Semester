#include <stdio.h>
void primeCheck(int n){
	if(n < 2){
		printf("Not prime\n");
	}
	else{
		int is_prime = 1;
		for(int i = 2 ; i*i <= n ; i++){
			if(n % i == 0){
				is_prime = 0;
				break;
			}
	    }
	    
	    if(is_prime){
		    printf("Prime\n");
		}
		else{
		    printf("Not Prime\n");
		}
	}
}

int main(){
	int integers[5];
	
	printf("Enter 5 integers to check if they are prime or not:\n");
	for(int i = 0 ; i < 5 ; i++){
		printf("Enter integer#%d : ",i+1);
		scanf("%d",&integers[i]);
		primeCheck(integers[i]);
	}
	
	return 0;
}
