//program to implement object as pointer
#include<iostream>
using namespace std;
class Base
{
	public:
	virtual void get()
	{
		cout<<"\n Inside the base class get function";
	}	
	virtual void show()
	{
		cout<<"\n Inside the base class show function";
	}
};
class Derived:public Base
{
	public:
	void get()
	{
		cout<<"\n Inside the derived class get function";
	}
	void show()
	{
		cout<<"\n INside the derived class show function";
		
	}
};
main()
{
	Base b1;  //object
/*	Base *p1; //pointer objedct
	p1=&b1; //pointer pointing to object
	p1->get();
	p1->show();*/
	Derived d1;
	Base *p1;
	p1=&d1;
	
	//Derived *d1;
	//d1=&b1; won't work
	p1->get();
	p1->show();
	
	return 0;
}
