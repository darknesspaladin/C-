#include <stdio.h>
#define base 1000
#define perh_tax 212.5
#define add_tax 337.5
#define tax_40 8500
#define income_40 40000
#define add_work 1.5
#define time 40
int main(void)
{
	float work_t,income,tax,pur_in;
	printf("Please input your work time in the weekend:");
	scanf("%f",&work_t);
	if (work_t <= 40)
	{
		income = work_t * base;
		tax = work_t * perh_tax;
		pur_in = income - tax; 
	}
	else
	{
		income = income_40 + (work_t - time) * add_work * base;
		tax = tax_40 + (work_t - time) * add_tax;
		pur_in = income - tax;
	}
	printf("Your income is %.2f,the tax is %.2f and your pur_in is %.2f.",income,tax,pur_in);
	return 0;
}

