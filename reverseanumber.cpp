//program
#include<stdio.h>
main()
{
	int i,n,r,answer=0;
	printf("reverse a number");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	{
		r=i%10;
		answer=(answer* 10) +r;
	}
			printf("\n Reverse of number = %d",answer);
			if(n==answer)
				printf("\nit is a Palindrome");
     		else
				printf("\nnot a Palindrome");
	return 0;
}
