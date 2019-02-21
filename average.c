#include<stdio.h> 

int main(void)
{
	int a,b;
	
	scanf("请输入数字%d %d",&a,&b);
	
	double c = (a+b)/2.0;
	printf("%d和%d的平均值=%f\n",a,b,c);
	
	return 0;
}
