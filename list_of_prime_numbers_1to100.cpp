//program
#include<stdio.h>
main()
{
	int i,j;
	printf("\nprime numbers from 1 to 100 \n");
	for(i=1;i<=100;i++)//4,6,8,9,10 all come in break rest sare i==j
	{
		for(j=2;j<i;j++)//as we have to calculate primr numbers from 1 to 100 keep i in that interval
		{
			 if(i%j==0)// and j always keep in interval from 2 to i
			 {
			 	break;
			 }
		}
		if(i==j)
		printf(" \t %d",i);
	}
}
