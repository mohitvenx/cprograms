/*
#include<stdio.h>
struct student
{
	char name[20];
	int roll_no;
	int marks;
};
int main()
{
*/	
/*	struct student *s1;     //METHOD 1: POINTER 
	printf("%d\n", sizeof(*s1));
	printf("%d", s1->roll_no);  //To access in case of pointer 
	struct student s2;      //METHOD 2: VARIABLE 
	printf("%d\n", sizeof(s2));
	printf("%d\n", s2.roll_no);
	printf("%d\n", s2.marks); //To access in case of variable
	printf("%s\n", s2.name);	
*/
	//initialisation
/*	struct student s3={"abc", 46, 78};
	printf("%d\n", sizeof(s3));
	printf("%d\n", s3.roll_no);
	printf("%d\n", s3.marks); //To access in case of variable
	printf("%s\n", s3.name);
*/
	//designated initialisation
/*	struct student s4={roll_no:7,marks:78};
	printf("%d\n", s4.roll_no);
	printf("%d\n", s4.marks); //To access in case of variable
	printf("%s\n", s4.name);
*/


#include<stdio.h>
struct test
{
	int i;
	char j;
};
struct test1
{ 
	char j; 
	int i;
};
struct test2
{ 
	char k; 
	char j; 
	int i;
};
struct test3
{ 
	int i;
	char k; 
	int j;
};
int main()
{
	printf("size of the structure is  %d\n",sizeof(struct test));

} 