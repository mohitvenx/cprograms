/*
#include<stdio.h>
int main()
{
	char ch;
	printf("enter chaar");
	ch=getc(stdin);
	printf("char entered\n");
	putc(ch,stdout);
}
*/


#include<stdio.h>
int main()
{
	char ch;
	while((ch=getc(stdin))!=EOF)
	{
		putc(ch,stdout);
	}
}