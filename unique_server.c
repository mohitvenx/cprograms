//TO FIND UNIQUE ELEMENT FROM GIVEN ARRAY
//THIS IS SERVER FILE 
#include "uniqueh.h"
int unique(int z[],int u,int v)
{
	int i;
	for(i=0;i<u;i++)
		if (z[i]==v) return (1);
	return (0);
}


