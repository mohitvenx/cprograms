//PALINDROME OF GIVEN NUMBER
#include<stdio.h>
int reverse(int n);
int main()
{
	int n, r;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&n);
	r=reverse(n);
	if (n==r)
		printf("THE NUMBER IS A PALINDROME");
	else
		printf("THE NUMBER IS NOT A PALINDROME");
	return 0;
}

int reverse(int n)
{
	int digit,r;
	r=0;
	while(n!=0)
	{
		digit = n%10;
		r = r*10 + digit;
		n = n/10;
	}
	return r;
}





