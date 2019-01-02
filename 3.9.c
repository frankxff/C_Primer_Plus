#include<stdio.h>

int main()
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;
	
	printf("%d\n",n,m);//too many paras 
	printf("%d %d %d\n",n);//lack paras
	printf("%d %d\n",f,g);//type is not matched
	
	return 0;
}
