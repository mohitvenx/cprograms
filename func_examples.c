#include<stdio.h>
int f1(int);
void f2(int*);
void f3(int);
void f4(int*);
int* f5(int* );
int* f6();
int main()
{ 
	int x = 100;
	f1(x);
	printf("x is %d\n", x); // 100
	double y = 6.5;
	f1(y);
// observe what happens when double value is passed as
//argument to integer parameter?
	printf("y is %lf\n", y);  // 6.500000
	int *p = &x; // pointer variable
	f2(p);
	printf("x is %d and *p is %d\n", x, *p); // 100 and 100
	f3(*p);
	printf("x is %d and *p is %d\n", x, *p);
	f4(p);
	printf("x is %d and *p is %d\n", x, *p, p);
	int z= 10;
	p = f5(&z);
	printf("z is %d and %d\n", *p, z); // 10 10
	p = f6();
	printf("*p is %d \n", *p);
}
int f1(int x)
{
	x = 20;	
}
void f2(int* q)
{
	int temp = 200;
	q = &temp;
}
void f3(int t)
{
	t = 200;
}
void f4(int* q)
{
	int temp = 200;
	*q = temp;
}
int* f5(int* x)
{
	return x;
}
int* f6()
{
	int a = 22; // We should never return a pointer to a local variable
	return &a;
}