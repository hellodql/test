#include <stdio.h>
#include <string.h>

//atoi: convert s to integer

int myatoi(char s[]);
int myisspace(char c);
int myisdigit(char c);


int main()
{
	char s[16] = {0};
	int result;
	while(scanf("%s",s))
	{
		result = myatoi(s);
		printf("result: %d\n",result);
		memset(s,0,strlen(s));
	}
	return 0;
}



int myatoi(char s[])
{
	int i;
	int sign;
	int num = 0;
	for(i = 0; myisspace(s[i]); i++)
		;
	if(s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(s[i] == '+')
	{
		sign = 1;
		i++;
	}
	for(; s[i] != '\0'; i++)
	{
		if(myisdigit(s[i]))
			num = num*10 + (s[i] - '0');
		else 
		{
			printf("unexpect token \'%c\'\n",s[i]);
			return 0;
		}
	}
	return sign * num;
}


int myisdigit(char c)
{
	if( c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}

int myisspace(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return 1;
	else
		return 0;
}

