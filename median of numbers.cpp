//program of median of numbers in array
#include<iostream>
using namespace std;
main()
{
	int i,n;
	int median,position;
	cout<<"\nenter the size of array";
	cin>>n;
	int a[n];
	cout<<"\nenter the elements in array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nelements in array are";
	for(i=0;i<n;i++)
	{
	    cout<<"\n"<<a[i];	
	}
	cout<<"\nmedian of numbers in array";
		if(n%2==0)
		{
			position=((n/2)+((n/2)+1))/2;
			cout<<"\n required result"<<position;
			cout<<"\n median";
			cout<<"\n"<<a[position-1];
		}
		else
		if(n%2!=0)
		{
			position=(n+1)/2;
			cout<<"\n required result"<<position;
			cout<<"\n"<<a[position-1];
	}
	return 0;
	}
