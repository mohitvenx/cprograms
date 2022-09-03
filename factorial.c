//factorial of a number 
#include<stdio.h>
int fact(int n);
int main()
{
	int n=5;
	printf("fact of %d=%d\n",n,fact(5));
}
int fact(int n)
{
	int fact=1;
	int i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}