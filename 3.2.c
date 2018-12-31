#include<stdio.h> 

int main()
{
	int ten = 10;
	int two = 2;
	
	printf("Doing it right:");
	printf("%d minus %d is %d\n",ten,2,ten - two);
	printf("%d minus %d is %d\n",ten);// lack two nums.compiler will get random nums in internal storage
	
	return 0;
}
