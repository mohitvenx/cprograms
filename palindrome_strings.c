#include<stdio.h>
char palindrome(char a[]);
int main()
{
	char a[100];
	printf("ENTER THE SEQUENCE:\n");
	scanf("%s", &a);
	if (palindrome(a))
	{
		printf("YES %s PALINDROME!!", a);
	}
	else
	{
		printf("NO PALINDROME!!");
	}
}

char palindrome(char a[])
{
	int rev=0;
	char num = a;
	while(n>0)
	{
		rev = rev*10 + n%10;
		n/=10;
	}
	return num == rev;
}