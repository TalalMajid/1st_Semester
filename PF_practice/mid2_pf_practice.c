#include <stdio.h>
void total_weekly_rainfall(int rainfall[7][7]){
	int total = 0;
	for(int i = 0 ; i < 7 ; i++){
		for(int j = 0 ; j < 7 ; j++){
			total += rainfall[i][j];
		}
	}
	printf("The total weekly rainfall is : %d\n",total);
}

void highest_rainfall_day(int rainfall[7][7]){
	int day;
	int max_rainfall = 0;
	for(int i = 0 ; i < 7 ; i++){
		int daily_total = 0;
		for(int j = 0 ; j < 7 ; j++){
			daily_total += rainfall[i][j];
		}
		if(daily_total > max_rainfall){
			max_rainfall = daily_total;
            day = i;
	    }
	}
	
	printf("Highest rainfall day among all is : day#%d",day+1);
}

int main(){
	int rainfall[7][7] = {{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7}};
	
	for(int i = 0 ; i < 7 ; i++){
		for(int j = 0 ; j < 7 ; j++){
			rainfall[i][j] = 5-i+j;
		}
	}
	total_weekly_rainfall(rainfall);
	highest_rainfall_day(rainfall);
	
	return 0;
}
