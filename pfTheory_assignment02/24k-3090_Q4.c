#include <stdio.h>
#include <string.h>

void sort(char str[]){
    int length = strlen(str);
   
    for(int i = 0 ; i < length - 1 ; i++){
        for(int j = 0 ; j < length - i - 1 ; j++){
            if(str[j] > str[j + 1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
   
    printf("Enter the number of transactions : ");
    scanf("%d",&n);
   
    char str[n][100];
   
    for(int i = 0 ; i < n ; i++){
        printf("Enter transaction#%d : ",i+1);
        scanf("%s",&str[i]);
    }
    char sorted_str[n][100];
   
    for(int i = 0 ; i < n ; i++){
        strcpy(sorted_str[i],str[i]);
        sort(sorted_str[i]);
    }
   
    int grouped[n];
    for(int i = 0 ; i < n ; i++){
        grouped[i] = 0;
    }
   
    int count = 1;
    for(int i = 0 ; i < n ; i++){
        if(grouped[i] == 0){
            printf("Group %d : ",count);
            count++;
            printf("%s  ",str[i]);
            grouped[i] = 1;
           
            for(int j = i+1 ; j < n ; j++){
                if( grouped[j] == 0 && strcmp(sorted_str[i], sorted_str[j]) == 0){
                    printf("%s  ",str[j]);
                    grouped[j] = 1;
                }
            }
            printf("\n");
        }
    }
   
    return 0;
}
