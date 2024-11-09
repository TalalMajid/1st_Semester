#include <stdio.h>

void barcodeCheck(int barcode[12]){
	int sum_odd = 0;
	int sum_even = 0;
	for(int i = 0 ; i < 11 ; i++){
		if(i % 2 == 0){
			sum_odd += barcode[i];
		}
		else{
			sum_even += barcode[i];
		}
	}
	int check_digit;
	int step_1 = sum_odd * 3;
	int step_2 = step_1 + sum_even;
	
	if(step_2 % 10 == 0){
		check_digit = 0;
	}
	else{
		check_digit = 10 - (step_2 % 10);
	}
	if(barcode[11] == check_digit){
		printf("Validated");
	}
	else{
		printf("Error in the barcode:");
		for(int i = 0 ; i < 12 ; i++){
			printf("%d ",barcode[i]);
		}
		printf("\nStep#1 result:%d\n",step_1);
		printf("Step#2 result:%d",step_2);
	}
}

int main(){
	int barcode[12];
	
	printf("Enter the 12-digit barcode separated by spaces:");
	for(int i = 0 ; i < 12 ; i++){
	    scanf("%d",&barcode[i]);
	}
	barcodeCheck(barcode);
	
	return 0;
}
