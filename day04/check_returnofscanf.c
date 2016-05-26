#include <stdio.h>

//check the return value of function scanf
int main()
{
	int a;
	int rt = scanf("%d",&a);
	printf("a: %d  rt:%d \n",a,rt);
	return 0;
}
