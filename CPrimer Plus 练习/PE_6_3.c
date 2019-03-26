#include <stdio.h>
int main(void)
{
	char first_f;
	
	for (first_f = 'F';first_f > 'A';first_f--)
	{
		for(first_f = 'F';first_f > first_f--;first_f--)
			printf("%c",first_f);
		printf("\n");
	}
}
