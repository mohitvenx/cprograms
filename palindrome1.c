
#include<stdio.h>
int palindrome(int n);
int main()
{
	int n;
	printf("ENTER THE NUMBER SEQUENCE:\n");
	scanf("%d", &n);
	if (palindrome(n))
	{
		printf("YES %d PALINDROME!!", n);
	}
	else
	{
		printf("NO PALINDROME!!");
	}
}

int palindrome(int n)
{
	int rev=0;
	int num = n;
	while(n>0)
	{
		rev = rev*10 + n%10;
		n/=10;
	}
	return num == rev;
}