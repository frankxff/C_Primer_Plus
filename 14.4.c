#include<stdio.h>
#define LEN 20

struct names {
	char first[LEN];
	char last[LEN];
}; 

struct guy {
	struct names handle; //�ṹ��Ƕ��
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main()
{
	struct guy fellow[2] = {
		{			
			{"Ewen", "Villard"},
			"grilled salemon",
			"personality coach",
			68112.00,
		},
		{
			{"Rodney", "Swillbelly"},
			"tripe",
			"tabloid editor",
			432400.00,
		}
	};
	
	struct guy * him; //����һ��ָ��guy�ṹ��ָ��him
	
	printf("address #1: %p  #2: %p\n",&fellow[0], &fellow[1]);
	him = &fellow[0]; //����ָ��ָ��
	printf("pointer #1: %p  #2: %p\n", him, him + 1);
	printf("him -> income is $%.2f: (*him).come is $%.2f\n", him->income, (*him).income);
	him++; //ָ����һ���ṹ 
	printf("him -> favfood is %s: handle.last is %s\n", him->favfood, him->handle.last);
	
	return 0;
	
}
