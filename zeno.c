/*#include <stdio.h>
int main(void)
{
	int t_ct;
	double time,power_of_2;
	int limit;
	
	printf("enter the number of terms you want:");
	scanf("%d",&limit);
	for (time = 0,power_of_2 = 1,t_ct = 1;t_ct <= limit;
	t_ct++,power_of_2 *= 2.0)
	{
		time += 1.0/power_of_2;
		printf("time = %f when terms = %d.\n",time,t_ct);
	}
	return 0;
}*/

#include <stdio.h>
#define ROWS 6
#define CHARS 10

int main(void)
{
	int row;
	char ch;
	
	for (row = 0;row <= ROWS;row++)
	{
		for(ch = 'A';ch < 'A' + CHARS;ch++)
			printf("%c",ch);
		
		printf("\n");
	}
	return 0;
}
