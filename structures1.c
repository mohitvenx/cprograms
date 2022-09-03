#include<stdio.h>
#include<stdlib.h>
struct sample1
{
	int a;
	int b;
};
struct sample2
{
	int c;
	struct sample1 s1;
};
int main()
{
	struct sample2 s2={34, {3,4}};
	
	printf("%d %d %d", s2.c, s2.s1.a, s2.s1.b);
}