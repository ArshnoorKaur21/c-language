//program
#include<stdio.h>
main()
{
	int i,j,r;
	printf("\n\ntable of all numbers from 1 to 10");
	for(i=1;i<10;i++)
	{
		for(j=1;j<=10;j++)
		{
			r=i*j;
			printf("%d\t",r);
		}
		printf("\n");
	}
	
}
