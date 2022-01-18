#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	fp=fopen("students.txt","r");
	int n;
	char ch;
	while((ch=getc(fp))!=' ')
	{
		printf("\n %c",ch);
	}
	fclose(fp);
	return 0;
}
