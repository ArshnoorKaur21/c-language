#include<stdio.h>
int main()
{
	int *ptr;
	{
	   int a=0;
	   ptr=&a;
	}
	printf("%d",*ptr);
}
