/*����ÿ������һ������λ����Ȼ�������λ������֡�ע�⣺����������ֺ���β0ʱ��700�����Ӧ����7*/
#include<stdio.h>

int main(void)
{
	int a;
	scanf("%d",&a);
	int hundre = a/100;
	int ten = a/10-hundre*10;
	int one = a-hundre*100-ten*10;
	
	printf("%d",one*100+ten*10+hundre);
	
	return 0;
} 

