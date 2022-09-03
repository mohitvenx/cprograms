//THIS IS CLIENT FILE 
#include"facth.h"
#include<stdio.h>
int main()
{
	int n, r, ncr;
	printf("ENTER VALUES OF n AND r\n");
	scanf("%d %d", &n, &r);
	ncr = factorial(n)/(factorial(n-r)*factorial(r));
	printf("ncr is %d", ncr);
}

	