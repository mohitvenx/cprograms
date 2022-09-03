// FACTORIAL USING RECURSION
#include<stdio.h>
int fact(int n);
int main()
{
	int n=5;
	printf("fact of %d=%d\n",n,fact(5));
}
int fact(int n)
{
	if (n==0)
	{	
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}