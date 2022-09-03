//TO CHECK IF NUMBER IS PRIME
#include<stdio.h>
int prime(int n);
int main()
{
	int n, res;
	printf("ENTER THE NUMBER: ");
	scanf("%d", &n);
	res = prime(n);
	if (res==1)
		printf("THE NUMBER IS A PRIME NUMBER");
	else
		printf("THE NUMBER IS NOT A PRIME NUMBER");
	return 0;
}
int prime(int n)
{
	int i;
	for(i=2; i<n/2; i++)
	{
		if (n%i==0)
			return 0;
	}
	return 1;
}