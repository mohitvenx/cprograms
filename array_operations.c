//PARAMETER PASSING
#include<stdio.h>
int product(int a, int b);
int main()
{
	int a[]={10,20,30,40};
	int n=sizeof(a)/sizeof(a[0]);
	printf("PRODUCT OF FIRST AND LAST NUMBERS IS=%d\n", product(a[0], a[n-1]));
	//printf("%d",n); (=4)
	return 0;
}

int product(int a, int b)
{
	return a*b;
} 	