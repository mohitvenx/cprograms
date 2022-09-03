
#include<stdio.h>
void read(int m, int n,int a[][n]);
void write(int m, int n,int a[][n]);
int main()
{
	int a[100][100];
	int  m, n, i, j;
	printf("Enter the number of rows:\n");
	scanf("%d", &m);
	printf("Enter the number of columns:\n");
	scanf("%d", &n);
	printf("Enter elements to read\n", m*n);
	read(m,n,a);
	printf("elements to display\n", m*n);
	write(m,n,a);
}

void read(int m, int n,int a[][n])
{
	int i,j;
	for (i=0; i<m; i++)
	{
		for (j=0; i<n; j++)	
		{
			printf("enter the elements\n");
			scanf("%d", &a[i][j]);
 		}
	}
}

void write(int m, int n,int a[][n])
{
		int i,j;
	for (i=0; i<m; i++)
	{
		for (j=0; i<n; j++)	
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

}

/*

#include<stdio.h>
int main()
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int (*p)[3] = a;
	int*/