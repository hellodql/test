#include <stdio.h>

//用户输入整型数，bitCount返回其二进制中1的个数。输入0程序退出
int bitCount(unsigned x)
{
	int b;
	for(b = 0; x != 0; x >>= 1)
		if(x & 01)
			++b;
	return b;
}

int main()
{
	int data;
	while(scanf("%d",&data) && data != 0)
		printf("the count of 1 in binary is \t%d\n",bitCount(data));
	return 0;
}
