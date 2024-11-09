#include <stdio.h>
int r = 5 , c = 5;
void display_grid(char grid[r][c]){
	for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("| %c ",grid[i][j]);
        }
        printf("|\n");
    }
}

void move_player(char grid[5][5],char move,int player_row,int player_col){
	int new_row = player_row;
    int new_col = player_col;
    
    if(move == 'W' || move == 'w'){
        new_row--;
    }
	else if (move == 'S' || move == 's'){
        new_row++;
    }
	else if (move == 'A' || move == 'a'){
        new_col--;
    }
	else if (move == 'D' || move == 'd'){
        new_col++;
    }
	else{
        printf("Invalid input! Please enter W, A, S, D, or Q to quit\n");
        return;
    }
    
    if(new_row >= 0 && new_row < r && new_col >= 0 && new_col < c){
        if(grid[new_row][new_col] == 'X'){
            printf("You cannot move into an obstacle!\n");
        }
		else{
            if(grid[new_row][new_col] == 'I'){
                printf("You collected an item!\n");
            }

            grid[player_row][player_col] = ' ';
            grid[new_row][new_col] = 'P';
        }
    }
	else{
        printf("Invalid move! You cannot move out of bounds\n");
    }
}


int main(){
    char grid[5][5] = {{' ',' ','I','X',' '},
                       {' ','X',' ',' ',' '},
                       {'I',' ','X','X',' '},
                       {' ',' ',' ','I','X'},
                       {' ','X',' ',' ','P'}};
    int player_row = 4 , player_col = 4;
    printf("Avoid the obstacles and collect all the items (I)\n");
    printf("W : up  ,  S : down  ,  A : left  ,  D : right  ,  Q : quit\n\n");
    
    char move;
    while(1){
    	display_grid(grid);
    	printf("Move : ");
        scanf(" %c",&move);
        if(move == 'Q' || move == 'q'){
        	printf("Game Quitted!");
        	break;
		}
		
        move_player(grid,move,player_row,player_col);
        
		for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c ; j++){
                if(grid[i][j] == 'P'){
                    player_row = i;
                    player_col = j;
                }
            }
        }
        
	}
    
    return 0;
}
