#include<stdio.h>
main()
{
	char name[20];
	int i;
	printf("Enter your name: ");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++)
	{
		printf("\n %c",name[i]);
	}
	return 0;
	
}
