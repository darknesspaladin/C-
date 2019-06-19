#include<stdio.h>
int main(void)
{
	int avg_ji,avg_ou;
	int i = 1;
	int sum_ji = 0;
	int sum_ou = 0;
	int num_ji = 0;
	int num_ou = 0;
	
	while (i != 0)
	{
		scanf("%d",&i);
		if (i % 2 == 0 && i !=0)
		{
			sum_ou = sum_ou + i;
			num_ou++;
			avg_ou = sum_ou/num_ou;
		}
		else
		{
			sum_ji = sum_ji + i;
			num_ji++;
			avg_ji = sum_ji/num_ji;
		}
	}
	printf("there is %d oushu,average is %d\n",num_ou,avg_ou);
	printf("there is %d jishu,average is %d\n",num_ji-1,avg_ji);
	return 0;
}
