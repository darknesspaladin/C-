#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num;  //�����Ե��� 
	unsigned long div;  //���ܵ�Լ�� 
	bool isPrime;  //������� 
	
	printf("Please enter an integer for analysis; ");
	printf("Enter q to quit .\n");
	while (scanf("%lu",&num) == 1) //��ʼѭ��������ȷ���������һ������ 
	{    
	    /*�жϸ����Ƿ��г�1�������������Լ��*/ 
		for (div = 2, isPrime = true; (div * div) <= num; div++) //��СԼ��Ϊ2���Ӷ���ʼ�ж� 
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
					printf("%lu is divisible by %lu and %lu .\n",
						num,div,num/div);
				else
					printf("%lu is divisible by %lu .\n",
						num,div);
				isPrime = false;  //������������
			}		
		}
		/*���⿪ʼ˵�������Ǹ�����*/ 
		if (isPrime)
			printf("%lu is prime.\n",num);
		printf("Please enter another integer for analysis;");
		printf("enter q to quit.\n");
	}
	printf("Bye.\n");
	
	return 0;
}

