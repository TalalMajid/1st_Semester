#include <stdio.h>
int calculate(int a,int b,int operation){
    switch(operation){
        case 1:
            return a + b;
        case 2:
            return a - b;
        case 3:
            return a * b;
        case 4:
        	return a / b;
    }
}
int main(){
    int a,b;
    int operation;
    
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    printf("Choose Operation:");
    scanf("%d",&operation);
    if(operation > 4 || operation < 1){
    	printf("Invalid operation");
    	return 0;
	}
    
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if(operation == 4 && b == 0){
        printf("Division by 0 is not possible");
       	return 0;
	}
    
    int result = calculate(a,b,operation);
    printf("Result = %d",result);
    return 0;
}
