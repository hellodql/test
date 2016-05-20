#include <stdio.h>

//setbits: 将x中从第p位开始的n个（二进制）位设置为y中最右边n位的值，x的其余///为保持不变
int setbits(unsigned x, int p, int n, unsigned y)
{
	return (x & ~(~(~0 << n) << (p+1-n))) | (y & ~(~0 << n) ) << (p+1-n);
}

int main()
{
	int x;
	int y;
	scanf("%d%d",&x,&y);
	printf("return: %d\n",setbits(x,4,3,y));
	return 0;
}
