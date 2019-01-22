#include<stdio.h>

int main()
{
	const int secret_code = 13;
	int code_entered;
	
	do
	{
		printf("Enter your secret code:\n");
		scanf("%d\n",&code_entered);
	}
	while (code_entered != secret_code);
	printf("Congatulations! You are cured!");
	
	return 0;
}
