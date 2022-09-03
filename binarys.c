//THIS IS SERVER FILE 
#include<stdio.h>
#include"binaryh.h"
int is_even(int x)
{
	return x%2==0;
}
int is_less_than_22(int x)
{
	return x<22;
}
int my_search(int a[],int low,int high,int key,int(*p)(int))
{
	int pos=-1;
	int mid;
	if(low>high)
		return pos;
	else
	{
		mid=(low+high)/2;
		if(a[mid]==key && p(key))
		{
			pos=mid;
		}
		else if(a[mid]>key)
		{
			return my_search(a,low,mid-1,key,p);
		}
		else
		{
			return my_search(a,mid+1,high,key,p);
		}
	}
	return pos;
}
