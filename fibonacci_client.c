//THIS IS CLIENT FILE 
#include<stdio.h>
#include "fibonaccih.h"
int main()
{
	int n,i=0,c;
	printf("Enter how many Fibonacci numbers you want populate:"); 
	scanf("%d",&n);
	printf("fibonacci series\n");
	for(c=1;c<=n;c++)
	{
		printf("%d\n",fib(i));
		i++;
	}
}
