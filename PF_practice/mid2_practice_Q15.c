#include <stdio.h>
#include <string.h>

void plural(char singular[]){                            // converts singular to plural
	int len = strlen(singular);
	if(singular[len-1] == 'y' && singular[len-2] != 'a' && singular[len-2] != 'e' &&   //checks if the last digit is y and
	   singular[len-2] != 'i' && singular[len-2] != 'o' && singular[len-2] != 'u'){    //the second last is consonant
	   	singular[len-1] = 'i';               //replaces 'y' from the end with 'i'
		strcat(singular,"es");                      //adds 'es' to the end of the word
	}
	else if(singular[len-1] == 's' || singular[len-1] == 'x'  || singular[len-1] == 'z' || 
	       (singular[len-2] == 's' && singular[len-1] == 'h') ||                         //checks if the last digit is 's' or 'x' or 'z'
		   (singular[len-2] == 'c' && singular[len-1] == 'h')){                          //or 'sh' or 'ch'
		strcat(singular,"es");                      //adds 'es' to the end of the word
	}
	else{
		strcat(singular,"s");               //adds 's' to the end of the word
	}
	printf("Plural word : %s",singular);     //display the plural word
}

int main(){
	char singular[50];
	
	printf("Singular word:");
	scanf("%s",&singular);
	plural(singular);
	
	return 0;
}
