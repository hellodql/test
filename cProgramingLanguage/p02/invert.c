#include <stdio.h>

//将x中从第p位开始n个（二进制）位求反，x其余各位保持不变
int invert(unsigned x,int p, int n)
{
	return  x ^ (~(~0 << n) << (p+1-n));
}

int main()
{
	int x;
	scanf("%d",&x);
	printf("result: %d\n",invert(x,4,3));
	return 0;
}
