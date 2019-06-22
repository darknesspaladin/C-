#include <stdio.h>
int main(void)
{
	int number;
	int i = 1;
	int j = 1;
	int k = 0;
	
	printf("Enter the number:");
	while (scanf("%d", &number) == 1 && number > 0)
	{
		i = 1;
	    j = 1;
	    k = 0;
		for (i ; i <= number;i++)
		{
			for (j ; j <= i;j++)
			{
				if ( i % j == 0 ) 
				{
					k++;
				}
				else
				continue;
			}
			if (k > 2 || i == 2)
			{
				j = 1;
				k = 0;
				continue;
		    }
			else 
			printf ("%d***",i);
			j = 1;
			k = 0;
		}
		printf("\nEnter the number:");
	} 
	return 0;
}
/* Programming Exercise 7-9 
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
int limit;
int num;
int div;
bool numIsPrime; // use int if stdbool.h not available
printf("Enter a positive integer: ");
while (scanf("%d", &limit) == 1 && limit > 0)
{
if (limit > 1)
printf("Here are the prime numbers up through %d\n", limit);
else
printf("No primes.\n");
for (num = 2; num <= limit; num++)
{
for (div = 2, numIsPrime = true; (div * div) <= num; div++)
if (num % div == 0)
numIsPrime = false;
if (numIsPrime)
printf("%d is prime.\n", num);
}
printf("Enter a positive integer (q to quit): ");
}
printf("Done!\n");
return 0;
}*/
