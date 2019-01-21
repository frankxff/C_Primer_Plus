#include<stdio.h>

int main()
{
	int num = 1;
	
	while (num < 20)
	{
		printf("%d * %d = %d\n", num, num, num * num);
		num = num + 1;
	}
	
	return 0;
}
