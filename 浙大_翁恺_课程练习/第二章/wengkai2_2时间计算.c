/*四位数表示时间，如1106（11点06分）给定起始时间，流逝时间，计算终点时间
起始可以是506，时间可超过1h，也可回溯,起止保证在一天之内。*/
#include<stdio.h>

int main(void)
{
	int a = 0; //起始时间 
	int b = 0; //经过分钟数 
	scanf("%d%d",&a,&b);
	
	int hour_1 = a/100;
	int min_1 = a%100;
	
	int hour_2 = (b+min_1)/60;
	int min = (b+min_1)%60;
	int hour = hour_1+hour_2;
	
	printf("%d%d",hour,min);
	
	return 0; 
	
 } 
