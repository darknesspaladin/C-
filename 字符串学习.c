/*//如果编译器不识别%zd，尝试换成%u或%lu。
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
/*//一些浮点型修饰符的组合
#include <stdio.h>

int main(void)

{
	const double RENT = 3852.99; // const 变量
	
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
/*//演示一些格式标记
#include <stdio.h>

int main(void)
{
	printf("%x %X %#x\n", 31, 31, 31);
	printf("**%d**% d**% d**\n", 42, 42, -42);
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
	
	return 0;
}*/
//字符串格式
#include <stdio.h>
#define BLURB "Authentic imiation!"

int main(void)

{
	printf("[%2s]\n",BLURB);
	printf("[%24s]\n",BLURB);
	printf("[%24.5s]\n",BLURB);
	printf("[%-24.5s]\n",BLURB);
	
	return 0;
 } 
 
