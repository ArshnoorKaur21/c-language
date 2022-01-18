//program of pointer arithmetic
#include<stdio.h>
main()
{
	int a=10;
	int b=20;
	int c=11;
	int *p1,*p2,*p3
	p1=&a;
	p2=&b;
	p3=&c;
	printf("\nvalue of a=%d",a);
	printf("\nvalue of a=%d",b);
	printf("\nvalue of a=%d",c);
	printf("\nvalue of p=%u",p1);
	printf("\nvalue of a=%u",p2);
	printf("\nvalue of p=%u",p3);
	p1++
	printf("\nvalue of p1=%u",p1);
	p2--
	printf("\nvalue of p2=%u",p2);
	return 0;
		}
