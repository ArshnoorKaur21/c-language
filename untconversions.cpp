#include<stdio.h>
int main(){
	float first;
	float second;
	char input;
	char q;
	float kilotomiles=0.621371;
	float inchestofoot=0.08333;
	float cmstoinches=0.393701;
	float poundtokgs=0.453592;
	while(1){
		printf("enter the input and character q to quit\n");
		scanf("%c",&input);
		switch(input)
		{
			case '1':
				printf("enter quantity in terms of first\n");
	            scanf("%f",&first);
				second=first*inchestofoot;
				printf("%0.1f inches is equal to %f\n",first,second);
				break;
			case '2':
				printf("enter quantity in terms of first\n");
	            scanf("%f",&first);
				second=first*cmstoinches;
				printf("%0.1f inches is equal to %f\n",first,second);
				break;
			case '3':
				printf("enter quantity in terms of first\n");
	            scanf("%f",&first);
				second=first*kilotomiles;
				printf("%0.1f inches is equal to %f\n",first,second);
				break;
			case '4':
				printf("enter quantity in terms of first\n");
	            scanf("%f",&first);
				second=first*poundtokgs;
				printf("%0.1f inches is equal to %f\n",first,second);
				break;
			case 'q':
				printf("quit the program\n");
				goto end;
				break; 
			default:
				break;
		}
	}end:
	
	return 0;
}

