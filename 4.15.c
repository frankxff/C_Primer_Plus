#include<stdio.h>
//ע��scanf()����ʹ��ָ�������ָ�� 
int main()
{
	int age;//����
	float assets;//����
	char pet[30];//�ַ����飬�����洢�ַ���
	
	printf("Enter your age,assets and your pet name.\n");
	scanf("%d %f",&age,&assets);//����Ҫʹ��&
	scanf("%s",pet);//�ַ����鲻ʹ��&
	printf("%d %f %s",age,assets,pet);
	
	return 0; 
}
