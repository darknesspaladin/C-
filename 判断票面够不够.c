#include<stdio.h>

int main(void)
{
	//��ʼ��
	int price = 0;
	int bill = 0;
	
	//�������Ʊ��
	printf("�������");
	scanf("%d",&price);
	printf("������Ʊ�棺");
	scanf("%d",&bill);
	
	if (bill >= price){
		printf("����%d\n",bill - price);
	} else {
		    printf("����Ǯ������������\n")
	}
} 
