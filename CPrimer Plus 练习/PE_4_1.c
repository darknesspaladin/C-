#include <stdio.h>

int main(void)
{
	char name[40];
	char first_name[40];
	printf("plesae writedown your first name & name:");
	scanf("%s%s",first_name,name);
	
	printf("hello %s,%s",name,first_name);
	
	return 0;
	
}
