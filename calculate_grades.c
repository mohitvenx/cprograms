//STUDENT MARKS AND CALCULATING MARKS
#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("Enter the marks scored:");
	scanf("%d", &marks);
	if (marks>85 && marks<=100)
	{
		printf("Your grade is A");
	}
	else if(marks>60 && marks<=85)
	{
		printf("Your grade is B");
	}
	else if(marks>40 && marks<=60)
	{
		printf("Your grade is C");
	}
	else if(marks>30 && marks<=40)
	{
		printf("Your grade is D");
	}
	else
	{
		printf("FAIL");
	}
	getch();
}