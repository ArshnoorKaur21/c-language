#include<stdio.h>
#include<string.h>
struct Employee{
	int id;
	float marks;
	char name[34];
};
struct Employee harry,ravi,raman;//here we have declared globally variables can be accessed anywhere
void func1(){//agr yhn na declafre krti var toh error aata bcz woh locally declare hai
	printf("%s",harry.name);
}
int main(){
	harry.id=21;
	harry.marks=34.4;
	ravi.id=22;
	ravi.marks=35.4;
	raman.id=26;
	raman.marks=37.4;
	printf("ravi got %f marks\n",ravi.marks);
	strcpy(harry.name,"this is good");
	printf("harrys name is %s\n",harry.name);
	func1();
	return 0;
 }
