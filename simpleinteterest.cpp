//program of simple interest fxns
#include<stdio.h>
void simpleinterst(float p,float r,float t)
{
	float si;
	printf("\nsimple interest");
	si=(p*r*t)/100;
	printf(" %f",si);
}
main()
{
	float p,r,t;
	printf("enter principal,rate,time");
	scanf("%f%f%f",&p,&r,&t);
	simpleinterst(p,r,t);
	return 0;
}
