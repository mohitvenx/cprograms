#include"char_replacement_header.h"
#include<string.h>
#include<stdio.h>
void replace_char(char *s, char c1, char c2)
{
	int i=0;
	for (i=0; s[i] ;i++)
	{
		if (s[i]==c1)
		{
			s[i] = c2;
		}
	}
}