#include <stdio.h>
#include <string.h>

void character_freq(char slogan[]){
	int count;
	int len = strlen(slogan);
	
	printf("For \"%s\" : {",slogan);
    for(int i = 0; i < len; i++){
        if(slogan[i] == '\0'){
            continue;
        }
        
        count = 1;
        for(int j = i + 1; j < len; j++){
            if(slogan[i] == slogan[j] && slogan[j] != '\0'){
                count++;
                slogan[j] = '\0';
            }
        }
        if(slogan[i] == ' '){
        	printf("' ':%d,",count);
		}
		else{
			printf("'%c':%d,", slogan[i], count);
		}
    }
    printf("\b}");
}

int main(){
    int n;
   
    printf("Enter the number of slogans : ");
    scanf("%d",&n);
    char slogans[n][100];
   
    for(int i = 0 ; i < n ; i++){
        printf("Enter slogan#%d : ",i+1);
        scanf(" %[^\n]",&slogans[i]);
    }
    for(int i = 0 ; i < n ; i++){
    	character_freq(slogans[i]);
    	printf("\n");
	}
	  
    return 0;
}
