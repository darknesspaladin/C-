#include<stdio.h> 

int main(void)
{
	double a;
	printf("请输入存款金额:");
	scanf("%lf\b",&a);
	double b;
	printf("本息总计:%f",b = a*(1+0.033)*(1+0.033)*(1+0.033));

	return 0;
}
