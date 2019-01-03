#include<stdio.h>

int main()
{
	int year = 31560000;
	int ages;
	printf("Please enter your ages:");
	scanf("%d",&ages);
	long int seconds = year * ages;
	printf("\nYour ages are %ld seconds.",seconds);
	
	
	return 0;
}
