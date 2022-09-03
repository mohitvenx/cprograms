//THIS IS CLIENT FILE
#include<stdio.h>
#include"powh.h"
int main()
{
	int a, b, res;
	printf("ENTER a and b\n");
	scanf("%d %d", &a, &b);
	res = power(a,b);
	printf("RESULT IS %d", res);
}
