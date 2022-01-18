//program of printing min and max in array
#include<stdio.h>
main()
{
	int i,n,a[5];
	int max=0;
	int min=0;
	printf("\nenter the elements in array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\npritning the elements before sorting");
		for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	int j;
	int temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nelements after sorting");
		for(i=0;i<5;i++)
		{
			printf("\n%d",a[i]);
		}
	printf("\nmaximum of elements in array");
		for(i=0;i<4;i++)
		{
			max=max+a[4-i];
		}
		printf("\n%d is max",max);
		printf("\nminimum of elements in array");
		for(i=4;i>0;i--)
		{
			min=min+a[4-i];
		}
		printf("\n%d is min",min);


	return 0;
}
