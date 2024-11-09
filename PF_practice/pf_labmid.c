#include <stdio.h>
int main(){
	
	for(int i = 0 ; i < 10 ; i++){
		for(int j = 0 ; j < i ; j++){
			printf(" ");
		}
		for(int j = 9 ; j < 9 ; j--){
			printf("%d",j);
		}
		for(int j = 0 ; j < 10-i ; j++){
			printf("%d",j);
		}
//		for(int j = 9 ; j >= 0 ; j--){
//			printf("%d",j);
//		}
		printf("\n");
	}
	
	
	
}
