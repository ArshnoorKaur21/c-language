#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	fp=fopen("students.txt","w");
	int n;
	char ch;
	printf("Enter number of characters:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		ch=getche();
		fputc(ch,fp);
	}
	fclose(fp);
	return 0;
}
