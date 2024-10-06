#include <stdio.h>

int main(void) {
	float days;
	printf("Enter number of days:");
	scanf("%f" , &days);
	
	printf("days to weeks: %.2f \n" , days/7);
	printf("days to months: %.2f \n" , days/30);
	printf("days to years: %.2f \n" , days/365);
	return 0;
}
