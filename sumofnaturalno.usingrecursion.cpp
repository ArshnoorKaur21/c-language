//program 
#include<stdio.h>
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return(n+sum(n-1));
}
main()
{
	int n;
	printf("sum of 1st 10 natural numbers");
	scanf("%d",&n);
	int ans=sum(n);
	printf("\nsum is %d",ans);
}
