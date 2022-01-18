//program of reading in files
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int id;
	char name[20];
	int accno;
	cout<<"\nenter the employ details";
	ifstream object("employdetails1.txt");
	object>>name;
	object>>id;
	object>>accno;
	cout<<"\nstudent details are";
	cout<<"\nname"<<name<<"\nid"<<id<<"\naccno"<<accno;
	object.close();
}
