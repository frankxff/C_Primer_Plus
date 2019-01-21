#include<stdio.h>
#define BLURB "Authentic imitation!"
int main()
{
	printf("[%2s]\n",BLURB);//字段长度2不过可本例扩充显示全部 
	printf("[%24s]\n",BLURB);
	printf("[%24.5s]\n",BLURB);//.5表示只可以打印五个字符
	printf("[%-24.5s]\n",BLURB);// .5表示只可以打印五个字符，-标记表示左对齐 
	
	return 0; 
}
