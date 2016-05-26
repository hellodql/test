#include <stdio.h>
#include <stddef.h>

int main()
{
	wchar_t wc = L'我';
	char c = '我';
	printf("%c\n",c);
	printf("%c\n",wc);
	printf("sizeof(wchar_t): %d\n",sizeof(wchar_t));	
	return 0;
}
