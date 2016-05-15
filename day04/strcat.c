#include <stdio.h>
void strcat(char s[],char t[])
{
	int i = 0;
	int len = 0;
	while(s[len] != '\0')
		len ++;
	while((s[len ++] = t[i++]) != '\0')
		;
}

int main()
{
	char s[60] = "hello ";
	char t[20] = "world!";
	strcat(s,t);
	printf("s: %s\n",s);
	return 0;
}
