//program for calculating commisions from customers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[7];
char name[7][12]={"aman","raman","sham","ram","jasmin","pihu","aggarwal"};
void input()
{
	int i;
	printf("\nenter sales amount of persons");
	for(i=0;i<7;i++)
	{
		printf("\nplease enter name %s,then sales amount for salesperson %d",name[i],i);
		scanf("%d %s",&i,&name[i]);
	}
}
void display()
{
    int i;
    char sno,amount,commision;
	printf("\ndisplay the name of persons with their sales commision");
	printf("\n\t%d  \t%s  \t%s",sno,name,amount,commision);
	for(i=0;i<7;i++)
	{
		if(a[i]<commision<a[i+1])
		printf("\n\t%d %s %d",i,name[i],a[i]);
	}
}
void sortbyname()
{
	int i,j;
	char temp[20];
	for(i=0;i<7;i++)
	{
		for(j=0;j=6-i;j++)
		if(strcmp(name[j],name[j+1])>0)
			{
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
		for(i=0;i<7;i++)
		{
			printf("\n%s %d",name[i],a[i]);
		}
	}
void sortbysales()
{
	int i,j;
	int c;
	printf("\n sort the elements by sales");
	for(i=0;i<7;i++)
	{
		for(j=0;j<6-i;j++)
		if (a[j]>a[j+1])
		{
		    c>a[j];
			a[j]>a[j+1];
			a[j+1]>c;	
		}
	}
	for(i=0;i<7;i++)
	{
		printf("\t\n%d%s",a[i],name[i]);
	}
}
void searchbyname()
{
	int i,j;
	char item[20];
	printf("\nenter the name you want to search");
	scanf("%s",&item[i]);
	for(i=0;i<7;i++)
	{
		if(name[i]== item[i])
		{
			printf("\n%s found at %d location",item,i);
		}
	}
	if(i==7)
	printf("\n%s not found ",name);
}
void searchbysales()
{
	int i;
	int number;
	printf("\nenter the commision you want to search");
	for(i=0;i<7;i++)
	{
		if(a[i]==number[i])
		{
			printf("\%d found at %d location",number,i);
		}
	}
}
void displaystatistics()
{
	
}
main()
{
	int n;
	printf("\nenter details for sales commision");
	for(;;)
{
	printf("\npress 1 input and validate data\n");
	printf("press 2 for display\n");
	printf("press 3 for sorting names\n");
	printf("press 4 for sort by sales");
	printf("press 5 for searching by names\n");
	printf("press 6 for searching by sales\n");
	printf("press 7 for display statistics\n");
	printf("press 8 for exit\n");
	printf("\nenter options from 1 to 8");
	scanf("%d",&n);
	switch(n)
	{
		case 1:input();
		break;
		case 2:display();
		break;
		case 3:sortbyname();
		break;
		case 4:sortbysales();
		break;
		case 5:searchbyname();
		break;
		case 6:searchbysales();
		break;
		case 7:displaystatistics();
		break;
		case 8:exit(0);
		default:
		printf("\nexit from the function");
	}
}
return 0;
}
