//call by value and call by refernce
#include<stdio.h>
int change_value(int*x,int*y){
	int d=*x+*y;
	int c=*x-*y;
	*x=d;
	*y=c;
	printf("%d %d\n",*x,*y);
	return *x,*y;
}
int main(){
	int a=3;
	int b=4;
	change_value(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
