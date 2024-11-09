#include <stdio.h>
int power(int n,int p){
	if(p == 0){
		return 1;
	}
	return n * power(n,p-1);
}
int main(){
	int n , p;
	
	printf("Enter the base:");
	scanf("%d",&n);
	printf("Enter the power:");
	scanf("%d",&p);
	if(p < 0){
		printf("Power cannot be negative!");
		return 0;
	}
	int result = power(n,p);
	printf("Result = %d",result);
	
	return 0;
}
