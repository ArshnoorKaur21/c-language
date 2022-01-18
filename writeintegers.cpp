//read the program of integers
#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	fp=fopen("integers.txt","w");
	int n,i;
	printf("\nenter the intgers in the file and -1 to stop the entering");
	for(;;)
	{
		scanf("%d",&n);
		if(n>=0)
			putw(n,fp);
		else
		break;
	}
	fclose(fp);
	return 0;
}
