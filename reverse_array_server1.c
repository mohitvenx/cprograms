// THIS IS TO REVERSE THE GIVEN ARRAY USING POINTER INSTEAD OF INDEX
//THIS IS SERVER FILE
//WILL BE INCLUDED IN CLIENT FILE
#include<stdio.h>
#include"revh.h"
void reverse_arr(int *a, int start, int end)
{
	int temp;
	while(start<end)
	{
		temp= *(a+start);
		*(a+start)= *(a+end);
		*(a+end)=temp;
		++start;
		--end;
	}
}