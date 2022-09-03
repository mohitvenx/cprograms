/*
#include <stdio.h>
union car
{ 
char name[10]; 
float price;
int x; 
};
int main( )
{
union car c;
printf( "Memory size occupied by data in bytes : %d\n", sizeof(c));
printf("%d", sizeof(char));
return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
union car
{
char name[10];
float price;
};
int main( )
{
union car c;
strcpy( c.name, " Benz");

printf( "car name: %s\n", c.name);
c.price=4000000.00;
printf( "car price: %f\n", c.price);
return 0;
}
*/

/*
#include<stdio.h>
struct student
{
	union exam
	{
	char name[10];
	int roll;
	};
 	int mark;
};
int main()
{
	struct student stud;
	char choice;
	printf("\n You can enter your name or roll number ");
	printf("\n Do you want to enter the name (y or n): ");
	scanf("%c",&choice);
	if(choice=='y'||choice=='Y') 
	{
		printf("\n Enter name: ");
		scanf("%s",stud.name);
		printf("\n Name:%s",stud.name);
	}
	else 
	{
		printf("\n Enter roll number");
		scanf("%d",&stud.roll);
		printf("\n Roll:%d",stud.roll);
	}
	printf("\n Enter marks");
	scanf("%d",&stud.mark);
	printf("\n Marks:%d",stud.mark);
	return 0;
}
*/


/*
#include<stdio.h>
enum examples
{ 
abc="Hello", bef, // Value is not an integer constant
};
int main()
{ 
enum examples e1;
return 0;
}
*/


/*
#include<stdio.h>
enum months
{
	jan,feb,mar,apr,may,jun,july,aug,sep,oct,nov,dec
};
int main()
{
	printf("%d\n",mar-jan); // valid
	printf("%d\n",mar*jan); // valid
	printf("%d\n",mar&&feb); // valid
	enum months m=feb;
	printf("enum months m=feb %d\n", m);
	m=(enum months)(m + mar); // m can be changed. m is a variable of type enum months.
// But all constants in enum cannot be changed its value
	printf("m, after incrementing %d\n",m);
	for(enum months i=jan;i<=dec;i++) // loop to iterate through all constants in enum
	{
		printf("%d\t", i);
	}
	return 0;
}
*/

/*
#include<stdio.h>
enum nation
{
	India=1, Nepal
};
enum States
{
	Delhi, Katmandu
};
int main()
{
//enum States n=Delhi;
//enum States n1=India;
// Value 1 is stored in n1 which is of type enum States
enum nation n2=Katmandu;
enum States n=Nepal;
enum States n1=India;
printf("%d\n",n);
printf("%d\n",n1);
printf("%d",n2);
return 0;
}
*/

/*
#include<stdio.h>
enum example1
{
	abc=123, bef=345,cdt=555
};
void printing(enum example1 e1);
int main()
{
	enum example1 e1;
// how to print abc, bef and cdt based on user choice?? 
	printf("enter the number");
	scanf("%d",&e1); //enter any number
	printing(e1); // user defined function to print the symbol name
	return 0;
}
void printing(enum example1 e1)
{
	switch(e1)
	{
		case abc:printf("abc");break;
		case bef:printf("bef");break;
		case cdt:printf("cdt");break;
		default:printf("no symbol in enum with this value");
		break;
	}
}
*/

/*
#include<stdio.h>
int main()
{
	register int a = 10;
	int i=100;
	int* a = &i;
	printf("%d", *a);
	getchar();
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
unsigned int a = 10;
unsigned int b = 10; // observe this
int c = -10; // change this to -10 and check
signed int d = -10;
printf("%u %u %d %d\n",a,b,c,d);
printf("%d %d %d %d",a,b,c,d);
return 0;
}
*/
/*
#include<stdio.h>
int main()
{
const  int i = 5;
int j = 6;
const int *p = &i; // p is a pointer to constant integer
printf("%d\n",*p);
p = &j; // no error
//*p = j; // error
printf("%d\n",*p);
}
*/


