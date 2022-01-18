//program of inbulit funcitons
#include<stdio.h>
#include<math.h>
main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	int ans=sqrt(n);
	int b,p;
	printf("\n Square root of %d = %d",n,ans);
	printf("enter 2 values. 1 base and 2 power:");
	scanf("%d%d",&b,&p);
	ans=pow(b,p);
	printf("Power =%d",ans);
	return 0;
}
