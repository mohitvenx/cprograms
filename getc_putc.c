/*
//getc and putc FUNCTION EXAMPLE
#include<stdio.h>
int main ()
{
	char c;
	printf("Enter character: "); 
	c = getc(stdin);     //It only takes one char ie the first if many are entered
	printf("Character entered: ");
	putc(c, stdout); 
	return 0;
}
*/

//USING getc AND putc IN WHILE LOOP TO READ COMPLETE FILE
#include <stdio.h>
int main ()
{
	char ch;
	while((ch = getc(stdin)) != EOF)     //reads the entire text entered till (ctrl c0) ie OEf command is given
	{
		putc(ch, stdout);
	}
}
