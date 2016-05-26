#include <stdio.h>

//验证多个赋值表达式
int main()
{
	short a;
	int b;
	float f;

	f = b = a = 23.123;

	printf("f:%f   b:%d  a:%d\n",f,b,a);
}
