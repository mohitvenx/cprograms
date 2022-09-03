//functions 

/*
#include<stdio.h>
void fun1(int *a1); 
int main()
{
	int a1 = 100;
	printf("before function call a1 is %d\n", a1); // 100 fun1(&a1); // call
	printf("after function call a1 is %d\n", a1); // 100
}
void fun1(int *a1)
{ 
	int b = 200;
	printf("*a1 in fun1 before changing %d\n", *a1); //100 a1 = &b;
	printf("a1 in fun1 after changing %d\n", a1); //200
}
*/


#include<stdio.h>
int* f5(int* ); 
int main()
{
	int x=100;
	int *p = &x;
	int z= 10;
	p = *f5(&z);
	printf("z is %d and %d\n", *p, z);
}