#include <stdio.h>

int catch(char s[],char t[])
{
	int i,j;
	if(t == NULL)
		return 0;
	for(i = j = 0; t[i] != '\0'; i++)
	{
		if(t[i] == '\\')
		{
			i++;
			switch(t[i])
			{
				case 'n':
					s[j] = '\n';
					break;
				case 't':
					s[j] = '\t';
					break;
				default:
					s[j++] = '\\';
					s[j] = t[i];
			}
		}else
			s[j] = t[i];
		j++;
	}
	return 1;
}

int main()
{
	char s[20] = {0};
	char t[20] = "hello\\nwor\\tld\\t\\n";
	printf("t: %s\n",t);
	catch(s,t);
	printf("s: %s\n",s);
	return 0;
}











