#include <stdio.h>
int main(void)
{
	int num;
    int sum = 0;
    _Bool input_is_good;
    
    printf("input the number to be sunmed:");
    printf("(q to quit)");
    input_is_good = (scanf("%d",&num) == 1);
    while (input_is_good)
    {
    	sum = sum + num;
    	printf("please enter next integer(q to quit):");
    	input_is_good = (scanf("%d",&num) == 1);
	}
	printf("those intgers num to %d .\n",sum);
	return 0;
}
