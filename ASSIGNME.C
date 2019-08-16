#include<stdio.h>
#include<conio.h>

struct student
{
	int id[50];
	int age;
	int marks;
}s1;

int main()
{
	clrscr();
	printf("Enter id, age and marks: ");
	scanf("%d\n %d\n %d" ,&s1.id ,&s1.age ,&s1.marks);
	if(s1.marks>=0 && s1.marks<=100)
	{
		if(s1.age>=20 && s1.marks>=65)
			printf("Student is eligible to seek admission in the university");
		else
			printf("Student is ineligible to seek admission in the university");
	}
	getch();
	return 0;
}