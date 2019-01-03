#include<stdio.h>

int main()
{
	float element = 3.156e-23;
	float water;
	printf("Please enter water weight:");
	scanf("%f",&water);
	float num = (water*950)/element;
	printf("water element count is %f",num);
	
	return 0;
}
