//program of leap year
#include<stdio.h>
main()
{
	int n;
	printf("\nenter the year you want to check");
	scanf("%d",&n);
	if(n%4==0)
	{
		if(n%100!=0)
		{
				printf("%d is a  leap year",n);			
		}
		else
		{
			if(n%1000==0)
				printf("%d is a leap year",n);
			else
				printf("%d is not a  leap year",n);
		}
	}
	else
	{
		printf("%d is not a  leap year",n);
	}
	return 0;
}
