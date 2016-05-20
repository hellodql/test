#include <stdio.h>

//reverse: reverse striing s in place
void reverse(char s[]);
int mystrlen(char s[]);

int main()
{
	char s[20] = {0};
	while(scanf("%s",s))
	{
		reverse(s);
		printf("s: %s\n",s);
		
	}
	return 0;
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








