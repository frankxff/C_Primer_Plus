#include<stdio.h>

int main()
{
	const double RENT = 3852.99; //const������ʾֻ������
	
	printf("*%f*\n",RENT);
	printf("*%e*\n",RENT);//ָ��С�������ʾ��λ��
	printf("*%4.2f*\n",RENT);//��ʾ�����ֶγ�Ϊ4�ַ���С�������ʾ��λ
	printf("*%+4.2f*\n",RENT); //+�ĺ���������Ϊ��������ǰ����+��Ϊ����ǰ����
	printf("*%010.2f*\n",RENT);//0��Ǳ�ʾ��ӡ��ֵǰ����0���
	
	return 0; 
}
