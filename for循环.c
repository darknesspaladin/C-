/*#include<stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	int fact = 1;
	
	int i = 1;
	while( i<= n) {
		fact *= i;
		i ++;
	}
	printf("%d! = %d",n,fact);
	
	return 0;
} */

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	int fact = 1;
	
	int i = 1;s
	for (i = 1;i <= n;i++) { 
		fact *= i;
	}
	printf("%d! = %d",n,fact);
	
	return 0;
}

