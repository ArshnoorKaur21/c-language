//program
#include<stdio.h>
main()
{
	int i,n,output;
	printf("table of given number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		output=n*i;
		printf("\n%d * %d =  %d",n,i,output);
	}
	
	return 0;
}

