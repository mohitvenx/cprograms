//THIS IS CLIENT FILE 
#include<stdio.h>
#include"palindrome_stringsh.h"
int main()
{
	char s[100], rev[100];
	printf("ENTER THE STRING:\n");
	scanf("%s", s);
	reverse_string(s,rev);
	printf("rev string = %s\n", rev);
	int r= check_equal(s,rev);
	if (r==0)
		printf("%s IS A PALINDROME", s);
	else
		printf("%s IS NOT A PALINDROME",s);
		
	
}

