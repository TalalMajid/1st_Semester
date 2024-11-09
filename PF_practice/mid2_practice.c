#include <stdio.h>
int r = 5 , c = 6;

void addStudent(int seats[r][c],int std_id){
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			if(seats[i][j] == 0){
                seats[i][j] = std_id;
                printf("Student %d has been added to seat %d\n",std_id, i*c + j+1);
                return;
            }
		}
	}
	printf("No seats available!\n");
	
}

void removeStudent(int seats[r][c],int seat_number){
	int row = (seat_number - 1) / c;
    int col = (seat_number - 1) % c;
    
    if(seats[row][col] != 0){
        printf("Student %d removed from seat %d\n",seats[row][col], seat_number);
        seats[row][col] = 0;
    }
	else{
        printf("Seat %d is already empty\n",seat_number);
    }
}

void seating_chart(int seats[r][c]){
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			if(seats[i][j] == 0){
				printf("|    ");
			}
			else{
				printf("| %2d ",seats[i][j]);
			}
		}
		printf("|\n");
	}
}

int main(){
	int seats[r][c];
	int seat_num = 1;
	int choice , seat_number , std_id;
	
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			seats[i][j] = seat_num;
			seat_num++;
		}
	}
	
	
	while(1){
		printf("Menu:\n");
	    printf("1. Add student\n");
	    printf("2. Remove student\n");
	    printf("3. Show seating chart\n");
	    printf("4. Quit\n");
	    printf("Enter your choice:");
	    scanf("%d",&choice);
		switch(choice){
		    case 1:
			    printf("Enter the student ID:");
			    scanf("%d",&std_id);
			    if(std_id < 1 || std_id > 30){
				    printf("Invalid seat number! Please enter a seat number between 1 to 30\n");
			    }
			    else{
				    addStudent(seats,std_id);
	            }
			    break;
		    case 2:
			    printf("Enter the seat number to remove the student:");
			    scanf("%d",&seat_number);
			    if(seat_number < 1 || seat_number > 30){
				    printf("Invalid seat number! Please enter a seat number between 1 to 30\n");
			    }
			    else{
				    removeStudent(seats,seat_number);
			    }
			    break;
		    case 3:
			    seating_chart(seats);
			    break;
		    case 4:
			    printf("Program Exitted!");
			    return 0;
			    break;
		    default:
			    printf("Invalid Choice! Please choose from 1 to 4\n");
			    break;
	    }
    }
	return 0;
}
