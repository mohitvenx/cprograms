//TO FIND VALUE OF NUMBER RAISED BY A NUMBER USING MULTIPLE FILES
// THIS IS SERVER FILE 
//THIS IS INCLIUDED IN CLIENT FILE
#include"powh.h"
int power(int a, int b)
{
	int res=1;
	if (b == 0)
		return res;
	else 
		return a*(power(a, (b-1)));
}