#include <stdio.h>
int main(){
	int a,b;
	
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	int product = a * b;
	
	if(a <= 0 || b <= 0){
		printf("Invalid input");
	}
	
	while(b != 0){
		int remainder = a % b;
		a = b;
		b = remainder;
	}
	int GCD = a;
	int LCM = product / GCD;
	
	printf("The LCM is : %d\n",LCM);
	printf("The GCD is : %d",GCD);
	
	return 0;
}
