//program of time conversion from 12 hrs to 24hrs in c
#include<stdio.h>
#include<string.h>
main()
{
	int hr,min,sec;
	char a[3];
	printf("\nenter time in hr min and sec in 12hrs system");
	scanf("%d%d%d",&hr,&min,&sec);
	printf("\nhr:%d\tmin:%d\tsec:%d",hr,min,sec);
	printf("\nentering string am or pm");
	scanf("%s",&a);
	printf("\ntime in 24hrs in evening");
	    	if((strcmp(a,"pm")==0))
	    	hr=hr+12;
		printf("%d:%d:%d",hr,min,sec);

	return 0;
}
