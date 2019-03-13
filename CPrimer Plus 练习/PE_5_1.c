#include <stdio.h>
#define HOUR 60
int main(void)
{
	int min;
	printf("please input the number of min:");
	scanf("%d",&min);
	while(min > 0){
		printf("%d:%d",min/HOUR,min%HOUR);
		scanf("%d",&min);
	}
	return 0;
}
