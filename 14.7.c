#include<stdio.h>
#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
}; 

double sum(struct funds moolah); //参数是一个结构体

int main() 
{
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8453.94,
	};
	
	printf("Stan has a total of $%.2f.\n", sum(stan));
	return 0;
}

double sum(struct funds moolah)
{
	return (moolah.bankfund + moolah.savefund);
}
