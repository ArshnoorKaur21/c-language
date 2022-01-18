#include<stdio.h>
int main()
{
	int a=345;
	float b=24.5;
	void *ptr;
	ptr=&a;
	printf("the value of a is %d\n",*( (int*)ptr));//here we cant derefrence void pointer chahe a ka address bhu daldo
	
}
