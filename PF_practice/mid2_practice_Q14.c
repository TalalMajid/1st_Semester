#include <stdio.h>
int sections = 6;
int std_each_sec = 3;
void section_topper(char std_names[6][3][20], float GPAs[6][3], float percentages[6][3]){
	int topper,section,percent;
	char name; 
	for(int i = 0 ; i < sections ; i++){
		for(int j = 0 ; j < std_each_sec ; j++){
			topper = GPAs[i][j];
			for(int k = 0 ; k < std_each_sec ; k++){
				if(GPAs[j][k] > topper){
					topper = GPAs[j][k];
					section = j;
					name = std_names[j][k];
					percent = percentages[j][k];
				}
			}
			printf("Section %d topper : %s (GPA : %d , Percentage : %d)\n",section,name,topper,percent);
		}
	}
}

int main(){
	char std_names[6][3][20] = {{"Alice", "Bob" , "Charlie"},  
                                {"David", "Eva" , "Mona"},
                                {"Kelly", "Ivy" , "Hannah"},
                                {"Quinn", "Leo" , "Rita"},
                                {"Frank", "Nate", "Olivia"},
                                {"Paul" , "Jack", "George"}};
                                
	float GPAs[6][3] = {{3.8, 3.9, 3.7},
                        {3.5, 3.6, 3.6},
                        {3.9, 3.7, 3.8},
                        {3.8, 3.9, 3.7},
                        {3.9, 3.8, 3.8},
                        {3.7, 3.6, 3.5}};
                        
	float percentages[6][3] = {{85.0, 90.0, 88.0},
                               {75.0, 80.0, 78.0},
                               {92.0, 87.0, 85.0},
                               {89.0, 91.0, 84.0},
                               {90.0, 85.0, 88.0},
                               {78.0, 75.0, 80.0}};
	
	section_topper(std_names,GPAs,percentages);
	return 0;
}
