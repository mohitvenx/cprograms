/*
//THIS IS TO READ AND WRITE THE ARRAY
#include<stdio.h>
void read(int a[10][10], int m, int n);
void write(int a[10][10], int m, int n);
int main()
{
	int a[10][10] , m, n, i, j;
	printf("Enter no of rows\n");
	scanf("%d", &m);
	printf("Enter no of columns\n");
	scanf("%d", &n);
	printf("Read elemnts in array\n");
	read(a,m,n);
	printf("Display elemnts in array\n");
	write(a,m,n);
}

void read(int a[10][10], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}

void write(int a[10][10], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
	printf("\n");
	}
}
*/


//THIS IS TO READ AND WRITE THE ARRAY USING POINTERS
#include<stdio.h>
void read(int m, int n,int (*a)[n]);
void write(int m, int n,int (*a)[n]);
int main()
{
	int a[10][10] , m, n, i, j;
	printf("Enter no of rows\n");
	scanf("%d", &m);
	printf("Enter no of columns\n");
	scanf("%d", &n);
	printf("Read elemnts in array\n");
	read(m,n,a);
	printf("Display elemnts in array\n");
	write(m,n,a);
}

void read(int m, int n,int (*a)[n])
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}

void write(int m, int n,int (*a)[n])
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
	printf("\n");
	}
}
