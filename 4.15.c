#include<stdio.h>
//注意scanf()函数使用指向变量的指针 
int main()
{
	int age;//变量
	float assets;//变量
	char pet[30];//字符数组，用来存储字符串
	
	printf("Enter your age,assets and your pet name.\n");
	scanf("%d %f",&age,&assets);//变量要使用&
	scanf("%s",pet);//字符数组不使用&
	printf("%d %f %s",age,assets,pet);
	
	return 0; 
}
