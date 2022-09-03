//TO FIND GCD OF 3 NUMBERS
#include<stdio.h>
int gcd(int m, int n);
int main()
{
	int a, b, c, r1, r2;
	printf("ENTER THE 3 NUMBERS: ");
	scanf("%d %d %d", &a, &b, &c);
	r1 = gcd(a,b);
	r2 = gcd(c,r1);
	printf("THE GCD OF %d, %d, %d IS %d", a, b, c, r2);
}
int gcd( int m, int n)
{
	int i, min, gcd;
	if(m>=n)
		min=n;
	else
		min=m;
	for(i=1; i<=min; i++)
	{
		if (m%i==0 && n%i==0)
			gcd=i;
	}
	return gcd;
}
	