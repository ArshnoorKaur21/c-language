//program of hiring a car for N customers
#include<stdio.h>
double rainfall[12];
void rainfall()
{
	int i;
	for(i=0;i<12;i++)
	{
		printf("\n Enter rainfall in mm for month:");
		scanf("%d",&rainfall[i]);
	}
}
void displayrainfall()
{
	
}
main()
{
	int n;
	printf("\n1. Read the rainfall for 12 months");
	printf("\n2. Display the rainfall for 12 months");
	printf("\n 3. Display the total rainfall and the average monthly rainfall");
4. Display the month with the most rainfall
5. Display the month with the least rainfall
6. Sort the rainfall in ascending order 
7. Search and display the month which has rainfall equal to the given rainfall
8. Exit from application")
	scanf("%d",&n);
	switch(n)
	{
		case 1: 
		break;
		case 2: 
		break;
		case 3: 
		break;
		case 4: 
		break;
		case 5:  
		break;
		case 6;
		break;
		case 7: 
		break;
		case 8: 
	}
	
}
