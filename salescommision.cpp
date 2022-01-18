//program to calculate monthly commision for persons
#include<stdio.h>
#include<stdlib.h>
void input()
{
	int i;
	int a[10];
    char name[20];
    float amount;
    printf("enter the names of persons and their sales amount\n");
    for(i=0;i<10;i++)
{
	scanf("%s %f",&a[i],&a[i]);
}
}
void display()
{
	int i;
	char name[20];
	float amount[10];
	printf("display the names with amount\n");
	for(i=0;i<10;i++)
{
	printf("\n\t %s %f",name,amount);
}
}
void sortbyname()
{
	
}
void sortbysales()
{
	
}
void searchbyname()
{
	
}
void searchbysales()
{
	
}
void displaystatistics()
{
	
}
main()
{
	for(;;)
	{
		int n;	
		printf("enter options 1 to 8\n");
		scanf("%d",&n);
		printf("press 1 for input and validate data\n");
		printf("press 2 for display\n");
		printf("press 3 for sort by name\n");
		printf("press 4 for sort by sales\n");
		printf("press 5 for search by name\n");
		printf("press 6 for search by sales\n");
		printf("press 7 for displaying statistics\n");
		printf("press 1 for exit\n");
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
					printf("exit from the program\n");
		}
	}
}
