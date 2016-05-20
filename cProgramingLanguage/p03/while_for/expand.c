#include <stdio.h>
#include <string.h>

//将字符串s1中类似a-z一类的速记符号在字符串s2中扩展为等价的完整列表abc...xyz
//该函数可以处理大小写字母和数字
void expand(char s1[], char s2[]);

int main()
{
	char s1[10] = "ab-mlma";
	char s2[60] = {0};
	while(scanf("%s",s1))
	{
		expand(s1, s2);
		printf("s1: %s\n",s1);
		printf("s2: %s\n",s2);
		memset(s1,0,strlen(s1));
		memset(s2,0,strlen(s2));
	}
	return 0;
}


void expand(char s1[], char s2[])
{
	int i,j;
	int c;
	j = 0;
	for(i = 0; s1[i] != '\0'; )
	{
		c = s1[i];
		s2[j++] = s1[i];
		if(s1[i + 1] == '-')
		{
			while((c++) < s1[i+2])
				s2[j++] = c;
			i += 2;
		}
		i ++;
	}
	s2[j] = '\0';
}








