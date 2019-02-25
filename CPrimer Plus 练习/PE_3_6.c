#include<stdio.h>

int main(void)
{
	int weight = 0;
	printf("Please input the quator of water:");
	scanf("%d",&weight);
	
	double num = weight*950/3.0e-35;
	printf("%d quator water include %e number of atom.",weight,num);
	
	return 0;
}
