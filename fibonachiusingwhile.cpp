//program
#include<stdio.h>
main()
{
	int i,n;
	int a=0,b=1,c;
	i=1;
	printf("enter the limit");
	scanf("%d",&n);
	printf("\t%d %d",a,b);
	printf("\nfibonachi series");
	while(i<n)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
		i++;
	}
	return 0;
}
