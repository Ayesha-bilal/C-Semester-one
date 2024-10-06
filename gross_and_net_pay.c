#include <stdio.h>

int main() {
	float net_pay , gross_pay , tax;

	printf("Enter Gross pay:");
	scanf("%f" , &gross_pay);
	printf("Your gross pay is : %.2f \n" , gross_pay);
	
	printf("Enter the taxes you have to pay:");
	scanf("%f" , &tax);
	printf("The due taxes are : %.2f \n" , tax);
	
	net_pay = gross_pay - tax;
	printf("Your net pay will be : %.2f" , net_pay);
	
	
	return 0;
}
