#include<stdio.h> 
/*计算两个正整数的和、差、积、商并输出保证输入输出全在正整数范围内
  输入格式：输入在一行中给出两个正整数A/B
  输出格式在四行中按照"A运算符B=结果输出"*/
int main(void)
{
	int a;
	int b;
	
	printf("请输入两个数值:");
	scanf("%d %d",&a,&b);
	
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	
	return 0;
 } 
 
