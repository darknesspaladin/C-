/*已知英制长度的英尺foot和英寸inch的值，那么对应米是(foot+inch/12)*0.3048.现在用户输入的如果是厘米数，那么
对应的英制长度的英尺和英寸是多少呢？别忘了1英尺=12英寸。
输入格式：在一行给出一个正整数，单位是厘米
输出格式：在一行中输出这个厘米数对应英制长度的英尺和英寸整数值，中间用空格分开。 */
#include<stdio.h>

int main(voide)
{
	int cm = 0;
	scanf("%d",&cm);
	
	int foot = cm/(100*0.3048);
	int inch = (cm/30.48-foot)*12;
		
	printf("%d %d",foot,inch);
	
	return 0;
}
