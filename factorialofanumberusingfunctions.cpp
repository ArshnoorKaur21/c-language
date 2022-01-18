//program to implement functions
#include<stdio.h>
void factorial()
{
	int i,n,f=1;
	printf("\nfactorial of a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=i*f;
	}
	printf("factorial of %d=%d",n,f);
}
main()
{
	factorial();
	return 0;
}

