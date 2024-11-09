#include <stdio.h>                   //game score calculator
int main(){
	int win,lose;
	
	printf("Enter the number of wins:");
	scanf("%d",&win);
	printf("Enter the number of loses:");
	scanf("%d",&lose);
	
	int win_score = win*50;
	int lose_score = lose*10;
	int score = win_score - lose_score;
	
	if(win_score > lose_score){
		score += 500;
	}
	
	printf("%d",score);
	
	return 0;
}
