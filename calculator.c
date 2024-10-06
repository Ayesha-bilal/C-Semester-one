#include <stdio.h>

int main(void) {
	int num1 , num2 , add , sub , mul , div ;
	printf("Enter num 1 :");
	scanf("%d" , &num1);
	printf("Enter num 2 :");
	scanf("%d" , &num2);
	add = num1+num2;
	sub = num1-num2;
	mul = num1*num2;
	div=num1/num2;
	printf("The addition of num1 and num2 is : %d \n" , add);
	printf("The subtraction of num1 and num2 is : %d \n" , sub);
	printf("The multiplication of num1 and num2 is : %d \n" , mul);
	printf("The division of num1 and num2 is : %d \n" , div);
	return 0;
}
