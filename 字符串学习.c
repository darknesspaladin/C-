/*//�����������ʶ��%zd�����Ի���%u��%lu��
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];
	
	printf("whta's your name?");
	scanf("%s",name);
	printf("Hello,%s.%s\n",name,PRAISE);
	printf("Your name of %u letters occupies %u memory cells.\n",
		strlen(name),sizeof name);
	printf("The phrase of praise has %u letters",
		strlen(PRAISE));
	printf("and occupies %u memory cells.\n",sizeof PRAISE);
	
	return 0; 
}*/
/*//һЩ���������η������
#include <stdio.h>

int main(void)

{
	const double RENT = 3852.99; // const ����
	
	printf("*%f*\n",RENT); 
	printf("*%e*\n",RENT);
	printf("*%4.2f*\n",RENT);
	printf("*%3.1f*\n",RENT);
	printf("*%10.3f*\n",RENT);
	printf("*%10.3E*\n",RENT);
	printf("*%+4.2f*\n",RENT);
	printf("*%010.2f*\n",RENT);
	
	return 0;
}*/
//��ʾһЩ��ʽ���
#include <stdio>

int main(void)
 
