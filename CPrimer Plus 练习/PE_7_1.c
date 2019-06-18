#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int sp = 0;
	int ent = 0;
	int alp = 0;
	
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			ent++;
		else if (ch == ' ')
			sp++;
		else
		alp++;
	}
	printf("%d %d %d", ent,sp,alp);
	return 0;
}
