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
	int*p2;//*a=p1 means address 2000 is passed to a and value at *2000 is value of a only 
	p1=&a;
	p2=&b;
	printf("\nenter the values of a and b");
	scanf("%d%d",&a,&b);
	printf("\n%d\t%d",a,b);
	update(p1,p2);
}
