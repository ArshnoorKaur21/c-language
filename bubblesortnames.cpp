//program of 2d arrays
#include<stdio.h>
#include<string.h>
main()
{
	int i,j;
	char temp[20];
	char name[5][20];
	printf("Enter 5 names");
	for(i=0;i<5;i++)
	{
		scanf("%s",&name[i]);
	}
	printf("\n Name in the list are: \n");
	for(i=0;i<5;i++)
	{
		printf("\n %s",name[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		if(strcmp(name[j],name[j+1])>0)
		{
			strcpy(temp,name[j]);
			strcpy(name[j],name[j+1]);
			strcpy(name[j+1],temp);
		}
	}
	printf("\n Name in the Sorted List are: \n");
	for(i=0;i<5;i++)
	{
		printf("\n %s",name[i]);
	}

	return 0;
}
