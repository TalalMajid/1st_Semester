#include <stdio.h>
int main(){
	int n;
	printf("Enter a number for the pattern:");
	scanf("%d",&n);
	
	for(int i = 0 ; i <= n ; i++){
		if(i % 2 == 0){
			printf("%d\t%d\t%d\t%d",i,i,i,i);
		}
		else{
			printf("\t%d\t%d\t",i,i);
		}
		printf("\n");
	}
	
	return 0;
}
