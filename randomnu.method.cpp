//method to generate random number
#include<stdio.h>
#include<time.h>//isme module hota jisme random fxn store hota
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	//srand(45);
	//agr aise likhdu hr baar 100 k andr fixed value aaegi
	//srand aur rand stdlib.h k andr defined hain
	printf("the random number b/w 0 to 100 is %d\n",rand()%100);
	return 0;
}
