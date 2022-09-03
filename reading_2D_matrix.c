//To check if the matrix is symmetric using 2D arrays
#include<stdio.h>
int main()
{
	int m, n;
	int row, col, isSymmetric;
	printf("Enter the number of rows in matrix: \n");
	scanf("%d", &m);
	printf("Enter the number of columns in matrix: \n");
	scanf("%d", &n);
	int A[m][n];
	int B[m][n];
	printf("Enter the elements in matrix of size m x n: \n");
	for (row=0; row<m; row++)
	{
		for (col=0; col<m; col++)
		{
			scanf("%d", &A[row][col]);
		}
	}
	for (row=0; row<m; row++)
	{
		for (col=0; col<m; col++)
		{
			B[row][col] = A[col][row];
		}
	}
	isSymmetric =1;
	for (row=0; row<n && isSymmetric; row++)
	{
		for (col=0; col<n; col++)
		{
			if ( A[row][col] != B[row][col])
			{
				isSymmetric = 0;
				break;
			}
		}
	}
	if (isSymmetric == 1)
	{
		printf("\n The given matrix is a symmetric matrix \n");
		for(row=0;row<m && isSymmetric;row++)
  		{
   			for(col=0;col<n;col ++)
   			{
    				printf("%d\t",A[row][col]);
   			}
   			printf("\n");
  		}
 	}
 	else
 	{
  		printf("\n the given matrix is not a symmetric matrix \n");
 	}
 	return 0;
}