//program of mod function using pointers
#include<stdio.h>
void update(int*a,int*b)//for mod use abs(a-b);
{
	int sum,dif;
	sum=*a+*b;
	dif=(*a-*b);
	printf("\n%d\t%d",sum,dif);
}
main()
{
	int a,b;
	int*p1;
	int*p2;//p1=*a as value at a is p1 address if *p1 means value at 2000 is a value
	p1=&a;
	p2=&b;
	printf("\nenter the values of a and b");
	scanf("%d%d",&a,&b);
	printf("%d%d",a,b);
	update(p1,p2);
}
