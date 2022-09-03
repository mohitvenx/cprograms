//THIS SIS CLIENT FILE
#include<stdio.h>
#include"remove_duplicate_header.h"
int main()
{
	char str1[50];
 	printf("Enter the string:\n");
 	scanf("%[^\n]s",str1);
	printf("string before removal of duplicates %s\n",str1);
 	remove_duplicates(str1);
 	printf("string after removal of duplicates %s",str1);
 	return 0;
}