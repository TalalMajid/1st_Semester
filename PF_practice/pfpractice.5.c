#include <stdio.h>

void studentReport(char name[][20], int marks[][5], int n){
	int total_marks[n] , highest , top ;
	float average[n] , class_average = 0;
	char grade[n];
	
	for (int i = 0; i < n; i++) {
        total_marks[i] = 0;
    }
    
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < 5 ; j++){
			total_marks[i] += marks[i][j];
			
		}
		
		highest = total_marks[0];
		if(highest < total_marks[i]){
			highest = total_marks[i];
			top = i;
		}
		
		average[i] = total_marks[i] / 5.0;
		class_average += average[i];
	}
	class_average /= n;
	for(int i = 0 ; i < n ; i++){
		if(average[i] >= 90){
			grade[i] = 'A';
		}
		else if(average[i] >= 80){
			grade[i] = 'B';
		}
		else if(average[i] >= 70){
			grade[i] = 'C';
		}
		else if(average[i] >= 60){
			grade[i] = 'D';
		}
		else{
			grade[i] = 'F';
		}
	}
	
	printf("Student Report:\n");
	for(int i = 0 ; i < n ; i++){
		printf("%d. %s | Total Marks : %d | Average : %.2f | Grade : %c\n",i+1, name[i], total_marks[i], average[i], grade[i]);
	}
	printf("\nClass average marks:%.2f\n",class_average);
	printf("Top student : %s with %d marks",name[top], total_marks[top]);	
}

int main(){
	int n;
	
	printf("Enter the number of students:");
	scanf("%d",&n);
	char name[n][20];
	int marks[n][5];
	
	for(int i = 0 ; i < n ; i++){
		printf("Enter name of student#%d:",i+1);
	    scanf(" %[^\n]",&name[i]);
	    printf("Enter marks in 5 subjects:");
	    for(int j = 0 ; j < 5 ; j++){
	    	scanf("%d",&marks[i][j]);
		}
	}
	studentReport(name, marks ,n);
	
	return 0;
}
