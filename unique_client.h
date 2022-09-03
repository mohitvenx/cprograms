#include<stdio.h>
#include"unique.h"
int main()
{
	int a[100], n, i, b[100], k;
	printf("ENTER n\n");
	scanf("%d", &n);
	printf("ENTER n elements\n");
	for (i=0;i<n;i++)
		scanf("%d", &a[i]);
	k = unique(a, n, b);
	for (i=0; i<k; i++)
		printf("%d", b[i]);
}

	