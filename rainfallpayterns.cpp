//program of rainfall pattrens
#include<stdio.h>
#include<stdlib.h>
float rainfall[12];
char name[12][20]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
void read()
{
	int i;
	printf("enter the rainfall patterns\n");
	for(i=0;i<12;i++)
	{
		printf("enter rainfall in mm for month: %s",name[i]);
		scanf("%f",&rainfall[i]);
	}
}
void enter()
{
	int i,q;
	printf("display the rainfall for 12 months\n");
	printf("\n Monthname \t Rainfall \n");
	for(i=0;i<12;i++)
	{
		printf("\n %s \t %f",name[i],rainfall[i]);
	}
}
void average()
{
	int sum=0,i,avg;
	int a[12];
	for(i=0;i<12;i++)
	{
		sum=sum+a[i];
	}
		printf("sum is %d",a[i]);
	avg=sum/12;
	printf("\n Average = %d",avg);
}
void max()
{
	int i,ma=0;
	int a[12];
	for(i=0;i<12;i++)
	{
		if(ma<a[i])
		{
			ma=a[i];
		}
	}
		printf("%d is maximum in pattern\n",ma);
}
void min()
{
	int i,mi;
	int a[12];
	mi=a[0];
	for(i=0;i<12;i++)
	{
		if(mi>a[i])
		{
			mi=a[i];
		}
		printf("%d is minimum in pattern\n",mi);
	}
}
void find()
{
	int i,item;
	int a[12];
	printf("enter the month which matches given rainfall pattaern");
    for(i=0;i<12;i++)
    {
    	if(a[i]==item)
    	{
    		printf("\npattern found at %d location",a[i]);
		}
	}
	if(i==12)
	{
			printf("\nelement not found");
	}
}
void order()
{
	
}
main()
{
	int n;
	for(;;)
	{
	printf("Press 1 to enter the rainfall for 12 months\n");
	printf("press 2 to display the rainfall for 12 months\n");
	printf("display the total rainfall and average monthly rainfall for 12 months\n");
	printf("display the month with most rainfall\n");
	printf("display the month with least rainfall\n");
	printf("sort the rainfall in accending order\n");
	printf("search and display the month which has rainfall equal to givan rainfall\n");
	printf("Press 8 to exit from the function\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:read();
		break;
		case 2:enter();
		break;

		case 3:average();
		break;
		case 4:max();
		break;
		case 5:min();
		break;
		case 6:order();
		break;
		case 7:find();
		break;
		case 8:exit(0);
		default:
		printf("\nexit from the function");
	}
}
}
