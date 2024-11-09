#include <stdio.h>

void compress_word(char list[],int n){
    char result[n+1];
    int j = 0;
    for(int i = 0 ; list[i] != '\0' ; i++){
        if( i == 0 || list[i] != list[i-1] ){
            result[j] = list[i];
            j++;
        }
    }
    result[j]='\0';
    printf("Compressed word : %s\n",result);
}

int main() {
    int n;
    printf("Enter the number of words to compress : ");
    scanf("%d",&n);
    char list[n][100];
   
    for(int i = 0 ; i < n ; i++){
        printf("Enter word#%d : ", i+1);
        scanf("%s",&list[i]);
        compress_word(list[i],100);
    }
   

    return 0;
}
