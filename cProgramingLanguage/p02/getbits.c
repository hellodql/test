#include <stdio.h>

//返回x中从右(0开始)边起第p位往右边数3位的值。
int getbits(unsigned x, int p, int n)
{
	return (x >> (p + 1 -n)) & ~(~0 << n);
}

int main()
{
	printf("result : %d\n",getbits(45, 4, 3));
	return 0;
}
