//THIS CONTAINS VARIOUS STRING OPERATIONS 

/*
#include<stdio.h>
int main()
{
	char ch[] = "a";
	printf("size of ch = %d\n", sizeof(ch)); // 2 is size as " " make it a string constant
}
*/

/*
#include<stdio.h>
int main()
{
	char ch= 'a';
	printf("size of ch = %d\n", sizeof(ch)); // 1
}
*/


//STRING COPYING, STRING LENGTH, STRING CONCATENATION,FINDING IF CHAR IS PRESENT IN STRING, STRING COMPARING PROGRAM
#include<stdio.h>
#include<string.h>
int main()
{
	char a[] = {'p','e','s','u','\0'};
	char b[100];
	char d[] = "UNIVERSITY";
	char c = 'e';
	char f[] = "PES";
	char g[] = "PES";
	char h[] = "UNIVERSITY";
	char i[] = "PESU";
	strcpy(b,a);  //copying 
	printf("a: %s\n", a);
	printf("b: %s\n", b);
	printf("len a:%d\n", strlen(a));  //length
	printf("len b:%d\n", strlen(b));  //length
	strcat(a,d);  //concatenation
	printf("a: %s\n",a);
	printf("d: %s\n",d);	
	char *p = strchr(a,c);  //finding occurrence of a character in a string.
	printf("c is found at address %p\n", p);
	printf("strcmp is %d\n", strcmp(g,h)); //comparing
	printf("strcmp is %d\n", strcmp(g,f));
	printf("strcmp is %d\n", strcmp(f,h));	
	printf("strcmp is %d\n", strncmp(f,i,3)); //This compares only the 'n' char mentioned and not the complete string
}
