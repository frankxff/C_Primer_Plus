/*
P31 two_func.c
one file contains two functions.
*/
#include<stdio.h>
void butler(void);//函数原型define func prototype,told to compiler it need to use.
int main(void)
{
	printf("I will summon the butler function!\n");
	butler();//函数调用function call
	printf("Yes.Bring me some tea and writeable DVDs.\n");
	
	return 0; 
}

void butler(void)//函数定义real to define new functions.
{
	printf("You rang,Sir?\n");
}
