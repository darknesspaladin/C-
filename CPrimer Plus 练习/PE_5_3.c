#include <stdio.h>
int main(void)
{
	int day;
	int money = 0;
	
	printf("please input your worked time:");
	scanf("%d",&day);
	while (++money < day);
	
	printf("pay you %d dollar.",money);
		
	
	return 0;
}
