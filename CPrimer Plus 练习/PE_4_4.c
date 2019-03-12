#include <stdio.h>

int main(void)
{
	float tall_in,tall_cm;
	char name[40];
	
	printf("please writedown your name:\n");
	scanf("%s",name);
	
	printf("and your tall:\n");
	scanf("%f",&tall_in);
	
	printf("%s,you are %.0f feet tall.",name,tall_in);
	
	return 0;
}
