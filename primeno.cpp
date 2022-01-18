//program
#include<stdio.h>
main()
{
	int i,n;
	int flag=0;
	printf("whether given number is prime or not");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			printf("%d is not a prime",n);
			break;
		}
	}
    if(flag==0)
	printf("%d is a prime",n); 
    return 0;
}
//1235
//5321
