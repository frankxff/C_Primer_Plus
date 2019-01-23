#include<stdio.h>

void mikado(int);

int main()
{
	int pool = 2,bah = 5;
	
	printf("In main(), pool = %d and &pool = %p\n", pool, &pool);
	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
	
	mikado(pool);
	
	return 0;
}
void mikado(int bah)
{
	int pool = 10;
	printf("In main(), pool = %d and &pool = %p\n", pool, &pool);
	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
}
