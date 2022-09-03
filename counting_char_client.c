//THIS SI CLIENT FILE
#include<stdio.h>
#include<string.h>
#include"counting_char_header.h"
int main()
{
	char s[100];
	printf("Enter the string :\n");
	scanf("%[^\n]s", s);
	total(s);
	return 0;
}


