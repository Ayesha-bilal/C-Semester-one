#include <stdio.h>

int main() {
	int num1 = 10;
	float num2 = 5;
	char character = 'a';
	
	printf("num1 : %d \n" , num1);
	printf("num2 : %f \n" , num2);
	printf("character : %c \n" , character);
	
	printf("Enter num1:");
	scanf("%d" , &num1);
	printf("num1 : %d \n" , num1);
	
    printf("Enter num2:");
    scanf("%f",&num2);
    printf("num2 : %.2f \n" , num2);
    
    printf("Enter character:");
    scanf(" %c", &character);
    printf("character: %c", character);
	return 0; 
}
