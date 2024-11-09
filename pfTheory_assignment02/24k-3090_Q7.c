#include <stdio.h>
#include <string.h>

void populateArray(char arr[6][5],int count){
    int random = 65 + count;  //ASCII value of A is 65
    char std_id[] = "3090";
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            arr[i][j] = (random + (i * 5 + j) * 7) % 26 + 'A';   //this keeps the character in the range A-Z
        }
    }
    strncpy(arr[5],std_id,4);       //copying student id
    
    for(int i = 0 ; i < 6 ; i++){          //printing the table with random characters
        for(int j = 0 ; j < 5 ; j++){
            printf("| %c ",arr[i][j]);
        }
        printf("|\n");
    }
}

int score = 0;
void searchTarget(char arr[6][5], char target[]){
    int found = 0;          // Flag to track if the target is found
    char transpose[5][6];
    
	for(int i = 0 ; i < 5 ; i++){           //making a transpose of the array to also search vertically
        for(int j = 0 ; j < 6 ; j++){
            transpose[i][j] = arr[j][i];
        }
    }
    
    for (int i = 0; i < 6; i++){              // Search both horizontally and vertically
        if (strstr(arr[i], target) != NULL || strstr(transpose[i],target) != NULL) {
            score++;
            found = 1;
            printf("%s is present Score: %d\n", target, score);
            break;
        }
    }
    if (!found) {
        score--;
        printf("%s is not present Score: %d\n",target,score);
    }
}

int main(){
	char arr[6][5];
	char target[100];
	int count = 0;     // to repopulate the array randomly
	
	populateArray(arr,count);
	while(1){
		count += 3;
		printf("\nSearch string (only UPPERCASE) : ");
	    scanf("%s",&target);
	    if(strcmp(target,"end") == 0 || strcmp(target,"END") == 0 ){
	    	break;
		}
	    searchTarget(arr,target);
	}
	printf("\nRe-populated table:\n");
	populateArray(arr,count);
	printf("\nProgram Exited");
	return  0;
}
