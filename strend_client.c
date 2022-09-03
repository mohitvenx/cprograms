//THIS IS CLIENT FILE 
#include<stdio.h>
#include<string.h>
#include "strendh.h"
int main()
{
	char p[]="C PROGRAMMING";
	char q[]="programming";
	printf("The first string is: %s \n", p);
	printf("The second string is %s \n", q);
	int k = strend(p,q);
	if (k==1)
		printf("The second string is present at the end of the first string\n");
	else
		printf("The second string is not present at the end of the first string\n");		
}
