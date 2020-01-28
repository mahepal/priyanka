#include<stdio.h>
int i,j,n;
struct student
{
	int rollno;
	char name[20];
	int marks[5];
};
void studadd(struct  student *s)
{
	for(i=0;i<n;i++)
	{
		printf("enter data:%d:\n",(i+1));
		printf("enter rollno:%d:",(i+1));
		scanf("%d",&s[i].rollno);
		printf("enter name:%d:",(i+1));
		scanf("%s",s[i].name);
		
		for(j=0;j<5;j++)
		{
			printf("enter marks of stud %d of subject%d:",(i+1),(j+1));
			scanf("%d",&s[i].marks[j]);
		}
	}
}
void displayresult(struct student *s)
{
	printf("------------------------------\n");
	printf("Rollno.\tName\tTotal\n");
	printf("--------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",s[i].rollno);
		printf("%s\t",s[i].name);
		int total=0;
		for(j=0;j<5;j++)
		{
			total+=s[i].marks[j];
		}
		printf("%d\n",total);
	}
}
int main()
{
	printf("enter the size of an elements:");
	scanf("%d",&n);
	struct student student[n];
	studadd(student);
	displayresult(student);
	return 1;
}
