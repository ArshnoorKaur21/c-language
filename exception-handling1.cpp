#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	c=0;
	cout<<"Enter a and b: ";
	cin>>a>>b;
	try
	{
		if(b==0)
			throw 0;
		c=a/b;
	}
	catch(int x)
		{
			cout<<"\n hey.. cannot divide by 0";
		}
	cout<<"\n Divuision = "<<c;
	cout<<"\n It will not be printed";
	return 0;
}
