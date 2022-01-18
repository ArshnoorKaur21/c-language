//program
#include<stdio.h>
main()
{
	int a,b,c,n;
	printf("enter numbers");
	scanf("%d%d",&a,&b);
	printf("press1 for sum");
	printf("\npress2 for sub");
	printf("\npress3 for mut");
	printf("\npress4 for div");
	scanf("%d",&n);
	switch(n)
	{
		case 1: c=a+b;
		printf("%d is sum",c);
		break;
		case 2: c=a-b;
		printf("%d is sub",c);
		break;
		case 3: c=a*b;
		printf("%d is multiplication",c);
		break;
		case 4:c=a/b;
		printf("%d is div",c);
		break;
		default:("nothing");
		
	}
	return 0;
	
	}
	
	
	
