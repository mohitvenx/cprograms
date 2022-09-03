//THIS IS CLIENT FILE 
#include<stdio.h>
#define max 100
#include"uniqueh.h"
void main()
{
	int p[max],q[max];
	int m;
	int i,k;
	k=0;
	printf("enter length of the array:");
	scanf("%d",&m);
	printf("enter %d elements of the array\n",m);
	for (i=0;i<m;i++)
		scanf("%d",&p[i]);
	q[0]=p[0];
	k=1;
	for (i=1;i<m;i++)
	{
		if(! unique(q,k,p[i]))
		{
			q[k]=p[i];
			k++;
		}
	}
	printf("\n the unique elements in the array are : \n");
	for (i=0;i<k;i++)
		printf("%d\n",q[i]);
}
	