//CONVERT FROM DECIMAL TO OCT 
#include<stdio.h>
int decToOct(int n);
int main()
{
	int n;
	printf("ENTER DECIMAL NUMBER: ");
	scanf("%d", &n);
	printf("THE EQIVALENT OCTAL NUMBER IS %d", decToOct(n));
	return 0;
}
int decToOct(int n)
{
	int res, t=1;
	res=0;
	while(n!=0)
	{
		res = res + (n%8)*t;
		n=n/8;
		t = t*10;
	}
	return res;
} 
		 