//THIS IS CLIENT FILE
#include<stdio.h>
#include"primeh.h"
int main()
{
	int n, k,m;
	printf("ENTER NUMBER n\n");
	scanf("%d", &n);
	k = isprime(n);
	if (k==0)
		printf(" %d is not a prime number\n", n);
	else
		printf(" %d is a prime number\n", n);
	m = nextprime(n);
	printf("NEXT PRIME NUMBER IS %d", m);
}