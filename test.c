#include<stdio.h>
#include<stdlib.h>
#define MAXNUM 40
int main()
{
	int num[MAXNUM] = {10,9,8,7,6,5,4,3,2,1};
	int sortnum[MAXNUM];
	
	sortnum = qsort(num, 10, sizeof(int));
	printf(sortnum);
	return 0;
}
