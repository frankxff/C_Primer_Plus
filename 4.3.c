#include<stdio.h> 
#include<string.h>  // providing strlen() prototype �ṩstrlen()����ԭ�� 
#define PRAISE "You are an extraordinary being!"
int main()
{
	char name[40];
	printf("What's your name?");
	scanf("%s",name);
	printf("Hello,%s,%s\n",name,PRAISE);
	printf("Your name of %u letter occupies %u memory cells.\n",strlen(name),sizeof name);
	printf("The phrase of praise has %u letters",strlen(PRAISE));
	printf(" and occupies %u memory cells.\n",sizeof PRAISE);
	
	
	return 0;
}
