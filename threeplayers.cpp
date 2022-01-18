//program
#include<stdio.h>
main()
{
	char a,b,c;
	printf("winner among three players");
	scanf("%c %c %c",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("%c is greater",a);
		}
		else
		{
			printf("%c is greater",c);
		}
	}
	else
	{
		if(c>b)
		printf("%c is greater",b);
		else
		printf("%c is greater",c);
	}
	return 0;
}
