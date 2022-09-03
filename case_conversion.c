//TO CONVERT ENTERED TEXT FROM LOWER CASE TO UPPER CASE 
#include<stdio.h>
int main()
{
	char c;
	printf("Enter the text to be converted\n");
	while((c=getchar())!='\n')
	{
		if (c>='a' && c<='z')
		{
			c = c + 'A' - 'a';
		}
		putchar(c);
	}
	return 0;
}