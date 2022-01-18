//program of transpose of matrix
#include<stdio.h>
main()
{
	int matrix[3][3];
	int i,j;
	printf("\nenter elements in matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&matrix[i][j]);
	}
	printf("\n Elements in the array are: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nelements after transpose of matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",matrix[j][i]);
		}
		printf("\n");
	}
	return 0;
	
}

