//program of 2d arrays
#include<stdio.h>
#include<string.h>
main()
{
	int i,j;
	char item[20];
	char name[5][20];
	printf("find the names in list\n");
	printf("Enter 5 names");
	for(i=0;i<5;i++)
	{
		scanf("%s",&name[i]);
	}
	printf("enter the name you want to find\n");
	scanf("%s",&item);
	for(i=0;i<5;i++)
	{
		if(strcmp(name[i],item)==0)
		{
			printf("%s found at %d location",name[i],i);
		}		
	}
	if(i>5)
	{
		printf("name not found\n");
	}
	return 0;
}
