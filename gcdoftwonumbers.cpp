//program of gcd of numbers
#include<stdio.h>
main()
{
	int i,n1,n2,gcd;
	printf("\nenter two numbers we want to calculate the gcd");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}
	}
	printf("\ngcd of %d and %d is %d",n1,n2,gcd);
}
