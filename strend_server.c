//THIS IS SERVER FILE 
#include<stdio.h>
#include<string.h>
#include "strendh.h"
int strend(char *s, char *t)
{
	while (*s!=*t)
	{
		if (*s=='\0')
		return 0;
		s++;
	}
	while (*s==*t)
	{
		if(*s=='\0')
		return 1;
		s++;
		t++;
	}
	return 0;
}