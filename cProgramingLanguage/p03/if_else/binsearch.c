#include <stdio.h>

int binsearch1(int x,int v[],int n)
{
	int low,high,mid;
	low = 0;
	high = n - 1;
	while( low <= high)
	{
		mid = (low + high) / 2;
		if(v[mid] == x)
			return mid;
		else if(v[mid] < x)
			low = mid + 1;
		else 
			high = mid - 1;
	}
	return -1;
}

int binsearch(int x, int v[],int n)
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	mid = (low + high) / 2;
	while(low <= high && x != v[mid])
	{
		if(x < v[mid])
			high = mid - 1;
		else 
			low = mid + 1;
	}
	if(x = v[mid])
		return mid;
	else 
		return -1;
}

int main()
{
	
	return 0;
}









