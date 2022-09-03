//To SWAP 2 NUMBERS
#include<stdio.h>
void swap(int *a, int *b);
int main()
{
	int a=10;
	int b=20;
	printf("BEFORE a=%d b=%d\n",a,b);
	//swap(a,b);
	swap(&a,&b);
	printf("AFTER a=%d b=%d", a,b);
}
void swap(int* a, int* b)     // '*' is a pointer 
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}