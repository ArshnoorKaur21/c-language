//program
#include<stdio.h>
main()
{
	int i,min,n;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in array");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("minimum value");
	min=a[0];
	for(i=0;i<=n-1;i++)
	{
	    if(a[i]<min)
	    {
	    	min=a[i];
		}
	}
	printf("%d",min);
	return 0;
	}
