// A Simple C++ program to reverse a string
#include <iostream>
using namespace std;
void reversename(string& name)
{
	int n = name.length();
	for (int i = 0; i < n / 2; i++)
		swap(name[i], name[n - i - 1]);
}
main()
{
	string name = "arshnoor";
	reversename(name);
	cout<<"\nafter reversing\n";
	cout << name;
	return 0;
}

