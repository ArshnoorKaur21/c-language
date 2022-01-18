//printing the sum of digits of 3 digit number
#include<stdio.h>
main()
{
	int n,i,sumeven=0,sumodd=0;
	int rem;
	printf("\nenter the number you want to sum");
	scanf("%d",&n);
	printf("\nsum of digits in a number");
	for(i=n;i>0;i=i/10)
	{
		if(rem=i%10);
		{
			if(rem%2==0)
			{
				sumeven=sumeven+rem;
			}
			else
			{
				sumodd=sumodd+rem;
			}
		}
		
	}
	printf("\n%d is sumeven",sumeven);
	printf("\n%d is sumodd",sumodd);
	return 0;
}
