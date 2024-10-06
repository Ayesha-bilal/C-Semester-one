#include <stdio.h>

int main() {
	int length , width , height , volume , surface_area;
	
	printf("Enter the length of the box:");
	scanf("%d",&length);
	
	printf("Enter the width of the box:");
	scanf("%d",&width);
	
	printf("Enter the height of the box:");
	scanf("%d",&height);
	
	volume = length*width*height;
	printf("The volume of the box :%d \n" , volume);
	
	surface_area = (2*length*width) + (2*length*height) + (2*width*height);
	printf("The surface area of the box:%d",surface_area);

	return 0;
}
