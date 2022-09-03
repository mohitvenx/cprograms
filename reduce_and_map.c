#include<stdio.h>
void mymap(int a[],int b[],int n,int (*p)(int));
void disp(const int a[],int n);
int myfilter(const int a[],int b[],int n,int *m,int (*)(int));
int is_greater_than_22(int x);
int myreduce(int a[],int n,int (*)(int,int));


int incr(int x)
{
	return x+1;
}
int is_even(int x)
{
	return x%2 == 0;
}
int add(int x,int y)
{
	return x+y;
}

int main()
{
	int a[] = {11,22,33,44,55};
	int n = sizeof(a)/sizeof(*a);
	printf("n is --------------- %d\n", n);
	int b[n];
	printf("a is --------\t");
	disp(a,n);
	mymap(a,b,n,incr);
	printf("\nafter increment b is ------- \t");
	disp(b,n);
	int t;
	int c = myfilter(a,b,n,&t,is_even); // write appropriate implementation in fun.c for myfilter function returning integer
	printf("\nafter is even b is ------- \n");
	disp(b,c);
	int m;
	myfilter(a,b,n,&m,is_even); // this myfilter function doesn’treturn any value
	printf("\nb is ------- \n");
	disp(b,m);
	myfilter(a,b,n,&m,is_greater_than_22);
	printf("\ngreater than 22 b is ------- \n");
	disp(b,m);
	int result = myreduce(a,n,add);
	printf("\nResult is %d\n",result);
	return 0;
}

void mymap(int a[],int b[],int n,int (*p)(int))
{
	for(int i = 0;i<n;i++)
	{ 
		b[i] = (*p)(a[i]); 
	}
}

void disp(const int a[],int n)
{
	for(int i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

int myfilter(const int a[],int b[],int n,int *m, int (*p)(int))
{
	int count = 0;
	for(int i = 0;i<n;i++)
	{
		if(p(a[i]))
		{
			b[count] = a[i];
			count++;
		}
	}
	*m = count;
	return count;
}

int is_greater_than_22(int x)
{ 
	return x > 22; 
}
int myreduce(int a[],int n,int (*op)(int,int))
{
	int res = 0;
	for(int i = 0;i<n;i++)
	{
		res = op(res,a[i]);
	}
	return res;
}