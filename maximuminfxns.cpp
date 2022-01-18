//program of functions
#include<stdio.h>
int maxoffour(int a,int b,int c,int d)
{
	if(a>b&&a>c&&a>d)
	{
		printf("%d is greater",a);
	}
	else if(b>a&&b>c&&b>d)
	{
		printf("%d is greater",b);
	}
	else if(c>a&&c>b&&c>d)
	{
		printf("%d is greater",c);
	}
	else
	{
		printf("%d is greater",d);
	}
}
main()
{
	int a,b,c,d;
	printf("\nenter the values of a b c d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int ans=maxoffour(a,b,c,d);
	printf("%d",ans);
	return 0;
}
