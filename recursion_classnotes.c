//Recursion: A func calling itself
/*
#include<stdio,h>
int main()
{
	printf("HELLO WORLD!!!\t");
	main();   //prints hello world infinite times 
}
*/
/*
//factorial 
#include<stdio.h>
int fact(int n);
int main()
{
	int n=5;
	printf("fact of %d=%d\n",n,fact(5));
}
int fact(int n)
{
	int fact=1;
	int i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
return fact;
}
*/
// FACTORIAL USING RECURSION
#include<stdio.h>
int fact(int n);
int main()
{
	int n=5;
	printf("fact of %d=%d\n",n,fact(5));
}
int fact(int n)
{
	if (n==0)
	{	
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}