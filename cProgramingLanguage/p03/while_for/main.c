#include <stdio.h>
#include "collection.h"

int main()
{
	long long data;
	char s[20] = "123456";
	
	data = myatoi(s);
	printf("s: %s\n",s);
	printf("data: %ld\n",data);
	return 0;
}
