#include<stdio.h>

void interchange(int u, int v);

int main()
{
	int x = 5,y = 10;
	
	printf("Origional x = %d and y = %d.\n", x, y);
	interchange(x, y);
	printf("Now x = %d and y = %d.\n", x, y);
	
	return 0;
}

void interchange(int u, int v)
{
	int temp;
	temp = u;
	u = v;
	v = temp;
	
	printf("u = %d and v = %d.\n", u , v);
}
