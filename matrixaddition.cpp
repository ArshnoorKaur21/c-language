//program of addition of two matrix
#include<stdio.h>
main()
{
	int i,j;
	int first[3][3],second[3][3];
	int sum[3][3];
	printf("\nadd two matrix");
	printf("\nenter elements in matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  scanf("%d",&first[i][j]);
		}
	}
	printf("\nelements in 2nd matrix are");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&second[i][j]);
		}
	}
	printf("\n matrix 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  printf("\t%d",first[i][j]);
		}
		printf("\n");
	}
	printf("\n matrix 2\n ");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  printf("\t%d",second[i][j]);
		}
	printf("\n");
	}

	printf("\nadd two matrix\n");
	for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
			{
		     sum[i][j]=first[i][j]+second[i][j];	
			printf("\t%d",sum[i][j]);
			}
		printf("\n");
		}
		return 0;
	}
