#include<stdio.h>
#define BLURB "Authentic imitation!"
int main()
{
	printf("[%2s]\n",BLURB);//�ֶγ���2�����ɱ���������ʾȫ�� 
	printf("[%24s]\n",BLURB);
	printf("[%24.5s]\n",BLURB);//.5��ʾֻ���Դ�ӡ����ַ�
	printf("[%-24.5s]\n",BLURB);// .5��ʾֻ���Դ�ӡ����ַ���-��Ǳ�ʾ����� 
	
	return 0; 
}
