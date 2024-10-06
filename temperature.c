#include <stdio.h>
#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0/9.0)

int main() {
	float celsius , fahrenheit;
	printf("Enter fahrenheit temperature:");
	scanf("%f" , &fahrenheit);
	celsius = SCALE_FACTOR*(fahrenheit-FREEZING_PT);
	printf("\ncelsius equivalent is : %.1f \n" , celsius );
	return 0;
}
