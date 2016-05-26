#include <stdio.h>

int main()
{
	int a = 1234;
	printf("千位：%d\n",a/1000);
	printf("百位: %d\n",a/100%10);
	printf("十位: %d\n",a/10%10);
	printf("个位: %d\n",a%10);
	
	printf("百位: %d\n",a%1000/100);
	printf("十位: %d\n",a%100/10);
	return 0;
}
