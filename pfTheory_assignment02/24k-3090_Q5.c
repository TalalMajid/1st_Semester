#include <stdio.h>
void horizontal_histogram(int values[],int count){
	printf("Horizontal Histogram:\n");
	for(int i = 0 ; i < count ; i++){
		printf("Value %d : ",i+1);
		for(int j = 0 ; j < values[i] ; j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}
void vertical_histogram(int values[],int count){
	int max = values[0];
	for(int i = 0 ; i < count ; i++){
		if(max < values[i]){
			max = values[i];
		}	
	}

	printf("Vertical Histogram:\n");
	for(int i = max ; i > 0 ; i--){
		for(int j = 0 ; j < count ;j++){
			if(values[j] >= i){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	for(int i = 0 ; i < count ; i++){
		printf("%d ",values[i]);
	}
}

int main(){
	int count;
	
	printf("Enter the number of integers:");
	scanf("%d",&count);
	
	int values[count];
	for(int i = 0 ; i < count ; i++){
		printf("Enter integer#%d : ",i+1);
		scanf("%d",&values[i]);
	}
	printf("\n");
	horizontal_histogram(values,count);
	vertical_histogram(values,count);
	return 0;
}
