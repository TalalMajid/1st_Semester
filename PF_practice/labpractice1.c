#include <stdio.h>
int main(){
	int n;
	
	printf("Enter a number to check if it is perfect:");
	scanf("%d",&n);
	int sum = 0;
	for(int i = 1 ; i < n ; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	if(sum == n){
		printf("Perfect Number");
	}
	else{
		printf("Not Perfect");
	}
	
	
	return 0;
}
