//array of structure
#include<stdio.h>
struct dob
{
	int dd,mm,yy;
};
struct student  
{
	int rno;
	char name[20];
	float marks;
	//nesting of structure
	struct dob d1;	
};
main()
{
	//creating object of structure
	/*student s1;
	printf("Enter student Details:\n Rno, Name , Marks: \n");
	scanf("%d%s%f",&s1.rno,&s1.name,&s1.marks);
	printf("\n Student Details Are : \n Rno \t Name \t Marks \n");
	printf("%d \t %s \t %f",s1.rno,s1.name,s1.marks);*/
	student s[3];
	int i;
	printf("\nenter student details\n");
    for(i=0;i<3;i++)
    {
    	scanf("%d%s%f",&s[i].rno,&s[i].name,&s[i].marks);
    	printf("Enter date of birth:dd/mm/yy");
		scanf("%d%d%d",&s[i].d1.dd,&s[i].d1.mm,&s[i].d1.yy);
	
	}
	printf("student details are:\n Rollno\t Name\t marks\n");
	for(i=0;i<3;i++)
    {
    	printf("\n%d\t%s\t%f\t %d-%d-%d",s[i].rno,s[i].name,s[i].marks,s[i].d1.dd,s[i].d1.mm,s[i].d1.yy);
	}
	return 0;
}
