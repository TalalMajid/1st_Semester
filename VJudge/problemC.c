#include <stdio.h>             //odd number counter
int main(){
	int n , m;
	printf("Enter the number of test cases:");
	scanf("%d",&n);
	
	int result[n];
	
	for(int i = 0 ; i < n ; i++){
		printf("Enter the elements in test case#%d : ",i+1);
		scanf("%d",&m);
		
		int num[m] , count = 0;
		printf("Enter elements:");
		
		for(int j = 0 ; j < m ; j++){
			scanf("%d",&num[j]);
			if(num[j] % 2 != 0){
				count++; 
			}
		}
		result[i] = count;
	}
	for(int i = 0 ; i < n ; i++){
		printf("Number of odds in case#%d : %d\n",i+1,result[i]);
	}
	
	return 0;
}
