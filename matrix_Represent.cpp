//program of matrix representation
#include<stdio.h>
main()
{
	int matrix[3][3];
	int i,j;
	printf("Enter elemnets in 3 * 3 Matrix: ");
	for(i=0;i<3;i++) //row loop
	{
		for(j=0;j<3;j++)//coloumn loop
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Elements in the array are: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
