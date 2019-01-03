#include<stdio.h>

int main()
{
	float f;
	printf("Enter a floating-point value:");
	printf("_____\b\b\b\b\b");
	scanf("%f",&f);
	printf("\nfixed-point notation:%f",f);
	printf("\nexponential notation:%e",f);
	printf("\np notation:%a",f);
	
	return 0;
}
