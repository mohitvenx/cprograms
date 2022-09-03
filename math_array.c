#include<stdio.h>
void read(int (*a1)[],int,int); 
void display( int (*a1)[],int,int);
void multiply(int n1; int n2; int (*a)[n1],int (*b)[n2],int m1,int n1,int n2,int (*c)[n2]);
void subtract(int n; int (*a)[n],int (*b)[n],int m, int n, int (*c)[n]);
void add(int n; int (*a)[n],int (*b)[n],int m, int n, int (*c)[n]);
int main()
{
	int a[100][100];
	int b[100][100];
	int c[100][100];
	int m1,n1;
	int m2,n2;
	printf("enter the order of a\n");
	scanf("%d%d",&m1,&n1);
	printf("enter the elements of a\n");
	read(a,m1,n1);
	printf("enter the order of b\n");
	scanf("%d%d",&m2,&n2);
	printf("enter the elements of b\n");
	read(b,m2,n2);
	if (m1 == m2 && n1 == n2)
	{
		printf("elements of A are\n");
		display(a,m1,n1);
		printf("elements of B are\n");
		display(b,m2,n2);
		printf("Addition of two matrices\n");
		add(a,b,m1,n1,c);
		display(c,m2,n2);
		printf("Subtraction of two matrices\n");
		subtract(a,b,m1,n1,c);
		display(c,m2,n2);
	}
	else
	{
	printf("Two matrices are not compatible for additiona nd subtraction\n");
	}
	if (n1==m2)
	{
	printf("Multiplication of two matrices\n");
	multiply(a,b,m1,n1,n2,c);
	display(c,m1,n2);
	}
	else
	{
	printf("Two matrices are not compatible for multiplication too\n");
	}
	return 0;
}

void add(int n; int (*a)[n],int (*b)[n],int m, int n, int (*c)[n])
{
	for(int i = 0;i<m;i++)
	{
		for(int j= 0;j<n;j++)
		{
			c[i][j] = a[i][j]+b[i][j];
		}
	}
}

void subtract(int n; int (*a)[n],int (*b)[n],int m, int n, int (*c)[n])
{
	for(int i = 0;i<m;i++)
	{
		for(int j= 0;j<n;j++)
		{
		c[i][j] = a[i][j] - b[i][j];
		}
	}
}

void multiply(int n1; int n2; int (*a)[n1],int (*b)[n2],int m1,int n1,int n2,int (*c)[n2])
{
	for(int i = 0;i<m1;i++)
	{
		for(int j= 0;j<n2;j++)
		{
			c[i][j] = 0;
		}
	}
	for(int i=0;i<m1;i++)
	{
	for(int j=0;j<n2;j++)
	{
		int sum=0;	
		for(int k=0;k<n1;k++)
		{
	sum=sum+a[i][k]*b[k][j];
	}
	c[i][j]=sum;
		}
	}
}

void display( int (*a1)[],int m,int n)
{
	printf("%d", *a1[100][100]);
}
