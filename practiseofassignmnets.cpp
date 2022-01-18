//prorgam
#include<stdio.h>
int checkisprime(int n)
{
	int i;
	int isprime=1;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			isprime=0;
			break;
		}
	}
	return isprime;
}
int issumoftwoprimes(int n)
{
	int flag=0;
	int i;
	for(i=2;i<=n;i++)
	{
		if(checkisprime(i)==i)
		{
			if(checkisprime(n-i)==1)
			{
				printf("\ngiven number can be expressed as sum of %d and %d primenumbers",i,n-i);
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("\ngiven number can be expressed as sum of primes");
		
	}
}
main()
{
	int n;
	printf("\nenter the number you want to enter");
	scanf("%d",&n);
	checkisprime(n);
	issumoftwoprimes(n);
	return 0;
}
