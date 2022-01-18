//program of sum of two numbers
#include<stdio.h>
int checkIsPrime(int n)
{
	int i, isPrime=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		isPrime=0;
		break;
		}
	}
	return isPrime;
}
void isSumOftwoPrimes(int n)
{
	int flag=0;
	for(int i=2;i<=n/2;i++)
	{
		if(checkIsPrime(i)==1)
		{
			if(checkIsPrime(n-i)==1){
				printf("\n the given number can be expressed as sum of %d and %d prime numbers",i,n-i);
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("\n The given number cannot be expressed as sum of prime numbers: ");
	}
}
main()
{
	int n;
	printf("\nenter the number you want to check");
	scanf("%d",&n);
	checkIsPrime(n);
	isSumOftwoPrimes(n);
	return 0;
}
