#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num;  //待测试的数 
	unsigned long div;  //可能的约数 
	bool isPrime;  //素数标记 
	
	printf("Please enter an integer for analysis; ");
	printf("Enter q to quit .\n");
	while (scanf("%lu",&num) == 1) //开始循环，首先确定输入的是一个数字 
	{    
	    /*判断该数是否有除1与其自身以外的约数*/ 
		for (div = 2, isPrime = true; (div * div) <= num; div++) //最小约数为2，从二开始判断 
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
					printf("%lu is divisible by %lu and %lu .\n",
						num,div,num/div);
				else
					printf("%lu is divisible by %lu .\n",
						num,div);
				isPrime = false;  //该数不是素数
			}		
		}
		/*从这开始说明该数是个素数*/ 
		if (isPrime)
			printf("%lu is prime.\n",num);
		printf("Please enter another integer for analysis;");
		printf("enter q to quit.\n");
	}
	printf("Bye.\n");
	
	return 0;
}

