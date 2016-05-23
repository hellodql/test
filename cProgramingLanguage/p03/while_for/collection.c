#include "collection.h"

int myatoi(char s[])
{
	int i;
	int sign = 1;
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






void reverse(char s[])
{
	int i,j,c;
	for(i = 0, j = mystrlen(s) -1; i < j; i++,j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

int mystrlen(char s[])
{
	int i = 0;
	while(s[i] != '\0')
		i++;
	return i;
}

