#include <stdio.h>

//将src字符串中字符不重复地复制到opt串
void makeSigleStr(char opt[],char src[])
{
	int array[26] = {0};
	int i,j;
	for(i = j = 0; src[i] != '\0'; ++i)
	{
		
		if(src[i] >= 'a' && src[i] <= 'z' )
		{
			if(array[src[i]-'a'] ==0)
				opt[j++] = src[i];
			array[src[i]-'a'] ++;
		}
		else if(src[i] >= 'A' && src[i] <= 'Z')
		{
			if(array[src[i]-'A' ] == 0)
				opt[j++] = src[i];
			array[src[i]-'A'] ++;
		}
	}
	printf("makeSigleStr: 循环了%d次\n",i);
	opt[j] = '\0';
}

//将s串中任何与t串中匹配的字符都删除
void squeeze(char s[],char t[])
{
	int i,j,k;
	char c;
	k = 0;
	while(t[k] != '\0')
	{
		c = t[k];
		for(i = j = 0; s[i] != '\0'; i++)
		{
			if(s[i] != c)
			s[j++] = s[i];
		}
		k ++;
	}
	s[j] = '\0';
}

int main()
{
	char s[30] = "aaabbbcccdddeeefff";
	char t[20] = "adfadf";
	char opt[20] = {0};
	printf("s: %s\n",s);
	printf("t: %s\n",t);
	makeSigleStr(opt,t);
	printf("opt: %s\n",opt);
	squeeze(s,opt);
	printf("转化后:\n");
	printf("s: %s\n",s);
	return 0;
}
