#include<stdio.h>
#include<stdlib.h>
void write(int a[], int n);
void read(int a[], int n);
int main()
{
/*	int n, arr[10];
	n=10;
	//printf("Enter the number of elements:\n");
	//scanf("%d", &n);
	printf("Enter the elements \n");
	read(arr,n);
	printf("Elements entered are:\n");
	write(arr,n);
}
void read( int a[], int n)
{
	int i;
	for (i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
		
	}
}
void write(int a[], int n)
{
	int i;
	for (i=0; i<10; i++)
	{
		printf("%d	", a[i]);
	}
}
*/
/*
	char a4[10 ] = {'a','t','m','a'} ;// Partial Initialization
	printf("sizeof a4 is %d, a4 is %s",sizeof(a4), a4[10]);
*/
/*
	char a[100]="abcd";
	char b[100]="pqr";
	char c[100]="whatsapp";
	strcat(a,b);// Make sure a is big enough to hold a and b both.	
	printf("a is %s and b is %s\n",a,b);
	printf("length of a is %d and length of b is %d\n",strlen(a),strlen(b));
	// make sure size of a is big enough to hold b as well
	strncat(a,c,2);
	printf("a is %s and size is %d\n",a,strlen(a));
*/
/*
	char ch[] = "This is a test";
	printf("present at %p\n",strchr (ch, 't'));
*/
/*	int* p = (int*)malloc(sizeof(int)); //dynamic allocation for one integer
				      //address of that location is returned in p
	*p = 10;
	printf("p = %d\n", *p);
	printf("p = %p\n", *p);
*/
	int* x;
	int n, i;
	printf("\n\nEnter number of elements:\n");
	scanf("%d", &n);
	x = (int*)malloc(n * sizeof(int)); //memory will be allocated for 5 integers
	printf("%d\t %p", x, *x);
}