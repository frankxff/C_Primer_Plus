#include<stdio.h>

int main()
{
	float cell = 2.54;
	float height;
	printf("Please enter your height:");
	scanf("%f",&height);
	printf("Your height is %f",height*cell);
	
	return 0;
}
