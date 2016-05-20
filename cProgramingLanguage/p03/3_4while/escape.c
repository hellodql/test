#include <stdio.h>

//将字符串t复制到字符串s中，并复制过程中将换行符、制表符
//等不可见字符分别转换为\n、\t等相应的可见转义字符序列
int escape(char s[],char t[])
{
	int i,j;
	if( t == NULL)
		return 0;
	for(i = j = 0; t[i] != '\0'; i++)
	{
		switch(t[i])
		{
		case '\t':
			s[j++] = '\\';
			s[j] = 't';
			break;
		case '\n':
			s[j++] = '\\';
			s[j] = 'n';
			break;
		default:
			s[j] = t[i];
		}
		j++;
	}
	return 1;
}


int main()
{
	char s[20] = {0};
	char t[20] = "hello	world	!\n";
	printf("t: %s\n",t);
	escape(s,t);
	printf("s: %s\n",s);
}




