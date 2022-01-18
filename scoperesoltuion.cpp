//program of scope resolution and instance variables
#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[20];
	int marks;
	public:	
	void get()
		{
			cout<<"Enter rno, name and marks of the student: ";
			cin>>rno>>name>>marks;
		}
		void show()
		{
			cout<<"\n Rno \t Name \t Marks \n";
			cout<<rno<<"\t"<<name<<"\t"<<marks;
		}
};
main()
{
	student s1;
	s1.get();
	s1.show();
	student s2;
	s2.get();
	s2.show();
	return 0;
}


