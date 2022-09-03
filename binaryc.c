//TO FIND POSITION OF A NUMBER USING BINARY SEARCH
//THIS IS CLIENT FILE 
#include<stdio.h>
#include"binaryh.h"
int main()
{
	int a[]={11,13,18,19,22,33,44,53,56,101};
	printf("enter the element to be searched\n");
	int n=sizeof(a)/sizeof(*a);
	int key;
	scanf("%d",&key);
	int pos=my_search(a,0,n-1,key,is_even);
	if(pos!=-1)
		printf("it is even and found at %d postion\n",pos);
	else
		printf("not found\n");
	pos=my_search(a,0,n-1,key,is_less_than_22);
	if(pos!=-1)
		printf("it is less than 22 and found at %d postion\n",pos);
	else
		printf("not found\n");
return 0;
}