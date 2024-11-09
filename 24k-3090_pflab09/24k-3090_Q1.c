#include <stdio.h>

int main(){
	char destination[100];
	char source[100];
	int n;
	
	printf("Enter destination string : ");
	scanf("%s", &destination);
	printf("Enter source string : ");
	scanf("%s", &source);
	printf("Enter the number to of characters to append the source : ");
	scanf("%d",&n);
	
	printf("Concatinated string : %s",strncat(destination,source,n));
	
	return 0;
}
