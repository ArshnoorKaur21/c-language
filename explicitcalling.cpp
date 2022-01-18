//program of explicit calling
#include<iostream>
using namespace std;
class Base
{
	public:
	int x;
	public:
		Base(int i)
		{
			x=i;
			cout<<"\nbase constructor called";
		}
};
class derived:public Base
{
	int y;
	public:
		derived(int a,int b):Base(a)
		{
			y=b;
			cout<<"\nderived constructor called";
		}
		void show()
		{
			cout<<"\nvalue of x="<<x;
			cout<<"\nvalue of y="<<y;
		}
};
main()
{
	derived d1(10,15);
	d1.show();
}
