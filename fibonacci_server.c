//TO PRINT FIBONACCI SERIES
//THIS IS SERVER FILE
//THIS WILL BE INCLUDED IN CLIENT FILE
#include "fibonaccih.h"
int  fib(int n)
{
	if (n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return (fib(n-1)+fib(n-2));


}
