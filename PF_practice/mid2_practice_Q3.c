#include <stdio.h>
int r = 3 , c = 5;               //Global variables

void initialize_lib(int lib[r][c]){
	int n = 101;                             //random book ID
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			lib[i][j] = n;
			n++;
		}
	}
}

void display_lib(int lib[r][c]){
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			printf("| %3d ",lib[i][j]);     //display with proper formatting
		}
		printf("|\n");
	}
	printf("\n");
}

void addBook(int lib[r][c], int shelf_no, int book_id){
	int book_added = 0;
	int shelf_row = (shelf_no - 1) / c;
    int shelf_col = (shelf_no - 1) % c;

    if(lib[shelf_row][shelf_col] == 0){                 //only add the book if the shelf is empty
        lib[shelf_row][shelf_col] = book_id;
        printf("Book %d has been added to shelf#%d\n\n",book_id,shelf_no);
        book_added = 1;
    }
	if(!book_added){                                       //display the message if the shelf was not empty
		printf("Shelf#%d is not empty\n\n",shelf_no);
	}
}

void removeBook(int lib[r][c], int book_id){
	int removed = 0;
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			if(lib[i][j] == book_id){               //assign 0 to show that the shelf is empty now
				lib[i][j] = 0;
				printf("Book %d has been removed from shelf#%d\n\n",book_id,i*c+j+1);
				removed = 1;
				break;             //exit the inner loop if the book is removed
			}
		}
		if(removed){           //exit the outer loop if the book is removed
			break;
		}
	}
	if(!removed){                                       //display the message if the book is not found
		printf("Book %d is not found\n\n",book_id);
	}
}

void searchBook(int lib[r][c], int book_id){
	int found = 0;
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			if(lib[i][j] == book_id){
				printf("Book %d is at shelf#%d\n\n",book_id,i*c+j+1);
				found = 1;
				return;
			}
		}
	}
	if(!found){                                      //display the message if the book is not found
		printf("Book %d is not found\n\n",book_id);
	}
}

int main(){
	int lib[r][c];
	initialize_lib(lib);                  //initialize the library with book numbers
	
	int choice , shelf_no , book_id;
	
	while(1){
		printf("1. Display Library \n2. Add Book \n3. Remove Book \n4. Search Book \n5. Quit\n");     //menu for the user
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				display_lib(lib);
				break;
			case 2:
				printf("Enter the shelf number (1-15) :");
				scanf("%d",&shelf_no);
				if(shelf_no < 1 || shelf_no > 15){                  //condition if user inputs invlaid shelf number
					printf("Shelf number doesn't exists\n\n");
				}
				else{
					printf("Enter the book ID to add:");
					scanf("%d",&book_id);
					addBook(lib,shelf_no,book_id);
				}
				break;
			case 3:
				printf("Enter the book ID:");
				scanf("%d",&book_id);
				removeBook(lib,book_id);
				break;
			case 4:
				printf("Enter the book ID:");
				scanf("%d",&book_id);
				searchBook(lib,book_id);
				break;
			case 5:
				printf("Library Exitted!");
				return 0;                           //exit the program if user selects quit
			default:
				printf("Invalid choice!\n\n");          //display the message if the user inputs invalid choice
				break;
		}
	}
	
	return 0;
}
