#include <stdio.h>

#define YES 1
#define NO 0

int htoi(char s[])
{
	int i,result,flag,hexDigit;
	i=0;
	if(s[i] == '0')
	{
		++i;
		if(s[i] == 'x' || s[i] == 'X')
			++i;
	}
	result = 0;
	flag = YES;
	hexDigit = 0;
	for(;flag == YES; ++i)
	{
		if(s[i] >= '0' && s[i] <= '9')
			hexDigit = s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'f')
			hexDigit = s[i] - 'a' + 10;
		else if(s[i] >= 'A' && s[i] <= 'F')
			hexDigit = s[i] - 'A' + 10;
		else 
			flag = NO;
		if(flag == YES)
			result = result * 16 + hexDigit;
	}
	return result;
}

int main()
{
	char data[60];
	while(scanf("%s",data))
	{
		printf("htoi(data): %d\n",htoi(data));
	}
	return 0;
}
