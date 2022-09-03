//TO CHECK IF NUMBER IS ARMSTRONG OR PERFECT NUMBER 
#include<stdio.h>
int arm(int n);
int perfect(int n);
int main()
{
	int n;
	printf("ENTER THE NUMBER (UPTO 3 DIGITS): ");
	scanf("%d", &n);
	if(arm(n))
		printf("THE NUMBER IS AN ARMSTRONG NUMBER\n");
	else
		printf("THE NUMBER IS NOT AN ARMSTRONG NUMBER\n");
	if(perfect(n))
		printf("THE NUMBER IS A PERFECT NUMBER\n");
	else
		printf("THE NUMBER IS NOT A PERFECT NUMBER\n");
	return 0;
}
int arm(int n)
{
	int digit, sum, n1;
	sum = 0;
	n1=n;
	while (n!=0)
	{
		digit = n%10;
		sum = sum + digit*digit*digit;
		n=n/10;
	}
	return(n1==sum);
}
int perfect(int n)
{
	int sum, i, n1;
	sum = 0;
	for(i=1; i<n; i++)
	{
		if(n%i==0)
			sum = sum + i;
	}
	return (n==sum);
}











	