// TO FIND SUM OF SERIES OF FACTORIALS
#include<stdio.h>
int fact(int n);
int main()
{
	int sum=0, i;
	for(i=1; i<=5; i++)
	{
	sum = sum + (fact(i)/i);
    	}
	printf("The sum of the series is : %d",sum);
	return 0;
}
int fact(int n)
{
	int i, prod=1;
	for(i=1; i<=n; i++)
	{
		prod = prod*i;
	}
	return prod;
}
