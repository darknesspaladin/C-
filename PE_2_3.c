#include<stdio.h>

int main(void)
{
	int age;
	const int YEAR_DAY=365;
	int day;
	
	printf("�������������:");
	scanf("%d",&age);
	day = age * YEAR_DAY;
	printf("����������%d,��%d�졣",age,day);
	
	return 0;
}
