#include <stdio.h>

int htoi(char s[])
{
	int i,result;
	result = 0;
	i = 0;
	if(s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X'))
			i += 2;
	printf("循环前i : %d\n",i);
	for(;s[i] != '\0'; ++i)
	{
		if(s[i] >= '0' && s[i] <= '9')
			result = result * 16 + s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'f')
			result = result * 16 + s[i] - 'a' + 10;
		else if(s[i] >= 'A' && s[i] <= 'F')
			result = result * 16 + s[i] - 'A' + 10;
		printf("第%d次循环字符：%c  result: %d\n",i,s[i],result);
	}
	printf("result: %d\n",result);
	return result;
}

int main()
{
	char data[20] = {0};
	while(scanf("%s",data))
	{

		printf("%d\n",htoi(data));
	}
	return 0;
}
