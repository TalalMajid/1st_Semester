#include <stdio.h>                           //even coins breaker into two and four
int main(){
	int n;
	
	printf("Enter the number of coins:");
	scanf("%d",&n);
	
	int coins[n];
	for(int i = 0 ; i < n ; i++){
		printf("Enter coin#%d : ",i+1);
		scanf("%d",&coins[i]);
	}
	
	for(int i = 0 ; i < n ; i++){
		int two = 0 , four = 0 , total = 0;
		if(coins[i] % 2 != 0){
			printf("Coin#%d is not even\n",i+1);
			continue;
		}
		four = coins[i] / 4;
		if(coins[i] % 4 == 2){
			two = 1;
		}
		total = four + two;
		printf("Coin#%d can be distributed into %d coins\n",i+1,total);
	}
	
	
	return 0;
}
