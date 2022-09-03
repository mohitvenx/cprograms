
//Write a program to generate pascal triangle using 2D arrays
#include<stdio.h>
void pascal_tri(int n; int a[][n], int n);
void disp_tri(int n; int a[][n], int n);
int  main()
{
	int a[50][50];
	int n;
	printf("Enter the the number of rows of pascal triangle:\n");
	scanf("%d", &n);
	pascal_tri(a,n);
	return 0;
}


void pascal_tri(int n; int a[][n], int n)
{
	int i,j;
	for (i=1; i<n; ++i)
	{
		for (j=1; j<=i; ++j)
		{
			if (j==1 || j==i)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i-1][j] + a[i-1][j-1];
			}
		}
	}
	disp_tri(a,n);
}

void disp_tri(int n; int a[][n], int n)
{
	int i,j,k;
	for (i=1; i<n; ++i)
	{
		for (k=1; k<=n-1; ++k)
		{
			printf(" ");
		}
		for (j=1; j<=i; ++j)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

