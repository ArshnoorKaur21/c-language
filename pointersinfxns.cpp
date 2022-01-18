//program of pointer to call by value 
#include<stdio.h>
void swap(int a,int b)
{
 int c;
 c=a;
 a=b;
 b=c;
 printf("\ninside the function");
 printf("\n a=%d \t b=%d",a,b);
 	
}
main()
{
	int a,b;
	printf("\nenter two numbers");
	scanf("%d%d",&a,&b);
	printf("\nbefore calling the function");
	printf("\n a=%d b=%d",a, b);
	swap(a,b);
	printf("\nafter calling the function");
	printf("\n a=%d b=%d",a, b);
	
}
