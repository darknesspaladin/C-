/*��λ����ʾʱ�䣬��1106��11��06�֣�������ʼʱ�䣬����ʱ�䣬�����յ�ʱ��
��ʼ������506��ʱ��ɳ���1h��Ҳ�ɻ���,��ֹ��֤��һ��֮�ڡ�*/
#include<stdio.h>

int main(void)
{
	int a = 0; //��ʼʱ�� 
	int b = 0; //���������� 
	scanf("%d%d",&a,&b);
	
	int hour_1 = a/100;
	int min_1 = a%100;
	
	int hour_2 = (b+min_1)/60;
	int min = (b+min_1)%60;
	int hour = hour_1+hour_2;
	
	printf("%d%d",hour,min);
	
	return 0; 
	
 } 
