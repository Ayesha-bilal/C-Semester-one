#include <stdio.h>

int main() {
	//Method 1
	int n1 = 4;
	int n2 = 6;
	int  temp;
	temp = n1;  // temp = 4
	printf("The value of temp will be : %d \n" , temp);
	n1 = n2 ; // n1 = 6
	n2 = temp; // n2 = 4
	printf("n1 is : %d \n" , n1);
	printf("n2 is : %d \n" , n2);
	return 0;
  
  
// By this method you can only swap numbers that are given 
  int a = 10 ;
  int b = 5;
  a = a- b;
  b = a+b;
  printf("a %d \n " ,a);
  printf("b %d" , b);
  	return 0;

