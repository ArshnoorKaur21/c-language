//program
#include<stdio.h>
main()
{
	int i,n,c;
	int a=0,b=1;
	printf("enter the limit");
	scanf("%d",&n);
	printf("even fibonacachi series");
	for(i=1;i<n;)
	{
		c=a+b;
		if(c%2==0)
		{
			printf("\t%d",c);
			i++;
		}
					a=b;
			b=c;
	}
	return 0;
}
