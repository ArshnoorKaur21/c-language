#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int generate_random_number(int n)
{
	srand(time(NULL));
	return rand()%n;
}
int greater(char c1,char c2)
{
	//returns 1 if c1>c2, if c1=c2 return -1 else return 0
	if(c1==c2)
	{
		return -1;
	}
	else if(c1=='r'&& c2=='s')
	{
		return 1;
	}
	else if(c2=='r'&& c1=='s')
	{
		return 0;
	}
	else if(c1=='p'&& c2=='r')
	{
		return 1;
	}
	else if(c2=='p'&& c1=='r')
	{
		return -1;
	}
	else if(c1=='s'&& c2=='p')
	{
		return 1;
	}
	else
	{ 
	if(c2=='s'&& c1=='p')
	{
		return -1;
	}
}
}
int main()
{
	int playerscore=0;
	int compscore=0;
	int temp;
	char playerchar,compchar;
	char arr[3]={'r','p','s'};
	printf("welcome to rock paper scissors game\n");
	for(int i=0;i<3;i++)
	{
		//take player1 as input
		printf("players1 turn\n");
		printf("choose 1 for rock,2 for paper and 3 for scissors\n");
		scanf("%d",&temp);
		playerchar=arr[temp-1];
		printf("you chose %c\n",playerchar);
		//genrate comp input
		printf("computers turn\n");
		printf("choose 1 for rock,2 for paper and 3 for scissors\n");
		temp=generate_random_number(3);//generates random no. b/w 0 and 2
		compchar=arr[temp];
		printf("cpu chose %c\n",compchar);
		//compare the scores
		if(greater(compchar,playerchar)==1)
		{
			compscore+=1;
			printf("cpu got %d\n",compscore);
		}
		else if((greater(compchar,playerchar)==-1))
		{
			compscore+=1;
			playerscore+=1;
			printf("draw\n");
		}
		else
		{
			playerscore+=1;
			printf("you got %d\n",playerscore);
		}
	}
	printf("you:%d\n cpu:%d",playerscore,compscore);
	if(playerscore>compscore)
	{
		printf("you won the game\n");
	}
	else if(compscore>playerscore)
	{
		printf("cpu won the game\n");
	}
	else
	{
		printf("its a draw\n");
	}
	return 0;
}
