#include <stdio.h>

int main(void) {
	float length , breath , area,  perimeter;
	
	printf("Enter the length of the Rectangle:");
	scanf("%f" , &length);
	
	printf("Enter the breath of the Rectangle:");
	scanf("%f" , &breath);
	
	area=length*breath;
	perimeter=2*(length+breath);
	
	printf("The area of the Rectangle is:%.2f\n" , area);
	printf("The perimeter of the Reactangle is:%.2f\n" , perimeter);
	
	return 0;
}
