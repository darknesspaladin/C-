#include<stdio.h>

int main(void)
{
	int age;
	const int YEAR_DAY=365;
	int day;
	
	printf("请输入你的年龄:");
	scanf("%d",&age);
	day = age * YEAR_DAY;
	printf("您的年龄是%d,共%d天。",age,day);
	
	return 0;
}
