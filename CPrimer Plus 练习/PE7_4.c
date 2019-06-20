#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int JH = 0;
	int TH = 0;
	
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			JH++;
		}
		else if (ch == '!')
		{
            putchar('!');
            putchar('!');
            TH++;
		}
		else
		printf("%c",ch);
	}

	printf("\nchange the . %d times,change the ! %d times",JH,TH);
	return 0; 
}
