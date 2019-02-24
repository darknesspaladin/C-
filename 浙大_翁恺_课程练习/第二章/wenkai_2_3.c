/*程序每次输入一个正三位数，然后输出按位逆的数字。注意：当输入的数字含结尾0时如700，输出应该是7*/
#include<stdio.h>

int main(void)
{
	int a;
	scanf("%d",&a);
	int hundre = a/100;
	int ten = a/10-hundre*10;
	int one = a-hundre*100-ten*10;
	
	printf("%d",one*100+ten*10+hundre);
	
	return 0;
} 

