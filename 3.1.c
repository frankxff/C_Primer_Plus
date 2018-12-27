/*
list3.1 platinum
*/
#include<stdio.h>

int main()
{
	float weight; //your weight
	float value; // equal to silver
	
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it.\n'");
	printf("Please enter your weight in pounds:");
	
	/* get user's input */
	scanf("%f",&weight);
	value = 1700.0*weight*14.5833;
	
	printf("Your weight in platinum is worth $%.2f.\n",value);
	printf("You are easy worth that! If platinum prices drop.\n");
	printf("eat more to maintain your value!\n");
	
	
	return 0;
	
}
