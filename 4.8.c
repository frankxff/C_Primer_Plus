#include<stdio.h>

int main()
{
	const double RENT = 3852.99; //const变量表示只读变量
	
	printf("*%f*\n",RENT);
	printf("*%e*\n",RENT);//指定小数点后显示的位数
	printf("*%4.2f*\n",RENT);//表示数字字段长为4字符，小数点后显示两位
	printf("*%+4.2f*\n",RENT); //+的含义是数字为正数则在前面添+，为负数前面添—
	printf("*%010.2f*\n",RENT);//0标记表示打印的值前面以0填充
	
	return 0; 
}
