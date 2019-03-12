/*#include <stdio.h>

int main(void)
{
	int num = 1;
	while (num <= 20)
	{
		printf("%2d square is %d\n",num,num*num);
		num = num+1;	
	}
	return 0;
}*/

/*#include <stdio.h>
#define SQUARE 64 //棋盘中的方格数

int main(void)
{
	const double CROP = 2e16; //世界小麦年产量
	double current,total;
	int count = 1;
	
	printf("square      grains      total      ");
	 
} */
//优先级测试
/*#include <stdio.h>
int main(void)
{
	int top,score;
	
	top = score = -(2+5)*6 + (4+3*(2+3));
	printf("top = %d, score = %d\n", top, score);
	
	return 0;
 }*/
 //sizeof 运算符 
/*#include<stdio.h>
int main(void)
{
	int n = 0;
	size_t intsize;
	intsize = sizeof(int);
	printf("%d , %u , %u",n,sizeof(n),intsize);
	
}*/

/*#include<stdio.h>
int main(void)
{
	double n = 1.0;
    double q =2.0;
    double c,d;
    c = q*(++n);
    d = q*(n++);
    printf("%f%f",c,d);
	
}*/

#include<stdio.h>
int main(void)
{
	char n = 's';
	while (n < 'w')
	{
		printf("%c\n",n);
		n++;
	
	}
	return 0;
}
