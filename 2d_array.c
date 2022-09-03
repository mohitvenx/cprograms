#include<stdio.h>
int main()
{
	int a[3][4] = {
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12},
			};
	//int *p = a; //This results in a warning  CASE 1
	int (*p)[4] = a;
	//printf("%d", p[4]); //this gives output 5 - CASE 1
	printf("%d", p[1][0]);
}