#include <stdio.h>
int main(void)
{
	char dollar = '$';
	int i,j;
	for (i=1;i<=4;i++)
	{
		for(j=1;j<=8;j++)
			printf("%c",dollar);
		printf("\n");
	}
	return 0;
}
