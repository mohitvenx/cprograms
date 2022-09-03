//TO REVERSE ORDER OF ARRAY ELEMENTS USING MULTIPLE FILES
//THIS IS THE SERVER FILE 
//Will BE USED IN THE CLIENT FILE 
#include<stdio.h>
#include"revh.h"
void reverse_arr(int a[], int start, int end)
{
	int temp;
	while(start<end)
	{
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		++start;
		--end;
	}
}