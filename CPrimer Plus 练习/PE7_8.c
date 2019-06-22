#include <stdio.h>
#define tax_1 0.15
#define tax_2 0.2
#define tax_3 0.25
#define income_1 300
#define income_2 150
#define base1 8.75
#define base2 9.33
#define base3 10.00
#define base4 11.20
int main(void)
{
	double time;
	double income;
	double tax;
	double base;
	int number;
	
	printf("**************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1)$%.2lf/hr         2)$%.2lf/hr\n",base1,base2);
	printf("3)$%.2lf/hr         4)$%.2lf/hr\n",base3,base4);
	printf("5)quit\n");
	printf("**************************************\n");
	switch (number)
	{
		case '1':
			base = base1;
			break;
		case '2':
			base = base2;
			break;
		case '3':
			base = base2;
	}
	printf("Enter your work time:");
	scanf("%lf",&time);
	if (base * time <= 300)
	{
		printf("11111");
	}
	else
	printf("22222");
	return 0;
	
}
