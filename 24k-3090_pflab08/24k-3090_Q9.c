#include <stdio.h>
int main() {
    int n , i ;
    int occuring_elements = 0;
    
    printf("Array size:");
    scanf("%d",&n);
    
    if(n == 0){
		printf("Array is empty");
		return 1;
	}
	
    int arr[n];
    for(i = 0 ; i < n ; i++){
    	printf("Enter element#%d : ",i+1);
    	scanf("%d",&arr[i]);
	}

	int max = arr[0];
	
	for(i = 0 ; i < n ; i++){        //Finding the maximum number from the user input 
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
    int freq[max+1];

    for(i = 0 ; i <= max ; i++){           //Assigning 0 to all indexes of freq
        freq[i] = 0;
    }
    for(i = 0 ; i < n ; i++){             //Incrementing the occuring indexes
        freq[arr[i]]++;
    }
    printf("Occuring elements are: ");

    for(i = 0 ; i <= max ; i++){          //Finding the occuring number
        if(freq[i] > 1){
            printf("%d ", i);
            occuring_elements = 1;
        }
    }
    if(occuring_elements == 0){
        printf("None of these");
    }
    return 0;
}

