#include <stdio.h>

int main(void) {
	int n , square , cube;
	printf("Enter a number:");
	scanf("%d" , &n);
	printf("The number is : %d \n"  , n);
	
	square = n*n;
	cube=n*n*n;
	
	printf("The square of the number is : %d \n" , square);
	printf("The cube of the number is : %d " , cube);
	return 0;
}
