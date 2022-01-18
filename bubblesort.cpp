//program to sort using bubble sort
#include<stdio.h>
main()
{
	int n;
	printf("Enter number of elements in the array:");
	scanf("%d",&n);
	int a[n],i,j;
	printf("Enter the elements in the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Elements before sorting: \n");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
	printf("\n Elements after sorting: \n");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	return 0;

}
