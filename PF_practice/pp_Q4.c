#include <stdio.h>
int calculate_charges(float hours[3], int customers){
	int min_charges = 2;
	float extra_hrs;
	float charges;
	float total_hrs = 0;
	float total_charges = 0;
	printf("Car\tHours\tCharges\n");
	for(int i = 0 ; i < customers ; i++){
		if(hours[i] <= 3 ){
			charges = min_charges;
		}
		else if(hours[i] == 24){
			charges = 10;
		}
		else{
			extra_hrs = hours[i] - 3;
			charges = min_charges + (extra_hrs * 0.5);
		}
		printf("%d\t%.2f\t%.2f\n",i+1,hours[i],charges);
		total_hrs += hours[i];
		total_charges += charges;
	}
	printf("Total\t%.2f\t%.2f",total_hrs,total_charges);
	
}

int main(){
	float hours[3];
	int customers = 3;
	
	for(int i = 0 ; i < customers ; i++){
		printf("Enter the hours parked for customer#%d:",i+1);
		scanf("%f",&hours[i]);
		if(hours[i] < 0){
			printf("Numbers of hours cannot be negative");
			return 1;
		}
	}
	calculate_charges(hours,customers);
	
	return 0;
}
