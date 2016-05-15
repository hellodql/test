#include <stdio.h>

//atoi: convert s to integer
int atoi(char s[])
{
	int i;
	int result = 0;
	for(i = 0; s[i] >= '0' && s[i] <= '9' ; ++i)
	{
		result = result * 10 + (s[i] - '0');
	}
	return result;
}

int main()
{
	char data[10] = "1234";
	int result = atoi(data);
	printf("result: %d\n",result);
	return 0;
}
