//program of boxes through tunell
#include<stdio.h>
main()
{
	int l,b,h,vol;
	printf("\nenter the length breadth and height of tunnel");
	scanf("%d%d%d",&l,&b,&h);
	if(h<41)
	{
		printf("\nbox can pass through tunnel");
		vol=l*b*h;
		printf("\n%d is volume",vol);
	}
	else
		printf("\nbox cant pass through tunnel");
	return 0;
}
