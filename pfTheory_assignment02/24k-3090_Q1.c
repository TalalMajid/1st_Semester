#include <stdio.h>
int main(){
	int arr[5];
	
	for(int i = 0 ; i < 5 ; i++){
		printf("Enter element#%d : ",i);
		scanf("%d",&arr[i]);
		if(arr[i] >= 9999){
			printf("Value must be less than 9999");
			return 1;
		}
	}
	int smallest = arr[0];
	for(int i =  0 ; i < 5 ; i++){
		if(arr[i] < smallest){
			smallest = arr[i];
		}
	}
	
	int sec_smallest = 9999;
	for(int i =  0 ; i < 5 ; i++){
		if(arr[i] < sec_smallest && arr[i] > smallest){
			sec_smallest = arr[i];
		}
	}
	if(sec_smallest == 9999){
		printf("There is no second smallest element in the array");
	}
	else{
		printf("The second smallest element in the array is : %d",sec_smallest);
	}
	return 0;
}
