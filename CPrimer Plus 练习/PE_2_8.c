#include<stdio.h>

void two(void);
void one_three(void);

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!");
	
}

void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}

void two()
{
	printf("two\n");
}
