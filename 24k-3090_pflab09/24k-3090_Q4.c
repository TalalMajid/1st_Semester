#include <stdio.h>
int swap_integers(int num1,int num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
	return num1;
}

int main(){
	int a,b,c,d;
	printf("Before swapping:\n");
	printf("First integer : ");
	scanf("%d",&a);
	printf("Second integer : ");
	scanf("%d",&b);
	
	c = swap_integers(a,b);
	d = swap_integers(b,a);
	printf("After swapping:\n");
	printf("First integer : %d\n",c);
	printf("Second integer : %d\n",d);
	return 0;
}
