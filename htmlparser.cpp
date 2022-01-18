#include<stdio.h>
#include<string.h>
void parser(char string[])
{
	int in=0;
	int index=0;
	for(int i=0;i<strlen(string);i++)
	{//jb h aaega is loop mei se koi bhi condtion true ni milri usee
		if(string[i]=='<')//apne aap next iteration hojgi with in =1 value prev
		{
			in=1;
			continue;
		}
		else if(string[i]=='>')
		{
			in=0;
			continue;
		}
		if(in==0)
		{
			string[index]=string[i];
			index++;
		}
	}
	string[index]='\0';
while(string[0]==' ')//string ka pela character jb tk blank hai 
{
	for(int j=0;j<strlen(string);j++)
	{
		string[j]=string[j+1];
	}
}
while(string[strlen(string)-1]==' ')
{
	string[strlen(string)-1]='\0';
}
}
int main()
{
	char string[]="<h1>   this is a heading    </h1>";
	parser(string);
	printf("the parsed string is %s good",string);
}
