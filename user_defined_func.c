//function defination
//return_type function_name(parameters)
/*
1) function with return type and no parameters
2)function with return type and parameters
3)function without return type and no parameters
4)function without return type and no parameters
*/
//1) example
#include<stdio.h>
int add()
{
	int a=10,b=20;
	return a+b;
}
int main()
{
	int c=add();
	printf("%d",c);
}