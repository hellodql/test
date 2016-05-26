#include <stdio.h>

//验证隐式转换
int main()
{
	long data = 4294967295;
	printf("sizeof(data):%d  data:%ld\n",sizeof(data),data);
	printf("%d\n",sizeof(4294967297));
    printf("%d\n",sizeof(-4294967296));

	return 0;
}
