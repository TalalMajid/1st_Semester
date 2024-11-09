#include <stdio.h>

void Fibonacci(int n) {
    int a = 0, b = 1, next_term;

    printf("Fibonacci Series: %d, %d", a, b);

    for (int i = 1 ; i <= n-2 ; i++) {
        next_term = a + b;
        printf(", %d", next_term);
        a = b;
        b = next_term;
    }
}

int main(){
    int n;

    printf("Enter the number of terms for Fibonacci series:");
    scanf("%d",&n);

    if(n >= 2){
        Fibonacci(n);
    }
	else{
        printf("Please enter a number greater than or equal to 2");
    }

    return 0;
}

