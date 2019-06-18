#include<stdio.h>
int main(void)
{
	int age = 20;
	while (age++ <= 65)
	{
		if ((age % 20) ==0)
			printf("You are %d. here is a raise.\n",age);
		if (age = 65)
			printf("you are %d\n",age);
	}
	return 0;
}
