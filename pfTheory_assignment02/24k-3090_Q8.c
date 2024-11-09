#include <stdio.h>
#include <math.h>

int BinaryToDecimal(int number){
    int decimal = 0;
    int power = 0;
   
    while(number > 0){
        int last_digit = number % 10;
        number /= 10;
        decimal += last_digit * pow(2,power);
        power++;
    }
    return decimal;
}

int DecimalToBinary(int number){
    int base = 1;
    int binary = 0;
   
    while(number > 0){
        int remainder = number % 2;
        binary += remainder * base;
        number /= 2;
        base *= 10;
    }
    return binary;
}

void DecimalToHexadecimal(int number){
    printf("Hexadecimal equivalent : %X\n\n",number);
}

void HexadecimalToDecimal(char hexNumber[]){ 
    int decimal;

    if(sscanf(hexNumber, "%x", &decimal) == 1){
        printf("Decimal equivalent : %d\n\n", decimal);
    }
	else{
        printf("Invalid hexadecimal input!\n\n");
    }        
}

void BinaryToHexadecimal(int number){
    int decimal = BinaryToDecimal(number);
	DecimalToHexadecimal(decimal);
}

void HexadecimalToBinary(char hexNumber[]){
    int decimal;
    
    if(sscanf(hexNumber, "%x", &decimal) == 1){
        int binary = DecimalToBinary(decimal);
        printf("Binary equivalent : %d\n\n",binary);
    }
    else{
        printf("Invalid hexadecimal input!\n\n");
    }
}

int valid_binary(int number){
    while(number > 0){
        if(number % 10 != 0 && number % 10 != 1){
            return 0;
        }
        number /= 10;
    }
    return 1;
}

int valid_hexadecimal(char hexNumber[]){
    for(int i = 0; hexNumber[i] != '\0'; i++){
        if(!((hexNumber[i] >= '0' && hexNumber[i] <= '9') || 
             (hexNumber[i] >= 'A' && hexNumber[i] <= 'F') || 
             (hexNumber[i] >= 'a' && hexNumber[i] <= 'f'))){
            return 0;
        }
    }
    return 1;
}

int main(){
    int choice, number;
    char hexNumber[100];
    
    do{
        printf("Menu:\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary:\n");
        printf("3. Decimal to Hexadecimal:\n");
        printf("4. Hexadecimal to Decimal:\n");
        printf("5. Binary to Hexadecimal:\n");
        printf("6. Hexadecimal to Binary:\n");
        printf("7. Exit the program\n\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
   
        switch(choice){
            case 1:
                printf("Enter a Binary number : ");
                scanf("%d",&number);
            
                if(valid_binary(number)){
                    printf("Decimal equivalent : %d\n\n",BinaryToDecimal(number));
                }
				else{
                    printf("Invalid binary input!\n\n");
                }
                break;
            case 2:
                printf("Enter a Decimal number : ");
                scanf("%d",&number);
                if(number >= 0){
                    printf("Binary equivalent : %d\n\n",DecimalToBinary(number));
                }
				else{
                    printf("Invalid decimal input!\n\n");
                }
                break;
            case 3:
                printf("Enter a Decimal number : ");
                scanf("%d",&number);
                if(number >= 0){
                    DecimalToHexadecimal(number);
                }
				else{
                    printf("Invalid decimal input!\n\n");
                }
                break;
            case 4:
                printf("Enter a Hexadecimal number : ");
                scanf("%s",&hexNumber);

                if(valid_hexadecimal(hexNumber)){
                    HexadecimalToDecimal(hexNumber);
                }
				else{
                    printf("Invalid hexadecimal input!\n\n");
                }
                break;
            case 5:    
                printf("Enter a Binary number : ");
                scanf("%d",&number);
            
                if(valid_binary(number)){
                    BinaryToHexadecimal(number);
                }
				else{
                    printf("Invalid binary input!\n\n");
                }
                break;
            case 6:
                printf("Enter a Hexadecimal number : ");
                scanf("%s",&hexNumber);
            
                if(valid_hexadecimal(hexNumber)){
                    HexadecimalToBinary(hexNumber);
                }
				else{
                    printf("Invalid hexadecimal input!\n\n");
                }
                break;
            case 7:
        	    printf("Program Exited");
                break;	
            default:
                printf("Invalid choice! Please choose from the mentioned numbers\n\n");
        }
	}
    while(choice != 7);

    return 0;
}
