#include <stdio.h>
int main(void)
{
	int TH = 0;
	int JH = 0;
	char ch;
	
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case '.' : putchar('!');
					   JH++;
					   break;
			
			case '!' : putchar('!');
					   putchar('!');
			           TH++;
			           break;
			default  : putchar(ch);
		}
	}
	printf("\n%d replacement(s) of . with !", JH);
    printf("\n%d replacement(s) of ! with !!", TH);
    return 0;
}
