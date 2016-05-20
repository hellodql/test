#include <stdio.h>

int bitCount1(unsigned x)
{
	int n;
	for(n = 0; x != 0; x >>= 1)
		if(x & 01)
			n++;
	return n;
}


//这种实现是利用了一个式子'x &= (x-1)'这个式子可以将x最右边的二进制1去掉。
int bitCount(unsigned x)
{
	int n=0;
	while(x != 0)
	{
		x &= (x-1);
		n++;
	}
	return n;
}

int main()
{
	int x;
	scanf("%d",&x);
	printf("bitCount: %d\n",bitCount(x));
	return 0;
}
