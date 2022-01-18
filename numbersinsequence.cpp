//program
#include<stdio.h>
main()
{
	int i,j;
	printf("numbers in sequence\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
