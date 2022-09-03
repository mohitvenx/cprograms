#include"uniqueh.h"
int unique(int a[], int n, int b[])
{
	int i, j, k=0;
	for( i=0; i<n ; i++)
	{
		x = a[i];
		for (j=i; j<n; j++)
		{
			if (a[j] == x)
				break;
	
			b[k] = x;
			k++;
		}
	}
}