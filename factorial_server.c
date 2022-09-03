//FACTORIAL OF A NUMBER 
//THIS IS SERVER FILE 
//IT WILL BE INCLUDED IN CLIENT FILE 
#include<stdio.h>
#include"facth.h"
int factorial( int n)
{
	if (n==0)
		return 1;
	else
		return (n*factorial(n-1));
}