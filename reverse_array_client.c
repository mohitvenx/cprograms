//THIS IS CLIENT FILE
#include<stdio.h>
#include"revh.h"
int main()
{
	int a[100],n,i;
	printf("ENTER SIZE OF ARRAY\n");
	scanf("%d", &n);
	printf("ARRAY ELEMENTS ARE:\n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	reverse_arr(a,0,n-1);
	printf("ARRAY AFTER REVERSE IS\n");
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
}