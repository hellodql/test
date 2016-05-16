#include <stdio.h>

#define MAX 65535 
//返回任何字符第一次出现在s2的位置，若无，返回-1
int anyPosition(char s1[],char s2[])
{
	int i,j;
	int min = MAX;
	for(i =  0; s1[i] != '\0'; ++i)
	{
		for(j = 0; s2[j] != '\0'; ++j)
			if(s1[i] == s2[j])
			{
				if(min > j)
					min = j;
				break;
			}
	}
	return min==MAX?-1:min;
}

int main()
{
	char s1[64] = "lhijkdlmalopfrst";
	char s2[64] = "abcdefgabcdefabcd";
	printf("position: %d\n",anyPosition(s1,s2));
	return 0;
}
