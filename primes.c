//FOR A GIVEN NUMBER FIND THE NEXT PRIME NUMBER 
//THIS IS SERVER FILE
//IT WILL BE INCLUDED IN CLIENT FILE "primec.c"
#include"primeh.h"
int isprime(int n)
{
	int i;
	for(i=2; i<=n%2; i++)
	{
		if (n%i==0)
			return 0;
		else
			return 1;
	}
}


int nextprime(int n)
{
	int i = n+1;
	while (1)
	{
		if (isprime(i))
			break;
		i++;
	}
	return i;
}
